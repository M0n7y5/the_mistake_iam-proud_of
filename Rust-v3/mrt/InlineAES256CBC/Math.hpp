#pragma once
//
// Inline AES256 and CBC implementation
// ---------------------------------------------------------------------------
// Copyright (c) 2019 Lucky Resistor. See LICENSE for details.
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.


#include <cstdint>


namespace lrcrypto::aes256 {


/// The "xtimes" multiplication of the algorithm.
///
/// @param value The value which should be multiplied by 2.
/// @return The result of the multiplication.
///
inline constexpr uint8_t xTimes(const uint8_t value) noexcept;

/// The special multiplication for the algorithm.
///
/// Works for only for factors 0x1-0xf, which are required by the algorithm.
///
/// @tparam factor The factor for the multiplication.
/// @param value The value for the multiplication.
/// @return The result of the multiplication.
///
template<uint8_t factor>
inline constexpr uint8_t multiply(uint8_t value) noexcept;

/// A rotate left method.
///
template<uint8_t shiftCount>
inline constexpr uint8_t rotateLeft(const uint8_t value) noexcept;


constexpr uint8_t xTimes(const uint8_t value) noexcept
{
	// 1. Left shift the value.
	// 2. If the 8. bit is 1, XOR 0x1b to the previous result.
	return (value << 1) ^ (((value & static_cast<uint8_t>(0x80)) == 0) ? static_cast<uint8_t>(0) : static_cast<uint8_t>(0x1b));
}


template<uint8_t factor>
constexpr uint8_t multiply(uint8_t value) noexcept
{
	// Slow default implementation.
	return
		(((value & static_cast<uint8_t>(0b0001)) == 0) ? 0 : (value)) ^
		(((value & static_cast<uint8_t>(0b0010)) == 0) ? 0 : xTimes(value)) ^
		(((value & static_cast<uint8_t>(0b0100)) == 0) ? 0 : xTimes(xTimes(value))) ^
		(((value & static_cast<uint8_t>(0b1000)) == 0) ? 0 : xTimes(xTimes(xTimes(value))));
}


template<>
constexpr uint8_t multiply<0x0>(uint8_t value) noexcept
{
	return 0;
}


template<>
constexpr uint8_t multiply<0x1>(uint8_t value) noexcept
{
	return value;
}


template<>
constexpr uint8_t multiply<0x2>(uint8_t value) noexcept
{
	return xTimes(value);
}


template<>
constexpr uint8_t multiply<0x3>(uint8_t value) noexcept
{
	return value ^ xTimes(value);
}


template<>
constexpr uint8_t multiply<0x9>(uint8_t value) noexcept
{
	return value ^ xTimes(xTimes(xTimes(value)));
}


template<>
constexpr uint8_t multiply<0xb>(uint8_t value) noexcept
{
	return value ^ xTimes(value) ^ xTimes(xTimes(xTimes(value)));
}


template<>
constexpr uint8_t multiply<0xd>(uint8_t value) noexcept
{
	return value ^ xTimes(xTimes(value)) ^ xTimes(xTimes(xTimes(value)));
}


template<>
constexpr uint8_t multiply<0xe>(uint8_t value) noexcept
{
	return xTimes(value) ^ xTimes(xTimes(value)) ^ xTimes(xTimes(xTimes(value)));
}


template<uint8_t shiftCount>
constexpr uint8_t rotateLeft(const uint8_t value) noexcept
{
	return (value << shiftCount) ^ (value >> (8 - shiftCount));
}


}


