#include "il2cpp_api.h"
#include "il2cpp.h"
#include "globals.h"
#include "../mrt/lazy_importer.hpp"
#include "../mrt/logging.h"
#include "../mrt/scanner.h"
#include <algorithm>
#include <cstring>
#include <iterator>
#include <vadefs.h>
#include "mem.h"
#include <vector>
#include <span>
#include <ranges>

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

void il2cpp::InitializeData(void* ptr)
{
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

    reinterpret_cast<void (*)(void*)>(initClass)(ptr);
}

void MethodInfoInitStub(void* adr);

void il2cpp::InitializeMethodInfo(void* ptr)
{
    static auto methodInfoInitAdr =
        Forza::IDAScan((void*)G::baseGameAssemlby,
                       _("E8 ?? ?? ?? ?? 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? C6 05 ?? ?? ?? ?? ?? 4C 8B 0D ?? ?? ?? ?? "
                         "4C 8B C3 48 8B 15 ?? ?? ?? ?? 48 8B CF 48 8B 5C 24 30 48 83 C4 20 5F E9"));

    static auto methodIniter = reinterpret_cast<decltype(&MethodInfoInitStub)>(mem::ResolveCall(methodInfoInitAdr));
    methodIniter(ptr);
}

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

        InitializeData(kl);

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

MethodInfo* il2cpp::GetMethod(const char* klassName, const char* name, int argCount, const char* argName,
                              const char* nameSpace, int selectedArg)
{
    auto klass = InitClass(klassName, nameSpace);
    if (!klass)
        return NULL;

    return GetMethod(klass, name, argCount, argName, selectedArg);
}

std::vector<Il2CppMethodPointer> existingHooks{};

uintptr_t il2cpp::HookVirtualFunction(Il2CppClass* _klass, const char* methodName, void* hook, bool forceDirectHook,
                                      const char* name_space)
{
    auto klass = _klass;

    MethodInfo* m = il2cpp::GetMethod(klass, methodName);
    if (m == nullptr)
    {
#ifdef _DEBUG
        L::Print<L::RedInstense>("Method not found! Name: {}, Class: {}", methodName, klass->_1.name);
        L::Print<L::Yellow>("Atempting to search in subclasses");
#endif
        bool vFound = false;

        std::span<Il2CppClass*> sp(klass->_2.typeHierarchy, klass->_2.typeHierarchyDepth);

        int idx = 0;
        for (auto kl : std::ranges::reverse_view(sp))
        {

#ifdef _DEBUG
            L::Print("IDX: {}, Klass: {}", idx++, kl->_1.name);
#endif
            m = il2cpp::GetMethod(kl, methodName);

            if (m == nullptr)
                continue;

            else
            {
#ifdef _DEBUG
                L::Print<L::BlueInstense>("Found in subclass {}. debugbreak...", kl->_1.name);
#endif
                klass = InitClass(kl->_1.name);
                m     = il2cpp::GetMethod(kl, methodName);

                __debugbreak();

                vFound = true;

                break;
            };
        }

        // for (int i = 0; i < klass->_2.vtable_count; i++)
        // {
        //     auto virtualMethod = klass->vtable[i];

        //     L::Print("Index: {}, Name: {}", i, virtualMethod.method->name);

        //     if (strcmp(methodName, virtualMethod.method->name) == 0)
        //     {

        //         L::PushConsoleColor(FOREGROUND_INTENSE_YELLOW);
        //         L::Print("Method hooked directly from VTable! Orignal "
        //                  "0x{:X}, VOriginal 0x{:X}, Hook 0x{:X}",
        //                  (uintptr_t)virtualMethod.methodPtr,
        //                  (uintptr_t)virtualMethod.method->virtualMethodPointer,
        //                  (uintptr_t)hook);
        //         L::PopConsoleColor();

        //         // virtualMethod.methodPtr = (Il2CppMethodPointer)hook;

        //         auto met = (MethodInfo*)virtualMethod.method;
        //         if (met->methodPointer == met->virtualMethodPointer)
        //         {
        //             auto orig                 = (uintptr_t)met->methodPointer;
        //             met->methodPointer        = (Il2CppMethodPointer)hook;
        //             met->virtualMethodPointer = (Il2CppMethodPointer)hook;
        //             return orig;
        //         }
        //     }
        // }

        if (!vFound)
        {
            return 0;
        }
    }

#ifdef _DEBUG
    L::Print("Attempt to hook method {} in class {} VTABLE ...", methodName, klass->_1.name);
#endif

    //     auto search = *(uintptr_t*)m;
    //     auto serr   = (uintptr_t)m->methodPointer;
    //     auto table  = (uintptr_t)klass;
    //     bool lll    = false;
    //     for (uintptr_t i = table; i <= table + 0x1500; i += 0x1)
    //     {
    //         VirtualInvokeData* tmp = (VirtualInvokeData*)i;

    //         uintptr_t addr = *reinterpret_cast<uintptr_t*>(i);
    //         if (addr == (uintptr_t)search)
    //         {
    // #ifdef _DEBUG
    //             L::Print("Method found! Orignal 0x{:X}, Hook 0x{:X}", addr, (uintptr_t)hook);
    // #endif
    //             lll                              = true;
    //             *reinterpret_cast<uintptr_t*>(i) = (uintptr_t)hook;
    //             return search;
    //             // return i;
    //         }
    //     }

    std::span<VirtualInvokeData> vtable(klass->vtable, klass->_2.vtable_count);

    for (auto& vInvoke : vtable)
    {
        if (strcmp(vInvoke.method->name, methodName) == 0)
        {
            auto original = (uintptr_t)vInvoke.methodPtr;

#ifdef _DEBUG
            L::Print<L::GreenInstense>("Method found! Orignal 0x{:X}, Hook 0x{:X}", (uintptr_t)vInvoke.methodPtr,
                                       (uintptr_t)hook);
#endif

            if (std::find(existingHooks.begin(), existingHooks.end(), m->methodPointer) != existingHooks.end())
            {
#ifdef _DEBUG
                L::Print<L::RedInstense>("Attempt to hook already VTABLE hooked method {} in class {}. debugbreak ...",
                                         methodName, klass->_1.name);
#endif
                __debugbreak();

                return 0;
            }

            vInvoke.methodPtr = (Il2CppMethodPointer)hook;
            existingHooks.emplace_back((Il2CppMethodPointer)hook);

            if (!forceDirectHook)
            {
                return original;
            }
            else
            {
#ifdef _DEBUG
                L::Print<L::YellowInstense>("DirectHookForce ENABLED -> DIRECTHOOK! "
                                            "Orignal 0x{:X}, Hook 0x{:X}",
                                            (uintptr_t)m->methodPointer, (uintptr_t)hook);
#endif

                if (std::find(existingHooks.begin(), existingHooks.end(), m->methodPointer) != existingHooks.end())
                {
#ifdef _DEBUG
                    L::Print<L::RedInstense>("Attempt to hook already DIRECT hooked method {} in "
                                             "class {}. debugbreak ...",
                                             methodName, klass->_1.name);
#endif
                    __debugbreak();

                    return 0;
                }

                // if (m->methodPointer == m->virtualMethodPointer)
                // {
                //     m->virtualMethodPointer = (Il2CppMethodPointer)hook;
                // }
                // else
                // {
                //     L::Print<L::MagentaInstense>(
                //         "MethodPtr vs VirtualMethodPtr DIFF: 0x{:X} - 0x{:X}", methodName,
                //         klass->_1.name);
                // }
                m->methodPointer = (Il2CppMethodPointer)hook;

                existingHooks.emplace_back((Il2CppMethodPointer)hook);
                return original;
            }
        }
    }

#ifdef _DEBUG
    L::Print<L::YellowInstense>("Method not found in VTable Attempting to hook methodpointer DIRECTLY! Orignal "
                                "0x{:X}, Hook 0x{:X}",
                                (uintptr_t)m->methodPointer, (uintptr_t)hook);
#endif

    if (std::find(existingHooks.begin(), existingHooks.end(), m->methodPointer) != existingHooks.end())
    {
#ifdef _DEBUG
        L::Print<L::RedInstense>("Attempt to hook already DIRECT hooked method {} in class {}. debugbreak ...",
                                 methodName, klass->_1.name);
#endif
        __debugbreak();

        return 0;
    }

    // maybe shit is not in vtable ... like Update or LateUpdate methods
    auto orig = (uintptr_t)m->methodPointer;

    // if (m->methodPointer == m->virtualMethodPointer)
    // {
    //     m->virtualMethodPointer = (Il2CppMethodPointer)hook;
    // }
    // else
    // {
    //     L::Print<L::MagentaInstense>("MethodPtr vs VirtualMethodPtr DIFF: 0x{:X} - 0x{:X}",
    //                                  methodName, klass->_1.name);
    // }

    m->methodPointer = (Il2CppMethodPointer)hook;
    existingHooks.emplace_back((Il2CppMethodPointer)hook);
    return orig;
}

uintptr_t il2cpp::HookVirtualFunction(const char* classname, const char* function_to_hook, void* our_func,
                                      const char* name_space)
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

bool il2cpp::InheritsFrom(Il2CppClass* klass, const char* klassName)
{
    std::span<Il2CppClass*> sp(klass->_2.typeHierarchy, klass->_2.typeHierarchyDepth);

    for (auto kl : std::ranges::reverse_view(sp))
    {
        if (strcmp(kl->_1.name, klassName) == 0)
            return true;
    }

    return false;
}