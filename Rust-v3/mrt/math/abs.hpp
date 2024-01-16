#pragma once

namespace crt::math {
    template <typename T>
    inline T abs(T t) {
        return t > 0 ? t : -t;
    }
} // namespace crt::math