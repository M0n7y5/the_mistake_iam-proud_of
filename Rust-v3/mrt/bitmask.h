// This is free and unencumbered software released into the public domain.
// 
// Anyone is free to copy, modify, publish, use, compile, sell, or 
// distribute this software, either in source code form or as a compiled 
// binary, for any purpose, commercial or non-commercial, and by any 
// means.
// 
// In jurisdictions that recognize copyright laws, the author or authors 
// of this software dedicate any and all copyright interest in the 
// software to the public domain. We make this dedication for the 
// benefit of the public at large and to the detriment of our heirs and 
// successors. We intend this dedication to be an overt act of 
// relinquishment in perpetuity of all present and future rights to 
// this software under copyright law.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, 
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF 
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
// IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR 
// OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, 
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
// OTHER DEALINGS IN THE SOFTWARE.
// 
// For more information, please refer to <http://unlicense.org/>
#pragma once
#include <type_traits>
#include <cstdint>

// HELPERS
// -------

/**
 *  \brief Get enum underlying type.
 */
template <typename T>
inline typename std::underlying_type<T>::type enumc_to_int( T t )
{
    return static_cast< typename std::underlying_type<T>::type >( t );
}

// MACROS
// ------

/**
 *  \brief Macro to define enum operators between enumerations.
 *
 *  Supports `&`, `&=`, `|`, `|=`, `^`, `^=`, `~`, and bool conversion.
 */
#define SCOPED_ENUM_FLAG2(lhs_t, ths_t)                                     \
    /*  \brief Bitwise or operator. */                                      \
    inline lhs_t operator|(lhs_t lhs, ths_t rhs) noexcept                   \
    {                                                                       \
        return static_cast<lhs_t>(enumc_to_int(lhs) | enumc_to_int(rhs));   \
    }                                                                       \
                                                                            \
    /*  \brief Bitwise or assignment operator. */                           \
    inline lhs_t & operator|=(lhs_t &lhs, ths_t rhs) noexcept               \
    {                                                                       \
        lhs = static_cast<lhs_t>(enumc_to_int(lhs) | enumc_to_int(rhs));    \
        return lhs;                                                         \
    }                                                                       \
                                                                            \
    /*      \brief Bitwise and operator. */                                 \
    inline lhs_t operator&(lhs_t lhs, ths_t rhs) noexcept                   \
    {                                                                       \
        return static_cast<lhs_t>(enumc_to_int(lhs) & enumc_to_int(rhs));   \
    }                                                                       \
                                                                            \
    /*  \brief Bitwise and assignment operator. */                          \
    inline lhs_t & operator&=(lhs_t &lhs, ths_t rhs) noexcept               \
    {                                                                       \
        lhs = static_cast<lhs_t>(enumc_to_int(lhs) & enumc_to_int(rhs));    \
        return lhs;                                                         \
    }                                                                       \
                                                                            \
    /*  \brief Bitwise xor operator. */                                     \
    inline lhs_t operator^(lhs_t lhs, ths_t rhs) noexcept                   \
    {                                                                       \
        return static_cast<lhs_t>(enumc_to_int(lhs) ^ enumc_to_int(rhs));   \
    }                                                                       \
                                                                            \
    /*  \brief Bitwise xor assignment operator. */                          \
    inline lhs_t & operator^=(lhs_t &lhs, ths_t rhs) noexcept               \
    {                                                                       \
        lhs = static_cast<lhs_t>(enumc_to_int(lhs) ^ enumc_to_int(rhs));    \
        return lhs;                                                         \
    }


 /**
  *  \brief Set enumeration flags within the same enum.
  */
#define SCOPED_ENUM_FLAG1(enum_t)                                           \
    SCOPED_ENUM_FLAG2(enum_t, enum_t)                                       \
                                                                            \
    /*  \brief Bitwise negation operator. */                                \
    inline enum_t operator~(enum_t value) noexcept                          \
    {                                                                       \
        return static_cast<enum_t>(~enumc_to_int(value));                   \
    }                                                                       \
                                                                            \
    /*  \brief Negation operator. */                                        \
    inline bool operator!(enum_t value) noexcept                            \
    {                                                                       \
        return enumc_to_int(value) == 0;                                    \
    }

  /**
   *  \brief Macros to grab the proper bit-wise flag setter.
   *  `SCOPED_ENUM_ID` is required for MSVC compatibility, since MSVC
   *  has issues in expanding `__VA_ARGS__` for the dispatcher.
   *  Don't remove it, even if the above code works without it
   *  for GCC and Clang.
   */
#define SCOPED_ENUM_ID(x) x
#define GET_SCOPED_ENUM_FLAG(_1,_2,NAME,...) NAME
#define SCOPED_ENUM_FLAG(...) SCOPED_ENUM_ID(GET_SCOPED_ENUM_FLAG(__VA_ARGS__, SCOPED_ENUM_FLAG2, SCOPED_ENUM_FLAG1)(__VA_ARGS__))