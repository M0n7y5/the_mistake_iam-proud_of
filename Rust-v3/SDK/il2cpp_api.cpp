#include "il2cpp.h"
#include "il2cpp_api.h"
#include "../mrt/lazy_importer.hpp"

constexpr static auto mod = LI_MODULE("GameAssembly.dll");

Il2CppDomain *il2cpp_domain_get()
{
    return LI_FN(il2cpp_domain_get).in_safe_cached(mod)();
}

inline const MethodInfo *il2cpp_class_get_methods(Il2CppClass *klass, void **iter)
{
    return LI_FN(il2cpp_class_get_methods).in_safe_cached(mod)(klass, iter);
}

inline uint32_t il2cpp_method_get_param_count(const MethodInfo *method)
{
    return LI_FN(il2cpp_method_get_param_count).in_safe_cached(mod)(method);
}

inline const Il2CppImage *il2cpp_assembly_get_image(const Il2CppAssembly *assembly)
{
    return LI_FN(il2cpp_assembly_get_image).in_safe_cached(mod)(assembly);
}

inline const Il2CppAssembly **il2cpp_domain_get_assemblies(const Il2CppDomain *domain, size_t *size)
{
    return LI_FN(il2cpp_domain_get_assemblies).in_safe_cached(mod)(domain, size);
}

inline Il2CppObject *il2cpp_object_new(const Il2CppClass *klass)
{
    return LI_FN(il2cpp_object_new).in_safe_cached(mod)(klass);
}

inline Il2CppClass *il2cpp_class_from_name(const Il2CppImage *image, const char *namespaze, const char *name)
{
    return LI_FN(il2cpp_class_from_name).in_safe_cached(mod)(image, namespaze, name);
}

inline void *il2cpp_resolve_icall(const char *name)
{
    return LI_FN(il2cpp_resolve_icall).in_safe_cached(mod)(name);
}

inline void il2cpp_runtime_class_init(Il2CppClass *klass)
{ 
    return LI_FN(il2cpp_runtime_class_init).in_safe_cached(mod)(klass);
}

inline Il2CppString *il2cpp_string_new(const char *str)
{
    return LI_FN(il2cpp_string_new).in_safe_cached(mod)(str);
}

inline Il2CppArray *il2cpp_array_new_specific(Il2CppClass *arrayTypeInfo, uintptr_t length)
{
    return LI_FN(il2cpp_array_new_specific).in_safe_cached(mod)(arrayTypeInfo, length);
}

inline const Il2CppType *il2cpp_class_get_type(Il2CppClass *klass)
{
    return LI_FN(il2cpp_class_get_type).in_safe_cached(mod)(klass);
}

inline Il2CppObject *il2cpp_type_get_object(const Il2CppType *type)
{
    return LI_FN(il2cpp_type_get_object).in_safe_cached(mod)(type);
}
