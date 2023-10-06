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


#include "State.hpp"

#include <cstddef>


namespace lrcrypto::aes256 {


/// Encrypt Data
///
/// This function encrypts data in the buffer `data` with the given `key`
/// using the initialization vetor in `iv`.
///
/// Important: The data size must be a multiple of the block size (16 bytes).
/// You have to add padding bytes to your buffer, until it has a size which
/// is a multiple of the block size.
///
/// @param substitutionBox The substitution box to use.
/// @param data The buffer with the data to encrypt.
/// @param dataSize The size of the buffer. This has to be a multiple of the
///    block size (16 bytes).
/// @param key The key to encrypt the data. The key length is 256 bit
///    or 32 bytes.
/// @param iv The initialization vector to use for the encryption. The vector
///    has the size of a block (16 bytes).
///
inline void encryptDataCBC(
	const SubstitutionBox &substitutionBox,
	uint8_t *data,
	const size_t dataSize,
	const uint8_t *key,
	const uint8_t *iv)
{
	// Prepare the key for the operations.
	RoundKey roundKey(substitutionBox, key);
	// Start with the IV as chained block.
	State chainedBlock(iv);
	// Process all blocks of the encrypted data.
	for (size_t index = 0; index < dataSize; index += cBlockSizeBytes) {
		// Encrypt one block.
		State state(data);
		// Apply the chained block.
		state.xorWithState(chainedBlock);
		// Apply the cipher.
		state.cipher(substitutionBox, roundKey);
		// Write the data back into the byte sequence.
		state.toBytes(data);
		// Use the result as next chained block.
		chainedBlock = state;
		// Advance to the next block.
		data += cBlockSizeBytes;
	}
}


/// Decrypt Data
///
/// This function decrypts data in the buffer `data` with the given `key`
/// using the initialization vetor in `iv`.
///
/// Important: The data size must be a multiple of the block size (16 bytes).
/// You have to add padding bytes to your buffer, until it has a size which
/// is a multiple of the block size.
///
/// @param substitutionBox The substitution box to use.
/// @param data The buffer with the data to encrypt.
/// @param dataSize The size of the buffer. This has to be a multiple of the
///    block size (16 bytes).
/// @param key The key to decrypt the data. The key length is 256 bit
///    or 32 bytes.
/// @param iv The initialization vector which was used for the encryption.
///    The vector has the size of a block (16 bytes).
///
inline void decryptDataCBC(
	const SubstitutionBox &substitutionBox,
	uint8_t *data,
	const size_t dataSize,
	const uint8_t *key,
	const uint8_t *iv)
{
	// Prepare the key for the operations.
	RoundKey roundKey(substitutionBox, key);
	// Start with the IV as chained block.
	State chainedBlock(iv);
	// Process all blocks of the encrypted data.
	for (size_t index = 0; index < dataSize; index += cBlockSizeBytes) {
		// Decrypt one block.
		State state(data);
		// Keep a copy as next chained block.
		const State nextChainedBlock = state;
		// Apply the inverse cipher.
		state.inverseCipher(substitutionBox, roundKey);
		// Apply the chained block.
		state.xorWithState(chainedBlock);
		// Write the data back into the byte sequence.
		state.toBytes(data);
		// Prepare the next chained block.
		chainedBlock = nextChainedBlock;
		// Advance to the next block.
		data += cBlockSizeBytes;
	}
}


}


