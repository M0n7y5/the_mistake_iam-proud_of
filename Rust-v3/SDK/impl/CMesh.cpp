#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"
#include "../../mrt/xorstr.hpp"
#include "../il2cpp_api.h"

CMesh* CMesh::New()
{
    const auto* klass = il2cpp::InitClass(_("Mesh"), _("UnityEngine"));

    return (CMesh*)il2cpp_object_new(klass);
}

void CMesh::ctor(char* name)
{
    static auto addr = OFF(Offsets::UnityEngine_Mesh::Methods::_ctor);
    ((void(__thiscall*)(CMesh*))(addr))(this);
}

void CMesh::MarkDynamic()
{
    static auto addr = OFF(Offsets::UnityEngine_Mesh::Methods::MarkDynamic);
    ((void(__thiscall*)(CMesh*))(addr))(this);
}

void CMesh::Clear(bool keepVertexLayout)
{
    static auto addr = OFF(Offsets::UnityEngine_Mesh::Methods::ClearImpl_System_Boolean_keepVertexLayout);
    ((void(__thiscall*)(CMesh*, bool))(addr))(this, keepVertexLayout);
}

void CMesh::SetIndexBufferParams(uint32_t indexCount, IndexFormat format)
{
    static auto addr = il2cpp_resolve_icall(_("UnityEngine.Mesh::SetIndexBufferParams"));
    ((void(__thiscall*)(CMesh*, uint32_t, IndexFormat))(addr))(this, indexCount, format);
}

void CMesh::SetVertexBufferParams(int32_t vertexCount, CArray<CVertexAttributeDescriptor>* attributes)
{
    static auto addr = OFF(Offsets::UnityEngine_Mesh::Methods::
            SetVertexBufferParams_System_Int32_vertexCount__UnityEngine_Rendering_VertexAttributeDescriptor___attributes);
    ((void(__thiscall*)(CMesh*, int32_t, CArray<CVertexAttributeDescriptor>*))(addr))(this, vertexCount, attributes);
}

void CMesh::SetSubMeshes(CSubMeshDescriptor* desc, uint32_t count, MeshUpdateFlags flags)
{
    static auto addr = il2cpp_resolve_icall(_("UnityEngine.Mesh::SetAllSubMeshesAtOnceFromNativeArray"));

    ((void(__thiscall*)(CMesh*, const CSubMeshDescriptor*, uint32_t, uint32_t, MeshUpdateFlags))(addr))(
        this, desc, 0, count, flags);
}

void CMesh::UploadMeshData(bool markNoLongerReadable)
{
    static auto addr = OFF(Offsets::UnityEngine_Mesh::Methods::UploadMeshData_System_Boolean_markNoLongerReadable);
    ((void(__thiscall*)(CMesh*, bool))(addr))(this, markNoLongerReadable);
}

void CMesh::SetSubmeshCount(uint32_t count)
{
    static auto addr = OFF(Offsets::UnityEngine_Mesh::Methods::set_subMeshCount_System_Int32_value);
    ((void(__thiscall*)(CMesh*, uint32_t))(addr))(this, count);
}

void CMesh::SetVertexBufferData(int32_t stream, void* data, int32_t dataStart, int32_t meshBufferStart, int32_t count,
    int32_t elemSize, MeshUpdateFlags flags)
{
    static auto addr = il2cpp_resolve_icall(_("UnityEngine.Mesh::InternalSetVertexBufferData"));
    ((void(__thiscall*)(CMesh*, int32_t, void*, int32_t, int32_t, int32_t, int32_t, MeshUpdateFlags))(addr))(
        this, stream, data, dataStart, meshBufferStart, count, elemSize, flags);
}

void CMesh::SetIndexBufferData(
    void* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, MeshUpdateFlags flags)
{
    // UnityEngine.Mesh::InternalSetIndexBufferData
    static auto addr = il2cpp_resolve_icall(_("UnityEngine.Mesh::InternalSetIndexBufferData"));
    ((void(__thiscall*)(CMesh*, void*, int32_t, int32_t, int32_t, int32_t, MeshUpdateFlags))(addr))(
        this, data, dataStart, meshBufferStart, count, elemSize, flags);
}
