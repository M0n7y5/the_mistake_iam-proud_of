#include "core.h"
#include <cstdint>

#include "xorstr.hpp"
#include "lazy_importer.hpp"
#include "cpu_model.h"

#include <Windows.h>

#ifdef MRT_ENABLED

extern "C"  [[gnu::used]] int _fltused = 1;

extern "C"
{
#pragma section(".CRT$XIA", long, read)
#pragma section(".CRT$XIZ", long, read)
#pragma section(".CRT$XCA", long, read)
#pragma section(".CRT$XCZ", long, read)
#pragma section(".CRT$XPA", long, read)
#pragma section(".CRT$XPZ", long, read)
#pragma section(".CRT$XTA", long, read)
#pragma section(".CRT$XTZ", long, read)
#pragma comment(linker, "/merge:.CRT=.rdata")

    typedef void (*_PVFV)(void);
    typedef int (*_PIFV)(void);

    // C initializers
    __declspec(allocate(".CRT$XIA")) _PIFV __xi_a[] = {0};
    __declspec(allocate(".CRT$XIZ")) _PIFV __xi_z[] = {0};

    // C++ initializers
    __declspec(allocate(".CRT$XCA")) _PVFV __xc_a[] = {0};
    __declspec(allocate(".CRT$XCZ")) _PVFV __xc_z[] = {0};

    // C pre-terminators
    __declspec(allocate(".CRT$XPA")) _PVFV __xp_a[] = {0};
    __declspec(allocate(".CRT$XPZ")) _PVFV __xp_z[] = {0};

    // C terminators
    __declspec(allocate(".CRT$XTA")) _PVFV __xt_a[] = {0};
    __declspec(allocate(".CRT$XTZ")) _PVFV __xt_z[] = {0};
}

char _CRT_CWD[260] = {0};

typedef struct _ON_EXIT_ENTRY
{
    SLIST_ENTRY Entry;
    _PVFV       func;
} ON_EXIT_ENTRY, *PON_EXIT_ENTRY;
SLIST_HEADER __onexithead;

const char* _get_cwd()
{
    return _CRT_CWD;
}

#define __crt_countof(_Array) (sizeof(*__countof_helper(_Array)) + 0)

void _set_cwd(const char* path)
{
    strncpy(_CRT_CWD, path, __crt_countof(_CRT_CWD));
}

BOOLEAN _init_cwd()
{
    _set_cwd(_("C:\\WINDOWS\\System32"));
    return TRUE;
}

void __cdecl _cinitfs(void)
{
    _init_cwd();
}

void _initterm(_PVFV* pfbegin, _PVFV* pfend)
{
    /*
     * walk the table of function pointers from the bottom up, until
     * the end is encountered.  Do not skip the first entry.  The initial
     * value of pfbegin points to the first valid entry.  Do not try to
     * execute what pfend points to.  Only entries before pfend are valid.
     */
    while (pfbegin < pfend)
    {
        /*
         * if current table entry is non-NULL, call thru it.
         */
        if (*pfbegin != NULL)
            (**pfbegin)();
        ++pfbegin;
    }
}

int __cdecl _cinit(void)
{
    __cpu_indicator_init();
    static auto _RtlInitializeSListHead = LI_FN(RtlInitializeSListHead).safe();

    if (_RtlInitializeSListHead != NULL)
    {
        _fltused = 0; // shit gets optimized out, so this tricks optimizations for LLVM
    }

    _cinitfs();

    _RtlInitializeSListHead(&__onexithead);

    /*
     * do C++ initializations
     */
    _initterm(__xc_a, __xc_z);

    return 0;
}

_PVFV _onexit(_PVFV lpfn)
{
    static auto _RtlInterlockedPushEntrySList = LI_FN(RtlInterlockedPushEntrySList).safe();

    PON_EXIT_ENTRY _Entry = (PON_EXIT_ENTRY)malloc(sizeof(ON_EXIT_ENTRY));

    if (!_Entry)
        return NULL;

    _Entry->func = lpfn;

    _RtlInterlockedPushEntrySList(&__onexithead, &_Entry->Entry);
    return lpfn;
}

int __cdecl atexit(_PVFV func)
{
    return (_onexit(func) == NULL) ? -1 : 0;
}

void doexit(int code, int quick, int retcaller)
{
    static auto _RtlInterlockedPopEntrySList = LI_FN(RtlInterlockedPopEntrySList).safe();

    UNREFERENCED_PARAMETER(code);
    UNREFERENCED_PARAMETER(retcaller);

    if (!quick)
    {
        while (auto _Entry = _RtlInterlockedPopEntrySList(&__onexithead))
        {
            PON_EXIT_ENTRY Entry = (PON_EXIT_ENTRY)_Entry;

            Entry->func();
            free(Entry);
        }
    }
}

void __cdecl _cexit(void)
{
    doexit(0, 0, 1); /* full term, return to caller */
}

extern "C" void __cdecl _invalid_parameter(wchar_t const* const expression,
                                           wchar_t const* const function_name,
                                           wchar_t const* const file_name,
                                           unsigned int const line_number, uintptr_t const reserved)
{
}

extern "C" void __cdecl _invalid_parameter_noinfo(void) {}

extern "C" __declspec(noreturn) void __cdecl _invalid_parameter_noinfo_noreturn(void)
{
    while (1)
        ;
}

extern "C" int _purecall(void)
{

    return 0;
}

// extern "C" __int64 chkstk()
// {
//     __asm__ __volatile__("push   %rcx;"
//                          "push   %rax;"
//                          "cmp    $0x1000,%rax;"
//                          "lea    24(%rsp),%rcx;"
//                          "jb     1f;"
//                          "2:"
//                          "sub    $0x1000,%rcx;"
//                          "test   %rcx,(%rcx);"
//                          "sub    $0x1000,%rax;"
//                          "cmp    $0x1000,%rax;"
//                          "ja     2b;"
//                          "1:"
//                          "sub    %rax,%rcx;"
//                          "test   %rcx,(%rcx);"
//                          "pop    %rax;"
//                          "pop    %rcx;"
//                          "ret;");
// }

extern "C" void abort()
{
    __debugbreak();

    while (1)
        ;
}

#include <functional>

namespace std
{
    _Prhand _Raise_handler;
}

void __cdecl std::_Xlength_error(char const*)
{
    __debugbreak();

    while (1)
        ;
}

void __cdecl std::_Xbad_function_call(void)
{
    __debugbreak();
    while (1)
        ;
}

void __cdecl std::_Xout_of_range(char const*)
{
    __debugbreak();
    while (1)
        ;
}

EXTERN_C
_ACRTIMP void __cdecl _invoke_watson(_In_opt_z_ wchar_t const* _Expression,
                                     _In_opt_z_ wchar_t const* _FunctionName,
                                     _In_opt_z_ wchar_t const* _FileName, _In_ unsigned int _LineNo,
                                     _In_ uintptr_t _Reserved)
{
    //
    //"The invalid parameter handler dispatch function calls the currently assigned invalid
    // parameter handler. By "
    //    "default, the invalid parameter calls _invoke_watson, which causes the application to
    //    close and generate a " "mini-dump."
    __debugbreak();
    while (1)
        ;
}

#endif // MRT_ENABLED