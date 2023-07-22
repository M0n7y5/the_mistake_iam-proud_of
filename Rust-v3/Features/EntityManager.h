#pragma once
#include "../SDK/math.h"
#include "../SDK/structs.h"
#include "../mrt/fnv1a.hpp"
#include "../mrt/unordered_dense.h"
#include <stdint.h>
#include <unordered_map>
#include <vector>

namespace EntityManager
{
    template <typename T> struct Entity
    {
        T*       entity{};
        uint32_t prefabId{};
    };

    struct OreResource : Entity<CBaseEntity>
    {
        Vector3 postition{};
        float   distance = 0.f;
    };

    struct Animal : Entity<CBaseEntity>
    {
        uint64_t classHash;
    };

    struct Player
    {
        CBaseEntity* entity{};
        uint64_t     classHash;
        char name[128 + 1]{}; // 32 chars max, but utf8 (1 to 4 bytes per char) forced by steam
    };

    struct Collectible : Entity<CBaseNetworkable>
    {
    };

    struct RadTown : Entity<CBaseNetworkable>
    {
    };

    struct Vehicle : Entity<CBaseNetworkable>
    {
    };

    struct Trap : Entity<CBaseNetworkable>
    {
        Vector3 postition{};
    };

    namespace DB
    {
        inline ankerl::unordered_dense::map<uint64_t, OreResource> ores{};
        inline ankerl::unordered_dense::map<uint64_t, Animal>      animals{};
        inline ankerl::unordered_dense::map<uint64_t, Player>      players{};
        inline ankerl::unordered_dense::map<uint64_t, Collectible> collectibles{};
        inline ankerl::unordered_dense::map<uint64_t, RadTown>     radtown{};
        inline ankerl::unordered_dense::map<uint64_t, Vehicle>     vehicles{};
        inline ankerl::unordered_dense::map<uint64_t, Trap>        traps{};

        // we need to cache ids of networkables
        inline ankerl::unordered_dense::map<void*, uint64_t> IDs{};
        inline std::vector<uint64_t>                         friendlyIDs{};

        inline int PlayerCount = 0;
        inline int NPCCount    = 0;

        inline void ClearAll();

        inline void AddID(void* entity, uint64_t id)
        {
            IDs.insert_or_assign(entity, id);
        }

        inline uint64_t GetID(void* entity)
        {
            auto result = IDs.find(entity);

            if (result == IDs.end())
            {
                return 0;
            }

            return result->second;
        }

        inline void RemoveID(uint64_t id)
        {
            if (id == 0)
                return;

            ores.erase(id);
            animals.erase(id);
            players.erase(id);
            collectibles.erase(id);
            radtown.erase(id);
            vehicles.erase(id);
            traps.erase(id);
        }

        inline void FullClear()
        {
            PlayerCount = 0;
            NPCCount    = 0;

            ores.clear();
            animals.clear();
            players.clear();
            collectibles.clear();
            radtown.clear();
            vehicles.clear();
            traps.clear();
        }
    }; // namespace DB

}; // namespace EntityManager
