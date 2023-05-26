#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"
#include <cstdint>

void CTexture2D::ctor(uint32_t width, uint32_t height, TextureFormat textureFormat, bool mipChain, bool linear)
{
    static auto addr = OFF(Offsets::UnityEngine_Texture2D::Methods::
            _ctor_System_Int32_width__System_Int32_height__UnityEngine_TextureFormat_textureFormat__System_Boolean_mipChain__System_Boolean_linear);
    ((void(__thiscall*)(void*, uint32_t, uint32_t, TextureFormat, bool, bool))(addr))(
        this, width, height, textureFormat, mipChain, linear);
}

WeakArray<uint8_t> CTexture2D::GetRawTextureData_byte()
{
    using _getWritableImageData_t = uint8_t*(__thiscall*)(CTexture2D*, int32_t);
    using _getRawImageDataSize_t  = uint64_t(__thiscall*)(CTexture2D*);

    static _getWritableImageData_t getWritableImageData =
        (_getWritableImageData_t)OFF(Offsets::UnityEngine_Texture2D::Methods::GetWritableImageData_System_Int32_frame);

    static _getRawImageDataSize_t getRawImageDataSize =
        (_getRawImageDataSize_t)OFF(Offsets::UnityEngine_Texture2D::Methods::GetRawImageDataSize);

    auto arrayLen = getRawImageDataSize(this);

    auto writableData = getWritableImageData(this, 0);

    WeakArray<uint8_t> arr;
    arr.lenght = arrayLen;
    arr.ptr    = (uintptr_t)writableData;

    return arr;
    //((CArray<uint8_t> * (__thiscall*)(void*))(addr))(this);
}

void CTexture2D::Apply()
{
    static auto addr = OFF(Offsets::UnityEngine_Texture2D::Methods::Apply);
    ((void(__thiscall*)(CTexture2D*))(addr))(this);
}
