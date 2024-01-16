#pragma once
#include "trunc.hpp"
#include "detail.hpp"
#include "ceil.hpp"
#include "trunc.hpp"
namespace crt::math {
    template <typename T, std::enable_if_t<std::is_floating_point_v<T>, int> = 0>
    static inline T floor(T x) {
        detail::FPBits<T> bits(x);
        if (bits.get_sign()) {
            return -math::ceil(-x);
        } else {
            return math::trunc(x);
        }
    }
} // namespace crt::math