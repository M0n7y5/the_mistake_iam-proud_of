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
#include "RoundKey.hpp"


namespace lrcrypto::aes256 {


/// The state of the algorithm.
///
class State
{
public:
	/// The number of columns for the state.
	///
	static constexpr uint8_t columnCount = 4;

	/// The number of bytes per state.
	///
	static constexpr uint8_t sizeInBytes = columnCount * sizeof(Word);

public:
	/// Initialize the state with a block of data.
	///
	/// @param data A block of data with `sizeInBytes` bytes.
	///
	inline constexpr State(const uint8_t *data) noexcept;

public:
	/// Apply a round key to this state.
	///
	inline void applyRoundKey(const RoundKey &roundKey, const uint8_t round) noexcept;

	/// Shift rows operation.
	///
	inline void shiftRows() noexcept;

	/// Inverse shift rows operation.
	///
	inline void inverseShiftRows() noexcept;

	/// substitute bytes.
	///
	inline void substitute(const SubstitutionBox &substitutionBox) noexcept;

	/// Inverse substitute bytes.
	///
	inline void inverseSubstitute(const SubstitutionBox &substitutionBox) noexcept;

	/// Mix columns.
	///
	inline void mixColumns() noexcept;

	/// Inverse mix columns.
	///
	inline void inverseMixColumns() noexcept;

	/// Apply the cipher using the given the given substitution box and round key.
	///
	/// @param substitutionBox The substitution box to use.
	/// @param roundKey The round key to use.
	///
	inline void cipher(const SubstitutionBox &substitutionBox, const RoundKey &roundKey);

	/// Apply the inverse cipher using the given substitution box and round key.
	///
	/// @param substitutionBox The substitution box to use.
	/// @param roundKey The round key to use.
	///
	inline void inverseCipher(const SubstitutionBox &substitutionBox, const RoundKey &roundKey);

	/// XOR the state with another one.
	///
	inline void xorWithState(const State &state) noexcept;

	/// Write the state to a byte sequence.
	///
	inline void toBytes(uint8_t *data) const noexcept;

	/// Get a single column.
	///
	inline Word getColumn(const uint8_t index) const noexcept;

private:
	Word _columns[columnCount]; // The words of the state.
};


constexpr State::State(const uint8_t *data) noexcept
{
	_columns[0] = Word::fromBytes(0, data);
	_columns[1] = Word::fromBytes(1, data);
	_columns[2] = Word::fromBytes(2, data);
	_columns[3] = Word::fromBytes(3, data);
}


void State::toBytes(uint8_t *data) const noexcept
{
	_columns[0].toBytes(0, data);
	_columns[1].toBytes(1, data);
	_columns[2].toBytes(2, data);
	_columns[3].toBytes(3, data);
}


void State::applyRoundKey(const RoundKey &roundKey, const uint8_t round) noexcept
{
	const uint8_t roundIndex = round * cBlockSizeWords;
	_columns[0] ^= roundKey[roundIndex + 0];
	_columns[1] ^= roundKey[roundIndex + 1];
	_columns[2] ^= roundKey[roundIndex + 2];
	_columns[3] ^= roundKey[roundIndex + 3];
}


void State::shiftRows() noexcept
{
	const Word newColumn0(
		_columns[0].getByte(0),
		_columns[1].getByte(1),
		_columns[2].getByte(2),
		_columns[3].getByte(3));
	const Word newColumn1(
		_columns[1].getByte(0),
		_columns[2].getByte(1),
		_columns[3].getByte(2),
		_columns[0].getByte(3));
	const Word newColumn2(
		_columns[2].getByte(0),
		_columns[3].getByte(1),
		_columns[0].getByte(2),
		_columns[1].getByte(3));
	const Word newColumn3(
		_columns[3].getByte(0),
		_columns[0].getByte(1),
		_columns[1].getByte(2),
		_columns[2].getByte(3));
	_columns[0] = newColumn0;
	_columns[1] = newColumn1;
	_columns[2] = newColumn2;
	_columns[3] = newColumn3;
}


void State::inverseShiftRows() noexcept
{
	const Word newColumn0(
		_columns[0].getByte(0),
		_columns[3].getByte(1),
		_columns[2].getByte(2),
		_columns[1].getByte(3));
	const Word newColumn1(
		_columns[1].getByte(0),
		_columns[0].getByte(1),
		_columns[3].getByte(2),
		_columns[2].getByte(3));
	const Word newColumn2(
		_columns[2].getByte(0),
		_columns[1].getByte(1),
		_columns[0].getByte(2),
		_columns[3].getByte(3));
	const Word newColumn3(
		_columns[3].getByte(0),
		_columns[2].getByte(1),
		_columns[1].getByte(2),
		_columns[0].getByte(3));
	_columns[0] = newColumn0;
	_columns[1] = newColumn1;
	_columns[2] = newColumn2;
	_columns[3] = newColumn3;
}


void State::substitute(const SubstitutionBox &substitutionBox) noexcept
{
	_columns[0].substitute(substitutionBox);
	_columns[1].substitute(substitutionBox);
	_columns[2].substitute(substitutionBox);
	_columns[3].substitute(substitutionBox);
}


void State::inverseSubstitute(const SubstitutionBox &substitutionBox) noexcept
{
	_columns[0].inverseSubstitute(substitutionBox);
	_columns[1].inverseSubstitute(substitutionBox);
	_columns[2].inverseSubstitute(substitutionBox);
	_columns[3].inverseSubstitute(substitutionBox);
}


void State::mixColumns() noexcept
{
	for (auto &column : _columns) {
		const uint8_t row0 = column.getByte(0);
		const uint8_t row1 = column.getByte(1);
		const uint8_t row2 = column.getByte(2);
		const uint8_t row3 = column.getByte(3);
		column = Word(
			multiply<0x2>(row0) ^ multiply<0x3>(row1) ^ multiply<0x1>(row2) ^ multiply<0x1>(row3),
			multiply<0x1>(row0) ^ multiply<0x2>(row1) ^ multiply<0x3>(row2) ^ multiply<0x1>(row3),
			multiply<0x1>(row0) ^ multiply<0x1>(row1) ^ multiply<0x2>(row2) ^ multiply<0x3>(row3),
			multiply<0x3>(row0) ^ multiply<0x1>(row1) ^ multiply<0x1>(row2) ^ multiply<0x2>(row3)
		);
	}
}


void State::inverseMixColumns() noexcept
{
	for (auto &column : _columns) {
		const uint8_t row0 = column.getByte(0);
		const uint8_t row1 = column.getByte(1);
		const uint8_t row2 = column.getByte(2);
		const uint8_t row3 = column.getByte(3);
		column = Word(
			multiply<0xe>(row0) ^ multiply<0xb>(row1) ^ multiply<0xd>(row2) ^ multiply<0x9>(row3),
			multiply<0x9>(row0) ^ multiply<0xe>(row1) ^ multiply<0xb>(row2) ^ multiply<0xd>(row3),
			multiply<0xd>(row0) ^ multiply<0x9>(row1) ^ multiply<0xe>(row2) ^ multiply<0xb>(row3),
			multiply<0xb>(row0) ^ multiply<0xd>(row1) ^ multiply<0x9>(row2) ^ multiply<0xe>(row3)
		);
	}
}


Word State::getColumn(const uint8_t index) const noexcept
{
	return _columns[index];
}


void State::xorWithState(const State &state) noexcept
{
	_columns[0] ^= state._columns[0];
	_columns[1] ^= state._columns[1];
	_columns[2] ^= state._columns[2];
	_columns[3] ^= state._columns[3];
}


void State::cipher(const SubstitutionBox &substitutionBox, const RoundKey &roundKey)
{
	applyRoundKey(roundKey, 0);
	for (uint8_t round = 1; round < cNumberOfRounds; ++round) {
		substitute(substitutionBox);
		shiftRows();
		mixColumns();
		applyRoundKey(roundKey, round);
	}
	substitute(substitutionBox);
	shiftRows();
	applyRoundKey(roundKey, cNumberOfRounds);
}


void State::inverseCipher(const SubstitutionBox &substitutionBox, const RoundKey &roundKey)
{
	applyRoundKey(roundKey, cNumberOfRounds);
	for (uint8_t round = (cNumberOfRounds - 1); round > 0; --round) {
		inverseShiftRows();
		inverseSubstitute(substitutionBox);
		applyRoundKey(roundKey, round);
		inverseMixColumns();
	}
	inverseShiftRows();
	inverseSubstitute(substitutionBox);
	applyRoundKey(roundKey, 0);
}


}


