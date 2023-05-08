#pragma once
#include <cstdint>

#ifdef MRT_ENABLED

    #define MinimumUserAddress (uint64_t)0xffffff
    #define MaximumUserAddress (uint64_t)0x00007FFFFFFFFFFF

template <typename T> inline bool IsAddressValid(T address)
{
    return (
        (uint64_t)(address) >= (uint64_t)(MinimumUserAddress) && (uint64_t)(address) <= (uint64_t)(MaximumUserAddress));
}

    #ifdef __cplusplus
extern "C"
{
    #endif // __cplusplus

    int __cdecl _cinit(void);
    void __cdecl _cexit(void);
    void __cdecl _cinitfs(void);

    typedef void(__cdecl *_PVFV)(void);
    typedef int(__cdecl *_PIFV)(void);

    int __cdecl atexit(_PVFV func);

    void __cdecl free(void *ptr);
    void *__cdecl malloc(size_t size); // PagedPool

    // int __cdecl rand();

    // double __cdecl abs(double x) noexcept;
    // void* __cdecl memcpy(void* dst, const void* src, size_t cnt);

    #ifdef __cplusplus
}
    #endif // __cplusplus

#endif // MRT_ENABLED
