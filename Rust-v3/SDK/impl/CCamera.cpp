#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"

CCamera* CCamera::GetCurrentCamera()
{
    static auto addr = OFF(Offsets::UnityEngine_Camera::StaticMethods::get_current);
    return ((CCamera * (*)())(addr))();
}

CCamera* CCamera::GetMainCamera()
{
    static auto addr = OFF(Offsets::UnityEngine_Camera::StaticMethods::get_main);
    return ((CCamera * (*)())(addr))();
}

Vector3 CCamera::GetPosition()
{
    return CTransform::GetTransform(this)->GetPosition();
}

Matrix4x4 CCamera::GetViewMatrix()
{
    static auto addr = OFF(Offsets::UnityEngine_Camera::Methods::get_worldToCameraMatrix);
    return ((Matrix4x4(__thiscall*)(CCamera*))(addr))(this);
}

CRect CCamera::GetPixelRect()
{
    static auto addr = OFF(Offsets::UnityEngine_Camera::Methods::get_pixelRect);
    return ((CRect(__thiscall*)(CCamera*))(addr))(this);
}

bool CCamera::WorldToScreenOld(const Vector3& elementPosition, Vector2& screenPosition)
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

    float x = right_vec.dot_product(elementPosition) + view_matrix[3][0];
    float y = up_vec.dot_product(elementPosition) + view_matrix[3][1];

    screenPosition = {(G::screenWidth / 2) * (1.f + x / w), (G::screenHeight / 2) * (1.f - y / w)};

    return true;
}

Vector3 CCamera::WorldToScreen(Vector3 position)
{
    static auto addr = OFF(Offsets::UnityEngine_Camera::Methods::WorldToScreenPoint_UnityEngine_Vector3_position);
    return ((Vector3(__thiscall*)(CCamera*, Vector3))(addr))(this, position);
}

void CCamera::AddCommandBuffer(CameraEvent event, CCommandBuffer* buffer)
{
    static auto addr = OFF(Offsets::UnityEngine_Camera::Methods::
            AddCommandBuffer_UnityEngine_Rendering_CameraEvent_evt__UnityEngine_Rendering_CommandBuffer_buffer);
    ((void(__thiscall*)(CCamera*, CameraEvent, CCommandBuffer*))(addr))(this, event, buffer);
}
