#pragma once
#include <cstdint>

namespace mem
{
    uintptr_t   GetModuleAddress(const wchar_t* moduleName);
    void ScanPattern(const unsigned char* pattern, unsigned char wildcard, unsigned int patternLength,
        uint64_t base, unsigned int size, uint64_t* found);

    template <typename T = uint8_t*>
    inline T ResolveJmp(uint8_t* address)
    {
        return reinterpret_cast<T>(address + 5 + *reinterpret_cast<int32_t*>(address + 1));
    }

    template <typename T = uint8_t*>
    inline T ResolveMov(uint8_t* address)
    {
        return reinterpret_cast<T>(address + *reinterpret_cast<int32_t*>(address + 3) + 7);
    }

    template <typename T = uint8_t*>
    inline T ResolveCall(uint8_t* address)
    {
        return reinterpret_cast<T>(address + *reinterpret_cast<int32_t*>(address + 1) + 5);
    }

} // namespace mem
