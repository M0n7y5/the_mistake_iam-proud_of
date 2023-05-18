#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"

// Impl: CBaseEntity

Vector3 CBaseEntity::GetOriginPosition()
{
    return CTransform::GetTransform(this)->GetPosition();
}

Vector3 CBaseEntity::GetLocalVelocity()
{
    static auto addr = OFF(Offsets::BaseEntity::Methods::GetLocalVelocity);
    return ((Vector3(__thiscall*)(void*))(G::baseGameAssemlby + addr))(this);
}
Vector3 CBaseEntity::GetWorldVelocity()
{
    static auto addr = OFF(Offsets::BaseEntity::Methods::GetWorldVelocity);
    return ((Vector3(__thiscall*)(void*))(G::baseGameAssemlby + addr))(this);
}
Vector3 CBaseEntity::GetParentVelocity()
{
    static auto addr = OFF(Offsets::BaseEntity::Methods::GetParentVelocity);
    return ((Vector3(__thiscall*)(void*))(G::baseGameAssemlby + addr))(this);
}