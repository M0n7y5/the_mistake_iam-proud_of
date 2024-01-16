#pragma once
#include "detail.hpp"
namespace crt::math {
    constexpr detail::ExceptValues<float, 6> TANF_EXCEPTS{{
        {0x4d56d355, 0x3e740182, 1, 0, 0},
        {0x50431032, 0xbe46f72b, 0, 1, 1},
        {0x57d7b0ed, 0x3eb068e3, 1, 0, 1},
        {0x5980445e, 0x3fe50f68, 1, 0, 0},
        {0x63fc86fe, 0x3f2cbfce, 1, 0, 0},
        {0x6ad36709, 0xbf62b097, 0, 1, 0},
    }};

    const double SIN_K_PI_OVER_32_TAN64[64] = {
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

    static inline void sincosf_eval_tan64(double xd, uint32_t x_abs, double& sin_k, double& cos_k, double& sin_y, double& cosm1_y) {
        int64_t k;
        double y;

        if (detail::likely(x_abs < detail::FAST_PASS_BOUND)) {
            k = detail::small_range_reduction(xd, y);
        } else {
            detail::FPBits<float> x_bits(x_abs);
            k = detail::large_range_reduction(xd, x_bits.get_exponent(), y);
        }

        sin_k = SIN_K_PI_OVER_32_TAN64[k & 63];

        cos_k = SIN_K_PI_OVER_32_TAN64[(k + 16) & 63];

        double ysq = y * y;

        sin_y = y * detail::polyeval(ysq, 0x1.921fb54442d18p-4, -0x1.4abbce625abb1p-13, 0x1.466bc624f2776p-24, -0x1.32c3a619d4a7ep-36);

        cosm1_y = ysq * detail::polyeval(ysq, -0x1.3bd3cc9be430bp-8, 0x1.03c1f070c2e27p-18, -0x1.55cc84bd942p-30);
    }

    inline float tanf(float x) {
        using FPBits = typename detail::FPBits<float>;
        FPBits xbits(x);
        bool x_sign = xbits.uintval() >> 31;
        uint32_t x_abs = xbits.uintval() & 0x7fff'ffffU;

        if (detail::unlikely(x_abs <= 0x3dc9'0fdbU)) {
            double xd = static_cast<double>(x);

            if (detail::unlikely(x_abs < 0x3980'0000U)) {
                if (detail::unlikely(x_abs == 0U)) {
                    return x;
                }

                return static_cast<float>(detail::multiply_add(xd, 0x1.0p-25, xd));
            }

            double xsq = xd * xd;

            double result = detail::polyeval(xsq, 1.0, 0x1.555555553d022p-2, 0x1.111111ce442c1p-3, 0x1.ba180a6bbdecdp-5, 0x1.69c0a88a0b71fp-6);
            return float(xd * result);
        }

        if (detail::unlikely(x_abs == 0x3f8a1f62U)) {
            float sign = x_sign ? -1.0f : 1.0f;

            return detail::multiply_add(sign, 0x1.ddf9f4p0f, sign * 0x1.1p-24f);
        }

        if (detail::unlikely(x_abs > 0x4d56'd354U)) {
            if (detail::unlikely(x_abs >= 0x7f80'0000U)) {
                if (x_abs == 0x7f80'0000U) {
                    return 0.f;
                }
                return x + FPBits::build_nan(1 << (detail::MantissaWidth<float>::VALUE - 1));
            }

            if (auto r = TANF_EXCEPTS.lookup_odd(x_abs, x_sign); detail::unlikely(r.has_value()))
                return r.value();
        }

        double xd = static_cast<double>(x);
        double sin_k, cos_k, sin_y, cosm1_y;

        sincosf_eval_tan64(xd, x_abs, sin_k, cos_k, sin_y, cosm1_y);

        using detail::multiply_add;
        return float(multiply_add(sin_y, cos_k, multiply_add(cosm1_y, sin_k, sin_k)) / multiply_add(sin_y, -sin_k, multiply_add(cosm1_y, cos_k, cos_k)));
    }

    inline double tan(double x) {
#if defined(__clang__) || defined(__GNUC__)
        double result;
        __asm__ __volatile__("fptan" : "+t"(x));
        __asm__ __volatile__("fstpl %0" : "=m"(result));
        return result;
#else
        return double(math::tanf(float(x)));
#endif
    }
} // namespace crt::math