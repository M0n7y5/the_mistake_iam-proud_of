#pragma once
#include <cstdint>
#include "detail.hpp"
namespace crt::math {
    const double SIN_K_PI_OVER_32[64] = {
        0x0.0000000000000p+0,  0x1.917a6bc29b42cp-4,  0x1.8f8b83c69a60bp-3,  0x1.294062ed59f06p-2,  0x1.87de2a6aea963p-2,  0x1.e2b5d3806f63bp-2,
        0x1.1c73b39ae68c8p-1,  0x1.44cf325091dd6p-1,  0x1.6a09e667f3bcdp-1,  0x1.8bc806b151741p-1,  0x1.a9b66290ea1a3p-1,  0x1.c38b2f180bdb1p-1,
        0x1.d906bcf328d46p-1,  0x1.e9f4156c62ddap-1,  0x1.f6297cff75cbp-1,   0x1.fd88da3d12526p-1,  0x1.0000000000000p+0,  0x1.fd88da3d12526p-1,
        0x1.f6297cff75cbp-1,   0x1.e9f4156c62ddap-1,  0x1.d906bcf328d46p-1,  0x1.c38b2f180bdb1p-1,  0x1.a9b66290ea1a3p-1,  0x1.8bc806b151741p-1,
        0x1.6a09e667f3bcdp-1,  0x1.44cf325091dd6p-1,  0x1.1c73b39ae68c8p-1,  0x1.e2b5d3806f63bp-2,  0x1.87de2a6aea963p-2,  0x1.294062ed59f06p-2,
        0x1.8f8b83c69a60bp-3,  0x1.917a6bc29b42cp-4,  0x0.0000000000000p+0,  -0x1.917a6bc29b42cp-4, -0x1.8f8b83c69a60bp-3, -0x1.294062ed59f06p-2,
        -0x1.87de2a6aea963p-2, -0x1.e2b5d3806f63bp-2, -0x1.1c73b39ae68c8p-1, -0x1.44cf325091dd6p-1, -0x1.6a09e667f3bcdp-1, -0x1.8bc806b151741p-1,
        -0x1.a9b66290ea1a3p-1, -0x1.c38b2f180bdb1p-1, -0x1.d906bcf328d46p-1, -0x1.e9f4156c62ddap-1, -0x1.f6297cff75cbp-1,  -0x1.fd88da3d12526p-1,
        -0x1.0000000000000p+0, -0x1.fd88da3d12526p-1, -0x1.f6297cff75cbp-1,  -0x1.e9f4156c62ddap-1, -0x1.d906bcf328d46p-1, -0x1.c38b2f180bdb1p-1,
        -0x1.a9b66290ea1a3p-1, -0x1.8bc806b151741p-1, -0x1.6a09e667f3bcdp-1, -0x1.44cf325091dd6p-1, -0x1.1c73b39ae68c8p-1, -0x1.e2b5d3806f63bp-2,
        -0x1.87de2a6aea963p-2, -0x1.294062ed59f06p-2, -0x1.8f8b83c69a60bp-3, -0x1.917a6bc29b42cp-4,
    };

    static inline void sincosf_eval(double xd, uint32_t x_abs, double& sin_k, double& cos_k, double& sin_y, double& cosm1_y) {
        int64_t k;
        double y;

        if (detail::likely(x_abs < detail::FAST_PASS_BOUND)) {
            k = detail::small_range_reduction(xd, y);
        } else {
            detail::FPBits<float> x_bits(x_abs);
            k = detail::large_range_reduction(xd, x_bits.get_exponent(), y);
        }

        sin_k = SIN_K_PI_OVER_32[k & 63];
        cos_k = SIN_K_PI_OVER_32[(k + 16) & 63];

        double ysq = y * y;

        sin_y = y * detail::polyeval(ysq, 0x1.921fb54442d18p-4, -0x1.4abbce625abb1p-13, 0x1.466bc624f2776p-24, -0x1.32c3a619d4a7ep-36);

        cosm1_y = ysq * detail::polyeval(ysq, -0x1.3bd3cc9be430bp-8, 0x1.03c1f070c2e27p-18, -0x1.55cc84bd942p-30);
    }

    inline float sinf(float x) {
        using FPBits = typename detail::FPBits<float>;
        FPBits xbits(x);

        uint32_t x_u = xbits.uintval();
        uint32_t x_abs = x_u & 0x7fff'ffffU;
        double xd = static_cast<double>(x);

        if (detail::unlikely(x_abs <= 0x3e49'0fdbU)) {
            if (detail::unlikely(x_abs < 0x39e8'9769U)) {
                if (detail::unlikely(x_abs == 0U)) {
                    return x;
                }

                return static_cast<float>(detail::multiply_add(xd, -0x1.0p-25, xd));
            }

            double xsq = xd * xd;

            double result = detail::polyeval(xsq, 1.0, -0x1.55555555554c6p-3, 0x1.1111111085e65p-7, -0x1.a019f70fb4d4fp-13, 0x1.718d179815e74p-19);
            return float(xd * result);
        }

        if (detail::unlikely(x_abs == 0x4619'9998U)) {
            float r = -0x1.63f4bap-2f;
            int rounding = detail::get_round();
            bool sign = xbits.get_sign();
            if ((rounding == detail::FE_DOWNWARD_DEF && !sign) || (rounding == detail::FE_UPWARD_DEF && sign))
                r = -0x1.63f4bcp-2f;
            return xbits.get_sign() ? -r : r;
        }

        if (detail::unlikely(x_abs >= 0x7f80'0000U)) {
            if (x_abs == 0x7f80'0000U) {
                return 0.f;
            }
            return x + FPBits::build_nan(1 << (detail::MantissaWidth<float>::VALUE - 1));
        }

        double sin_k, cos_k, sin_y, cosm1_y;

        sincosf_eval(xd, x_abs, sin_k, cos_k, sin_y, cosm1_y);

        return float(detail::multiply_add(sin_y, cos_k, detail::multiply_add(cosm1_y, sin_k, sin_k)));
    }

    inline double sin(double x) {
#if defined(__clang__) || defined(__GNUC__)
        __asm__ __volatile__("fsin" : "+t"(x));
        return x;
#else
        // todo: @sa413x: make a proper impl for double
        return double(math::sinf(float(x)));
#endif
    }
} // namespace crt::math