#pragma once
#include <cstdint>

// Forward declarations to ease compiler
struct Il2CppDomain;
struct MethodInfo;
struct Il2CppClass;
struct Il2CppImage;
struct Il2CppAssembly;
struct Il2CppObject;
struct Il2CppAssembly;
struct Il2CppString;
struct Il2CppArray;
struct Il2CppString;
struct Il2CppType;

inline Il2CppDomain*          il2cpp_domain_get();
inline const MethodInfo*      il2cpp_class_get_methods(Il2CppClass* klass, void** iter);
inline uint32_t               il2cpp_method_get_param_count(const MethodInfo* method);
inline const Il2CppImage*     il2cpp_assembly_get_image(const Il2CppAssembly* assembly);
inline const Il2CppAssembly** il2cpp_domain_get_assemblies(const Il2CppDomain* domain, size_t* size);
inline Il2CppObject*          il2cpp_object_new(const Il2CppClass* klass);
inline Il2CppClass*           il2cpp_class_from_name(const Il2CppImage* image, const char* namespaze, const char* name);
inline void*                  il2cpp_resolve_icall(const char* name);
inline void                   il2cpp_runtime_class_init(Il2CppClass* klass);
inline Il2CppString*          il2cpp_string_new(const char* str);
inline Il2CppArray*           il2cpp_array_new_specific(Il2CppClass* arrayTypeInfo, uintptr_t length);
inline const Il2CppType*      il2cpp_class_get_type(Il2CppClass* klass);
inline Il2CppObject*          il2cpp_type_get_object(const Il2CppType* type);
