#pragma once
#include "../SDK/structs.h"
#include "../SDK/math.h"
#include "../mrt/fnv1a.hpp"
#include <vector>
#include <unordered_map>
namespace EntityManager
{
    struct OreResource
    {
        CBaseNetworkable* entity {};
        size_t            type {};
        Vector3           postition {};
    };

    struct Animal
    {
        CBaseNetworkable* entity {};
        size_t            type {};
    };

    namespace DB
    {
        inline std::unordered_map<uint64_t, OreResource> ores {};
        inline std::unordered_map<uint64_t, Animal>      animals {};

        inline void ClearAll();

        inline bool RemoveID(uint64_t id)
        {
            ores.erase(id);
            animals.erase(id);
        }
    }; // namespace DB

}; // namespace EntityManager
