#pragma once
#include "../SDK/structs.h"
#include "../SDK/math.h"
#include "../mrt/fnv1a.hpp"
#include <stdint.h>
#include <vector>
#include <unordered_map>
namespace EntityManager
{
    template <typename T>
    struct Entity
    {
        T*       entity {};
        uint32_t prefabId {};
    };

    struct OreResource : Entity<CBaseNetworkable>
    {
        Vector3 postition {};
    };

    struct Animal : Entity<CBaseEntity>
    { };

    struct Player
    {
        CBaseEntity* entity {};
        char name[128 + 1] {}; // 32 chars max, but utf8 (1 to 4 bytes per char) forced by steam
    };

    struct Npc : Entity<CBaseEntity>
    { };

    struct Collectible : Entity<CBaseNetworkable>
    { };

    struct RadTown : Entity<CBaseNetworkable>
    { };

    struct Vehicle : Entity<CBaseNetworkable>
    { };

    struct Trap : Entity<CBaseNetworkable>
    {
        Vector3 postition {};
    };

    namespace DB
    {
        inline std::unordered_map<uint64_t, OreResource> ores {};
        inline std::unordered_map<uint64_t, Animal>      animals {};
        inline std::unordered_map<uint64_t, Player>      players {};
        inline std::unordered_map<uint64_t, Npc>         npcs {};
        inline std::unordered_map<uint64_t, Collectible> collectibles {};
        inline std::unordered_map<uint64_t, RadTown>     radtown {};
        inline std::unordered_map<uint64_t, Vehicle>     vehicles {};
        inline std::unordered_map<uint64_t, Trap>        traps {};

        inline void ClearAll();

        inline void RemoveID(uint64_t id)
        {
            ores.erase(id);
            animals.erase(id);
            players.erase(id);
            npcs.erase(id);
            collectibles.erase(id);
            radtown.erase(id);
            vehicles.erase(id);
            traps.erase(id);
        }
    }; // namespace DB

}; // namespace EntityManager
