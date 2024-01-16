#pragma once
#include "sqrt.hpp"
#include <cstdint>
#include "detail.hpp"
namespace crt::math {
    static constexpr detail::ExceptValues<float, 2> ASINF_EXCEPTS_LO = {{
        {0x3d09bf86, 0x3d09c62c, 1, 0, 1},
        {0x3de5fa1e, 0x3de6768e, 1, 0, 0},
    }};

    static constexpr detail::ExceptValues<float, 2> ASINF_EXCEPTS_HI = {{
        {0x3f083a1a, 0x3f0fa5b2, 1, 0, 0},
        {0x3f7741b6, 0x3fa7832a, 1, 0, 0},
    }};

    constexpr double ASIN_COEFFS[10] = {0x1.5555555540fa1p-3, 0x1.333333512edc2p-4, 0x1.6db6cc1541b31p-5, 0x1.f1caff324770ep-6, 0x1.6e43899f5f4f4p-6,
                                        0x1.1f847cf652577p-6, 0x1.9b60f47f87146p-7, 0x1.259e2634c494fp-6, -0x1.df946fa875ddp-8, 0x1.02311ecf99c28p-5};

    static inline double asin_eval(double xsq) {
        double x4 = xsq * xsq;
        double r1 = detail::polyeval(x4, ASIN_COEFFS[0], ASIN_COEFFS[2], ASIN_COEFFS[4], ASIN_COEFFS[6], ASIN_COEFFS[8]);
        double r2 = detail::polyeval(x4, ASIN_COEFFS[1], ASIN_COEFFS[3], ASIN_COEFFS[5], ASIN_COEFFS[7], ASIN_COEFFS[9]);
        return detail::multiply_add(xsq, r2, r1);
    }

    inline float asinf(float x) {
        using FPBits = typename detail::FPBits<float>;
        FPBits xbits(x);
        uint32_t x_uint = xbits.uintval();
        uint32_t x_abs = xbits.uintval() & 0x7fff'ffffU;
        constexpr double SIGN[2] = {1.0, -1.0};
        uint32_t x_sign = x_uint >> 31;

        if (x_abs < 0x3f04'471dU) {
            if (detail::unlikely(x_abs < 0x39e8'9768U)) {
                double xd = static_cast<double>(x);
                return static_cast<float>(detail::multiply_add(xd, 0x1.0p-25, xd));
            }

            if (auto r = ASINF_EXCEPTS_LO.lookup_odd(x_abs, x_sign); detail::unlikely(r.has_value()))
                return r.value();

            double xd = static_cast<double>(x);
            double xsq = xd * xd;
            double x3 = xd * xsq;
            double r = asin_eval(xsq);
            return float(detail::multiply_add(x3, r, xd));
        }

        if (detail::unlikely(x_abs > 0x3f80'0000U)) {
            if (x_abs <= 0x7f80'0000U) {
                return 0.f;
            }
            return x + FPBits::build_nan(1 << (detail::MantissaWidth<float>::VALUE - 1));
        }

        if (auto r = ASINF_EXCEPTS_HI.lookup_odd(x_abs, x_sign); detail::unlikely(r.has_value()))
            return r.value();

        xbits.set_sign(false);
        double sign = SIGN[x_sign];
        double xd = static_cast<double>(xbits.get_val());
        double u = detail::multiply_add(-0.5, xd, 0.5);
        double c1 = sign * (-2 * math::sqrt(u));
        double c2 = detail::multiply_add(sign, detail::M_MATH_PI_2, c1);
        double c3 = c1 * u;

        double r = asin_eval(u);
        return float(detail::multiply_add(c3, r, c2));
    }
} // namespace crt::math