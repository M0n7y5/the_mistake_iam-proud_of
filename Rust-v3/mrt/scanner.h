#pragma once
#include <cstdint>
#include <stdint.h>
#include <string>
#include <array>
#include <string_view>
#include <stdexcept>
#include <vector>

namespace Forza
{

    inline constexpr int is_space(char c)
    {
        switch (c)
        {
        case ' ':
        case '\f':
        case '\n':
        case '\r':
        case '\t':
        case '\v':
            return 1;
        }

        return 0;
    }

    inline long long hexstrtoint(std::string const& str, long long (*f)(char))
    {
        long long ret = 0;
        for (int j(1), i(str.size() - 1); i >= 0; --i, j *= 16)
        {
            ret += (j * f(str[i]));
        }
        return ret;
    }

    /* Map from ASCII digits to numerical equivalents (99 for non-digit chars). */
    static inline constexpr std::array<char, 256> hex_lookup{
        99, 99, 99, 99, 99, 99, 99, 99,         /* control chars */
        99, 99, 99, 99, 99, 99, 99, 99,         /* control chars */
        99, 99, 99, 99, 99, 99, 99, 99,         /* control chars */
        99, 99, 99, 99, 99, 99, 99, 99,         /* control chars */
        99, 99, 99, 99, 99, 99, 99, 99,         /* punctuation   */
        99, 99, 99, 99, 99, 99, 99, 99,         /* punctuation   */
        0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  /* '0' - '9'     */
        99, 99, 99, 99, 99, 99, 99,             /* punctuation   */
        10, 11, 12, 13, 14, 15, 16, 17, 18, 19, /* 'A' - 'J'     */
        20, 21, 22, 23, 24, 25, 26, 27, 28, 29, /* 'K' - 'T'     */
        30, 31, 32, 33, 34, 35,                 /* 'U' - 'Z'     */
        99, 99, 99, 99, 99, 99,                 /* punctuation   */
        10, 11, 12, 13, 14, 15, 16, 17, 18, 19, /* 'a' - 'j'     */
        20, 21, 22, 23, 24, 25, 26, 27, 28, 29, /* 'k' - 't'     */
        30, 31, 32, 33, 34, 35,                 /* 'u' - 'z'     */
        99, 99, 99, 99, 99,                     /* punctuation */
        99, 99, 99, 99, 99, 99, 99, 99,         /* 8-bit chars */
        99, 99, 99, 99, 99, 99, 99, 99,         /* 8-bit chars */
        99, 99, 99, 99, 99, 99, 99, 99,         /* 8-bit chars */
        99, 99, 99, 99, 99, 99, 99, 99,         /* 8-bit chars */
        99, 99, 99, 99, 99, 99, 99, 99,         /* 8-bit chars */
        99, 99, 99, 99, 99, 99, 99, 99,         /* 8-bit chars */
        99, 99, 99, 99, 99, 99, 99, 99,         /* 8-bit chars */
        99, 99, 99, 99, 99, 99, 99, 99,         /* 8-bit chars */
        99, 99, 99, 99, 99, 99, 99, 99,         /* 8-bit chars */
        99, 99, 99, 99, 99, 99, 99, 99,         /* 8-bit chars */
        99, 99, 99, 99, 99, 99, 99, 99,         /* 8-bit chars */
        99, 99, 99, 99, 99, 99, 99, 99,         /* 8-bit chars */
        99, 99, 99, 99, 99, 99, 99, 99,         /* 8-bit chars */
        99, 99, 99, 99, 99, 99, 99, 99,         /* 8-bit chars */
        99, 99, 99, 99, 99, 99, 99, 99,         /* 8-bit chars */
        99, 99, 99, 99, 99, 99, 99, 99          /* 8-bit chars */
    };

    // Hex to int (compile time)
    constexpr unsigned long int HexToNumber(std::string_view string)
    {
        unsigned long int result = 0, max;
        unsigned char     digit;
        int               anyDigits = 0;

        int  i     = 0;
        char prevC = 0;
        for (auto c : string)
        {
            if (is_space(c))
            {
                continue;
            }

            digit     = hex_lookup[string[i++]];
            anyDigits = 1;
            if (result > ((ULONG_MAX >> 4) - digit))
            {
                result = ULONG_MAX;
                errno  = ERANGE;
            }
            result <<= 4;
            result += digit;
        }

        return result;
    }

    constexpr unsigned long int m_strtoul(const char* string, char** tail, int base)
    {
        const char*       p;
        unsigned long int result = 0, max;
        unsigned char     digit;
        int               anyDigits = 0;

        /* Skip any leading blanks. */
        for (p = string; isspace(*p); p++)
            ;

        /* Parameter checks go here. */
        if (base < 0 || base > 36 || *p == '-')
        {
            errno = EINVAL;
            if (tail)
                *tail = (char*)string;

            return (result);
        }

        /* If no base was provided, pick one from the leading characters
         * of the string. */
        if (base == 0)
        {
            base = 10;
            if (*p == '0')
            {
                p++;
                if (*p == 'x' || *p == 'X')
                {
                    p++;
                    base = 16;
                }
                else
                {
                    /* Set anyDigits here, otherwise "0" produces a "no digits" error. */
                    anyDigits = 1;
                    base      = 8;
                }
            }
        }
        else if (base == 16)
        {
            /* Skip leading "0x" or "0X" from hex numbers. */
            if (p[0] == '0')
                p += (p[1] == 'x' || p[1] == 'X') ? 2 : 1;
        }

        /* Do different things for base 8, 10, 16, and other (for speed). */
        if (base == 10)
            for (; (digit = *p - '0') <= 9; p++)
            {
                anyDigits = 1;
                if (result > (ULONG_MAX / 10 - digit))
                {
                    result = ULONG_MAX;
                    errno  = ERANGE;
                }
                result *= 10;
                result += digit;
            }
        else if (base == 16)
            for (; (digit = hex_lookup[*p]) <= 15; p++)
            {
                anyDigits = 1;
                if (result > ((ULONG_MAX >> 4) - digit))
                {
                    result = ULONG_MAX;
                    errno  = ERANGE;
                }
                result <<= 4;
                result += digit;
            }
        else if (base == 8)
            for (; (digit = *p - '0') <= 7; p++)
            {
                anyDigits = 1;
                if (result > ((ULONG_MAX >> 3) - digit))
                {
                    result = ULONG_MAX;
                    errno  = ERANGE;
                }
                result <<= 3;
                result += digit;
            }
        else
            for (max = ULONG_MAX / base; (digit = hex_lookup[*p]) < base; p++)
            {
                anyDigits = 1;
                if (result > (max - digit))
                {
                    result = ULONG_MAX;
                    errno  = ERANGE;
                }
                result *= base;
                result += digit;
            }

        if (tail)
            /* See if there were any digits at all. */
            *tail = anyDigits ? (char*)p : (char*)string;

        return (result);
    }

    inline void FindLargestArray(const char* Signature, const char* Mask, int Out[2])
    {
        uint32_t t1  = 0;
        uint32_t t2  = strlen(Signature);
        uint32_t len = strlen(Mask);

        for (auto j = t2; j < len; j++)
        {
            if (Mask[j] != 'x')
                continue;

            auto count = strlen(&Signature[j]);

            if (count > t2)
            {
                t1 = j;
                t2 = count;
            }

            j += (count - 1);
        }

        Out[0] = t1;
        Out[1] = t2;
    }

    // Forza (Boyer-Moore Variant)
    inline uint8_t* Find(const uint8_t* Data, const uint32_t Length, const char* Signature, const char* Mask)
    {
        int d[2] = {0};
        FindLargestArray(Signature, Mask, d);

        const uint8_t len    = static_cast<uint8_t>(strlen(Mask));
        const uint8_t mbeg   = static_cast<uint8_t>(d[0]);
        const uint8_t mlen   = static_cast<uint8_t>(d[1]);
        const uint8_t mfirst = static_cast<uint8_t>(Signature[mbeg]);

        uint8_t wildcard[UCHAR_MAX + 1] = {0};

        for (auto i = mbeg; i < mbeg + mlen; i++)
            wildcard[(uint8_t)Signature[i]] = 1;

        for (int i = Length - len; i >= 0; i--)
        {
            auto c = Data[i];
            auto w = wildcard[c];
            auto k = 0;

            while (w == 0 && i > mlen)
            {
                i -= mlen;
                w = wildcard[Data[i]];
                k = 1;
            }

            if (k == 1)
            {
                i++;
                continue;
            }

            if (c != mfirst)
                continue;

            if (i - mbeg < 0 || i - mbeg + len > Length)
                return nullptr;

            for (auto j = 0; j < len - 1; j++)
            {
                if (j == mbeg || Mask[j] != 'x')
                    continue;

                if (Data[i - mbeg + j] != (uint8_t)Signature[j])
                    break;

                if (j + 1 == len - 1)
                    return (uint8_t*)(Data + i - mbeg);
            }
        }

        return nullptr;
    }

#include <Windows.h>
    /*
     * @brief Scan for a given byte pattern on a module
     *
     * @Param module    Base of the module to search
     * @Param signature IDA-style byte array pattern
     *
     * @Returns Address of the first occurence
     */
    inline std::uint8_t* IDAScan(void* module, const char* signature)
    {
        auto dosHeader = (PIMAGE_DOS_HEADER)module;
        auto ntHeaders = (PIMAGE_NT_HEADERS)((std::uint8_t*)module + dosHeader->e_lfanew);

        auto sizeOfImage = ntHeaders->OptionalHeader.SizeOfImage;

        int patternBytes[64];
        // we can use memset, it may no be available
        // memset(patternBytes, 0, sizeof(int) * 64);
        int bytesCount = 0;

        auto start = const_cast<char*>(signature);
        auto end   = const_cast<char*>(signature) + strlen(signature);

        for (auto current = start; current < end; ++current)
        {
            if (*current == ' ')
                continue;
            if (*current == '?')
            {
                ++current;
                if (*current == '?')
                    ++current;

                patternBytes[bytesCount] = -1;
                ++bytesCount;
            }
            else
            {
                patternBytes[bytesCount] = strtoul(current, &current, 16);
                ++bytesCount;
            }
        }

        // static auto pattern_to_byte = [](const char* pattern) {
        //     // auto bytes = std::vector<int>{};
        //     auto start = const_cast<char*>(pattern);
        //     auto end   = const_cast<char*>(pattern) + strlen(pattern);

        //     for (auto current = start; current < end; ++current)
        //     {
        //         if (*current == '?')
        //         {
        //             ++current;
        //             if (*current == '?')
        //                 ++current;
        //             bytes.push_back(-1);
        //         }
        //         else
        //         {
        //             bytes.push_back(strtoul(current, &current, 16));
        //         }
        //     }
        //     return bytes;
        // };

        // auto patternBytes = pattern_to_byte(signature);
        auto scanBytes = reinterpret_cast<std::uint8_t*>(module);

        auto        s = bytesCount;   // patternBytes.size();
        const auto& d = patternBytes; // patternBytes.data();

        for (auto i = 0ul; i < sizeOfImage - s; ++i)
        {
            bool found = true;
            for (auto j = 0ul; j < s; ++j)
            {
                if (scanBytes[i + j] != d[j] && d[j] != -1)
                {
                    found = false;
                    break;
                }
            }
            if (found)
            {
                return &scanBytes[i];
            }
        }
        return nullptr;
    }

    //     template <size_t N> struct StringLiteral
    //     {
    //         constexpr StringLiteral(const char (&str)[N])
    //         {
    //             std::copy_n(str, N, value);
    //         }

    //         char value[N];
    //     };

    //     template <StringLiteral str> static constexpr int GetArraySize()
    //     {
    //         std::string_view pattern(str.value);
    //         int              idx = 1;
    //         for (auto c : pattern)
    //         {
    //             if (c == ' ')
    //             {
    //                 idx++;
    //                 continue;
    //             }
    //         }

    //         return idx;
    //     }

    //     template <StringLiteral str> struct Needle
    //     {
    //         std::array<char, GetArraySize<str>() + 1> signature{};
    //         std::array<char, GetArraySize<str>() + 1> mask{};

    //         constexpr Needle()
    //         {
    //             std::string_view view(str.value);

    //             int idx    = 0;
    //             int idxTmp = 0;

    //             char temp[2];

    //             for (auto c : view)
    //             {
    //                 if (c == ' ')
    //                 {
    //                     temp[0] = 0;
    //                     temp[1] = 0;
    //                     continue;
    //                 }

    //                 if (idxTmp == 2)
    //                 {
    //                     if (temp[0] == '?' && temp[1] == '?')
    //                     {
    //                         mask[idx]      = '?';
    //                         signature[idx] = 0;
    //                         idx++;
    //                         idxTmp = 0;
    //                         continue;
    //                     }

    //                     auto data = HexToNumber(std::string_view(temp));

    //                     if (data == ULONG_MAX)
    //                     {

    // #ifdef _DEBUG
    //                         throw std::logic_error(_("Pattern contains invalid data."));
    // #else
    //                         abort();
    // #endif
    //                     }

    //                     mask[idx]      = 'x';
    //                     signature[idx] = (char)data;
    //                     idx++;
    //                     idxTmp = 0;
    //                     continue;
    //                 }

    //                 if ((c >= '0' || c <= '9') || (c >= 'A' || c <= 'F'))
    //                 {
    //                     temp[idxTmp++] = c;
    //                 }
    //             }
    //         }
    //     };

    //     template <StringLiteral str> inline constexpr Needle<str> GetNeedle()
    //     {
    //         std::string_view view(str.value);
    //         Needle<str>      needle;

    //         int idx    = 0;
    //         int idxTmp = 0;

    //         char temp[2];

    //         for (auto c : view)
    //         {
    //             if (c == ' ')
    //             {
    //                 temp[0] = 0;
    //                 temp[1] = 0;
    //                 continue;
    //             }

    //             if (idxTmp == 2)
    //             {
    //                 if (temp[0] == '?' && temp[1] == '?')
    //                 {
    //                     needle.mask[idx]      = '?';
    //                     needle.signature[idx] = 0;
    //                     idx++;
    //                     idxTmp = 0;
    //                     continue;
    //                 }

    //                 auto data = HexToNumber(std::string_view(temp));

    //                 if (data == ULONG_MAX)
    //                 {
    // #ifdef _DEBUG
    //                     throw std::logic_error("Pattern contains invalid data.");
    // #else
    //                     abort();
    // #endif
    //                 }

    //                 needle.mask[idx]      = 'x';
    //                 needle.signature[idx] = (char)data;
    //                 idx++;
    //                 idxTmp = 0;
    //                 continue;
    //             }

    //             if ((c >= '0' || c <= '9') || (c >= 'A' || c <= 'F'))
    //             {
    //                 temp[idxTmp++] = c;
    //             }
    //         }

    //         return needle;
    //     }

    // constexpr static inline auto nn = GetNeedle<
    //     "4C 8B 0D ?? ?? ?? ?? 41 B0 01 48 8B 15 ?? ?? ?? ?? 48 8B CB 48 83 C4 20 5B E9">();

    // constexpr static inline char adsdsaw = nn.signature[0];

    // constexpr inline auto asasas = GetArraySize<
    //     "4C 8B 0D ?? ?? ?? ?? 41 B0 01 48 8B 15 ?? ?? ?? ?? 48 8B CB 48 83 C4 20 5B E9">();

    // template <typename C = const char*> inline uint8_t* FindIDA(C pattern)
    // {
    //     constexpr auto needle = Needle<GetArraySize(pattern)>::Construct(pattern);
    // }

} // namespace Forza
