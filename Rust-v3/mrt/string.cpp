#include "lazy_importer.hpp"

#ifdef MRT_ENABLED

constexpr auto crtbaseModule = LI_MODULE("ucrtbase.dll");

extern "C" int __cdecl __stdio_common_vsprintf(unsigned __int64 const options, char *const buffer,
    size_t const buffer_count, char const *const format, _locale_t locale, va_list const arglist)
{
    static auto p_vsnprintf_s_l = LI_FN(_vsnprintf_s_l).safe();
    return p_vsnprintf_s_l(buffer, buffer_count, -1, format, locale, arglist);
}

extern "C" int __cdecl __stdio_common_vfprintf(
    unsigned __int64 const options, FILE *stream, char const *const format, _locale_t locale, va_list const arglist)
{
    static auto p_vfprintf_l = LI_FN(_vfprintf_l).safe();
    return p_vfprintf_l(stream, format, locale, arglist);
}

extern "C" int __cdecl __stdio_common_vsscanf(unsigned __int64 _Options, char const *_Buffer, size_t _BufferCount,
    char const *_Format, _locale_t _Locale, va_list _ArgList)
{
    static auto fn = LI_FN(__stdio_common_vsscanf).in_safe(crtbaseModule.get());
    return fn(_Options, _Buffer, _BufferCount, _Format, _Locale, _ArgList);
}

extern "C" int tolower(int c)
{
    static auto fn = LI_FN(tolower).in_safe(crtbaseModule.get());
    return fn(c);
}

extern "C" const char *strstr(const char * _String, const char * _SubString)
{
    static auto fn = LI_FN(strstr).in_safe(crtbaseModule.get());
    return fn(_String, _SubString);
}

extern "C" int strcmp(const char *s1, const char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return *(const unsigned char *)s1 - *(const unsigned char *)s2;
}

extern "C" int strncmp(const char *str1, const char *str2, size_t num)
{
    static auto fn = LI_FN(strncmp).in_safe(crtbaseModule.get());
    return fn(str1, str2, num);
}

extern "C" double __cdecl atof(char const *_String)
{
    static auto fn = LI_FN(atof).in_safe(crtbaseModule.get());
    return fn(_String);
}

extern "C" char *strncpy(char *_dst, const char *_src, size_t _n)
{
    size_t i = 0;
    while (i++ != _n && (*_dst++ = *_src++))
        ;
    return _dst;
}

extern "C" char *strcpy(char *_dst, const char *_src)
{
    while ((*_dst++ = *_src++))
        ;
    return _dst;
}
extern "C" size_t strlen(const char *str)
{
    const char *s;
    if (!str || !*str)
        return 0;

    for (s = str; *s; ++s)
        ;

    return (s - str);
}

extern "C" int wcscmp(const wchar_t *s1, const wchar_t *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }

    return *(wchar_t *)s1 - *(wchar_t *)s2;
}

#endif //  MRT_ENABLED