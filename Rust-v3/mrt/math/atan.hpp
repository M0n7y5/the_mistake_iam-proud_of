#pragma once
#include "detail.hpp"
namespace crt::math {
    constexpr int ATAN_T_BITS = 4;
    constexpr int ATAN_T_SIZE = 1 << ATAN_T_BITS;

    alignas(64) const double ATAN_T[ATAN_T_SIZE] = {0x1.ff55bb72cfdeap-5, 0x1.fd5ba9aac2f6ep-4, 0x1.7b97b4bce5b02p-3, 0x1.f5b75f92c80ddp-3,
                                                    0x1.362773707ebccp-2, 0x1.6f61941e4def1p-2, 0x1.a64eec3cc23fdp-2, 0x1.dac670561bb4fp-2,
                                                    0x1.0657e94db30d0p-1, 0x1.1e00babdefeb4p-1, 0x1.345f01cce37bbp-1, 0x1.4978fa3269ee1p-1,
                                                    0x1.5d58987169b18p-1, 0x1.700a7c5784634p-1, 0x1.819d0b7158a4dp-1, 0x1.921fb54442d18p-1};

    alignas(64) const double ATAN_K[5] = {0x1.0000000000000p+0, -0x1.5555555555555p-2, 0x1.999999999999ap-3, -0x1.2492492492492p-3, 0x1.c71c71c71c71cp-4};

    static inline double atan_eval(double x) {
        using FPB = detail::FPBits<double>;
        FPB::UIntType umin = FPB::create_value(false, FPB::EXPONENT_BIAS - ATAN_T_BITS - 1, 0x100000000000UL).uintval();
        FPB::UIntType umax = FPB::create_value(false, FPB::EXPONENT_BIAS + ATAN_T_BITS, 0xF000000000000UL).uintval();

        FPB bs(x);
        bool sign = bs.get_sign();
        auto x_abs = bs.uintval() & FPB::FloatProp::EXP_MANT_MASK;

        if (x_abs <= umin) {
            double pe = detail::polyeval(x * x, 0.0, ATAN_K[1], ATAN_K[2], ATAN_K[3], ATAN_K[4]);
            return detail::multiply_add(pe, x, x);
        }

        if (x_abs >= umax) {
            double one_over_x_m = -1.0 / x;
            double one_over_x2 = one_over_x_m * one_over_x_m;
            double pe = detail::polyeval(one_over_x2, ATAN_K[0], ATAN_K[1], ATAN_K[2], ATAN_K[3]);
            return detail::multiply_add(pe, one_over_x_m, sign ? (-detail::M_MATH_PI_2) : (detail::M_MATH_PI_2));
        }

        double pos_x = FPB(x_abs).get_val();
        bool one_over_x = pos_x > 1.0;
        if (one_over_x) {
            pos_x = 1.0 / pos_x;
        }

        double near_x = detail::nearest_integer(pos_x * ATAN_T_SIZE);
        int val = static_cast<int>(near_x);
        near_x *= 1.0 / ATAN_T_SIZE;

        double v = (pos_x - near_x) / detail::multiply_add(near_x, pos_x, 1.0);
        double v2 = v * v;
        double pe = detail::polyeval(v2, ATAN_K[0], ATAN_K[1], ATAN_K[2], ATAN_K[3], ATAN_K[4]);
        double result;
        if (one_over_x)
            result = detail::M_MATH_PI_2 - detail::multiply_add(pe, v, ATAN_T[val - 1]);
        else
            result = detail::multiply_add(pe, v, ATAN_T[val - 1]);
        return sign ? -result : result;
    }

    inline float atanf(float x) {
        using FPBits = typename detail::FPBits<float>;
        FPBits xbits(x);
        bool sign = xbits.get_sign();
        xbits.set_sign(false);

        if (detail::unlikely(xbits.is_inf_or_nan())) {
            if (xbits.is_inf())
                return detail::opt_barrier(sign ? -detail::M_MATH_PI_2_F : detail::M_MATH_PI_2_F);
            else
                return x;
        }

        if (detail::unlikely(xbits.uintval() == 0x3d8d6b23U)) {
            if (detail::get_round() == detail::FE_TONEAREST_DEF) {
                FPBits br(0x3d8d31c3U);
                br.set_sign(sign);
                return br.get_val();
            }
        }

        if (detail::unlikely(xbits.uintval() == 0x3feefcfbU)) {
            int rounding_mode = detail::get_round();
            if (sign) {
                if (rounding_mode == detail::FE_DOWNWARD_DEF) {
                    return FPBits(0xbf8a1f63U).get_val();
                }
            } else {
                if (rounding_mode == detail::FE_UPWARD_DEF) {
                    return FPBits(0x3f8a1f63U).get_val();
                }
            }
        }

        return float(atan_eval(x));
    }
} // namespace crt::math