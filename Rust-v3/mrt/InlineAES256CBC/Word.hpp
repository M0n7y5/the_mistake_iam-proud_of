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


#include "Constants.hpp"
#include "SubstitutionBox.hpp"


namespace lrcrypto::aes256 {


/// The word used for the algorithm
///
class Word
{
public:
	/// The native type which represents this word.
	///
	using NativeType = uint32_t;

public:
	/// Create a zero word.
	///
	inline constexpr Word() noexcept;

	/// Initialize a word using the native type.
	///
	inline constexpr Word(NativeType value) noexcept;

	/// Initialize a word using bytes.
	///
	inline constexpr Word(const uint8_t *data) noexcept;

	/// Initialize a word using four bytes.
	///
	inline constexpr Word(const uint8_t byte0, const uint8_t byte1, const uint8_t byte2, const uint8_t byte3) noexcept;

public:
	/// Access one byte from this word.
	///
	inline constexpr uint8_t operator[](const uint8_t byteIndex) const noexcept;

	/// Xor this word with another one.
	///
	inline Word& operator^=(const Word &other) noexcept;

public:
	/// Rotate this word.
	///
	inline void rotate() noexcept;

	/// Substitute this word with the S-Box.
	///
	inline void substitute(const SubstitutionBox &substitutionBox) noexcept;

	/// Substitute this word with the reverse S-Box.
	///
	inline void inverseSubstitute(const SubstitutionBox &substitutionBox) noexcept;

	/// Apply the round constant to this word.
	///
	/// @param constantIndex The index in the round constant array.
	///
	inline void applyRoundConstant(const uint8_t constantIndex) noexcept;

	/// Copy this word to the given byte sequence.
	///
	/// @param wordIndex The index of the word in the data sequence.
	/// @param data The data sequence to copy the word from.
	///
	inline void toBytes(const uint32_t wordIndex, uint8_t *data) const noexcept;

	/// Access a single byte from this word.
	///
	/// @param byteIndex The index of the byte to get.
	/// @return The byte value.
	///
	inline constexpr uint8_t getByte(const uint8_t byteIndex) const noexcept;

	/// Access the value of this word.
	///
	/// @return The value of the word.
	///
	inline constexpr NativeType getValue() const noexcept;

public:
	/// Copy a word from a byte sequence.
	///
	/// @param wordIndex The index of the word to copy from data.
	/// @param data The byte sequence to use for the copy.
	///
	static constexpr inline Word fromBytes(const uint32_t wordIndex, const uint8_t *data) noexcept;

private:
	/// Get a byte at the correct position for the word.
	///
	static constexpr inline NativeType wordFromByte(const uint8_t byteIndex, const uint8_t value) noexcept;

private:
	NativeType _value; ///< The value of this word.
};


constexpr Word::Word() noexcept
	: _value(0)
{
}


constexpr Word::Word(NativeType value) noexcept
	: _value(value)
{
}


constexpr uint8_t Word::operator[](const uint8_t byteIndex) const noexcept
{
	return getByte(byteIndex);
}


constexpr uint8_t Word::getByte(const uint8_t byteIndex) const noexcept
{
	return static_cast<uint8_t>(_value >> (byteIndex * 8));
}


constexpr Word::NativeType Word::wordFromByte(const uint8_t byteIndex, const uint8_t value) noexcept
{
	return static_cast<NativeType>(value) << (byteIndex * 8);
}


constexpr Word::Word(const uint8_t *data) noexcept
	: _value(static_cast<NativeType>(data[0]) | (static_cast<NativeType>(data[1]) << 8) | (static_cast<NativeType>(data[2]) << 16) | (static_cast<NativeType>(data[3]) << 24))
{
}


constexpr Word::Word(const uint8_t byte0, const uint8_t byte1, const uint8_t byte2, const uint8_t byte3) noexcept
	: _value(static_cast<NativeType>(byte0) | (static_cast<NativeType>(byte1) << 8) | (static_cast<NativeType>(byte2) << 16) | (static_cast<NativeType>(byte3) << 24))
{
}


void Word::rotate() noexcept
{
	_value = ((_value >> 8) | (_value << 24));
}


void Word::substitute(const SubstitutionBox &substitutionBox) noexcept
{
	*this = Word(
		substitutionBox.getSubstitutedValue(getByte(0)),
		substitutionBox.getSubstitutedValue(getByte(1)),
		substitutionBox.getSubstitutedValue(getByte(2)),
		substitutionBox.getSubstitutedValue(getByte(3)));
}


void Word::inverseSubstitute(const SubstitutionBox &substitutionBox) noexcept
{
	*this = Word(
		substitutionBox.getInverseSubstitutedValue(getByte(0)),
		substitutionBox.getInverseSubstitutedValue(getByte(1)),
		substitutionBox.getInverseSubstitutedValue(getByte(2)),
		substitutionBox.getInverseSubstitutedValue(getByte(3)));
}


void Word::applyRoundConstant(const uint8_t constantIndex) noexcept
{
	_value ^= static_cast<NativeType>(cRoundConstant[constantIndex]);
}


Word& Word::operator^=(const Word &other) noexcept
{
	_value ^= other._value;
	return *this;
}


constexpr Word Word::fromBytes(const uint32_t wordIndex, const uint8_t *data) noexcept
{
	return Word(data + (wordIndex * sizeof(NativeType)));
}


void Word::toBytes(const uint32_t wordIndex, uint8_t *data) const noexcept
{
	auto target = (data + (wordIndex * sizeof(NativeType)));
	target[0] = getByte(0);
	target[1] = getByte(1);
	target[2] = getByte(2);
	target[3] = getByte(3);
}


constexpr Word::NativeType Word::getValue() const noexcept
{
	return _value;
}


}

