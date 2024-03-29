﻿/*
    Unity Native Imgui Renderer
    Version: 1.0.1-alpha
    Author: M0N7Y5
*/

#include "imgui_impl_unity.h"
#include "../../SDK/il2cpp_api.h"
#include "../../SDK/structs.h"
#include "../../SDK/mem.h"
#include "../../SDK/globals.h"
#include "../../mrt/xorstr.hpp"
#include "../../mrt/scanner.h"
#include "../GUI.h"
#include <stdint.h>
#include <vcruntime_string.h>

static CMaterial* _material = nullptr;
static CMesh*     _mesh     = nullptr;
static CShader*   _shader   = nullptr;

static uint32_t                _textureID          = 0;
static CMaterialPropertyBlock* _materialProperties = nullptr;
static int                     _prevSubMeshCount   = 1;

static std::vector<CVertexAttributeDescriptor> _vertexAttributes{};

// C++ is full of shit like this, why do scoped enums even exist if i need to cast it every ducking
// time into integer???
static constexpr MeshUpdateFlags NoMeshChecks =
    (MeshUpdateFlags)((int32_t)MeshUpdateFlags::DontNotifyMeshUsers | (int32_t)MeshUpdateFlags::DontRecalculateBounds |
                      (int32_t)MeshUpdateFlags::DontResetBoneBounds | (int32_t)MeshUpdateFlags::DontValidateIndices);
/*

private readonly int _textureID;
private readonly TextureManager _textureManager;
private readonly MaterialPropertyBlock _materialProperties;

private int _prevSubMeshCount = 1;  // number of sub meshes used previously

*/

CCommandBuffer* _commandBuffer;

static CTexture2D* _atlasTexture = nullptr;

static CCamera*        _cameraUI      = nullptr;
static CRenderTexture* _renderTexture = nullptr;
static CRectTransform* _rectTransform = nullptr;

static CAssetBundle* _bundle = nullptr;

static CRect prevRect = {};

static ImVec2 ScreenToImgui(Vector2 point)
{
    return {point.x, ImGui::GetIO().DisplaySize.y - point.y};
}

// static Vector2 ScreenToImgui(ImVec2 point)
//{
//     return {point.x, ImGui::GetIO().DisplaySize.y - point.y};
// }

void FixPostprocessingUnityBug()
{
    auto postProcessLayer_type = CType::FromClass(_("PostProcessLayer"), _("UnityEngine.Rendering.PostProcessing"));

    auto layers = CGameObject::FindObjectsByType<CPostProcessLayer*>(
        postProcessLayer_type, FindObjectsInactive::Include, FindObjectsSortMode::None);

    for (size_t i = 0; i < layers->max_length; i++)
    {
        auto layer = layers->data[i];

        layer->finalBlitToCameraTarget = false;
    }
}

// Get all Root canvases in the game and set the to render to canvas camera
// void SetAllRootCanvasesToCameras()
// {
//     auto canvasType = CType::FromClass(_("Canvas"), _("UnityEngine"));

//     auto allCanvases =
//         CGameObject::FindObjectsByType<CCanvas*>(canvasType, FindObjectsInactive::Include,
//         FindObjectsSortMode::None);

//     for (size_t i = 0; i < allCanvases->max_length; i++)
//     {
//         auto canvas = allCanvases->data[i];

//         if (canvas->IsRootCanvas())
//         {
//             canvas->SetRenderMode(RenderMode::ScreenSpaceCamera);

//             canvas->SetWorldCamera(_cameraCanvas);
//         }
//     }
// }

void InitializeRenderResources()
{
    auto type_o = CType::FromClass(_("Shader"), _("UnityEngine"));

    _shader = _bundle->LoadAsset<CShader>(_("Assets/AssetBundleData/guish.shader"),
                                          type_o); // LoadAsset(_("DearImGui-Mesh"), shaderType);

    static uintptr_t shaderGCHandle = 0;
    _shader                         = (CShader*)CUnsafeUtility::PinGCObjectAndGetAddress(_shader, &shaderGCHandle);

    _material = CMaterial::New();
    _material->ctor(_shader);

    _material = CGameObject::Instantiate<CMaterial>(_material);

    static uintptr_t materialGCHandle = 0;
    _material = (CMaterial*)CUnsafeUtility::PinGCObjectAndGetAddress(_material, &materialGCHandle);

    //!! _material->setHideFlags(HideFlags::HideAndDontSave & ~HideFlags::DontUnloadUnusedAsset);
    _mesh = CMesh::New();
    _mesh->ctor();

    _mesh = CGameObject::Instantiate<CMesh>(_mesh);

    static uintptr_t meshGCHandle = 0;
    _mesh                         = (CMesh*)CUnsafeUtility::PinGCObjectAndGetAddress(_mesh, &meshGCHandle);

    _mesh->MarkDynamic();

    TextureManager::Initialize(ImGui::GetIO());
}

void AdjustRenderSize(float width, float height)
{
    _renderTexture->Release();
    _renderTexture->SetWidth((int)width);
    _renderTexture->SetHeight((int)height);
    _renderTexture->Create();

    _rectTransform->SetSizeDelta({width, height});
}

bool ImGui_Impl_Unity_Init(CCamera* mainCam)
{
    // setup camera and shit

    ImGui::CreateContext();

    auto& io = ImGui::GetIO();

    io.BackendRendererName = "UI";
    io.BackendFlags |= ImGuiBackendFlags_RendererHasVtxOffset;

    // imgui setup
    io.BackendFlags |= ImGuiBackendFlags_HasMouseCursors; // We can honor GetMouseCursor() values (optional)
    io.BackendFlags |= ImGuiBackendFlags_HasSetMousePos;  // We can honor io.WantSetMousePos requests
                                                          // (optional, rarely used)
    io.ClipboardUserData = nullptr;

    // Position

    CVertexAttributeDescriptor attr = {{
        ._attribute_k__BackingField = (int32_t)VertexAttribute::Position,
        ._format_k__BackingField    = (int32_t)VertexAttributeFormat::Float32,
        ._dimension_k__BackingField = 2,
        ._stream_k__BackingField    = 0,
    }};

    _vertexAttributes.emplace_back(attr);

    // UV

    attr._attribute_k__BackingField = (int32_t)VertexAttribute::TexCoord0;
    attr._format_k__BackingField    = (int32_t)VertexAttributeFormat::Float32;
    attr._dimension_k__BackingField = 2;
    attr._stream_k__BackingField    = 0;

    _vertexAttributes.emplace_back(attr);

    // Color

    attr._attribute_k__BackingField = (int32_t)VertexAttribute::TexCoord1;
    attr._format_k__BackingField    = (int32_t)VertexAttributeFormat::UInt32;
    attr._dimension_k__BackingField = 1;
    attr._stream_k__BackingField    = 0;

    _vertexAttributes.emplace_back(attr);

    _textureID = CShader::PropertyToID(_("_Texture"));

    _materialProperties = CMaterialPropertyBlock::New();
    _materialProperties->ctor();

    static uintptr_t materialPropertiesGCHandle = 0;
    _materialProperties                         = (CMaterialPropertyBlock*)CUnsafeUtility::PinGCObjectAndGetAddress(
        _materialProperties, &materialPropertiesGCHandle);

    // manual Command buffer setup

    _commandBuffer = CCommandBuffer::New();
    _commandBuffer->ctor();

    static uintptr_t commandBufferGCHandle = 0;
    _commandBuffer = (CCommandBuffer*)CUnsafeUtility::PinGCObjectAndGetAddress(_commandBuffer, &commandBufferGCHandle);

    _commandBuffer->setName(_("System.GUI"));

    GUI::Init();

    // TextureManager::BuildFontAtlas(io);

    // Assets/AssetBundleData/UIOBJ.prefab
    //  - UICamera - for imgui
    //  - CanvasCamera - for canvases
    //

#if 0

    // auto data = CArray<uint8_t>::New(_("Byte[]"), G::shaders.size() + 1, _("System"));

    auto typeInfoAddr =
        Forza::IDAScan((void*)G::baseGameAssemlby,
                       _("48 8B 0D ?? ?? ?? ?? BA 00 40 00 00 E8 ?? ?? ?? ?? 48 8B 0D ?? ?? ?? ?? 48 8B D0"));
    auto byteTypeInfo = *(Il2CppClass**)mem::ResolveMov(typeInfoAddr);

    auto data2 = CArray<uint8_t>::New(byteTypeInfo, G::shaders.size());

    // CObject::DontDestroyOnLoad(data);
    //  static uintptr_t dataGCHandle = 0;
    //  data = (CArray<uint8_t>*)CUnsafeUtility::PinGCObjectAndGetAddress(data, &dataGCHandle);

    memcpy(data2->data, G::shaders.data(), G::shaders.size());

    _bundle = CAssetBundle::LoadFileFromMemory(data2, 0);

    static uintptr_t bundleGCHandle = 0;
    _bundle                         = (CAssetBundle*)CUnsafeUtility::PinGCObjectAndGetAddress(_bundle, &bundleGCHandle);

    CObject::DontDestroyOnLoad(_bundle);

#else
    //_bundle = CAssetBundle::LoadFileFromFile("C:\\uishaders");
    _bundle = CAssetBundle::LoadFileFromFile("D:\\fonts\\uishaders");
#endif

    InitializeRenderResources();

    prevRect = mainCam->GetPixelRect();

    auto gameobject_type    = CType::FromClass(_("GameObject"), _("UnityEngine"));
    auto renderTexture_type = CType::FromClass(_("RenderTexture"), _("UnityEngine"));

    auto gmo = _bundle->LoadAsset<CGameObject>(_("Assets/AssetBundleData/SystemUI.prefab"), gameobject_type);
    _renderTexture =
        _bundle->LoadAsset<CRenderTexture>(_("Assets/AssetBundleData/RenderTexture.renderTexture"), renderTexture_type);

    auto instance = CGameObject::Instantiate<CGameObject>(gmo);

    CObject::DontDestroyOnLoad(instance);

    auto rawImage = CGameObject::Find<CGameObject>(_("RawImageUI"));
    auto rectType = CType::FromClass(_("RectTransform"), _("UnityEngine"));

    _rectTransform = rawImage->GetComponent<CRectTransform>(rectType);

    auto uiCamObj   = CGameObject::Find<CGameObject>(_("CameraUI"));
    auto cameraType = CType::FromClass(_("Camera"), _("UnityEngine"));

    _cameraUI = uiCamObj->GetComponent<CCamera>(cameraType);

    _cameraUI->AddCommandBuffer(CameraEvent::AfterEverything, _commandBuffer);

    AdjustRenderSize(prevRect.m_Width, prevRect.m_Height);

    // SetAllRootCanvasesToCameras();

    return true;
}

static void UpdateMesh(ImDrawData* draw_data)
{
    int subMeshCount = 0;

    for (int n = 0, nMax = draw_data->CmdListsCount; n < nMax; ++n)
    {
        subMeshCount += draw_data->CmdLists[n]->CmdBuffer.Size;
    }

    if (_prevSubMeshCount != subMeshCount)
    {
        // Occasionally crashes when changing subMeshCount without clearing first.
        _mesh->Clear(true);
        _mesh->SetSubmeshCount(_prevSubMeshCount = subMeshCount);
    }

    _mesh->SetVertexBufferParams(draw_data->TotalVtxCount, _vertexAttributes);
    _mesh->SetIndexBufferParams(draw_data->TotalIdxCount, IndexFormat::UInt16);

    //  Upload data into mesh.
    int vtxOf = 0;
    int idxOf = 0;

    std::vector<CSubMeshDescriptor> descriptors{};

    for (int n = 0, nMax = draw_data->CmdListsCount; n < nMax; ++n)
    {
        auto drawList = draw_data->CmdLists[n];

        _mesh->SetVertexBufferData(0, drawList->VtxBuffer.Data, 0, vtxOf, drawList->VtxBuffer.Size, sizeof(ImDrawVert),
                                   NoMeshChecks);
        _mesh->SetIndexBufferData(drawList->IdxBuffer.Data, 0, idxOf, drawList->IdxBuffer.Size, sizeof(ImDrawIdx),
                                  NoMeshChecks);

        // Define subMeshes.
        for (int i = 0, iMax = drawList->CmdBuffer.Size; i < iMax; ++i)
        {
            auto cmd = drawList->CmdBuffer[i];

            CSubMeshDescriptor descriptor{
                .topology   = MeshTopology::Triangles,
                .indexStart = idxOf + (int)cmd.IdxOffset,
                .indexCount = (int)cmd.ElemCount,
                .baseVertex = vtxOf + (int)cmd.VtxOffset,
            };

            descriptors.emplace_back(descriptor);
        }

        vtxOf += drawList->VtxBuffer.Size;
        idxOf += drawList->IdxBuffer.Size;
    }

    _mesh->SetSubMeshes(descriptors.data(), descriptors.size(), NoMeshChecks);
    _mesh->UploadMeshData(false);
}

static void CreateDrawCommands(CCommandBuffer* commandBuffer, ImDrawData* draw_data, Vector2 fbSize)
{
    Vector4 clipOffset =
        Vector4(draw_data->DisplayPos.x, draw_data->DisplayPos.y, draw_data->DisplayPos.x, draw_data->DisplayPos.y);

    Vector4 clipScale = Vector4(draw_data->FramebufferScale.x, draw_data->FramebufferScale.y,
                                draw_data->FramebufferScale.x, draw_data->FramebufferScale.y);

    auto rect = CRect{0.f, 0.f, fbSize.x, fbSize.y};
    commandBuffer->SetViewport(&rect);

    auto mTran  = Matrix4x4::Translate(Vector3(0.5f / fbSize.x, 0.5f / fbSize.y, 0.f));
    auto mOrtho = Matrix4x4::Ortho(0.f, fbSize.x, fbSize.y, 0.f, 0.f, 1.f);
    // Small adjustment to improve text.
    commandBuffer->SetViewProjectionMatrices(&mTran, &mOrtho);

    int subOf = 0;
    for (int n = 0, nMax = draw_data->CmdListsCount; n < nMax; ++n)
    {
        auto drawList = draw_data->CmdLists[n];

        for (int i = 0, iMax = drawList->CmdBuffer.Size; i < iMax; ++i, ++subOf)
        {
            auto drawCmd = drawList->CmdBuffer[i];

            // Project scissor rectangle into framebuffer space and skip if fully outside.

            Vector4 clipSize =
                Vector4{drawCmd.ClipRect.x, drawCmd.ClipRect.y, drawCmd.ClipRect.z, drawCmd.ClipRect.w} - clipOffset;
            Vector4 clip = Vector4::Scale(clipSize, clipScale);

            if (clip.x >= fbSize.x || clip.y >= fbSize.y || clip.z < 0.f || clip.w < 0.f)
                continue;

            // set shader property for texture
            _materialProperties->SetTexture(_textureID, (CTexture*)drawCmd.TextureId);

            auto clipRect = CRect{{clip.x, fbSize.y - clip.w, clip.z - clip.x, clip.w - clip.y}};
            commandBuffer->EnableScissorRect(&clipRect); // Invert y.
            commandBuffer->DrawMesh(_mesh, (Matrix4x4*)&identityMatrix, _material, subOf, -1, _materialProperties);
        }
    }
    commandBuffer->DisableScissorRect();
}

// input update and shit
void ImGui_Impl_Unity_NewFrame(ImGuiIO& io)
{
    // prepare frame

    io.DeltaTime = CTime::GetUnscaledDeltaTime();

    auto rect      = _cameraUI->GetPixelRect();
    io.DisplaySize = ImVec2{rect.m_Width, rect.m_Height};

    auto mousePos = CInput::GetMousePosition();

    io.MousePos = ScreenToImgui({mousePos.x, mousePos.y});

    auto mouseWheel = CInput::GetMouseScrollDelta();

    io.AddMouseWheelEvent(0.f, mouseWheel.y);

    io.MouseDown[0] = CInput::GetMouseButton(0);
    io.MouseDown[1] = CInput::GetMouseButton(1);
    io.MouseDown[2] = CInput::GetMouseButton(2);
}

void ImGui_Impl_Unity_RenderDrawData(ImDrawData* draw_data, CCamera* mainCam)
{
    _commandBuffer->Clear();

    if (_mesh->m_CachedPtr == 0)
    {
        // cigan ukradl renderer
        // delay nez se znova nahodi kvuli bramboram
        static float timer = 0.f;

        if (timer > 3.f)
        {
            InitializeRenderResources();
            // SetAllRootCanvasesToCameras();
            // FixPostprocessingUnityBug();

            timer = 0.f;
        }
        else
        {
            timer += CTime::GetDeltaTime();
        }

        return;
    }

    auto rect = mainCam->GetPixelRect();

    if (rect.m_Width != prevRect.m_Width || rect.m_Height != prevRect.m_Height)
    {
        AdjustRenderSize(rect.m_Width, rect.m_Height);

        prevRect = rect;
    }

    auto    scall = (draw_data->DisplaySize * draw_data->FramebufferScale);
    Vector2 fbOSize(scall.x, scall.y);

    // Avoid rendering when minimized.
    if (fbOSize.x <= 0.f || fbOSize.y <= 0.f || draw_data->TotalVtxCount == 0)
        return;

    UpdateMesh(draw_data);

    CreateDrawCommands(_commandBuffer, draw_data, fbOSize);
}

void TextureManager::Initialize(ImGuiIO const& io)
{
    auto atlasPtr = io.Fonts;

    unsigned char* out_pixels;
    int            out_width;
    int            out_height;
    int            out_bytes_per_pixel;

    atlasPtr->GetTexDataAsRGBA32(&out_pixels, &out_width, &out_height, &out_bytes_per_pixel);

    WeakArray<uint8_t> srcData = {};
    srcData.lenght             = uint64_t(out_width * out_height * out_bytes_per_pixel);
    srcData.ptr                = (uintptr_t)out_pixels;

    auto textureKlass = il2cpp::InitClass(_("Texture2D"), _("UnityEngine"));
    _atlasTexture     = (CTexture2D*)il2cpp_object_new(textureKlass);
    _atlasTexture->ctor(out_width, out_height, TextureFormat::RGBA32, false, false);

    static uintptr_t texGCHandle = 0;
    _atlasTexture                = (CTexture2D*)CUnsafeUtility::PinGCObjectAndGetAddress(_atlasTexture, &texGCHandle);

    _atlasTexture->As<CTexture>()->set_filterMode(FilterMode::Point);

    auto dstData = _atlasTexture->GetRawTextureData_byte();

    int stride = out_width * out_bytes_per_pixel;
    // flip y
    for (size_t y = 0; y < out_height; y++)
    {
        auto  srcIndex = y * stride;
        void* src      = (void*)(srcData.ptr + srcIndex);

        auto  dstIndex = (out_height - y - 1) * stride;
        void* dst      = (void*)(dstData.ptr + dstIndex);

        memcpy(dst, src, stride);
    }

    _atlasTexture->Apply();

    io.Fonts->SetTexID(_atlasTexture);
}

void TextureManager::BuildFontAtlas(ImGuiIO const& io)
{
    // io.Fonts->AddFontDefault();
    io.Fonts->Flags = ImFontAtlasFlags_NoMouseCursors;
    io.Fonts->Build();
}
