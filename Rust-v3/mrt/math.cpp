#ifdef MRT_ENABLED
#include "math.hpp"
#include "lazy_importer.hpp"
#include "scanner.h"
#include "fnv1a.hpp"
#include "xorstr.hpp"
#include "../SDK/mem.h"

constexpr auto crtbaseModule = LI_MODULE("ucrtbase.dll");

#define EX_FUNC(func, module, pattern)                                                                                 \
    []() -> decltype(&func) {                                                                                          \
        auto mod    = (void*)mem::GetModuleAddressEX(HASH_CTIME(module));                                              \
        auto result = Forza::IDAScan(mod, _(pattern));                                                                 \
        return reinterpret_cast<decltype(&func)>(result);                                                              \
    }()

extern "C"
{
    double fabs(double x)
    {
        return (x < 0.0) ? -x : x;
    }

    double sin(double x)
    {
        return crt::math::sin(x);
    }

    double cos(double x)
    {
        return crt::math::cos(x);
    }

    float cosf(float x)
    {
        return crt::math::cosf(x);
    }

    float sinf(float x)
    {
        return crt::math::sinf(x);
    }

    float acosf(float x)
    {
        return crt::math::acosf(x);
    }

    float asinf(float x)
    {
        return crt::math::asinf(x);
    }

    float sqrtf(float x)
    {
        return crt::math::sqrt(x);
    }

    double tan(double x)
    {
        return crt::math::tan(x);
    }

    float tanf(float x)
    {
        return crt::math::tanf(x);
    }

    float atanf(float x)
    {
        return crt::math::atanf(x);
    }

    double round(double x)
    {
        return crt::math::round(x);
    }

    double floor(double x)
    {
        return crt::math::floor(x);
    }

    double ceil(double x)
    {
        return crt::math::ceil(x);
    }

    double trunc(double x)
    {
        return crt::math::trunc(x);
    }

    float roundf(float x)
    {
        return crt::math::round(x);
    }

    float floorf(float x)
    {
        return crt::math::floor(x);
    }

    float ceilf(float x)
    {
        return crt::math::ceil(x);
    }

    float truncf(float x)
    {
        return crt::math::trunc(x);
    }

    float fmodf(float x, float y)
    {
        return crt::math::modf(x, y);
    }

    float atan2f(float a, float b)
    {
        return crt::math::atan2f(a, b);
    }

    float logf(float x)
    {
        return crt::math::logf(x);
    }

    float expf(float x)
    {
        return crt::math::expf(x);
    }

    float exp2f(float x)
    {
        return crt::math::exp2f(x);
    }

    float powf(float a, float b)
    {
        return crt::math::powf(a, b);
    }

    double pow(double a, double b)
    {
        return crt::math::pow(a, b);
    }

    double __CRTDECL log(double _X)
    {
        // static auto fn = LI_FN(log).in_safe(crtbaseModule.get());
        static auto fn = EX_FUNC(log, L"UnityPlayer.dll", "4C 8B D9 0F B6 D2");

        return fn(_X);
    }
}

// extern "C" void __cdecl qsort(void* _Base, size_t _NumOfElements, size_t _SizeOfElements,
//                               _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction)
// {
//     static auto fn = LI_FN(qsort).in_safe(crtbaseModule.get());
//     return fn(_Base, _NumOfElements, _SizeOfElements, _CompareFunction);
// }

// extern "C" float __CRTDECL fmodf(float _X, float _Y)
// {
//     static auto fn = LI_FN(fmodf).in_safe(crtbaseModule.get());
//     return fn(_X, _Y);
// }

// extern "C" float __CRTDECL sinf(float _X)
// {
//     static auto fn = LI_FN(sinf).in_safe(crtbaseModule.get());
//     return fn(_X);
// }

// extern "C" float __CRTDECL cosf(float _X)
// {
//     static auto fn = LI_FN(cosf).in_safe(crtbaseModule.get());
//     return fn(_X);
// }

// extern "C" float __CRTDECL acosf(float _X)
// {
//     static auto fn = LI_FN(acosf).in_safe(crtbaseModule.get());
//     return fn(_X);
// }

// extern "C" float __CRTDECL ceilf(float _X)
// {
//     static auto fn = LI_FN(ceilf).in_safe(crtbaseModule.get());
//     return fn(_X);
// }

// extern "C" float __CRTDECL sqrtf(float _X)
// {
//     static auto fn = LI_FN(sqrtf).in_safe(crtbaseModule.get());
//     return fn(_X);
// }

// extern "C" float __CRTDECL powf(float _X, float _Y)
// {
//     static auto fn = LI_FN(powf).in_safe(crtbaseModule.get());
//     return fn(_X, _Y);
// }

// extern "C" float __CRTDECL logf(float _X)
// {
//     static auto fn = LI_FN(logf).in_safe(crtbaseModule.get());
//     return fn(_X);
// }

// extern "C" double __CRTDECL log(double _X)
// {
//     static auto fn = LI_FN(log).in_safe(crtbaseModule.get());
//     return fn(_X);
// }

// extern "C" double __CRTDECL pow(double _X, double _Y)
// {
//     static auto fn = LI_FN(pow).in_safe(crtbaseModule.get());
//     return fn(_X, _Y);
// }

// extern "C" float __CRTDECL atan2f(float _X, float _Y)
// {
//     static auto fn = LI_FN(atan2f).in_safe(crtbaseModule.get());
//     return fn(_X, _Y);
// }

// extern "C" double __CRTDECL fabs(double _X)
// {
//     static auto fn = LI_FN(fabs).in_safe(crtbaseModule.get());
//     return fn(_X);
// }

// extern "C" float __CRTDECL roundf(float _X)
// {
//     static auto fn = LI_FN(roundf).in_safe(crtbaseModule.get());
//     return fn(_X);
// }

// extern "C" float __CRTDECL tanf(float _X)
// {
//     static auto fn = LI_FN(tanf).in_safe(crtbaseModule.get());
//     return fn(_X);
// }

// extern "C" float __CRTDECL asinf(float _X)
// {
//     static auto fn = LI_FN(asinf).in_safe(crtbaseModule.get());
//     return fn(_X);
// }

// extern "C" double sqrt(double _X)
// {
//     static auto fn = LI_FN(sqrt).in_safe(crtbaseModule.get());
//     return fn(_X);
// }

// TODO: Make it TLS variable
int __eeeerrr = 0;

extern "C" int* _errno()
{
    return &__eeeerrr;
}

#endif // MRT_ENABLED
