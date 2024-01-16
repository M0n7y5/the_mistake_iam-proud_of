#pragma once
#include "exp.hpp"
#include "log.hpp"
namespace crt::math {
    inline double pow(double a, double b) {
        float _a = float(a);
        float _b = float(b);
        return double(math::expf(math::logf(_a) * _b));
    }

    inline float powf(float a, float b) {
        return math::expf(math::logf(a) * b);
    }
} // namespace crt::math