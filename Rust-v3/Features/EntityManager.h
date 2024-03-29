#pragma once
#include "../SDK/math.h"
#include "../SDK/enums.h"
#include "../SDK/structs.h"
#include "../SDK/prefab_ids.h"
#include "../mrt/fnv1a.hpp"
#include "../mrt/unordered_dense.h"
#include "../mrt/StringPoolParty.h"
#include <stdint.h>
#include <string_view>
#include <unordered_map>
#include <utility>
#include <vcruntime_string.h>
#include <vector>

namespace EntityManager
{
    template <typename T> struct Entity
    {
        T* entity{};
        // or Item ID
        uint32_t prefabId{};
        Vector3  position{};
        float    distance{};
    };

    struct OreResource : Entity<CBaseEntity>
    {
    };

    struct Backpack : Entity<CBaseEntity>
    {
    };

    struct Corpse : Entity<CBaseEntity>
    {
    };

    struct Stash : Entity<CBaseEntity>
    {
    };

    struct Item : Entity<CBaseEntity>
    {
        // points to name dict so its always valid
        ItemCategory category;
        int          amount{};
        int32_t      itemid{};
        const char*  namePool{};
    };

    struct Animal : Entity<CBaseEntity>
    {
    };

    struct Player : Entity<CBasePlayer>
    {
        // char name[128 + 1]{}; // 32 chars max, but utf8 (1 to 4 bytes per char) forced by steam
        const char* namePool{};
    };

    struct Collectible : Entity<CBaseEntity>
    {
    };

    struct RadTown : Entity<CBaseEntity>
    {
    };

    struct Vehicle : Entity<CBaseEntity>
    {
    };

    struct Trap : Entity<CBaseEntity>
    {
    };

    // can contain TreeEntity, TreeMarker or OreHotspot
    struct SilentFarmTarget : Entity<CBaseEntity>
    {
        SilentFarmTargetType type{};
    };

    struct EffectInfo
    {
        Vector3    position;
        EffectType type;

        EffectInfo(Vector3 position, EffectType type) : position(position), type(type){};
    };

    struct RaidEffectData
    {
        int count{};
    };

    struct RaidInfo
    {
        // starting position
        Vector3 position{};
        float   startTime{};
        float   lastExplosionTime{};
        RaidEffectData effects[(int)EffectType::Count]{};

        RaidInfo(EffectType type, Vector3 position, float startTime)
        {
            this->position = position;

            this->startTime         = startTime;
            this->lastExplosionTime = startTime;

            effects[(int)type].count = 1;
        }

        int GetAllEffectCount()
        {
            int count = 0;

            for (int i = 0; i < (int)EffectType::Count; i++)
                count += effects[i].count;

            return count;
        }

        void AddNewEffect(EffectType type, Vector3 incomingPosition, float startTime)
        {
            int     totalEffectCount{};
            Vector3 totalPosition{};

            this->effects[(int)type].count++;
            this->position = (incomingPosition + this->position) / 2.f;

            // for (int i = 0; i < (int)EffectType::Count; i++)
            // {
            //     totalEffectCount += effects[i].count;
            //     totalPosition += effects[i].position;
            // }

            // average this shit out
            // this->position = totalPosition;

            this->lastExplosionTime = startTime;
        }
    };

    namespace DB
    {
        // DONT FORGET TO CLEAR THESE
        inline std::vector<OreResource>      ores{};
        inline std::vector<Animal>           animals{};
        inline std::vector<Collectible>      collectibles{};
        inline std::vector<RadTown>          radtown{};
        inline std::vector<Vehicle>          vehicles{};
        inline std::vector<Trap>             traps{};
        inline std::vector<Player>           players{};
        inline std::vector<SilentFarmTarget> silentFarmStuff{};
        inline std::vector<RaidInfo>         raids{};
        inline std::vector<Item>             items{};
        inline std::vector<Backpack>         backpacks{};
        inline std::vector<Corpse>           corpses{};
        inline std::vector<Stash>            stashes{};

        // inline ankerl::unordered_dense::map<uint64_t, Player> players2ID{};

        // we need to cache ids of networkables
        // inline ankerl::unordered_dense::map<void*, uint64_t> IDs{};

        // inline std::vector<std::string> stringPool{};
        // inline uint32_t poolCurrentIdx{};
        // inline bool     poolInitialized = false;

        // key itemID, val stringPoolID
        inline ankerl::unordered_dense::map<int32_t, const char*>  itemNames{};
        inline ankerl::unordered_dense::map<uint64_t, const char*> steamPlayerNames{};
        inline ankerl::unordered_dense::map<uint64_t, const char*> playerNames{};
        inline ankerl::unordered_dense::map<uint32_t, const char*> entityName{};
        inline std::vector<uint64_t>                               friendlyIDs{};
        inline std::vector<uint64_t>                               priorityIDs{};

        inline int PlayerCount = 0;
        inline int NPCCount    = 0;

        inline void ClearAll();

        inline montys::StringPoolParty stringPool{};

        // no deduplication for now
        // inline uint32_t AddString(const std::string& str)
        // {
        //     if (poolInitialized == false)
        //     {
        //         stringPool.reserve(512);
        //         poolInitialized = true;
        //     }

        //     auto idx = poolCurrentIdx++;

        //     stringPool.emplace_back(str);
        //     return idx;
        // }

        // inline const std::string* GetString(uint32_t id)
        // {
        //     return &stringPool[id];
        // }

        // cache for UTF8 item names
        // more gametime, faster it is. 200IQ
        inline const char* GetItemName(CItemDefinition* info)
        {
            auto f = itemNames.find(info->itemid);

            if (f == itemNames.end())
            {
                auto wName    = (CString*)info->displayName->fields.english;
                auto str      = wName->str();
                auto stringID = stringPool.AddString(str);

                if (stringID == nullptr)
                    return nullptr;

                itemNames[info->itemid] = stringID;

                return stringID;
            }

            return f->second;
        }

        inline const char* GetPlayerName(CBasePlayer* player, bool isNpc)
        {
            if (isNpc)
            {
                using namespace prefabs;

                auto f = entityName.find(player->prefabID);

                if (f == entityName.end())
                {
                    std::string name{};
                    switch (player->prefabID)
                    {
                    case player::scientistnpc_arena:
                    case player::scientistnpc_cargo:
                    case player::scientistnpc_cargo_turret_any:
                    case player::scientistnpc_cargo_turret_lr300:
                    case player::scientistnpc_ch47_gunner:
                    case player::scientistnpc_excavator:
                    case player::scientistnpc_full_any:
                    case player::scientistnpc_full_lr300:
                    case player::scientistnpc_full_mp5:
                    case player::scientistnpc_full_pistol:
                    case player::scientistnpc_full_shotgun:
                    case player::scientistnpc_heavy:
                    case player::scientistnpc_junkpile_pistol:
                    case player::scientistnpc_oilrig:
                    case player::scientistnpc_patrol:
                    case player::scientistnpc_peacekeeper:
                    case player::scientistnpc_roam:
                    case player::scientistnpc_roam_nvg_variant:
                    case player::scientistnpc_roamtethered:
                    {
                        name = _("Scientist");
                        break;
                    }
                    case player::npc_tunneldweller:
                    {
                        name = _("Tunnel Dweller");
                        break;
                    }
                    case player::npc_bandit_guard:
                    {
                        name = _("Bandid Guard");
                        break;
                    }
                    case player::npc_underwaterdweller:
                    {
                        name = _("Underwater Dweller");
                        break;
                    }
                    case player::scarecrow:
                    {
                        name = _("Scarecrow");
                        break;
                    }
                    default:
                        name = _("unknown");
                        break;
                    }

                    auto stringID = stringPool.AddString(name);

                    if (stringID == nullptr)
                        return nullptr;

                    entityName[player->userID] = stringID;

                    return stringID;
                }

                return f->second;
            }

            auto f = playerNames.find(player->userID);

            if (f == playerNames.end())
            {
                auto wName    = (CString*)player->_displayName;
                auto str      = wName->str();
                auto stringID = stringPool.AddString(str);

                if (stringID == nullptr)
                    return nullptr;

                playerNames[player->userID] = stringID;

                return stringID;
            }

            return f->second;
        }

        inline const char* GetCorpseName(PlayerCorpse_o* corpse)
        {
            auto f = steamPlayerNames.find(corpse->fields.playerSteamID);

            if (f == steamPlayerNames.end())
            {
                auto wName    = (CString*)corpse->fields._playerName;
                auto str      = wName->str();
                auto stringID = stringPool.AddString(str);

                if (stringID == nullptr)
                    return nullptr;

                steamPlayerNames[corpse->fields.playerSteamID] = stringID;

                return stringID;
            }

            return f->second;
        }

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

        // inline const char* GetPlayerName(uint64_t steamID)
        // {

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
            silentFarmStuff.clear();
            items.clear();
            backpacks.clear();
            corpses.clear();
            stashes.clear();
        }

        inline void CleanRaids(bool fullWipe)
        {
            auto currentTime = CTime::GetRealTime();
        }

        inline int TotalEntities()
        {
            return ores.size() + animals.size() + players.size() + collectibles.size() + radtown.size() +
                   vehicles.size() + traps.size() + silentFarmStuff.size() + raids.size() + items.size() +
                   backpacks.size() + corpses.size() + stashes.size();
        }
    }; // namespace DB

    inline int nNetworkablesTotal = 0;
    inline int nNetworkablesSaved = 0;

    bool UpdateEntityList();

    void Init();
}; // namespace EntityManager
