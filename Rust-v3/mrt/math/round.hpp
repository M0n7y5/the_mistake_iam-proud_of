#pragma once
#include "detail.hpp"

namespace crt::math {
    template <typename T>
    static inline T round(T x) {
        using UIntType = typename detail::FPBits<T>::UIntType;
        detail::FPBits<T> bits(x);

        if (bits.is_inf_or_nan() || bits.is_zero())
            return x;

        bool is_neg = bits.get_sign();
        int exponent = bits.get_exponent();

        if (exponent >= static_cast<int>(detail::MantissaWidth<T>::VALUE))
            return x;

        if (exponent == -1) {
            if (is_neg)
                return T(-1.0);
            else
                return T(1.0);
        }

        if (exponent <= -2) {
            if (is_neg)
                return T(-0.0);
            else
                return T(0.0);
        }

        uint32_t trim_size = detail::MantissaWidth<T>::VALUE - exponent;
        bool half_bit_set = bits.get_mantissa() & (UIntType(1) << (trim_size - 1));
        bits.set_mantissa((bits.get_mantissa() >> trim_size) << trim_size);
        T trunc_value = T(bits);

        if (trunc_value == x)
            return x;

        if (!half_bit_set) {
            return trunc_value;
        } else {
            return is_neg ? trunc_value - T(1.0) : trunc_value + T(1.0);
        }
    }
} // namespace crt::math