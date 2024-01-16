#pragma once
#include "detail.hpp"
namespace crt::math {
    template <typename T, std::enable_if_t<std::is_floating_point_v<T>, int> = 0>
    static inline T trunc(T x) {
        detail::FPBits<T> bits(x);

        if (bits.is_inf_or_nan())
            return x;

        int exponent = bits.get_exponent();

        if (exponent >= static_cast<int>(detail::MantissaWidth<T>::VALUE))
            return x;

        if (exponent <= -1) {
            if (bits.get_sign())
                return T(-0.0);
            else
                return T(0.0);
        }

        int trim_size = detail::MantissaWidth<T>::VALUE - exponent;
        bits.set_mantissa((bits.get_mantissa() >> trim_size) << trim_size);
        return T(bits);
    }
} // namespace crt::math