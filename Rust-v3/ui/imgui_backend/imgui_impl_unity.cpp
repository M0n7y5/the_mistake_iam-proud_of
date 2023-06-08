/*
    Unity Native Imgui Renderer
    Version: 0.0.1-alpha
    Author: M0N7Y5
*/

#include "imgui_impl_unity.h"
#include "../../SDK/structs.h"
#include "../../SDK/il2cpp_api.h"
#include "../../mrt/xorstr.hpp"

static CMaterial* _material = nullptr;
static CMesh*     _mesh     = nullptr;
static CShader*   _shader   = nullptr;

static int                     _textureID          = 0;
static CMaterialPropertyBlock* _materialProperties = nullptr;
static int                     _prevSubMeshCount   = 1;

static CArray<CVertexAttributeDescriptor>* _vertexAttributes = nullptr;

// C++ is full of shit like this, why do scoped enums even exist if i need to cast it every ducking time into integer???
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



bool ImGui_Impl_Unity_Init(CCamera* camera)
{
    // setup camera and shit

    ImGui::CreateContext();

    auto& io = ImGui::GetIO();

    io.BackendRendererName = "Unity Imgui";
    io.BackendFlags        |= ImGuiBackendFlags_RendererHasVtxOffset;

    _vertexAttributes =
        CArray<CVertexAttributeDescriptor>::New("VertexAttributeDescriptor", 3, "UnityEngine.Rendering");

    // Position
    auto& attr = _vertexAttributes->data[0];

    attr._attribute_k__BackingField = (int32_t)VertexAttribute::Position;
    attr._format_k__BackingField    = (int32_t)VertexAttributeFormat::Float32;
    attr._dimension_k__BackingField = 2;
    attr._stream_k__BackingField    = 0;

    // UV
    attr = _vertexAttributes->data[1];

    attr._attribute_k__BackingField = (int32_t)VertexAttribute::TexCoord0;
    attr._format_k__BackingField    = (int32_t)VertexAttributeFormat::Float32;
    attr._dimension_k__BackingField = 2;
    attr._stream_k__BackingField    = 0;

    // Color
    attr = _vertexAttributes->data[2];

    attr._attribute_k__BackingField = (int32_t)VertexAttribute::TexCoord1;
    attr._format_k__BackingField    = (int32_t)VertexAttributeFormat::UInt32;
    attr._dimension_k__BackingField = 1;
    attr._stream_k__BackingField    = 0;

    _textureID = CShader::PropertyToID("_texture");

    _materialProperties = CMaterialPropertyBlock::New();
    _materialProperties->ctor();

    //!!!DEBUG
    auto bundle = CAssetBundle::LoadFileFromFile("C:\\Users\\user\\RustAssests\\AssetBundles\\uishaders");

    auto type_o = CType::FomClass(_("Shader"), _("UnityEngine"));

    _shader = bundle->LoadAsset<CShader>(
        _("Assets/AssetBundleData/DearImGui-Mesh.shader"), type_o); // LoadAsset(_("DearImGui-Mesh"), shaderType);


    //auto bootstrap_c = (Bootstrap_c*)il2cpp::InitClass("Bootstrap");

    //auto gameobject = bootstrap_c->static_fields->_menuUi;

    _material = CMaterial::New();
    _material->ctor(_shader);
    //!! _material->setHideFlags(HideFlags::HideAndDontSave & ~HideFlags::DontUnloadUnusedAsset);
    _mesh = CMesh::New();
    _mesh->ctor();
    _mesh->MarkDynamic();

    // manual Command buffer setup

    _commandBuffer = CCommandBuffer::New();
    _commandBuffer->ctor();
    _commandBuffer->setName(_("System.GUI"));

    Text

    // disable for now
    // camera->AddCommandBuffer(CameraEvent::AfterEverything, _commandBuffer);

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

    std::vector<CSubMeshDescriptor> descriptors {};

    for (int n = 0, nMax = draw_data->CmdListsCount; n < nMax; ++n)
    {
        auto drawList = draw_data->CmdLists[n];

        _mesh->SetVertexBufferData(
            0, drawList->VtxBuffer.Data, 0, vtxOf, drawList->VtxBuffer.Size, sizeof(ImDrawVert), NoMeshChecks);
        _mesh->SetIndexBufferData(
            drawList->IdxBuffer.Data, 0, idxOf, drawList->IdxBuffer.Size, sizeof(ImDrawIdx), NoMeshChecks);

        // Define subMeshes.
        for (int i = 0, iMax = drawList->CmdBuffer.Size; i < iMax; ++i)
        {
            auto cmd = drawList->CmdBuffer[i];

            CSubMeshDescriptor descriptor {.topology = MeshTopology::Triangles,
                .indexStart                          = idxOf + (int)cmd.IdxOffset,
                .indexCount                          = (int)cmd.ElemCount,
                .baseVertex                          = vtxOf + (int)cmd.VtxOffset};

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
    uintptr_t prevTextureId = 0;
    Vector4   clipOffset =
        Vector4(draw_data->DisplayPos.x, draw_data->DisplayPos.y, draw_data->DisplayPos.x, draw_data->DisplayPos.y);

    Vector4 clipScale = Vector4(draw_data->FramebufferScale.x, draw_data->FramebufferScale.y,
        draw_data->FramebufferScale.x, draw_data->FramebufferScale.y);

    auto rect = CRect {0.f, 0.f, fbSize.x, fbSize.y};
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
                Vector4 {drawCmd.ClipRect.x, drawCmd.ClipRect.y, drawCmd.ClipRect.z, drawCmd.ClipRect.w} - clipOffset;
            Vector4 clip = Vector4::Scale(clipSize, clipScale);

            if (clip.x >= fbSize.x || clip.y >= fbSize.y || clip.z < 0.f || clip.w < 0.f)
                continue;

            // set shader property for texture
            _materialProperties->SetTexture(_textureID, (CTexture*)drawCmd.TextureId);

            auto clipRect = CRect(clip.x, fbSize.y - clip.w, clip.z - clip.x, clip.w - clip.y);
            commandBuffer->EnableScissorRect(&clipRect); // Invert y.
            commandBuffer->DrawMesh(_mesh, (Matrix4x4*)&identityMatrix, _material, subOf, -1, _materialProperties);
        }
    }
    commandBuffer->DisableScissorRect();
}

// input update and shit
void ImGui_Impl_Unity_NewFrame()
{
    // prepare frame
}

void ImGui_Impl_Unity_RenderDrawData(ImDrawData* draw_data)
{
    auto    scall = (draw_data->DisplaySize * draw_data->FramebufferScale);
    Vector2 fbOSize(scall.x, scall.y);

    // Avoid rendering when minimized.
    if (fbOSize.x <= 0.f || fbOSize.y <= 0.f || draw_data->TotalVtxCount == 0)
        return;

    UpdateMesh(draw_data);

    CreateDrawCommands(commandBuffer, drawData, fbOSize);
}

static CTexture2D* _atlasTexture = nullptr;

void TextureManager::Initialize()
{
    auto& io = ImGui::GetIO();

    auto atlasPtr = io.Fonts;

    unsigned char* out_pixels;
    int            out_width;
    int            out_height;
    int            out_bytes_per_pixel;

    atlasPtr->GetTexDataAsRGBA32(&out_pixels, &out_width, &out_height, &out_bytes_per_pixel);

    WeakArray<uint8_t> srcData = {};
    srcData.lenght             = uint64_t(out_width * out_height * out_bytes_per_pixel);
    srcData.ptr                = (uintptr_t)out_pixels;

    auto textureKlass = il2cpp::InitClass("Texture2D", "UnityEngine");
    _atlasTexture     = (CTexture2D*)il2cpp_object_new(textureKlass);
    _atlasTexture->ctor(out_width, out_height, TextureFormat::RGBA32, false, false);
    _atlasTexture->As<CTexture>()->set_fiĺterMode(FilterMode::Point);

    auto dstData = _atlasTexture->GetRawTextureData_byte();

    int stride = out_width * out_bytes_per_pixel;

    for (size_t y = 0; y < out_height; y++)
    {
        // Copy(NativeArray<T> src, int srcIndex, NativeArray<T> dst, int dstIndex, int length)
        // NativeArray<byte>.Copy(srcData, y * stride, dstData, (height - y - 1) * stride, stride);
        // UnsafeUtility.MemCpy((byte*)dst.m_Buffer + dstIndex * UnsafeUtility.SizeOf<T>(), (byte*)src.m_Buffer +
        // srcIndex * UnsafeUtility.SizeOf<T>(), length * UnsafeUtility.SizeOf<T>());

        memcpy(srcData.data[y * stride], dstData.data[(out_height - y - 1) * stride], stride);
    }

    _atlasTexture->Apply();

    /*
            ImFontAtlasPtr atlasPtr = io.Fonts;
            atlasPtr.GetTexDataAsRGBA32(out byte* pixels, out int width, out int height, out int bytesPerPixel);

            _atlasTexture = new Texture2D(width, height, TextureFormat.RGBA32, false, false)
            {
                filterMode = FilterMode.Point
            };

            // TODO: Remove collections and make native array manually.
            NativeArray<byte> srcData = NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<byte>(pixels, width *
    height * bytesPerPixel, Allocator.None); #if ENABLE_UNITY_COLLECTIONS_CHECKS
            NativeArrayUnsafeUtility.SetAtomicSafetyHandle(ref srcData, AtomicSafetyHandle.GetTempMemoryHandle());
    #endif
            // Invert y while copying the atlas texture.
            NativeArray<byte> dstData = _atlasTexture.GetRawTextureData<byte>();
            int stride = width * bytesPerPixel;
            for (int y = 0; y < height; ++y)
            {
                NativeArray<byte>.Copy(srcData, y * stride, dstData, (height - y - 1) * stride, stride);
            }

            _atlasTexture.Apply();
    */
}
