#pragma once
#include "detail.hpp"
namespace crt::math {
    static constexpr size_t N_EXCEPTS = 6;

    static constexpr detail::ExceptValues<float, N_EXCEPTS> COSF_EXCEPTS{{
        {0x55325019, 0x3f4ea5d2, 1, 0, 0},
        {0x5922aa80, 0x3f08aebe, 1, 0, 1},
        {0x5aa4542c, 0x3efa40a4, 1, 0, 0},
        {0x5f18b878, 0x3f7f14bb, 1, 0, 0},
        {0x6115cb11, 0x3f78142e, 1, 0, 1},
        {0x7beef5ef, 0x3f08a21c, 1, 0, 0},
    }};

    const double SIN_K_PI_OVER_32_64[64] = {
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

    static inline void sincosf_eval_64(double xd, uint32_t x_abs, double& sin_k, double& cos_k, double& sin_y, double& cosm1_y) {
        int64_t k;
        double y;

        if (detail::likely(x_abs < detail::FAST_PASS_BOUND)) {
            k = detail::small_range_reduction(xd, y);
        } else {
            detail::FPBits<float> x_bits(x_abs);
            k = detail::large_range_reduction(xd, x_bits.get_exponent(), y);
        }

        sin_k = SIN_K_PI_OVER_32_64[k & 63];
        cos_k = SIN_K_PI_OVER_32_64[(k + 16) & 63];

        double ysq = y * y;

        sin_y = y * detail::polyeval(ysq, 0x1.921fb54442d18p-4, -0x1.4abbce625abb1p-13, 0x1.466bc624f2776p-24, -0x1.32c3a619d4a7ep-36);

        cosm1_y = ysq * detail::polyeval(ysq, -0x1.3bd3cc9be430bp-8, 0x1.03c1f070c2e27p-18, -0x1.55cc84bd942p-30);
    }

    inline float cosf(float x) {
        using FPBits = typename detail::FPBits<float>;
        FPBits xbits(x);
        xbits.set_sign(false);

        uint32_t x_abs = xbits.uintval();
        double xd = static_cast<double>(xbits.get_val());

        if (detail::unlikely(x_abs < 0x3980'0000U)) {
            return static_cast<float>(detail::multiply_add(xd, -0x1.0p-25, 1.0));
        }

        if (auto r = COSF_EXCEPTS.lookup(x_abs); detail::unlikely(r.has_value()))
            return r.value();

        if (detail::unlikely(x_abs >= 0x7f80'0000U)) {
            if (x_abs == 0x7f80'0000U) {
                return 0.f;
            }
            return x + FPBits::build_nan(1 << (detail::MantissaWidth<float>::VALUE - 1));
        }

        double sin_k, cos_k, sin_y, cosm1_y;

        sincosf_eval_64(xd, x_abs, sin_k, cos_k, sin_y, cosm1_y);

        return float(detail::multiply_add(sin_y, -sin_k, detail::multiply_add(cosm1_y, cos_k, cos_k)));
    }

    inline double cos(double x) {
#if defined(__clang__) || defined(__GNUC__)
        __asm__ __volatile__("fcos" : "+t"(x));
        return x;
#else
        // todo: @sa413x: make proper impl for double
        return double(math::cosf(float(x)));
#endif
    }
} // namespace crt::math