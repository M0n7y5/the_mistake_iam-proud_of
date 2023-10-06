#pragma once

#include <stdint.h>
#include <stdio.h>
#include <Windows.h>
#include <vector>
#include "InlineAES256CBC/CBC.hpp"
#include "base64.h"
#include "lazy_importer.hpp"

#ifdef DEBUG_CONSOLE
#include <mutex>

// used: std::format
#include <format>
// used: std::ofstream
#include <fstream>
// used: std::cout, std::endl
#include <iostream>
// used: time_t, tm, std::time
#include <chrono>

#pragma region logging_console_colors
#define FOREGROUND_WHITE   (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN)
#define FOREGROUND_YELLOW  (FOREGROUND_RED | FOREGROUND_GREEN)
#define FOREGROUND_CYAN    (FOREGROUND_BLUE | FOREGROUND_GREEN)
#define FOREGROUND_MAGENTA (FOREGROUND_RED | FOREGROUND_BLUE)
#define FOREGROUND_BLACK   0

#define FOREGROUND_INTENSE_RED     (FOREGROUND_RED | FOREGROUND_INTENSITY)
#define FOREGROUND_INTENSE_GREEN   (FOREGROUND_GREEN | FOREGROUND_INTENSITY)
#define FOREGROUND_INTENSE_BLUE    (FOREGROUND_BLUE | FOREGROUND_INTENSITY)
#define FOREGROUND_INTENSE_WHITE   (FOREGROUND_WHITE | FOREGROUND_INTENSITY)
#define FOREGROUND_INTENSE_YELLOW  (FOREGROUND_YELLOW | FOREGROUND_INTENSITY)
#define FOREGROUND_INTENSE_CYAN    (FOREGROUND_CYAN | FOREGROUND_INTENSITY)
#define FOREGROUND_INTENSE_MAGENTA (FOREGROUND_MAGENTA | FOREGROUND_INTENSITY)
#pragma endregion
#endif
namespace L
{
#ifdef DEBUG_CONSOLE
    constexpr inline uint16_t White           = FOREGROUND_WHITE;
    constexpr inline uint16_t Yellow          = FOREGROUND_YELLOW;
    constexpr inline uint16_t Cyan            = FOREGROUND_CYAN;
    constexpr inline uint16_t Magenta         = FOREGROUND_MAGENTA;
    constexpr inline uint16_t Black           = FOREGROUND_BLACK;
    constexpr inline uint16_t RedInstense     = FOREGROUND_INTENSE_RED;
    constexpr inline uint16_t GreenInstense   = FOREGROUND_INTENSE_GREEN;
    constexpr inline uint16_t BlueInstense    = FOREGROUND_INTENSE_BLUE;
    constexpr inline uint16_t WhiteInstense   = FOREGROUND_INTENSE_WHITE;
    constexpr inline uint16_t YellowInstense  = FOREGROUND_INTENSE_YELLOW;
    constexpr inline uint16_t CyanInstense    = FOREGROUND_INTENSE_CYAN;
    constexpr inline uint16_t MagentaInstense = FOREGROUND_INTENSE_MAGENTA;

    /*
     * @section: values
     */
    // console write stream
    inline FILE* pStream;
    // current color of console text
    inline std::uint16_t wConsoleColor = FOREGROUND_WHITE;
    // current file used for file-logging
    inline std::ofstream ofsFile;
    // threadsafingo
    inline std::mutex m;
    /*
     * @section: get
     */
    // attach console to current window with write permission and given title
    bool Attach(const char* szConsoleTitle);
    // close write streams and detach console from current window
    void Detach();
    // prints given text to the console/file
    template <std::uint16_t Col = White, typename... Args_t>
    void Print(const std::string_view szText, const Args_t&... argList)
    {
        std::lock_guard<std::mutex> guard(m);
        // format time
        const std::string szTime =
            std::vformat("{:%d-%m-%Y %X}", std::make_format_args(std::chrono::system_clock::now()));

        // print to console
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_WHITE);
        std::cout << "[";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSE_CYAN);
        std::cout << szTime;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_WHITE);
        std::cout << "] ";

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Col);

        if constexpr (sizeof...(argList) > 0)
            std::cout << std::vformat(szText, std::make_format_args(argList...)) << std::endl;
        else
            std::cout << szText << std::endl;

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_WHITE);

        //// print to file
        // if (ofsFile.is_open())
        //     ofsFile << szTime << szText << std::endl;
    }

/*
 * @section: options stack
 */
// set given color to console
// inline void PushConsoleColor(const std::uint16_t wColor)
// {
//     wConsoleColor = wColor;
// }
// // restore console color
// inline void PopConsoleColor()
// {
//     wConsoleColor = FOREGROUND_WHITE;
// }
#endif

    inline void DebugOut(const char* fmt, ...)
    {
        constexpr int bufferSize = 64;

        char dbg_out[bufferSize];
        std::memset(dbg_out, 0, bufferSize);

        va_list argp;
        va_start(argp, fmt);
        vsprintf_s(dbg_out, bufferSize, fmt, argp);
        va_end(argp);

#ifdef _DEBUG

        using namespace lrcrypto;

        static constexpr uint8_t key[aes256::cKeySizeBytes] = {
            0xa7, 0x7b, 0x61, 0x2d, 0xaf, 0x3d, 0xf6, 0xcf, 0x6d, 0x22, 0x86, 0x01, 0x32, 0x0a, 0x8a, 0xa7,
            0x7b, 0x61, 0x2d, 0xdc, 0x92, 0xe0, 0xc9, 0x8a, 0xd2, 0x43, 0x43, 0xb9, 0x35, 0x57, 0xad, 0x80};

        // Do _not_ use a static IV in a real application!
        // figure that one out
        static constexpr uint8_t iv[aes256::cBlockSizeBytes] = {0x44, 0xa9, 0x48, 0x66, 0x2b, 0xe7, 0xd5, 0xed,
                                                                0x2b, 0xe7, 0xd5, 0xed, 0xf0, 0x6d, 0x71, 0x4d};

        // The buffer size has to be a multiple of the block size
        // which is 16 bytes.
        // constexpr int bufferSize = (aes256::cBlockSizeBytes * 128);
        // uint8_t       buffer[bufferSize]{};

        // std::memset(buffer, 0, bufferSize);

        // std::cout << "Original: " << buffer << std::endl;
        // hexBlock(buffer, bufferSize);

        static aes256::SubstitutionBox box;

        static bool boxInit = false;
        if (boxInit == false)
        {
            box.initialize();
            boxInit = true;
        }

        aes256::encryptDataCBC(box, (uint8_t*)dbg_out, bufferSize, key, iv);
        // std::cout << "Encrypted..." << std::endl;
        // hexBlock(buffer, bufferSize);
        // aes256::decryptDataCBC(box, buffer, 1024, key, iv);
        // std::cout << "Decrypted: " << buffer << std::endl;
        // hexBlock(buffer, bufferSize);

        std::vector<uint8_t> vec{};

        vec.assign((uint8_t*)dbg_out, ((uint8_t*)dbg_out) + sizeof(dbg_out));

        auto str = Base64::Encode(vec);
        LI_FN(OutputDebugStringA)(str.c_str());
#else
        OutputDebugStringA(dbg_out);
#endif
    }

} // namespace L
