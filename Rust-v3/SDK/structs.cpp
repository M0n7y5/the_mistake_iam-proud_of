#include "structs.h"
#include "il2cpp_api.h"
#include "Offsets.h"
#include "../Kotlar/Kotlar.h"
#include "globals.h"
#include "../mrt/xorstr.hpp"

Il2CppString* Il2CppString::newString(const char* text)
{
    return il2cpp_string_new(text);
}

std::string Il2CppString::str()
{
    if (length > 193)
        return {"ERR_STR: LENGHT"};

    char output[193];

    sprintf(output, "%ws", this->chars);

    return std::string(output);
}

template <typename T>
inline CArray<T>* CArray<T>::New(Il2CppClass* klass, il2cpp_array_size_t size)
{
    return il2cpp_array_new_specific(klass, size);
}

template <typename T>
inline CArray<T>* CArray<T>::New(const char* klass, il2cpp_array_size_t size, const char* namespaze)
{
    auto klassType = il2cpp::InitClass(klass, namespaze);

    if (!klassType)
        __debugbreak();

    return il2cpp_array_new_specific(klassType, size);
}

Matrix4x4 Matrix4x4::Ortho(float left, float right, float bottom, float top, float zNear, float zFar)
{
    static auto addr = OFF(Offsets::UnityEngine_Matrix4x4::StaticMethods::
            Ortho_System_Single_left__System_Single_right__System_Single_bottom__System_Single_top__System_Single_zNear__System_Single_zFar);
    return ((Matrix4x4(__thiscall*)(float, float, float, float, float, float))(addr))(
        left, right, bottom, top, zNear, zFar);
}

void CObject::setHideFlags(HideFlags flags)
{
    static auto addr = OFF(Offsets::UnityEngine_Object::Methods::set_hideFlags_UnityEngine_HideFlags_value);
    return ((void(__thiscall*)(CObject*, HideFlags))(addr))(this, flags);
}

CAssetBundle* CAssetBundle::LoadFileFromMemory(WeakArray<uint8_t>* assetBundle, uint32_t CRC, uint64_t offset)
{
    static auto addr = il2cpp_resolve_icall(_("UnityEngine.AssetBundle::LoadFromMemory_Internal()"));

    return reinterpret_cast<CAssetBundle*(__fastcall*)(WeakArray<uint8_t>*, uint32_t, uint64_t)>(addr)(
        assetBundle, CRC, offset);
}

template <typename T>
inline T* CAssetBundle::LoadAsset(const char* name, Il2CppType* type)
{
    auto str = il2cpp_string_new(name);

    static auto addr = OFF(Offsets::UnityEngine_AssetBundle::Methods::LoadAsset_System_String_name__System_Type_type);
    return ((T * (__thiscall*)(CAssetBundle*, Il2CppString*, Il2CppType*))(addr))(this, str, type);
}
