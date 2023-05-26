#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"

void CMaterial::ctor(CShader* shader)
{
    static auto addr = OFF(Offsets::UnityEngine_Material::Methods::_ctor_UnityEngine_Shader_shader);
    ((void(__thiscall*)(CMaterial*, CShader*))(addr))(this, shader);
}
