#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"
#include "../il2cpp_api.h"
#include "../../mrt/xorstr.hpp"

void CMaterial::ctor(CShader* shader)
{
    static auto addr = OFF(Offsets::UnityEngine_Material::Methods::_ctor_UnityEngine_Shader_shader);
    ((void(__thiscall*)(CMaterial*, CShader*))(addr))(this, shader);
}

CMaterial* CMaterial::New()
{
    const auto* klass = il2cpp::InitClass(_("Material"), _("UnityEngine"));

    return (CMaterial*)il2cpp_object_new(klass);
}