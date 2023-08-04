#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"
#include "../il2cpp_api.h"
#include "../../mrt/xorstr.hpp"

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
    return ((CGameObject*)this)->GetTransform()->GetPosition();
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

    Vector3 trans_vec{view_matrix[0][3], view_matrix[1][3], view_matrix[2][3]};
    Vector3 right_vec{view_matrix[0][0], view_matrix[1][0], view_matrix[2][0]};
    Vector3 up_vec{view_matrix[0][1], view_matrix[1][1], view_matrix[2][1]};

    const float w = trans_vec.dot_product(elementPosition) + view_matrix[3][3];

    if (w < _flt(0.001f))
        return false;

    float x = right_vec.dot_product(elementPosition) + view_matrix[3][0];
    float y = up_vec.dot_product(elementPosition) + view_matrix[3][1];

    screenPosition = {(G::screenWidth / 2) * (1.f + x / w), (G::screenHeight / 2) * (1.f - y / w)};

    return true;
}

bool CCamera::WorldToScreen(Vector3 position, Vector2& screenPos, CRect& screen)
{
    static auto addr = OFF(Offsets::UnityEngine_Camera::Methods::WorldToScreenPoint_UnityEngine_Vector3_position);
    auto        vec  = ((Vector3(__thiscall*)(CCamera*, Vector3))(addr))(this, position);

    if (vec.z < _flt(0.001f))
        return false;

    if (screen.Contains(vec) == false)
        return false;

    screenPos = {vec.x, screen.m_Height - vec.y};
    return true;
}

bool CCamera::WorldToScreenVec2Ex(std::span<Vector3> const& positions, std::span<Vector2> const& screenPos,
                                  CRect const& screen)
{
    static auto addr = OFF(Offsets::UnityEngine_Camera::Methods::WorldToScreenPoint_UnityEngine_Vector3_position);

    auto call     = ((Vector3(__thiscall*)(CCamera*, Vector3))(addr));
    int  offCount = 0;

    int idx = 0;
    for (auto pos : positions)
    {
        auto       vec   = call(this, pos);
        const bool isOff = (vec.z < _flt(0.001f)) || (screen.Contains(vec) == false);

        if (isOff)
            offCount++;

        Vector2 vex      = {vec.x, screen.m_Height - vec.y};
        vec.y            = screen.m_Height - vec.y;
        screenPos[idx++] = vex;
    }

    if (offCount == positions.size())
        return false;

    return true;
}

bool CCamera::WorldToScreenVec2Ex(std::array<Vector3, 8>& positions, std::array<Vector3, 8>& screenPos, CRect& screen)
{
    static auto addr = OFF(Offsets::UnityEngine_Camera::Methods::WorldToScreenPoint_UnityEngine_Vector3_position);

    const auto call     = ((Vector3(__thiscall*)(CCamera*, Vector3))(addr));
    int        offCount = 0;

    for (int i = 0; i < positions.size(); i++)
    {
        auto       vec   = call(this, positions[i]);
        const bool isOff = (vec.z < _flt(0.001f)) || (screen.Contains(vec) == false);

        if (isOff)
            offCount++;
        vec.y        = screen.m_Height - vec.y;
        screenPos[i] = vec;
    }

    if (offCount == 8)
        return false;

    return true;
}

void CCamera::AddCommandBuffer(CameraEvent event, CCommandBuffer* buffer)
{
    static auto addr =
        OFF(Offsets::UnityEngine_Camera::Methods::
                AddCommandBuffer_UnityEngine_Rendering_CameraEvent_evt__UnityEngine_Rendering_CommandBuffer_buffer);
    ((void(__thiscall*)(CCamera*, CameraEvent, CCommandBuffer*))(addr))(this, event, buffer);
}

bool CCamera::GetOrtoGraphic()
{
    static auto addr = OFF(Offsets::UnityEngine_Camera::Methods::get_orthographic);
    return ((bool(__thiscall*)(CCamera*))(addr))(this);
}

void CCamera::SetOrtoGraphic(bool isOrto)
{
    static auto addr = OFF(Offsets::UnityEngine_Camera::Methods::set_orthographic_System_Boolean_value);
    ((void(__thiscall*)(CCamera*, bool))(addr))(this, isOrto);
}

void CCamera::SetDepth(float depth)
{
    static auto addr = il2cpp_resolve_icall(_("UnityEngine.Camera::set_depth"));
    ((void(__thiscall*)(CCamera*, float))(addr))(this, depth);
}

void CCamera::SetCullingMask(Layer layer)
{
    static auto addr = OFF(Offsets::UnityEngine_Camera::Methods::set_cullingMask_System_Int32_value);
    ((void(__thiscall*)(CCamera*, Layer))(addr))(this, layer);
}

void CCamera::SetClearFlags(CameraClearFlags flags)
{
    static auto addr = OFF(Offsets::UnityEngine_Camera::Methods::set_clearFlags_UnityEngine_CameraClearFlags_value);
    ((void(__thiscall*)(CCamera*, CameraClearFlags))(addr))(this, flags);
}

float CCamera::GetFov()
{
    static auto addr = OFF(Offsets::UnityEngine_Camera::Methods::get_fieldOfView);
    return ((float(__thiscall*)(CCamera*))(addr))(this);
}
