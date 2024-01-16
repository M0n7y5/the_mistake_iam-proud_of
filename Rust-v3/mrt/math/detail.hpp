#pragma once
#include <bit>
#include <cstdint>
#include <intrin.h>
#include <optional>
#include <type_traits>

#if defined(__clang__) || defined(__GNUC__)
    #define VORTEX_INTRIN_CLZ __builtin_clz
    #define VORTEX_INTRIN_CLZL __builtin_clzl
    #define VORTEX_INTRIN_CLZLL __builtin_clzll

    #define VORTEX_INTRIN_CTZ __builtin_ctz
    #define VORTEX_INTRIN_CTZL __builtin_ctzl
    #define VORTEX_INTRIN_CTZLL __builtin_ctzll
#else
    #define VORTEX_INTRIN_CLZ _lzcnt_u32
    #define VORTEX_INTRIN_CLZL _lzcnt_u32
    #define VORTEX_INTRIN_CLZLL _lzcnt_u64

    #define VORTEX_INTRIN_CTZ _tzcnt_u32
    #define VORTEX_INTRIN_CTZL _tzcnt_u32
    #define VORTEX_INTRIN_CTZLL _tzcnt_u64
#endif

namespace crt::math::detail {
    constexpr double M_MATH_PI = 0x1.921fb54442d18p+1;
    constexpr double M_MATH_PI_2 = 0x1.921fb54442d18p+0;

    constexpr float M_MATH_PI_F = float(M_MATH_PI);
    constexpr float M_MATH_PI_2_F = float(M_MATH_PI_2);

    static constexpr auto FE_TONEAREST_DEF = 0x00000000;
    static constexpr auto FE_UPWARD_DEF = 0x00000200;
    static constexpr auto FE_DOWNWARD_DEF = 0x00000100;
    static constexpr auto FE_TOWARDZERO_DEF = 0x00000300;

#define LIKELY(expr)             \
    (([](bool value) {           \
        switch (value) {         \
        [[likely]] case true:    \
            return true;         \
        [[unlikely]] case false: \
            return false;        \
        }                        \
        return false;            \
    })(expr))
#define UNLIKELY(expr)          \
    (([](bool value) {          \
        switch (value) {        \
        [[unlikely]] case true: \
            return true;        \
        [[likely]] case false:  \
            return false;       \
        }                       \
        return false;           \
    })(expr))

    static constexpr bool likely(bool cond) {
        return LIKELY(cond);
    }

    static constexpr bool unlikely(bool cond) {
        return UNLIKELY(cond);
    }

    template <typename T>
    static inline T opt_barrier(T x) {
        volatile T y = x;
        return y;
    }

    namespace __internal {
        template <typename T>
        static inline int clz(T val);
        template <>
        inline int clz<unsigned int>(unsigned int val) {
            return int(VORTEX_INTRIN_CLZ(val));
        }
        template <>
        inline int clz<unsigned long int>(unsigned long int val) {
            return int(VORTEX_INTRIN_CLZL(val));
        }
        template <>
        inline int clz<unsigned long long int>(unsigned long long int val) {
            return int(VORTEX_INTRIN_CLZLL(val));
        }

        template <typename T>
        static inline int ctz(T val);
        template <>
        inline int ctz<unsigned int>(unsigned int val) {
            return int(VORTEX_INTRIN_CTZ(val));
        }
        template <>
        inline int ctz<unsigned long int>(unsigned long int val) {
            return int(VORTEX_INTRIN_CTZL(val));
        }
        template <>
        inline int ctz<unsigned long long int>(unsigned long long int val) {
            return int(VORTEX_INTRIN_CTZLL(val));
        }
    } // namespace __internal

    template <typename T>
    static inline int safe_ctz(T val) {
        return correct_zero(val, __internal::ctz(val));
    }

    template <typename T>
    static inline int unsafe_ctz(T val) {
        return ctz(val);
    }

    template <typename T>
    static inline int safe_clz(T val) {
        return correct_zero(val, __internal::clz(val));
    }

    template <typename T>
    static inline int unsafe_clz(T val) {
        return clz(val);
    }

    static constexpr uint16_t MXCSR_ROUNDING_CONTROL_BIT_POSITION = 13;

    struct RoundingControlValue {
        static constexpr uint16_t TO_NEAREST = 0x0;
        static constexpr uint16_t DOWNWARD = 0x1;
        static constexpr uint16_t UPWARD = 0x2;
        static constexpr uint16_t TOWARD_ZERO = 0x3;
    };

    static inline uint32_t get_mxcsr() {
        // https://www.intel.com/content/www/us/en/docs/cpp-compiler/developer-guide-reference/2021-8/intrinsics-to-read-and-write-registers.html
        return _mm_getcsr();
    }

    template <typename T>
    struct FloatProperties { };

    template <>
    struct FloatProperties<float> {
        typedef uint32_t BitsType;
        static_assert(sizeof(BitsType) == sizeof(float), "Unexpected size of 'float' type.");

        static constexpr uint32_t BIT_WIDTH = sizeof(BitsType) * 8;

        static constexpr uint32_t MANTISSA_WIDTH = 23;
        static constexpr uint32_t EXPONENT_WIDTH = 8;
        static constexpr BitsType MANTISSA_MASK = (BitsType(1) << MANTISSA_WIDTH) - 1;
        static constexpr BitsType SIGN_MASK = BitsType(1) << (EXPONENT_WIDTH + MANTISSA_WIDTH);
        static constexpr BitsType EXPONENT_MASK = ~(SIGN_MASK | MANTISSA_MASK);
        static constexpr uint32_t EXPONENT_BIAS = 127;

        static constexpr BitsType EXP_MANT_MASK = MANTISSA_MASK + EXPONENT_MASK;
        static_assert(EXP_MANT_MASK == ~SIGN_MASK, "Exponent and mantissa masks are not as expected.");

        static constexpr BitsType QUIET_NAN_MASK = 0x00400000U;
    };

    template <>
    struct FloatProperties<double> {
        typedef uint64_t BitsType;
        static_assert(sizeof(BitsType) == sizeof(double), "Unexpected size of 'double' type.");

        static constexpr uint32_t BIT_WIDTH = sizeof(BitsType) * 8;

        static constexpr uint32_t MANTISSA_WIDTH = 52;
        static constexpr uint32_t EXPONENT_WIDTH = 11;
        static constexpr BitsType MANTISSA_MASK = (BitsType(1) << MANTISSA_WIDTH) - 1;
        static constexpr BitsType SIGN_MASK = BitsType(1) << (EXPONENT_WIDTH + MANTISSA_WIDTH);
        static constexpr BitsType EXPONENT_MASK = ~(SIGN_MASK | MANTISSA_MASK);
        static constexpr uint32_t EXPONENT_BIAS = 1023;

        static constexpr BitsType EXP_MANT_MASK = MANTISSA_MASK + EXPONENT_MASK;
        static_assert(EXP_MANT_MASK == ~SIGN_MASK, "Exponent and mantissa masks are not as expected.");

        static constexpr BitsType QUIET_NAN_MASK = 0x0008000000000000ULL;
    };

    static inline int get_round() {
        uint16_t bit_value = (get_mxcsr() >> MXCSR_ROUNDING_CONTROL_BIT_POSITION) & 0x3;
        switch (bit_value) {
        case RoundingControlValue::TO_NEAREST:
            return FE_TONEAREST_DEF;
        case RoundingControlValue::DOWNWARD:
            return FE_DOWNWARD_DEF;
        case RoundingControlValue::UPWARD:
            return FE_UPWARD_DEF;
        case RoundingControlValue::TOWARD_ZERO:
            return FE_TOWARDZERO_DEF;
        default:
            return -1; // Error value.
        }
    }

    template <>
    struct FloatProperties<long double> {
        typedef uint64_t BitsType;
        static_assert(sizeof(BitsType) == sizeof(double), "Unexpected size of 'double' type.");

        static constexpr uint32_t BIT_WIDTH = FloatProperties<double>::BIT_WIDTH;

        static constexpr uint32_t MANTISSA_WIDTH = FloatProperties<double>::MANTISSA_WIDTH;
        static constexpr uint32_t EXPONENT_WIDTH = FloatProperties<double>::EXPONENT_WIDTH;
        static constexpr BitsType MANTISSA_MASK = FloatProperties<double>::MANTISSA_MASK;
        static constexpr BitsType SIGN_MASK = FloatProperties<double>::SIGN_MASK;
        static constexpr BitsType EXPONENT_MASK = FloatProperties<double>::EXPONENT_MASK;
        static constexpr uint32_t EXPONENT_BIAS = FloatProperties<double>::EXPONENT_BIAS;

        static constexpr BitsType EXP_MANT_MASK = FloatProperties<double>::EXP_MANT_MASK;
        static_assert(EXP_MANT_MASK == ~SIGN_MASK, "Exponent and mantissa masks are not as expected.");

        static constexpr BitsType QUIET_NAN_MASK = FloatProperties<double>::QUIET_NAN_MASK;
    };

    // Define the float type corresponding to the BitsType.
    template <typename BitsType>
    struct FloatType;

    template <>
    struct FloatType<uint32_t> {
        static_assert(sizeof(uint32_t) == sizeof(float), "Unexpected size of 'float' type.");
        typedef float Type;
    };

    template <>
    struct FloatType<uint64_t> {
        static_assert(sizeof(uint64_t) == sizeof(double), "Unexpected size of 'double' type.");
        typedef double Type;
    };

    template <typename BitsType>
    using FloatTypeT = typename FloatType<BitsType>::Type;

    template <typename T>
    struct MantissaWidth {
        static constexpr unsigned VALUE = FloatProperties<T>::MANTISSA_WIDTH;
    };

    template <typename T>
    struct ExponentWidth {
        static constexpr unsigned VALUE = FloatProperties<T>::EXPONENT_WIDTH;
    };

    template <typename T>
    struct FPBits {
        using FloatProp = FloatProperties<T>;

        using UIntType = typename FloatProp::BitsType;

        UIntType bits;

        void set_mantissa(UIntType mantVal) {
            mantVal &= (FloatProp::MANTISSA_MASK);
            bits &= ~(FloatProp::MANTISSA_MASK);
            bits |= mantVal;
        }

        UIntType get_mantissa() const {
            return bits & FloatProp::MANTISSA_MASK;
        }

        void set_unbiased_exponent(UIntType expVal) {
            expVal = (expVal << (FloatProp::MANTISSA_WIDTH)) & FloatProp::EXPONENT_MASK;
            bits &= ~(FloatProp::EXPONENT_MASK);
            bits |= expVal;
        }

        uint16_t get_unbiased_exponent() const {
            return uint16_t((bits & FloatProp::EXPONENT_MASK) >> (FloatProp::MANTISSA_WIDTH));
        }

        constexpr UIntType get_explicit_mantissa() {
            return ((get_unbiased_exponent() > 0 && !is_inf_or_nan()) ? (FloatProp::MANTISSA_MASK + 1) : 0) | (FloatProp::MANTISSA_MASK & bits);
        }

        void set_sign(bool signVal) {
            bits |= FloatProp::SIGN_MASK;
            if (!signVal)
                bits -= FloatProp::SIGN_MASK;
        }

        bool get_sign() const {
            return (bits & FloatProp::SIGN_MASK) != 0;
        }

        static constexpr int EXPONENT_BIAS = (1 << (ExponentWidth<T>::VALUE - 1)) - 1;
        static constexpr int MAX_EXPONENT = (1 << ExponentWidth<T>::VALUE) - 1;

        static constexpr UIntType MIN_SUBNORMAL = UIntType(1);
        static constexpr UIntType MAX_SUBNORMAL = (UIntType(1) << MantissaWidth<T>::VALUE) - 1;
        static constexpr UIntType MIN_NORMAL = (UIntType(1) << MantissaWidth<T>::VALUE);
        static constexpr UIntType MAX_NORMAL = ((UIntType(MAX_EXPONENT) - 1) << MantissaWidth<T>::VALUE) | MAX_SUBNORMAL;

        template <typename XType, std::enable_if_t<std::is_same_v<T, XType>, int> = 0>
        constexpr explicit FPBits(XType x): bits(std::bit_cast<UIntType>(x)) { }

        template <typename XType, std::enable_if_t<std::is_same_v<XType, UIntType>, int> = 0>
        constexpr explicit FPBits(XType x): bits(x) { }

        FPBits(): bits(0) { }

        T get_val() const {
            return std::bit_cast<T>(bits);
        }

        void set_val(T value) {
            bits = std::bit_cast<UIntType>(value);
        }

        explicit operator T() const {
            return get_val();
        }

        UIntType uintval() const {
            return bits;
        }

        int get_exponent() const {
            return int(get_unbiased_exponent()) - EXPONENT_BIAS;
        }

        bool is_zero() const {
            return (bits << 1) == 0;
        }

        bool is_inf() const {
            return (bits & FloatProp::EXP_MANT_MASK) == FloatProp::EXPONENT_MASK;
        }

        bool is_nan() const {
            return (bits & FloatProp::EXP_MANT_MASK) > FloatProp::EXPONENT_MASK;
        }

        bool is_quiet_nan() const {
            return (bits & FloatProp::EXP_MANT_MASK) == (FloatProp::EXPONENT_MASK | FloatProp::QUIET_NAN_MASK);
        }

        bool is_inf_or_nan() const {
            return (bits & FloatProp::EXPONENT_MASK) == FloatProp::EXPONENT_MASK;
        }

        static constexpr FPBits<T> zero(bool sign = false) {
            return FPBits(sign ? FloatProp::SIGN_MASK : UIntType(0));
        }

        static constexpr FPBits<T> neg_zero() {
            return zero(true);
        }

        static constexpr FPBits<T> inf(bool sign = false) {
            FPBits<T> bits(sign ? FloatProp::SIGN_MASK : UIntType(0));
            bits.set_unbiased_exponent(MAX_EXPONENT);
            return bits;
        }

        static constexpr FPBits<T> neg_inf() {
            FPBits<T> bits = inf();
            bits.set_sign(1);
            return bits;
        }

        static constexpr T build_nan(UIntType v) {
            FPBits<T> bits = inf();
            bits.set_mantissa(v);
            return T(bits);
        }

        inline static constexpr FPBits<T> make_value(UIntType number, int ep) {
            FPBits<T> result;
            int lz = unsafe_clz(number) - FloatProp::EXPONENT_WIDTH;
            number <<= lz;
            ep -= lz;

            if (likely(ep >= 0)) {
                result.set_mantissa(number);
                result.set_unbiased_exponent(ep + 1);
            } else {
                result.set_mantissa(number >> -ep);
            }
            return result;
        }

        inline static FPBits<T> create_value(bool sign, UIntType unbiased_exp, UIntType mantissa) {
            FPBits<T> result;
            result.set_sign(sign);
            result.set_unbiased_exponent(unbiased_exp);
            result.set_mantissa(mantissa);
            return result;
        }
    };

    template <typename T>
    static inline T multiply_add(T x, T y, T z) {
        return x * y + z;
    }

    static inline float nearest_integer(float x) {
        if (x < 0x1p24f && x > -0x1p24f) {
            float r = x < 0 ? (x - 0x1.0p23f) + 0x1.0p23f : (x + 0x1.0p23f) - 0x1.0p23f;
            float diff = x - r;

            if (unlikely(diff > 0.5f))
                return r + 1.0f;
            if (unlikely(diff < -0.5f))
                return r - 1.0f;
            return r;
        }
        return x;
    }

    static inline double nearest_integer(double x) {
        if (x < 0x1p53 && x > -0x1p53) {
            double r = x < 0 ? (x - 0x1.0p52) + 0x1.0p52 : (x + 0x1.0p52) - 0x1.0p52;
            double diff = x - r;

            if (unlikely(diff > 0.5))
                return r + 1.0;
            if (unlikely(diff < -0.5))
                return r - 1.0;
            return r;
        }
        return x;
    }

    template <typename T>
    static inline T polyeval(T, T a0) {
        return a0;
    }

    template <typename T, typename... Ts>
    static inline T polyeval(T x, T a0, Ts... a) {
        return multiply_add(x, polyeval(x, a...), a0);
    }

    template <typename T, size_t N>
    struct ExceptValues {
        using UIntType = typename FPBits<T>::UIntType;

        struct Mapping {
            UIntType input;
            UIntType rnd_towardzero_result;
            UIntType rnd_upward_offset;
            UIntType rnd_downward_offset;
            UIntType rnd_tonearest_offset;
        };

        Mapping values[N];

        constexpr std::optional<T> lookup(UIntType x_bits) const {
            for (size_t i = 0; i < N; ++i) {
                if (unlikely(x_bits == values[i].input)) {
                    UIntType out_bits = values[i].rnd_towardzero_result;
                    switch (detail::get_round()) {
                    case FE_UPWARD_DEF:
                        out_bits += values[i].rnd_upward_offset;
                        break;
                    case FE_DOWNWARD_DEF:
                        out_bits += values[i].rnd_downward_offset;
                        break;
                    case FE_TONEAREST_DEF:
                        out_bits += values[i].rnd_tonearest_offset;
                        break;
                    }
                    return FPBits<T>(out_bits).get_val();
                }
            }
            return std::nullopt;
        }

        constexpr std::optional<T> lookup_odd(UIntType x_abs, bool sign) const {
            for (size_t i = 0; i < N; ++i) {
                if (unlikely(x_abs == values[i].input)) {
                    UIntType out_bits = values[i].rnd_towardzero_result;
                    switch (detail::get_round()) {
                    case FE_UPWARD_DEF:
                        out_bits += sign ? values[i].rnd_downward_offset : values[i].rnd_upward_offset;
                        break;
                    case FE_DOWNWARD_DEF:
                        out_bits += sign ? values[i].rnd_upward_offset : values[i].rnd_downward_offset;
                        break;
                    case FE_TONEAREST_DEF:
                        out_bits += values[i].rnd_tonearest_offset;
                        break;
                    }
                    T result = FPBits<T>(out_bits).get_val();
                    if (sign)
                        result = -result;

                    return result;
                }
            }
            return std::nullopt;
        }
    };

    static constexpr uint32_t FAST_PASS_BOUND = 0x4a80'0000U;

    static constexpr double THIRTYTWO_OVER_PI_28[8] = {0x1.45f306ep+3,   -0x1.b1bbeaep-28,  0x1.3f84ebp-57,    -0x1.7056592p-87,
                                                       0x1.c0db62ap-116, -0x1.4cd8778p-145, -0x1.bef806cp-174, 0x1.63abdecp-204};

    static constexpr int THIRTYTWO_OVER_PI_28_LSB_EXP[8] = {-24, -55, -81, -114, -143, -170, -200, -230};

    static inline int64_t small_range_reduction(double x, double& y) {
        double prod = x * THIRTYTWO_OVER_PI_28[0];
        double kd = detail::nearest_integer(prod);
        y = prod - kd;
        y = detail::multiply_add(x, THIRTYTWO_OVER_PI_28[1], y);
        y = detail::multiply_add(x, THIRTYTWO_OVER_PI_28[2], y);
        return static_cast<int64_t>(kd);
    }

    static inline int64_t large_range_reduction(double x, int x_exp, double& y) {
        int idx = 0;
        y = 0;
        int x_lsb_exp_m4 = x_exp - detail::FloatProperties<float>::MANTISSA_WIDTH;

        while (x_lsb_exp_m4 + THIRTYTWO_OVER_PI_28_LSB_EXP[idx] > 5)
            ++idx;

        double prod_hi = x * THIRTYTWO_OVER_PI_28[idx];
        double k_hi = detail::nearest_integer(prod_hi);
        double frac = prod_hi - k_hi;
        double prod_lo = detail::multiply_add(x, THIRTYTWO_OVER_PI_28[idx + 1], frac);
        double k_lo = detail::nearest_integer(prod_lo);

        y = prod_lo - k_lo;
        y = detail::multiply_add(x, THIRTYTWO_OVER_PI_28[idx + 2], y);
        y = detail::multiply_add(x, THIRTYTWO_OVER_PI_28[idx + 3], y);

        return static_cast<int64_t>(k_hi) + static_cast<int64_t>(k_lo);
    }

    static inline float min(float a, float b) {
        // Branchless SSE min.
        _mm_store_ss(&a, _mm_min_ss(_mm_set_ss(a), _mm_set_ss(b)));
        return a;
    }

    static inline float max(float a, float b) {
        // Branchless SSE max.
        _mm_store_ss(&a, _mm_max_ss(_mm_set_ss(a), _mm_set_ss(b)));
        return a;
    }

    static inline float clamp(float val, float minval, float maxval) {
        // Branchless SSE clamp.
        // return minss( maxss(val,minval), maxval );

        _mm_store_ss(&val, _mm_min_ss(_mm_max_ss(_mm_set_ss(val), _mm_set_ss(minval)), _mm_set_ss(maxval)));
        return val;
    }
} // namespace crt::math::detail