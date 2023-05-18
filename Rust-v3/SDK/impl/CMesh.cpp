#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"
#include "../../mrt/xorstr.hpp"
#include "../il2cpp_api.h"

void CMesh::ctor(char* name)
{
    static auto addr = OFF(Offsets::UnityEngine_Mesh::Methods::_ctor);
    ((void(__thiscall*)(CMesh*))(G::baseGameAssemlby + addr))(this);
}

void CMesh::MarkDynamic()
{
    static auto addr = OFF(Offsets::UnityEngine_Mesh::Methods::MarkDynamic);
    ((void(__thiscall*)(CMesh*))(G::baseGameAssemlby + addr))(this);
}

void CMesh::Clear()
{
    static auto addr = OFF(Offsets::UnityEngine_Mesh::Methods::Clear);
    ((void(__thiscall*)(CMesh*))(G::baseGameAssemlby + addr))(this);
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
    ((void(__thiscall*)(CMesh*, int, CArray<CVertexAttributeDescriptor>*))(G::baseGameAssemlby + addr))(
        this, vertexCount, attributes);
}

void CMesh::SetSubMeshes(CArray<CSubMeshDescriptor>* desc, MeshUpdateFlags flags)
{
    static auto SetAllSubMeshesAtOnceFromArray =
        il2cpp_resolve_icall(_("UnityEngine.Mesh::SetAllSubMeshesAtOnceFromArray"));

    /*

        if (count > 0 && desc == null)
        throw new ArgumentNullException("desc", "Array of submeshes cannot be null unless count is zero.");

            int valuesCount = desc?.Length ?? 0;
            if (start < 0 || count < 0 || start + count > valuesCount)
                throw new ArgumentOutOfRangeException($"Bad start/count arguments (start:{start} count:{count}
       desc.Length:{valuesCount})");

            for (int i = start; i < start + count; ++i)
            {
                MeshTopology t = desc[i].topology;
                if (t < MeshTopology.Triangles || t > MeshTopology.Points)
                    throw new ArgumentException(nameof(desc), $"{i}-th submesh descriptor has invalid topology
       ({(int)t})."); if (t == (MeshTopology)1) throw new ArgumentException(nameof(desc), $"{i}-th submesh descriptor
       has triangles strip topology, which is no longer supported.");
            }

    */

    ((void(__thiscall*)(CMesh*, CArray<CSubMeshDescriptor>*, uint32_t, uint32_t, MeshUpdateFlags))(
        SetAllSubMeshesAtOnceFromArray))(this, desc, 0, desc->bounds->length, flags);
}

void CMesh::UploadMeshData(bool markNoLongerReadable)
{
    static auto addr = OFF(Offsets::UnityEngine_Mesh::Methods::UploadMeshData_System_Boolean_markNoLongerReadable);
    ((void(__thiscall*)(CMesh*, bool))(G::baseGameAssemlby + addr))(this, markNoLongerReadable);
}
