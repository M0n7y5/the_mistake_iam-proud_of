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


/// The block size in words (Nb).
///
static constexpr uint8_t cBlockSizeWords = 4;

/// The number of words of the key (Nk).
///
static constexpr uint8_t cKeySizeWords = 8;

/// The number of rounds (Nr).
///
static constexpr uint8_t cNumberOfRounds = 14;

/// The block size in bytes.
///
static constexpr uint8_t cBlockSizeBytes = cBlockSizeWords * 4;

/// The size of the key in bytes.
///
static constexpr uint8_t cKeySizeBytes = cKeySizeWords * 4;

/// The round constants used in the algorithm.
///
static const uint8_t cRoundConstant[11] = {
  0x00, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x1b, 0x36 };


}


