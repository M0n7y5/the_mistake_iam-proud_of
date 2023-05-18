#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"

// Impl : CTransform

CTransform* CTransform::GetTransform(void* addr)
{
    static auto off = OFF(Offsets::UnityEngine_Component::Methods::get_transform);
    return ((CTransform * (*)(void*))(G::baseGameAssemlby + off))(addr);
}

Vector3 CTransform::GetPosition() /* rand crash, to:do track*/
{
    static auto addr = OFF(Offsets::UnityEngine_Transform::Methods::get_position);
    return ((Vector3(__thiscall*)(CTransform*))(G::baseGameAssemlby + addr))(this);
}

void CTransform::SetPosition(Vector3 position)
{
    static auto addr = OFF(Offsets::UnityEngine_Transform::Methods::set_position_UnityEngine_Vector3_value);
    return ((void(__thiscall*)(CTransform*, Vector3))(G::baseGameAssemlby + addr))(this, position);
}

void CTransform::SetRotation(Vector4 rotation)
{
    static auto addr = OFF(Offsets::UnityEngine_Transform::Methods::set_rotation_UnityEngine_Quaternion_value);
    return ((void(__thiscall*)(CTransform*, Vector4))(G::baseGameAssemlby + addr))(this, rotation);
}