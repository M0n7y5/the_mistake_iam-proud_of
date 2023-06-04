#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"
#include "../il2cpp_api.h"
#include "../../mrt/xorstr.hpp"

void CMaterialPropertyBlock::SetTexture(uint32_t nameID, CTexture* value)
{
    static auto addr = OFF(
        Offsets::UnityEngine_MaterialPropertyBlock::Methods::SetTexture_System_Int32_nameID__UnityEngine_Texture_value);
    ((void(__thiscall*)(CMaterialPropertyBlock*, uint32_t, CTexture*))(addr))(this, nameID, value);
}

CMaterialPropertyBlock* CMaterialPropertyBlock::New()
{
    const auto* klass = il2cpp::InitClass(_("MaterialPropertyBlock"), _("UnityEngine"));

    return (CMaterialPropertyBlock*)il2cpp_object_new(klass);
}

void CMaterialPropertyBlock::ctor()
{
    static auto addr = OFF(Offsets::UnityEngine_MaterialPropertyBlock::Methods::_ctor);
    ((void(__thiscall*)(CMaterialPropertyBlock*))(addr))(this);
}