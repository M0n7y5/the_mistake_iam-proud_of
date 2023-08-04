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
        Vector3  position{};
        int      distance{};
    };

    struct OreResource : Entity<CBaseEntity>
    {
    };

    struct Animal : Entity<CBaseEntity>
    {
    };

    struct Player : Entity<CBasePlayer>
    {
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
        inline std::vector<OreResource> ores{};
        inline std::vector<Animal>      animals{};
        inline std::vector<Collectible> collectibles{};
        inline std::vector<RadTown>     radtown{};
        inline std::vector<Vehicle>     vehicles{};
        inline std::vector<Trap>        traps{};
        inline std::vector<Player>      players{};

        // inline ankerl::unordered_dense::map<uint64_t, Animal>      animals{};
        //  inline ankerl::unordered_dense::map<uint64_t, Collectible> collectibles{};
        //  inline ankerl::unordered_dense::map<uint64_t, RadTown>     radtown{};
        //  inline ankerl::unordered_dense::map<uint64_t, Vehicle>     vehicles{};
        //  inline ankerl::unordered_dense::map<uint64_t, Trap>        traps{};

        // inline ankerl::unordered_dense::map<uint64_t, Player> players2ID{};

        // we need to cache ids of networkables
        // inline ankerl::unordered_dense::map<void*, uint64_t> IDs{};
        inline std::vector<uint64_t> friendlyIDs{};
        inline std::vector<uint64_t> priorityIDs{};

        inline int PlayerCount = 0;
        inline int NPCCount    = 0;

        inline void ClearAll();

        // inline void AddID(void* entity, uint64_t id)
        // {
        //     IDs.insert_or_assign(entity, id);
        // }

        // inline uint64_t GetID(void* entity)
        // {
        //     auto result = IDs.find(entity);

        //     if (result == IDs.end())
        //     {
        //         return 0;
        //     }

        //     return result->second;
        // }

        // inline void RemoveID(uint64_t id)
        // {
        //     if (id == 0)
        //         return;

        //     ores.erase(id);
        //     animals.erase(id);
        //     players.erase(id);
        //     collectibles.erase(id);
        //     radtown.erase(id);
        //     vehicles.erase(id);
        //     traps.erase(id);
        // }

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
        inline int TotalEntities()
        {
            return ores.size() + animals.size() + players.size() + collectibles.size() + radtown.size() +
                   vehicles.size() + traps.size();
        }
    }; // namespace DB

    inline int nNetworkablesTotal = 0;
    inline int nNetworkablesSaved = 0;

    bool UpdateEntityList();
}; // namespace EntityManager
