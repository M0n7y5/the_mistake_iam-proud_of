#include "il2cpp_api.h"
#include "il2cpp.h"
#include "../mrt/lazy_importer.hpp"
#include "../mrt/logging.h"
#include <cstring>
#include "mem.h"
constexpr static auto mod = LI_MODULE("GameAssembly.dll");

Il2CppDomain* il2cpp_domain_get()
{
    return LI_FN(il2cpp_domain_get).in_safe_cached(mod.get())();
}

MethodInfo* il2cpp_class_get_methods(Il2CppClass* klass, void** iter)
{
    return LI_FN(il2cpp_class_get_methods).in_safe_cached(mod.get())(klass, iter);
}

uint32_t il2cpp_method_get_param_count(const MethodInfo* method)
{
    return LI_FN(il2cpp_method_get_param_count).in_safe_cached(mod.get())(method);
}

const Il2CppImage* il2cpp_assembly_get_image(const Il2CppAssembly* assembly)
{
    return LI_FN(il2cpp_assembly_get_image).in_safe_cached(mod.get())(assembly);
}

const Il2CppAssembly** il2cpp_domain_get_assemblies(const Il2CppDomain* domain, size_t* size)
{
    return LI_FN(il2cpp_domain_get_assemblies).in_safe_cached(mod.get())(domain, size);
}

Il2CppObject* il2cpp_object_new(const Il2CppClass* klass)
{
    return LI_FN(il2cpp_object_new).in_safe_cached(mod.get())(klass);
}

Il2CppClass* il2cpp_class_from_name(const Il2CppImage* image, const char* namespaze, const char* name)
{
    return LI_FN(il2cpp_class_from_name).in_safe_cached(mod.get())(image, namespaze, name);
}

void* il2cpp_resolve_icall(const char* name)
{
    return LI_FN(il2cpp_resolve_icall).in_safe_cached(mod.get())(name);
}

void il2cpp_runtime_class_init(Il2CppClass* klass)
{
    return LI_FN(il2cpp_runtime_class_init).in_safe_cached(mod.get())(klass);
}

Il2CppString* il2cpp_string_new(const char* str)
{
    return LI_FN(il2cpp_string_new).in_safe_cached(mod.get())(str);
}

Il2CppArray* il2cpp_array_new_specific(Il2CppClass* arrayTypeInfo, uintptr_t length)
{
    return LI_FN(il2cpp_array_new_specific).in_safe_cached(mod.get())(arrayTypeInfo, length);
}

Il2CppType* il2cpp_class_get_type(Il2CppClass* klass)
{
    return LI_FN(il2cpp_class_get_type).in_safe_cached(mod.get())(klass);
}

Il2CppObject* il2cpp_type_get_object(const Il2CppType* type)
{
    return LI_FN(il2cpp_type_get_object).in_safe_cached(mod.get())(type);
}

const char* il2cpp_method_get_param_name(const MethodInfo* method, uint32_t index)
{
    return LI_FN(il2cpp_method_get_param_name).in_safe_cached(mod.get())(method, index);
}

void il2cpp_class_get_bitmap();

Il2CppClass* il2cpp::InitClass(const char* name, const char* name_space)
{
    auto domain = il2cpp_domain_get();

    uintptr_t nrofassemblies = 0;
    auto      assemblies     = il2cpp_domain_get_assemblies(domain, &nrofassemblies);

    for (int i = 0; i < nrofassemblies; i++)
    {
        auto img = assemblies[i]->image; // methods::assembly_get_image(assemblies[i]);
        auto kl  = il2cpp_class_from_name(img, name_space, name);
        if (!kl)
            continue;

        static void* initClass = nullptr;
        if (!initClass)
        {
            uint64_t     found     = 0;
            uint64_t     imageSize = 0x20;
            static void* getBitmap = LI_FN(il2cpp_class_get_bitmap).in_safe(mod.get());
            //(void*)mem::FindExportedFunction(module::assembly,
            // XS("il2cpp_class_get_bitmap"));
            mem::ScanPattern((unsigned char*)("\xE8"), 0xCC, 1, (uintptr_t)getBitmap, imageSize, &found);
            uint64_t firstMethod = mem::ResolveCall<uint64_t>((uint8_t*)found);
            mem::ScanPattern((unsigned char*)("\xE8"), 0xCC, 1, (uintptr_t)firstMethod, imageSize, &found);
            uint64_t initMethod = mem::ResolveCall<uint64_t>((uint8_t*)found);

            initClass = (void*)initMethod;
        }

        reinterpret_cast<void (*)(void*)>(initClass)(kl);

        return kl;
    }
    return 0;
}

MethodInfo* il2cpp::GetMethod(Il2CppClass* klass, const char* name, int argCount, const char* argName, int selectedArg)
{
    void* iter = 0;
    while (auto f = il2cpp_class_get_methods(klass, &iter))
    {
        auto st = f->name;

        if (strcmp(st, name) == 0)
        {
            int methodArgCount = f->parameters_count;

            if (argCount >= 0 && methodArgCount != argCount)
                continue;

            if (selectedArg >= 0 && argName)
            {
                if (selectedArg > methodArgCount || (argCount >= 0 && methodArgCount != argCount))
                    continue;

                // uintptr_t args = *(uintptr_t*)(f + 0x28);
                auto argname = il2cpp_method_get_param_name(f, selectedArg - 1);
                //*reinterpret_cast<char**>(args + (selectedArg - 1) * 0x18);

                if (!argname || strcmp(argname, argName) != 0)
                    continue;
            }

            return f;
        }
    }

    return nullptr;
}

MethodInfo* il2cpp::GetMethod(
    const char* klassName, const char* name, int argCount, const char* argName, const char* nameSpace, int selectedArg)
{
    auto klass = InitClass(klassName, nameSpace);
    if (!klass)
        return NULL;

    return GetMethod(klass, name, argCount, argName, selectedArg);
}

/// <summary>
/// This will return original method
/// </summary>
/// <param name="klass"></param>
/// <param name="methodName"></param>
/// <param name="hook"></param>
/// <param name="name_space"></param>
/// <returns></returns>
uintptr_t il2cpp::HookVirtualFunction(Il2CppClass* klass, const char* methodName, void* hook, const char* name_space)
{
    MethodInfo* m      = il2cpp::GetMethod(klass, methodName);
    auto        search = *(uintptr_t*)m;
    auto        table  = (uintptr_t)klass;

#ifdef _DEBUG
    L::PushConsoleColor(FOREGROUND_INTENSE_YELLOW);
    L::Print("Attempt to hook method {} in class {} ...", methodName, klass->_1.name);
    L::PopConsoleColor();
#endif

    if (m == nullptr)
    {
#ifdef _DEBUG
        L::PushConsoleColor(FOREGROUND_INTENSE_RED);
        L::Print("Method was not found!", methodName, klass->_1.name);
        L::PopConsoleColor();
#endif
        return 0;
    }

    if (search == (uintptr_t)hook)
        return (uintptr_t)hook;

    for (uintptr_t i = table; i <= table + 0x1500; i += 0x1)
    {
        const MethodInfo* tmp = (const MethodInfo*)i;

        uintptr_t addr = *reinterpret_cast<uintptr_t*>(i);
        if (addr == (uintptr_t)search)
        {
#ifdef _DEBUG
            L::PushConsoleColor(FOREGROUND_INTENSE_GREEN);
            L::Print("Method found! Orignal 0x{:X}, Hook 0x{:X}", addr, (uintptr_t)hook);
            L::PopConsoleColor();
#endif

            *reinterpret_cast<uintptr_t*>(i) = (uintptr_t)hook;
            return search;
            // return i;
        }
    }

#ifdef _DEBUG
    L::PushConsoleColor(FOREGROUND_INTENSE_YELLOW);
    L::Print("Method not found in VTable Attempting to hook methodpointer directly! Orignal 0x{:X}, Hook 0x{:X}",
        (uintptr_t)m->methodPointer, (uintptr_t)hook);
    L::PopConsoleColor();
#endif

    // maybe shit is not in vtable ... like Update or LateUpdate methods
    auto orig        = (uintptr_t)m->methodPointer;
    m->methodPointer = (Il2CppMethodPointer)hook;

    return orig;
}

uintptr_t il2cpp::HookVirtualFunction(
    const char* classname, const char* function_to_hook, void* our_func, const char* name_space)
{
    auto search = (uintptr_t)il2cpp::GetMethod(classname, function_to_hook, -1, "", name_space);
    auto table  = (uintptr_t)il2cpp::InitClass(classname, name_space);

    if (search == (uintptr_t)our_func)
        return (uintptr_t)our_func;

    for (uintptr_t i = table; i <= table + 0x1500; i += 0x1)
    {
        uintptr_t addr = *reinterpret_cast<uintptr_t*>(i);
        if (addr == search)
        {
            *reinterpret_cast<uintptr_t*>(i) = (uintptr_t)our_func;
            return i;
        }
    }

    return NULL;
}

uintptr_t il2cpp::HookVirtualFunction(uint64_t start, uint64_t search, void* our_func)
{
    for (uint64_t i = start; i <= start + 0x10000; i += 0x1)
    {
        uint64_t addr = *reinterpret_cast<uint64_t*>(i);
        if (addr == search)
        {
            *reinterpret_cast<void**>(i) = our_func;
            return i;
        }
    }

    return NULL;
}
