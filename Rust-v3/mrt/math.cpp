#include "lazy_importer.hpp"
#include "math.h"

#include <builtins.h>

// extern "C" float __CRTDECL cosf(float _X)
// {
//     return __builtin_cosf(_X);
// }

#ifdef MRT_ENABLED

constexpr auto crtbaseModule = LI_MODULE("ucrtbase.dll");

extern "C" float __CRTDECL fmodf(float _X, float _Y)
{
    static auto fn = LI_FN(fmodf).in_safe(crtbaseModule.get());
    return fn(_X, _Y);
}

extern "C" void __cdecl qsort(void* _Base, size_t _NumOfElements, size_t _SizeOfElements,
                              _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction)
{
    static auto fn = LI_FN(qsort).in_safe(crtbaseModule.get());
    return fn(_Base, _NumOfElements, _SizeOfElements, _CompareFunction);
}

extern "C" float __CRTDECL sinf(float _X)
{
    static auto fn = LI_FN(sinf).in_safe(crtbaseModule.get());
    return fn(_X);
}

extern "C" float __CRTDECL cosf(float _X)
{
    static auto fn = LI_FN(cosf).in_safe(crtbaseModule.get());
    return fn(_X);
}

extern "C" float __CRTDECL acosf(float _X)
{
    static auto fn = LI_FN(acosf).in_safe(crtbaseModule.get());
    return fn(_X);
}

extern "C" float __CRTDECL ceilf(float _X)
{
    static auto fn = LI_FN(ceilf).in_safe(crtbaseModule.get());
    return fn(_X);
}

extern "C" float __CRTDECL sqrtf(float _X)
{
    static auto fn = LI_FN(sqrtf).in_safe(crtbaseModule.get());
    return fn(_X);
}

extern "C" float __CRTDECL powf(float _X, float _Y)
{
    static auto fn = LI_FN(powf).in_safe(crtbaseModule.get());
    return fn(_X, _Y);
}

extern "C" float __CRTDECL logf(float _X)
{
    static auto fn = LI_FN(logf).in_safe(crtbaseModule.get());
    return fn(_X);
}

extern "C" double __CRTDECL log(double _X)
{
    static auto fn = LI_FN(log).in_safe(crtbaseModule.get());
    return fn(_X);
}

extern "C" double __CRTDECL pow(double _X, double _Y)
{
    static auto fn = LI_FN(pow).in_safe(crtbaseModule.get());
    return fn(_X, _Y);
}

extern "C" float __CRTDECL atan2f(float _X, float _Y)
{
    static auto fn = LI_FN(atan2f).in_safe(crtbaseModule.get());
    return fn(_X, _Y);
}

extern "C" double __CRTDECL fabs(double _X)
{
    static auto fn = LI_FN(fabs).in_safe(crtbaseModule.get());
    return fn(_X);
}

#endif // MRT_ENABLED
