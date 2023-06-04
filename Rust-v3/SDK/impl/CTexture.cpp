#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"

uintptr_t CTexture::GetNativeTexturePtr()
{
    static auto addr = OFF(Offsets::UnityEngine_Texture::Methods::GetNativeTexturePtr);
    return ((uintptr_t(__thiscall*)(CTexture*))(addr))(this);
}

void CTexture::set_fiĺterMode(FilterMode mode)
{
    static auto addr = OFF(Offsets::UnityEngine_Texture::Methods::set_filterMode_UnityEngine_FilterMode_value);
    ((void(__thiscall*)(CTexture*, FilterMode))(addr))(this, mode);
}