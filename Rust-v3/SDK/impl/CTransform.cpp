#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"

// Impl : CTransform

// CTransform* CTransform::GetTransform(void* addr)
// {
//     static auto off = OFF(Offsets::UnityEngine_GameObject::StaticMethods::);
//     return ((CTransform * (*)(void*))(off))(addr);
// }

Vector3 CTransform::GetPosition() /* rand crash, to:do track*/
{
    static auto addr = OFF(Offsets::UnityEngine_Transform::Methods::get_position);
    return ((Vector3(__thiscall*)(CTransform*))(addr))(this);
}

void CTransform::SetPosition(Vector3 position)
{
    static auto addr = OFF(Offsets::UnityEngine_Transform::Methods::set_position_UnityEngine_Vector3_value);
    return ((void(__thiscall*)(CTransform*, Vector3))(addr))(this, position);
}

void CTransform::SetRotation(Vector4 rotation)
{
    static auto addr = OFF(Offsets::UnityEngine_Transform::Methods::set_rotation_UnityEngine_Quaternion_value);
    return ((void(__thiscall*)(CTransform*, Vector4))(addr))(this, rotation);
}

Vector3 CTransform::TransformPoint(Vector3 vec)
{
    static auto addr = OFF(Offsets::UnityEngine_Transform::Methods::TransformPoint_UnityEngine_Vector3_position);
    return ((Vector3(__thiscall*)(CTransform*, Vector3))(addr))(this, vec);
}

Vector3 CTransform::Forward()
{
    static auto addr = OFF(Offsets::UnityEngine_Transform::Methods::get_forward);
    return ((Vector3(__thiscall*)(CTransform*))(addr))(this);
}

Vector3 CTransform::InverseTransformPoint(Vector3 vec)
{
    static auto addr = OFF(Offsets::UnityEngine_Transform::Methods::InverseTransformPoint_UnityEngine_Vector3_position);
    return ((Vector3(__thiscall*)(CTransform*, Vector3))(addr))(this, vec);
}
Vector3 CTransform::InverseTransformDirection(Vector3 vec)
{
    static auto addr =
        OFF(Offsets::UnityEngine_Transform::Methods::InverseTransformDirection_UnityEngine_Vector3_direction);
    return ((Vector3(__thiscall*)(CTransform*, Vector3))(addr))(this, vec);
}

Vector3 CTransform::GetLossyScale()
{
    static auto addr = OFF(Offsets::UnityEngine_Transform::Methods::get_lossyScale);
    return ((Vector3(__thiscall*)(CTransform*))(addr))(this);
}