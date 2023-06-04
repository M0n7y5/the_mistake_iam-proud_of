#pragma once
#include <cstdint>

// Forward declarations to ease compiler
struct Il2CppDomain;
struct MethodInfo;
struct Il2CppClass;
struct Il2CppImage;
struct Il2CppAssembly;
struct Il2CppObject;
struct Il2CppString;
struct Il2CppArray;
struct Il2CppString;
struct Il2CppType;

typedef struct Il2CppAssemblyName
{
    const char*   name;
    const char*   culture;
    const char*   hash_value;
    const char*   public_key;
    unsigned int  hash_alg;
    int           hash_len;
    unsigned int  flags;
    int           major;
    int           minor;
    int           build;
    int           revision;
    unsigned char public_key_token[8];
} Il2CppAssemblyName;

typedef struct Il2CppAssembly
{
    Il2CppImage*       image;
    unsigned int       token;
    int                referencedAssemblyStart;
    int                referencedAssemblyCount;
    Il2CppAssemblyName aname;
} Il2CppAssembly;

Il2CppDomain*          il2cpp_domain_get();
MethodInfo*            il2cpp_class_get_methods(Il2CppClass* klass, void** iter);
uint32_t               il2cpp_method_get_param_count(const MethodInfo* method);
const Il2CppImage*     il2cpp_assembly_get_image(const Il2CppAssembly* assembly);
const Il2CppAssembly** il2cpp_domain_get_assemblies(const Il2CppDomain* domain, size_t* size);
Il2CppObject*          il2cpp_object_new(const Il2CppClass* klass);
Il2CppClass*           il2cpp_class_from_name(const Il2CppImage* image, const char* namespaze, const char* name);
void*                  il2cpp_resolve_icall(const char* name);
void                   il2cpp_runtime_class_init(Il2CppClass* klass);
Il2CppString*          il2cpp_string_new(const char* str);
Il2CppArray*           il2cpp_array_new_specific(Il2CppClass* arrayTypeInfo, uintptr_t length);
const Il2CppType*      il2cpp_class_get_type(Il2CppClass* klass);
Il2CppObject*          il2cpp_type_get_object(const Il2CppType* type);
const char*            il2cpp_method_get_param_name(const MethodInfo* method, uint32_t index);

namespace il2cpp
{
    Il2CppClass* InitClass(const char* name, const char* name_space = "");

    MethodInfo* GetMethod(
        Il2CppClass* klass, const char* name, int argCount = -1, const char* argName = nullptr, int selectedArg = -1);

    MethodInfo* GetMethod(
        const char* klassName, const char* name, int argCount = -1, const char* argName = "",
        const char* nameSpace = "", int selectedArg = -1);

    uintptr_t HookVirtualFunction(Il2CppClass* klass, const char* methodName, void* hook, const char* name_space = "");

    uintptr_t HookVirtualFunction(
        const char* classname, const char* function_to_hook, void* our_func, const char* name_space = "");

    uintptr_t HookVirtualFunction(uint64_t start, uint64_t search, void* our_func);
} // namespace il2cpp
