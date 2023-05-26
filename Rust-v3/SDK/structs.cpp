#include "structs.h"
#include "il2cpp_api.h"
#include "Offsets.h"
#include "../Kotlar/Kotlar.h"
#include "globals.h"

Il2CppString* Il2CppString::newString(char* text)
{
    return il2cpp_string_new((const char*)text);
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
