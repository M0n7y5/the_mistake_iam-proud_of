#include "lazy_importer.hpp"
#include "../SDK/mem.h"
#include "scanner.h"
#include "fnv1a.hpp"
#include "xorstr.hpp"
#include <cstdint>

#ifdef MRT_ENABLED

// // Prototypes for lazyiporter type forwarding
// PVOID RtlAllocateHeap(PVOID HeapHandle, ULONG Flags, SIZE_T Size);
// PVOID RtlFreeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress);

//     #define MALLOC_MAGIC  'MGIC'
//     #define M_GETPEB      __readgsqword(0x60)
//     #define M_PROCESSHEAP *reinterpret_cast<void **>(__readgsqword(0x60) + 0x30)

// constexpr auto crtbaseModule = LI_MODULE("ucrtbase.dll");

#define EX_FUNC(func, module, pattern)                                                                                 \
    []() -> decltype(&func) {                                                                                          \
        auto mod    = (void*)mem::GetModuleAddressEX(HASH_CTIME(module));                                              \
        auto result = Forza::IDAScan(mod, _(pattern));                                                                 \
        return reinterpret_cast<decltype(&func)>(result);                                                              \
    }()

typedef struct _MALLOC_HEADER
{
    unsigned int       Magic;
    unsigned int       _Resv0;
    unsigned long long Size;
} MALLOC_HEADER, *PMALLOC_HEADER;

#define MALLOC_MAGIC               'MIGC'
#define GET_MALLOC_ADDRESS(header) (void*)((unsigned char*)header + sizeof(MALLOC_HEADER))
#define GET_MALLOC_HEADER(ptr)     ((MALLOC_HEADER*)((unsigned char*)ptr - sizeof(MALLOC_HEADER)))
#define GET_MALLOC_SIZE(ptr)       GET_MALLOC_HEADER(ptr)->Size
#define M_GETPEB                   __readgsqword(0x60)
#define M_PROCESSHEAP              *reinterpret_cast<void**>(__readgsqword(0x60) + 0x30)

#define EXCEPTION_MAXIMUM_PARAMETERS 15 // maximum number of exception parameters

// Exception record definition.

typedef struct _EXCEPTION_RECORD
{
    unsigned long             ExceptionCode;
    unsigned long             ExceptionFlags;
    struct _EXCEPTION_RECORD* ExceptionRecord;
    void*                     ExceptionAddress;
    unsigned long             NumberParameters;
    unsigned long long        ExceptionInformation[EXCEPTION_MAXIMUM_PARAMETERS];
} EXCEPTION_RECORD;

typedef EXCEPTION_RECORD* PEXCEPTION_RECORD;

extern "C" void* __cdecl memset(void* Dst, int Val, size_t Size)
{
    // 4C 8B D9 0F B6 D2
    // static auto fn = EX_FUNC(memset, L"UnityPlayer.dll", "4C 8B D9 0F B6 D2");
    // return fn(dst, Val, Size);

    unsigned char* dst = reinterpret_cast<unsigned char*>(Dst);
    while (Size > 0)
    {
        *dst = (unsigned char)Val;
        dst++;
        Size--;
    }
    return Dst;
}

extern "C" int __cdecl memcmp(const void* str1, const void* str2, size_t count)
{
    // static auto fn = EX_FUNC(memcmp, L"UnityPlayer.dll", "48 8B C1 48 F7 D9 48 A9");
    // return fn(str1, str2, count);

    const unsigned char* s1 = (const unsigned char*)str1;
    const unsigned char* s2 = (const unsigned char*)str2;

    while (count-- > 0)
        if (*s1++ != *s2++)
            return s1[-1] < s2[-1] ? -1 : 1;

    return 0;
}

extern "C" void* __cdecl memcpy(void* dst, const void* src, size_t len)
{
    auto _dst = static_cast<char*>(dst);
    auto _src = static_cast<const char*>(src);

    while (len--)
    {
        *_dst++ = *_src++;
    }

    return dst;
}

extern "C" void const* __cdecl memchrMy(void const* src, int chr, size_t len);

extern "C" void const* __cdecl memchr(void const* src, int chr, size_t len)
{
    // static auto fn = EX_FUNC(memchrMy, L"UnityPlayer.dll", "49 83 F8 ? 72 ? 0F B6 D2");
    // return fn(src, chr, len);

    auto _src = static_cast<const unsigned char*>(src);

    while (len-- > 0)
    {
        if (*_src == chr)
        {
            return static_cast<const void*>(_src);
        }

        _src++;
    }

    return 0;
}

extern "C" void* __cdecl memmove(void* dst, const void* src, size_t len)
{
    // static auto fn = EX_FUNC(memmove, L"UnityPlayer.dll", "4C 8B D9 4C 8B D2 49 83 F8");
    // return fn(dst, src, len);

    auto _dst = static_cast<char*>(dst);

    auto _src = const_cast<char*>(static_cast<const char*>(src));

    if (_dst < _src)
    {
        while (len--)
        {
            *_dst++ = *_src++;
        }
    }
    else
    {
        auto last_src = _src + (len - 1);
        auto last_dst = _dst + (len - 1);

        while (len--)
        {
            *last_dst-- = *last_src--;
        }
    }

    return dst;
}

void* __stdcall RtlAllocateHeap(void*, unsigned long, size_t);
void* __stdcall RtlFreeHeap(void*, unsigned long, void*);
void __stdcall RtlRaiseException(PEXCEPTION_RECORD);

extern "C" void* __cdecl malloc(size_t size)
{
    // static auto fn = LI_FN(malloc).in_safe(crtbaseModule.get());
    // PMALLOC_HEADER mhdr     = NULL;
    // const size_t   new_size = size + sizeof(MALLOC_HEADER);

    // mhdr = (PMALLOC_HEADER)LI_FN(RtlAllocateHeap).nt_cached()(M_PROCESSHEAP, 0x00000008, new_size);
    // if (mhdr)
    // {
    //     mhdr->Magic = MALLOC_MAGIC;
    //     mhdr->Size  = size;
    //     return GET_MALLOC_ADDRESS(mhdr);
    // }
    // return nullptr;

    // static auto fn = []() -> decltype(&malloc) {

    // }();

    // static auto mod    = (void*)mem ::GetModuleAddressEX(Ryb<CompileTimeFnv1aHash(L"UnityPlayer.dll")>::value);
    // static auto result = Forza ::IDAScan(mod, "40 53 48 83 EC ? 48 8B D9 48 83 F9");
    // auto        fn     = reinterpret_cast<decltype(&malloc)>(result);

    static auto fn = EX_FUNC(malloc, L"UnityPlayer.dll", "40 53 48 83 EC ? 48 8B D9 48 83 F9");

    return fn(size);
}

extern "C" void __cdecl free(void* block)
{
    // auto ss = block;
    // LI_FN(RtlFreeHeap).nt_cached()(M_PROCESSHEAP, 0, GET_MALLOC_HEADER(ss));

    static auto fn = EX_FUNC(free, L"UnityPlayer.dll", "C7 44 24 ? ? ? ? ? 8B 44 24 ? E9 ? ? ? ? CC");
    fn(block);
}

extern "C" void* __cdecl realloc(void* block, size_t size)
{
    // if (!block)
    //     return malloc(size);
    // else if (size == 0)
    // {
    //     free(block);
    //     return nullptr;
    // }
    // else
    // {
    //     size_t old_size = GET_MALLOC_SIZE(block);
    //     if (size <= old_size)
    //         return block;
    //     else
    //     {
    //         void* new_ptr = malloc(size);
    //         if (new_ptr)
    //         {
    //             memcpy(new_ptr, block, old_size);
    //             free(block);
    //             return new_ptr;
    //         }
    //     }
    // }
    // return nullptr;

    static auto fn =
        EX_FUNC(realloc, L"UnityPlayer.dll", "48 89 5C 24 ? 57 48 83 EC ? 48 8B DA 48 8B F9 48 85 C9 75 ? 48 8B CA");
    return fn(block, size);
}

void* __cdecl operator new(size_t size)
{
    return malloc(size);
}

void* __cdecl operator new[](size_t size)
{
    return malloc(size);
}

void __cdecl operator delete(void* ptr) noexcept
{
    free(ptr);
}

void __cdecl operator delete(void* ptr, size_t) noexcept
{
    free(ptr);
}

void __cdecl operator delete[](void* ptr) noexcept
{
    free(ptr);
}

void* operator new[](size_t size, const char*, int, unsigned, const char*, int)
{
    return malloc(size);
}

void* operator new[](size_t size, size_t, size_t, const char*, int, unsigned, const char*, int)
{
    return malloc(size);
}

#endif // MRT_ENABLED
