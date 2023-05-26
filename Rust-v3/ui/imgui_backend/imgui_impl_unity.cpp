/*
    Unity Native Imgui Renderer
    Version: 0.0.1-alpha
    Author: M0N7Y5
*/

#include "imgui_impl_unity.h"
#include "../../SDK/structs.h"
#include "../../SDK/il2cpp_api.h"

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

bool ImGui_Impl_Unity_Init(CCamera* camera)
{
    // setup camera and shit

    auto& io = ImGui::GetIO();

    io.BackendRendererName = "Unity Imgui";
    io.BackendFlags        |= ImGuiBackendFlags_RendererHasVtxOffset;

    _vertexAttributes =
        CArray<CVertexAttributeDescriptor>::New("VertexAttributeDescriptor", 3, "UnityEngine.Rendering");

    // Position
    auto attr = _vertexAttributes->data[0];

    attr->_attribute_k__BackingField = (int32_t)VertexAttribute::Position;
    attr->_format_k__BackingField    = (int32_t)VertexAttributeFormat::Float32;
    attr->_dimension_k__BackingField = 2;
    attr->_stream_k__BackingField    = 0;

    // UV
    attr = _vertexAttributes->data[1];

    attr->_attribute_k__BackingField = (int32_t)VertexAttribute::TexCoord0;
    attr->_format_k__BackingField    = (int32_t)VertexAttributeFormat::Float32;
    attr->_dimension_k__BackingField = 2;
    attr->_stream_k__BackingField    = 0;

    // Color
    attr = _vertexAttributes->data[2];

    attr->_attribute_k__BackingField = (int32_t)VertexAttribute::TexCoord1;
    attr->_format_k__BackingField    = (int32_t)VertexAttributeFormat::UInt32;
    attr->_dimension_k__BackingField = 1;
    attr->_stream_k__BackingField    = 0;

    return false;
}

void ImGui_Impl_Unity_NewFrame()
{
    // prepare frame
}

void ImGui_Impl_Unity_RenderDrawData(ImDrawData* draw_data)
{
    // render draw data to camera
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
