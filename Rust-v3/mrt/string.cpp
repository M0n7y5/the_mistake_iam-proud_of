
#ifdef MRT_ENABLED
#include "lazy_importer.hpp"
#include <stdio.h>
#include "scanner.h"
#include "fnv1a.hpp"
#include "xorstr.hpp"
#include "../SDK/mem.h"
#include "string.hpp"
#undef _isctype

#define EX_FUNC(func, module, pattern)                                                                                 \
    []() -> decltype(&func) {                                                                                          \
        auto mod    = (void*)mem::GetModuleAddressEX(HASH_CTIME(module));                                              \
        auto result = Forza::IDAScan(mod, _(pattern));                                                                 \
        return reinterpret_cast<decltype(&func)>(result);                                                              \
    }()

// constexpr auto crtbaseModule = LI_MODULE("ucrtbase.dll");

extern "C" int __cdecl __stdio_common_vsprintf_s(unsigned __int64 const options, char* const buffer,
                                                 size_t const buffer_count, char const* const format, _locale_t locale,
                                                 va_list const arglist)
{
    // 40 53 48 83 EC ? 48 8B DA 4D 85 C9
    static auto fn = EX_FUNC(__stdio_common_vsprintf_s, L"UnityPlayer.dll", "40 53 48 83 EC ? 48 8B DA 4D 85 C9");
    // return fn(dst, Val, Size);

    // static auto fns = LI_FN(_vsnprintf_s_l).safe();
    return fn(options, buffer, buffer_count, format, locale, arglist);
}

extern "C" int __cdecl __stdio_common_vsscanf(unsigned __int64 _Options, char const* _Buffer, size_t _BufferCount,
                                              char const* _Format, _locale_t _Locale, va_list _ArgList)
{
    // static auto fn = LI_FN(__stdio_common_vsscanf).in_safe(crtbaseModule.get());
    static auto fn = EX_FUNC(__stdio_common_vsscanf, L"UnityPlayer.dll",
                             "48 89 5C 24 ? 48 89 74 24 ? 55 57 41 56 48 8D 6C 24 ? 48 81 EC ? ? ? ? 48 8B 05");

    return fn(_Options, _Buffer, _BufferCount, _Format, _Locale, _ArgList);
}

extern "C"
{
    const char* strstr(const char* str, const char* search)
    {
        return crt::tcsstr(str, search);
    }

    int islower(int value)
    {
        return crt::tcislower(value);
    }

    int isupper(int value)
    {
        return crt::tcisupper(value);
    }

    int toupper(int value)
    {
        return crt::tctoupper(value);
    }

    int tolower(int value)
    {
        return crt::tctolower(value);
    }

    int isspace(int value)
    {
        return crt::tcisspace(value);
    }

    int isalpha(int value)
    {
        return crt::tcisalpha(value);
    }

    int isdigit(int c)
    {
        return (c >= '0' && c <= '9');
    }
}

extern "C" __cdecl unsigned long strtoul(const char* nptr, char** endptr, int base)
{
    // static auto fn = LI_FN(strtoul).in_safe(crtbaseModule.get());
    // return fn(nptr, endptr, base);
    return crt::strtoul(nptr, endptr, base);
}

extern "C" __cdecl int strcmp(const char* s1, const char* s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}

extern "C" __cdecl int strncmp(const char* str1, const char* str2, size_t num)
{
    // 48 2B D1 4D 85 C0
    // static auto fn = LI_FN(strncmp).in_safe(crtbaseModule.get());
    // static auto fn = EX_FUNC(strncmp, L"UnityPlayer.dll", "48 2B D1 4D 85 C0");

    // return fn(str1, str2, num);

    return crt::tcsncmp(str1, str2, num);
}

double strtod(const char* s, char** sret)
{
    long double r;    /* result */
    int         e;    /* exponent */
    long double d;    /* scale */
    int         sign; /* +- 1.0 */
    int         esign;
    int         i;
    int         flags = 0;

    r     = 0.0;
    sign  = 1;
    e     = 0;
    esign = 1;

    while ((*s == ' ') || (*s == '\t'))
        s++;

    if (*s == '+')
        s++;
    else if (*s == '-')
    {
        sign = -1;
        s++;
    }

    while ((*s >= '0') && (*s <= '9'))
    {
        flags |= 1;
        r *= 10.0;
        r += *s - '0';
        s++;
    }

    if (*s == '.')
    {
        d = 0.1L;
        s++;
        while ((*s >= '0') && (*s <= '9'))
        {
            flags |= 2;
            r += d * (*s - '0');
            s++;
            d *= 0.1L;
        }
    }

    if (flags == 0)
    {
        if (sret)
            *sret = (char*)s;
        return 0;
    }

    if ((*s == 'e') || (*s == 'E'))
    {
        s++;
        if (*s == '+')
            s++;
        else if (*s == '-')
        {
            s++;
            esign = -1;
        }
        if ((*s < '0') || (*s > '9'))
        {
            if (sret)
                *sret = (char*)s;
            return r;
        }

        while ((*s >= '0') && (*s <= '9'))
        {
            e *= 10;
            e += *s - '0';
            s++;
        }
    }

    if (esign < 0)
        for (i = 1; i <= e; i++)
            r *= 0.1L;
    else
        for (i = 1; i <= e; i++)
            r *= 10.0;

    if (sret)
        *sret = (char*)s;
    return r * sign;
}

extern "C" __cdecl double __cdecl atof(char const* _String)
{
    // static auto fn = LI_FN(atof).in_safe(crtbaseModule.get());
    return strtod(_String, 0);
}

extern "C" __cdecl char* strncpy(char* _dst, const char* _src, size_t _n)
{
    size_t i = 0;
    while (i++ != _n && (*_dst++ = *_src++))
        ;
    return _dst;
}

extern "C" __cdecl char* strcpy(char* _dst, const char* _src)
{
    while ((*_dst++ = *_src++))
        ;
    return _dst;
}
extern "C" __cdecl size_t strlen(const char* str)
{
    const char* s;
    if (!str || !*str)
        return 0;

    for (s = str; *s; ++s)
        ;

    return (s - str);
}

extern "C" int wcscmp(const wchar_t* s1, const wchar_t* s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }

    return *(wchar_t*)s1 - *(wchar_t*)s2;
}

// extern "C" int _wcsicmp(wchar_t const* _String1, wchar_t const* _String2)

// {
//     static auto fn = LI_FN(_wcsicmp).in_safe(crtbaseModule.get());
//     return fn(_String1, _String2);
// }

extern "C" size_t wcslen(wchar_t const* s)
{
    const wchar_t* p;

    p = s;
    while (*p)
        p++;

    return p - s;
}

#endif //  MRT_ENABLED