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


#include "Math.hpp"


namespace lrcrypto::aes256 {


/// The substitution box.
///
class SubstitutionBox
{
public:
	/// Create an uninitialized substitution box.
	///
	/// Make sure to call `initialize()` before first use.
	///
	SubstitutionBox() noexcept = default;

public:
	/// Initialize the substitution box with the required values.
	///
	inline constexpr void initialize() noexcept;

	/// Get the substituted value.
	///
	inline constexpr uint8_t getSubstitutedValue(const uint8_t value) const noexcept;

	/// Get the inverse substituted value.
	///
	inline constexpr uint8_t getInverseSubstitutedValue(const uint8_t value) const noexcept;

private:
	uint8_t _normal[0x100]; ///< Normal substitution box.
	uint8_t _inverse[0x100]; ///< Inverse substitution box.
};


constexpr void SubstitutionBox::initialize() noexcept
{
	// Classic implementation to calculate the Rijndael S-Box.
	uint8_t p = 1;
	uint8_t q = 1;
	do {
		// Multiply p by x+1
		p ^= xTimes(p);
		// Divide q by x+1
		q ^= (q << 1);
		q ^= (q << 2);
		q ^= (q << 4);
		if ((q & 0x80) != 0) {
			q ^= 0x09;
		}
		const uint8_t result = 0x63 ^ q ^ rotateLeft<1>(q) ^ rotateLeft<2>(q) ^ rotateLeft<3>(q) ^ rotateLeft<4>(q);
		// Assign the result.
		_normal[p] = result;
		_inverse[result] = p;
	} while (p != 1);
	// Assign the special case for zero.
	_normal[0x00] = 0x63;
	_inverse[0x63] = 0x00;
}


constexpr uint8_t SubstitutionBox::getSubstitutedValue(const uint8_t value) const noexcept
{
	return _normal[value];
}


constexpr uint8_t SubstitutionBox::getInverseSubstitutedValue(const uint8_t value) const noexcept
{
	return _inverse[value];
}


}


