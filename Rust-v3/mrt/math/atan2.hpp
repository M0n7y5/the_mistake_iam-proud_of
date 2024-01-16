#pragma once
#include "detail.hpp"
#include "atan.hpp"
namespace crt::math {
    inline float atan2f(float a, float b) {
        float result = 0.f;

        if (b > 0) {
            result = math::atanf(a / b);
        } else if ((b < 0.f) && (a >= 0.f)) {
            result = math::atanf(a / b) + crt::math::detail::M_MATH_PI_F;
        } else if ((b < 0.f) && (a < 0.f)) {
            result = math::atanf(a / b) - crt::math::detail::M_MATH_PI_F;
        } else if ((b == 0.f) && (a > 0.f)) {
            result = crt::math::detail::M_MATH_PI_F / 2;
        } else if ((b == 0.f) && (a < 0.f)) {
            result = 0 - (crt::math::detail::M_MATH_PI_F / 2);
        } else if ((b == 0.f) && (a == 0.f)) {
            result = 1000;
        }

        return result;
    }
} // namespace crt::math