#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"
#include "../../mrt/xorstr.hpp"
#include "../il2cpp_api.h"

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

void CMesh::Clear()
{
    static auto addr = OFF(Offsets::UnityEngine_Mesh::Methods::Clear);
    ((void(__thiscall*)(CMesh*))(addr))(this);
}

void CMesh::SetIndexBufferParams(uint32_t indexCount, TextureFormat format)
{
    static auto addr = il2cpp_resolve_icall(_("UnityEngine.Mesh::SetIndexBufferParams"));
    ((void(__thiscall*)(CMesh*, uint32_t, TextureFormat))(addr))(this, indexCount, format);
}

void CMesh::SetVertexBufferParams(int vertexCount, CArray<CVertexAttributeDescriptor>* attributes)
{
    static auto addr = OFF(Offsets::UnityEngine_Mesh::Methods::
            SetVertexBufferParams_System_Int32_vertexCount__UnityEngine_Rendering_VertexAttributeDescriptor___attributes);
    ((void(__thiscall*)(CMesh*, int, CArray<CVertexAttributeDescriptor>*))(addr))(this, vertexCount, attributes);
}

void CMesh::SetSubMeshes(std::vector<CSubMeshDescriptor> const& desc, uint32_t count, MeshUpdateFlags flags)
{
    static auto addr = il2cpp_resolve_icall(_("UnityEngine.Mesh::SetAllSubMeshesAtOnceFromNativeArray"));

    ((void(__thiscall*)(CMesh*, const CSubMeshDescriptor*, uint32_t, uint32_t, MeshUpdateFlags))(addr))(
        this, desc.data(), 0, count, flags);
}

void CMesh::UploadMeshData(bool markNoLongerReadable)
{
    static auto addr = OFF(Offsets::UnityEngine_Mesh::Methods::UploadMeshData_System_Boolean_markNoLongerReadable);
    ((void(__thiscall*)(CMesh*, bool))(addr))(this, markNoLongerReadable);
}
