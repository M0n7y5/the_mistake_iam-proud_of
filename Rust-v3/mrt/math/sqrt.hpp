#pragma once

#include <xmmintrin.h>
namespace crt::math {
    template <typename T>
    inline T sqrt(T x) {
        return T{};
    };

    template <>
    __forceinline float sqrt<float>(float x) {
        return _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(x)));
    }

    template <>
    __forceinline double sqrt<double>(double x) {
        return double(_mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(float(x)))));
    }
} // namespace crt::math