#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"

void CMaterialPropertyBlock::SetTexture(uint32_t nameID, CTexture* value)
{
    static auto addr = OFF(
        Offsets::UnityEngine_MaterialPropertyBlock::Methods::SetTexture_System_Int32_nameID__UnityEngine_Texture_value);
    ((void(__thiscall*)(CMaterialPropertyBlock*, uint32_t, CTexture*))(G::baseGameAssemlby + addr))(this, nameID, value);
}

void CMaterialPropertyBlock::ctor()
{
    static auto addr = OFF(Offsets::UnityEngine_MaterialPropertyBlock::Methods::_ctor);
    ((void(__thiscall*)(CMaterialPropertyBlock*))(G::baseGameAssemlby + addr))(this);
}
