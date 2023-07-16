#include "structs.h"
#include "../Kotlar/Kotlar.h"
#include "../mrt/ww898/utf_converters.hpp"
#include "../mrt/xorstr.hpp"
#include "Offsets.h"
#include "globals.h"
#include "il2cpp_api.h"
#include <string_view>


Il2CppString *Il2CppString::newString(const char *text)
{
    return il2cpp_string_new(text);
}

std::string Il2CppString::str()
{
    using namespace ww898::utf;
    if (length > 512)
        return {"ERR_STR: LENGHT"};

    std::wstring_view ws(this->chars);
    return conv<char>(ws);
}

Matrix4x4 Matrix4x4::Ortho(float left, float right, float bottom, float top, float zNear,
                           float zFar)
{
    static auto addr = OFF(
        Offsets::UnityEngine_Matrix4x4::StaticMethods::
            Ortho_System_Single_left__System_Single_right__System_Single_bottom__System_Single_top__System_Single_zNear__System_Single_zFar);
    return ((Matrix4x4(*)(float, float, float, float, float, float))(addr))(left, right, bottom,
                                                                            top, zNear, zFar);
}

void CObject::setHideFlags(HideFlags flags)
{
    static auto addr =
        OFF(Offsets::UnityEngine_Object::Methods::set_hideFlags_UnityEngine_HideFlags_value);
    ((void(__thiscall *)(CObject *, HideFlags))(addr))(this, flags);
}

Il2CppObject *CObject::Instantiate(Il2CppObject *type)
{
    static auto addr =
        OFF(Offsets::UnityEngine_Object::StaticMethods::Instantiate_UnityEngine_Object_original);
    return ((Il2CppObject * (*)(Il2CppObject *))(addr))(type);
}

void CObject::DontDestroyOnLoad(Il2CppObject *object)
{
    // UnityEngine.Object::DontDestroyOnLoad
    static auto addr = il2cpp_resolve_icall(_("UnityEngine.Object::DontDestroyOnLoad"));
    ((void (*)(Il2CppObject *))(addr))(object);
}

CAssetBundle *CAssetBundle::LoadFileFromMemory(CArray<uint8_t> *assetBundle, uint32_t CRC,
                                               uint64_t offset)
{
    static auto addr =
        il2cpp_resolve_icall(_("UnityEngine.AssetBundle::LoadFromMemory_Internal()"));

    return reinterpret_cast<CAssetBundle *(__fastcall *)(CArray<uint8_t> *, uint32_t, uint64_t)>(
        addr)(assetBundle, CRC, offset);
}

CAssetBundle *CAssetBundle::LoadFileFromFile(const char *path)
{
    static auto addr =
        OFF(Offsets::UnityEngine_AssetBundle::StaticMethods::LoadFromFile_System_String_path);

    auto str = il2cpp_string_new(path);

    return ((CAssetBundle * (*)(Il2CppString *))(addr))(str);
}

void *CAssetBundle::LoadAssetInternal(const char *name, CType *type)
{
    auto str = il2cpp_string_new(name);

    static auto addr = OFF(
        Offsets::UnityEngine_AssetBundle::Methods::LoadAsset_System_String_name__System_Type_type);
    return ((void *(__thiscall *)(CAssetBundle *, Il2CppString *, CType *))(addr))(this, str, type);
}

void *CArrayBase::NewInternal(Il2CppClass *klass, il2cpp_array_size_t size)
{
    return il2cpp_array_new_specific(klass, size);
}

void *CArrayBase::NewInternal(const char *klass, il2cpp_array_size_t size, const char *namespaze)
{
    auto klassType = il2cpp::InitClass(klass, namespaze);

    if (!klassType)
        __debugbreak();

    return il2cpp_array_new_specific(klassType, size);
}

CType *CType::FomClass(const char *name, const char *namespaze)
{
    auto klass = il2cpp::InitClass(name, namespaze);

    if (!klass)
        return nullptr;

    auto type = il2cpp_class_get_type(klass);

    if (!type)
        return nullptr;

    return (CType *)il2cpp_type_get_object(type);
}

void *CGameObject::AddComponentInternal(CType *type)
{
    static auto addr =
        OFF(Offsets::UnityEngine_GameObject::Methods::AddComponent_System_Type_componentType);
    return ((void *(__thiscall *)(CGameObject *, CType *))(addr))(this, type);
}

void *CGameObject::GetComponentInternal(CType *type)
{
    static auto addr = OFF(Offsets::UnityEngine_GameObject::Methods::GetComponent_System_Type_type);
    return ((void *(__thiscall *)(CGameObject *, CType *))(addr))(this, type);
}

void *CGameObject::FindInternal(const char *name)
{
    auto        str  = CString::newString(name);
    static auto addr = OFF(Offsets::UnityEngine_GameObject::StaticMethods::Find_System_String_name);
    return ((void *(*)(CString *))(addr))(str);
}

void *CGameObject::FindObjectsByTypeInternal(CType *type, FindObjectsInactive findObjectsInactive,
                                             FindObjectsSortMode sortMode)
{
    static auto addr = il2cpp_resolve_icall(_("UnityEngine.Object::FindObjectsByType"));
    return ((void *(*)(CType *, FindObjectsInactive, FindObjectsSortMode))(addr))(
        type, findObjectsInactive, sortMode);
}

// void* CGameObject::InstantiateInternal(Il2CppObject* type)
//{
//     return nullptr;
// }

void *CUnsafeUtility::PinGCObjectAndGetAddress(Il2CppObject *object, uintptr_t *gcHandle)
{
    static auto addr = il2cpp_resolve_icall(
        _("Unity.Collections.LowLevel.Unsafe.UnsafeUtility::PinSystemObjectAndGetAddress"));

    return ((void *(*)(Il2CppObject *, uintptr_t *))(addr))(object, gcHandle);
}

void CCanvas::SetRenderMode(RenderMode mode)
{
    // UnityEngine.Canvas::set_renderMode
    static auto addr = il2cpp_resolve_icall(_("UnityEngine.Canvas::set_renderMode"));
    ((void(__thiscall *)(CCanvas *, RenderMode))(addr))(this, mode);
}

void CCanvas::SetWorldCamera(CCamera *camera)
{
    static auto addr =
        OFF(Offsets::UnityEngine_Canvas::Methods::set_worldCamera_UnityEngine_Camera_value);
    ((void(__thiscall *)(CCanvas *, CCamera *))(addr))(this, camera);
}

bool CCanvas::IsRootCanvas()
{
    static auto addr = OFF(Offsets::UnityEngine_Canvas::Methods::get_isRootCanvas);
    return ((bool(__thiscall *)(CCanvas *))(addr))(this);
}

// Il2CppObject* CPrefabUtility::InstantiatePrefab(Il2CppObject* object)
//{
//     static auto addr =
//     OFF(Offsets::UnityEngine_Canvas::Methods::set_worldCamera_UnityEngine_Camera_value); return
//     ((Il2CppObject * (*)(Il2CppObject*))(addr))(object);
// }

CBasePlayer *CLocalPlayer::GetLocalPlayer()
{
    static auto addr = OFF(Offsets::LocalPlayer::StaticMethods::get_Entity);
    return ((CBasePlayer*(*)())(addr))();
}
