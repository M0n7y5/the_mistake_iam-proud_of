#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"
#include "../il2cpp_api.h"
#include "../../mrt/xorstr.hpp"

void CCommandBuffer::ctor()
{
    static auto addr = OFF(Offsets::UnityEngine_Rendering_CommandBuffer::Methods::_ctor);
    ((void(__thiscall*)(CCommandBuffer*))(G::baseGameAssemlby + addr))(this);
}

void CCommandBuffer::SetViewport(CRect* pixelRect)
{
    static auto addr =
        OFF(Offsets::UnityEngine_Rendering_CommandBuffer::Methods::SetViewport_UnityEngine_Rect_pixelRect);
    ((void(__thiscall*)(CCommandBuffer*, CRect*))(G::baseGameAssemlby + addr))(this, pixelRect);
}

void CCommandBuffer::SetViewProjectionMatrices(Matrix4x4* view, Matrix4x4* proj)
{
    static auto addr = OFF(Offsets::UnityEngine_Rendering_CommandBuffer::Methods::
            SetViewProjectionMatrices_UnityEngine_Matrix4x4_view__UnityEngine_Matrix4x4_proj);
    ((void(__thiscall*)(CCommandBuffer*, Matrix4x4*, Matrix4x4*))(G::baseGameAssemlby + addr))(this, view, proj);
}

void CCommandBuffer::EnableScissorRect(CRect* rect)
{
    static auto addr = il2cpp_resolve_icall(_("UnityEngine.Rendering.CommandBuffer::EnableScissorRect_Injected"));
    ((void(__thiscall*)(CCommandBuffer*, CRect*))(addr))(this, rect);
}

void CCommandBuffer::DisableScissorRect()
{
    static auto addr = il2cpp_resolve_icall(_("UnityEngine.Rendering.CommandBuffer::DisableScissorRect"));
    ((void(__thiscall*)(CCommandBuffer*))(addr))(this);
}

void CCommandBuffer::DrawMesh(CMesh* mesh, Matrix4x4* matrix, CMaterial* material, uint32_t submeshIndex,
    uint32_t shaderPass, CMaterialPropertyBlock* properties)
{
    static auto addr = OFF(Offsets::UnityEngine_Rendering_CommandBuffer::Methods::
            DrawMesh_UnityEngine_Mesh_mesh__UnityEngine_Matrix4x4_matrix__UnityEngine_Material_material__System_Int32_submeshIndex__System_Int32_shaderPass__UnityEngine_MaterialPropertyBlock_properties);
    ((void(__thiscall*)(CCommandBuffer*, CMesh*, Matrix4x4*, CMaterial*, uint32_t, uint32_t, CMaterialPropertyBlock*))(
        G::baseGameAssemlby + addr))(this, mesh, matrix, material, submeshIndex, shaderPass, properties);
}
