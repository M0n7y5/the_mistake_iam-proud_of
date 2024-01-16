#pragma once
#include "asinf.hpp"
#include "detail.hpp"
namespace crt::math {
    static constexpr detail::ExceptValues<float, 4> ACOSF_EXCEPTS = {{
        {0x328885a3, 0x3fc90fda, 1, 0, 1},
        {0xb28885a3, 0x3fc90fda, 1, 0, 1},
        {0x39826222, 0x3fc907b4, 1, 0, 1},
        {0xb9826222, 0x3fc91800, 1, 0, 1},
    }};

    inline float acosf(float x) {
        using FPBits = typename detail::FPBits<float>;
        FPBits xbits(x);
        uint32_t x_uint = xbits.uintval();
        uint32_t x_abs = xbits.uintval() & 0x7fff'ffffU;
        uint32_t x_sign = x_uint >> 31;

        if (detail::unlikely(x_abs <= 0x3f00'0000U)) {
            if (detail::unlikely(x_abs < 0x3a80'0000U)) {
                if (auto r = ACOSF_EXCEPTS.lookup(x_uint); detail::unlikely(r.has_value()))
                    return r.value();

                double xd = static_cast<double>(x);
                return float(detail::multiply_add(-0x1.5555555555555p-3 * xd, xd * xd, detail::M_MATH_PI_2 - xd));
            }

            double xd = static_cast<double>(x);
            double xsq = xd * xd;
            double x3 = xd * xsq;
            double r = math::asin_eval(xsq);
            return float(detail::multiply_add(-x3, r, detail::M_MATH_PI_2 - xd));
        }

        if (detail::unlikely(x_abs > 0x3f80'0000U)) {
            if (x_abs <= 0x7f80'0000U) {
                return 0.f;
            }
            return x + FPBits::build_nan(1 << (detail::MantissaWidth<float>::VALUE - 1));
        }

        xbits.set_sign(false);
        double xd = static_cast<double>(xbits.get_val());
        double u = detail::multiply_add(-0.5, xd, 0.5);
        double cv = 2 * math::sqrt(u);

        double r3 = math::asin_eval(u);
        double r = detail::multiply_add(cv * u, r3, cv);
        return float(x_sign ? detail::M_MATH_PI - r : r);
    }
} // namespace crt::math