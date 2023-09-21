#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"
#include "../../mrt/scanner.h"
#include "../mem.h"
#include "../../mrt/xorstr.hpp"
#include <stdint.h>
#include <vadefs.h>

// Impl: CBaseEntity

Vector3 CBaseEntity::GetOriginPosition()
{
    return ((CGameObject*)this)->GetTransform()->GetPosition();
}

Vector3 CBaseEntity::GetLocalVelocity()
{
    static auto addr = OFF(Offsets::BaseEntity::Methods::GetLocalVelocity);
    return ((Vector3(__thiscall*)(void*))(addr))(this);
}
Vector3 CBaseEntity::GetWorldVelocity()
{
    static auto addr = OFF(Offsets::BaseEntity::Methods::GetWorldVelocity);
    return ((Vector3(__thiscall*)(void*))(addr))(this);
}
Vector3 CBaseEntity::GetParentVelocity()
{
    static auto addr = OFF(Offsets::BaseEntity::Methods::GetParentVelocity);
    return ((Vector3(__thiscall*)(void*))(addr))(this);
}

void CBaseEntity::ServerRPC(const char* name, bool flag)
{
    static auto addr = OFF(
        Offsets::BaseEntity::Methods::System_Void_BaseEntity_ServerRPC_System_Boolean__System_String_funcName__T1_arg1);
    static uintptr_t methodInfoAddr = 0;

    if (methodInfoAddr == 0)
    {
        //static auto addrTemp = OFF(Offsets::Candle::Methods::Menu_Ignite_BasePlayer_player);
        auto        found    = Forza::Find((uint8_t*)G::baseGameAssemlby, G::baseGameAssemlbySize,
                                           _("\x4C\x8B\x0D\xCC\xCC\xCC\xCC\x41\xB0\x01\x48\x8B\x15\xCC\xCC\xCC\xCC\x48\x8B\xCB"
                                                       "\x48\x83\xC4\x20\x5B\xE9"),
                                           _("xxx????xxxxxx????xxxxxxxxx"));

        methodInfoAddr = *mem::ResolveMov<uintptr_t*>(found);

        auto mm = (MethodInfo*)methodInfoAddr;
    }

    auto str = CString::newString(name);

    ((void(__thiscall*)(CBaseEntity*, CString*, bool, uintptr_t))(addr))(this, str, flag, methodInfoAddr);
}

void CBaseEntity::ServerRPC(const char* name)
{
    static auto addr = OFF(Offsets::BaseEntity::Methods::ServerRPC_System_String_funcName);

    auto str = CString::newString(name);

    ((void(__thiscall*)(CBaseEntity*, CString*))(addr))(this, str);
}