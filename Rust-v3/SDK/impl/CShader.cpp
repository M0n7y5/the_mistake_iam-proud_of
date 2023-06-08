#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"

uint32_t CShader::PropertyToID(const char* name)
{
    static auto addr = OFF(Offsets::UnityEngine_Shader::StaticMethods::PropertyToID_System_String_name);
    return ((uint32_t(__thiscall*)(CString*))(G::baseGameAssemlby + addr))(CString::newString(name));
}
