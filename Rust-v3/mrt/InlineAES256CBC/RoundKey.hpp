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


#include "Word.hpp"
#include "SubstitutionBox.hpp"


namespace lrcrypto::aes256 {


/// The round key used for the algorithm.
///
class RoundKey
{
public:
	/// The word count for the expanded round key.
	///
	static constexpr uint8_t wordCount = cBlockSizeWords * (cNumberOfRounds + 1);

public:
	/// Create the round key from the given key.
	///
	/// @param substitutionBox The substitution box to use for key expansion.
	/// @param key The key with cKeySizeBytes bytes for the algorithm.
	///
	inline RoundKey(const SubstitutionBox &substitutionBox, const uint8_t *key) noexcept;

public:
	/// Access a word from the round key.
	///
	/// @param index The index of the word.
	///
	inline constexpr Word operator[](const uint8_t index) const noexcept;

public:
	/// Copy the words of the round key in the correct order to a byte array.
	///
	/// This function is just to test different implementations. It is not used
	/// for the encryption or decryption of data.
	///
	/// @param byteArray The byte array with at least (sizeof(Word)
	///
	inline void copyToByteArray(uint8_t *byteArray) const noexcept;

public:
	/// Get the number of bytes for this round key.
	///
	/// @return The number of bytes required to store this round key.
	///
	static constexpr inline uint8_t getSizeInBytes() noexcept;

private:
	Word _words[wordCount]; ///< The words of the round key.
};


RoundKey::RoundKey(const SubstitutionBox &substitutionBox, const uint8_t *key) noexcept
{
	// Apply the Rijndael key schedule
	// Copy the first Nk words from the original key.
	for (uint8_t index = 0; index < cKeySizeWords; ++index) {
		_words[index] = Word::fromBytes(index, key);
	}
	// Process the rest of the words.
	auto temp = _words[cKeySizeWords - 1];
	for (uint8_t index = cKeySizeWords; index < wordCount; ++index) {
		if ((index % cKeySizeWords) == 0) {
			temp.rotate();
			temp.substitute(substitutionBox);
			temp.applyRoundConstant(index / cKeySizeWords);
		}
		if (cKeySizeWords > 6 && (index % cKeySizeWords) == 4) {
			temp.substitute(substitutionBox);
		}
		temp ^= _words[index - cKeySizeWords];
		_words[index] = temp;
	}
}


void RoundKey::copyToByteArray(uint8_t *byteArray) const noexcept
{
	for (uint8_t index = 0; index < wordCount; ++index) {
		_words[index].toBytes(index, byteArray);
	}
}


constexpr uint8_t RoundKey::getSizeInBytes() noexcept
{
	return wordCount * sizeof(Word);
}


constexpr Word RoundKey::operator[](const uint8_t index) const noexcept
{
	return _words[index];
}


}


