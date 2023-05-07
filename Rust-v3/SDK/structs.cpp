#include "structs.h"
#include "../Kotlar/Kotlar.h"
#include "Offsets.h"
#include "globals.h"

// Impl : CTransform

CTransform *CTransform::GetTransform(void *addr)
{
    static auto off = OFF(Offsets::UnityEngine_Component::Methods::get_transform);
    return ((CTransform * (*)(void *))(G::baseGameAssemlby + off))(addr);
}

Vector3 CTransform::GetPosition() /* rand crash, to:do track*/
{
    static auto addr = OFF(Offsets::UnityEngine_Transform::Methods::get_position);
    return ((Vector3(__thiscall *)(UnityEngine_Transform_o *))(G::baseGameAssemlby + addr))(this);
}

void CTransform::SetPosition(Vector3 position)
{
    static auto addr = OFF(Offsets::UnityEngine_Transform::Methods::set_position_UnityEngine_Vector3_value);
    return ((void(__thiscall *)(UnityEngine_Transform_o *, Vector3))(G::baseGameAssemlby + addr))(this, position);
}

void CTransform::SetRotation(Vector4 rotation)
{
    static auto addr = OFF(Offsets::UnityEngine_Transform::Methods::set_rotation_UnityEngine_Quaternion_value);
    return ((void(__thiscall *)(UnityEngine_Transform_o *, Vector4))(G::baseGameAssemlby + addr))(this, rotation);
}

// Impl : CModel

Vector3 CModel::GetBonePosition(PlayerBones bone)
{
    auto boneTransformArray = this->fields.boneDict->fields.transforms;

    if ((int)bone > boneTransformArray->bounds->length)
        return {};

    auto boneTransform = (CTransform *)boneTransformArray->m_Items[(int)bone];

    return boneTransform->GetPosition();
}

CTransform *CModel::GetBoneTransform(PlayerBones bone)
{
    auto boneTransformArray = this->fields.boneDict->fields.transforms;

    if ((int)bone > boneTransformArray->bounds->length)
        return {};

    auto boneTransform = (CTransform *)boneTransformArray->m_Items[(int)bone];

    return boneTransform;
}

// Impl: CBaseEntity

Vector3 CBaseEntity::GetOriginPosition()
{
    return CTransform::GetTransform(this)->GetPosition();
}

Vector3 CBaseEntity::GetLocalVelocity()
{
    static auto addr = OFF(Offsets::BaseEntity::Methods::GetLocalVelocity);
    return ((Vector3(__thiscall *)(void *))(G::baseGameAssemlby + addr))(this);
}
Vector3 CBaseEntity::GetWorldVelocity()
{
    static auto addr = OFF(Offsets::BaseEntity::Methods::GetWorldVelocity);
    return ((Vector3(__thiscall *)(void *))(G::baseGameAssemlby + addr))(this);
}
Vector3 CBaseEntity::GetParentVelocity()
{
    static auto addr = OFF(Offsets::BaseEntity::Methods::GetParentVelocity);
    return ((Vector3(__thiscall *)(void *))(G::baseGameAssemlby + addr))(this);
}

float Bounds::SqrDistance(Vector3 point)
{
    static auto addr = OFF(Offsets::UnityEngine_Bounds::Methods::SqrDistance_UnityEngine_Vector3_point);
    return reinterpret_cast<float (*)(Bounds *, Vector3)>(G::baseGameAssemlby + addr)(this, point);
}

Bounds OBB::ToBounds()
{
    static auto addr = OFF(Offsets::OBB::Methods::ToBounds);
    return ((Bounds(__thiscall *)(OBB *))(G::baseGameAssemlby + addr))(this);
}

Vector3 OBB::ClosestPoint(Vector3 position)
{
    static auto addr = OFF(Offsets::OBB::Methods::ClosestPoint_UnityEngine_Vector3_target);
    return ((Vector3(__thiscall *)(OBB *, Vector3))(G::baseGameAssemlby + addr))(this, position);
}

CCamera *CCamera::GetCurrentCamera()
{
    static auto addr = OFF(Offsets::UnityEngine_Camera::StaticMethods::get_current);
    return ((CCamera * (*)())(G::baseUnityPlayer + addr))();
}

CCamera *CCamera::GetMainCamera()
{
    static auto addr = OFF(Offsets::UnityEngine_Camera::StaticMethods::get_main);
    return ((CCamera * (*)())(G::baseUnityPlayer + addr))();
}

Vector3 CCamera::GetPosition()
{
    return CTransform::GetTransform(this)->GetPosition();
}

Matrix4x4 CCamera::GetViewMatrix()
{
    static auto addr = OFF(Offsets::UnityEngine_Camera::Methods::get_worldToCameraMatrix);
    return ((Matrix4x4(__thiscall *)(CCamera *))(G::baseGameAssemlby + addr))(this);
}

bool CCamera::WorldToScreenOld(const Vector3 &elementPosition, Vector2 &screenPosition)
{
    auto view_matrix = this->GetViewMatrix();

    if (elementPosition.empty())
        return false;

    Vector3 trans_vec {view_matrix[0][3], view_matrix[1][3], view_matrix[2][3]};
    Vector3 right_vec {view_matrix[0][0], view_matrix[1][0], view_matrix[2][0]};
    Vector3 up_vec {view_matrix[0][1], view_matrix[1][1], view_matrix[2][1]};

    const float w = trans_vec.dot_product(elementPosition) + view_matrix[3][3];

    if (w < _flt(0.001f))
        return false;

    float x        = right_vec.dot_product(elementPosition) + view_matrix[3][0];
    float y        = up_vec.dot_product(elementPosition) + view_matrix[3][1];

    screenPosition = {(G::screenWidth / 2) * (1.f + x / w), (G::screenHeight / 2) * (1.f - y / w)};

    return true;
}

Vector3 CCamera::WorldToScreen(Vector3 position)
{
    static auto addr = OFF(Offsets::UnityEngine_Camera::Methods::WorldToScreenPoint_UnityEngine_Vector3_position);
    return ((Vector3(__thiscall *)(CCamera *, Vector3))(G::baseGameAssemlby + addr))(this, position);
}
