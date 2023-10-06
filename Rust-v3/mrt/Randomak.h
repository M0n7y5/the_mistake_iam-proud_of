#pragma once
#include "rng.h"
#include <stdint.h>

struct Randomak
{
    rng::rng128 gen;

    Randomak(uint64_t seed)
    {
        rng::tsc_seedEx seedGen;
        gen = rng::rng128(seedGen(seed));
    }

    uint64_t GetUInt(uint64_t min, uint64_t max)
    {
        return min + gen() / (UINT64_MAX / (max - min + 1U) + 1U);
    }

};