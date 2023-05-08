#include "lazy_importer.hpp"
#include <Windows.h>

// Prototypes for lazyiporter type forwarding
PVOID RtlAllocateHeap(PVOID HeapHandle, ULONG Flags, SIZE_T Size);
PVOID RtlFreeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress);

#define MALLOC_MAGIC  'MGIC'
#define M_GETPEB      __readgsqword(0x60)
#define M_PROCESSHEAP *reinterpret_cast<void **>(__readgsqword(0x60) + 0x30)

constexpr auto crtbaseModule = LI_MODULE("ucrtbase.dll");

typedef struct _MALLOC_HEADER
{
    ULONG32   Magic;
    ULONG32   _Resv0;
    ULONG_PTR Size;
} MALLOC_HEADER, *PMALLOC_HEADER;

C_ASSERT(sizeof(MALLOC_HEADER) % sizeof(void *) == 0);

PMALLOC_HEADER GET_MALLOC_HEADER(PVOID ptr)
{
    return (MALLOC_HEADER *)((PUCHAR)ptr - sizeof(MALLOC_HEADER));
}

PVOID GET_MALLOC_ADDRESS(PMALLOC_HEADER header)
{
    return (PVOID)((PUCHAR)header + sizeof(MALLOC_HEADER));
}

ULONG_PTR GET_MALLOC_SIZE(PVOID ptr)
{
    static auto _RtlRaiseException = LI_FN(RtlRaiseException).safe();

    PMALLOC_HEADER header          = GET_MALLOC_HEADER(ptr);

    if (header->Magic != MALLOC_MAGIC)
    {
        __debugbreak();
        _RtlRaiseException(nullptr);
    }

    return header->Size;
}

void *__cdecl memset(void *Dst, int Val, size_t Size)
{
    unsigned char *dst = reinterpret_cast<unsigned char *>(Dst);
    while (Size > 0)
    {
        *dst = (unsigned char)Val;
        dst++;
        Size--;
    }
    return Dst;
}

int memcmp(const void *str1, const void *str2, size_t count)
{
    const unsigned char *s1 = (const unsigned char *)str1;
    const unsigned char *s2 = (const unsigned char *)str2;

    while (count-- > 0)
        if (*s1++ != *s2++)
            return s1[-1] < s2[-1] ? -1 : 1;

    return 0;
}

void *memcpy(void *dst, const void *src, size_t n)
{
    char       *pszDest   = (char *)dst;
    const char *pszSource = (const char *)src;
    if ((pszDest != NULL) && (pszSource != NULL))
    {
        while (n) // till cnt
        {
            // Copy byte by byte
            *(pszDest++) = *(pszSource++);
            --n;
        }
    }
    return dst;
}

void const * memchr(void const *s, int c_in, size_t n)
{
    using memchr_t   = void const *(__cdecl *)(void const *s, int c_in, size_t n);
    static auto fn = LI_FN2(memchr, memchr_t).in_safe(crtbaseModule.get());
    return fn(s, c_in, n);
}

#pragma function(memmove)
void *memmove(void *dest, const void *src, size_t n)
{
    static auto fn = LI_FN(memmove).in_safe(crtbaseModule.get());
    return fn(dest, src, n);
}


void *__cdecl malloc(size_t size)
{
    static auto fn = LI_FN(malloc).in_safe(crtbaseModule.get());
    return fn(size);

    //static auto allocateHeap = LI_FN(RtlAllocateHeap).safe();

    //PMALLOC_HEADER mhdr      = NULL;
    //const size_t   new_size  = size + sizeof(MALLOC_HEADER);
    //mhdr                     = (PMALLOC_HEADER)allocateHeap(M_PROCESSHEAP, HEAP_ZERO_MEMORY, new_size);

    //if (mhdr)
    //{
    //    mhdr->Magic = MALLOC_MAGIC;
    //    mhdr->Size  = size;
    //    return GET_MALLOC_ADDRESS(mhdr);
    //}

    //return NULL;
}

void __cdecl free(void *ptr)
{
    static auto fn = LI_FN(free).in_safe(crtbaseModule.get());
    return fn(ptr);



    //if (ptr)
    //{
    //    static auto _RtlRaiseException = LI_FN(RtlRaiseException).safe();
    //    static auto _RtlFreeHeap       = LI_FN(RtlFreeHeap).safe();

    //    MALLOC_HEADER *mhdr            = GET_MALLOC_HEADER(ptr);

    //    if (mhdr->Magic != MALLOC_MAGIC)
    //    {
    //        __debugbreak();
    //        return _RtlRaiseException(nullptr);
    //    }
    //    _RtlFreeHeap(M_PROCESSHEAP, NULL, mhdr);
    //}
}

void *__cdecl realloc(void *ptr, size_t new_size)
{
    static auto fn = LI_FN(realloc).in_safe(crtbaseModule.get());
    return fn(ptr, new_size);

    //if (!ptr)
    //{
    //    return malloc(new_size);
    //}
    //else if (new_size == 0)
    //{
    //    free(ptr);
    //    return NULL;
    //}
    //else
    //{
    //    size_t old_size = GET_MALLOC_SIZE(ptr);

    //    if (new_size <= old_size)
    //    {
    //        return ptr;
    //    }
    //    else
    //    {
    //        void *new_ptr = malloc(new_size);

    //        if (new_ptr)
    //        {
    //            memcpy(new_ptr, ptr, old_size);
    //            free(ptr);
    //            return new_ptr;
    //        }
    //    }
    //}
    //return NULL;
}

void *__cdecl operator new(size_t size)
{
    return malloc(size);
}

void *__cdecl operator new[](size_t size)
{
    return malloc(size);
}

void __cdecl operator delete(void *ptr)
{
    free(ptr);
}

void __cdecl operator delete(void *ptr, size_t)
{
    free(ptr);
}

void __cdecl operator delete[](void *ptr)
{
    free(ptr);
}

void *operator new[](size_t size, const char *, int, unsigned, const char *, int)
{
    return malloc(size);
}

void *operator new[](size_t size, size_t, size_t, const char *, int, unsigned, const char *, int)
{
    return malloc(size);
}
