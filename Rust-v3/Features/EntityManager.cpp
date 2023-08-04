#include "EntityManager.h"
#include "../SDK/prefab_ids.h"
#include "../SDK/structs.h"
#include "../SDK/il2cpp_api.h"
#include <span>

namespace EntityManager
{

    // TODO: do we need it?
#define MinimumUserAddress (uint64_t)0xffffff
#define MaximumUserAddress (uint64_t)0x00007FFFFFFFFFFF

    template <typename T> inline bool IsAddressValid(T address)
    {
        return ((uint64_t)(address) >= (uint64_t)(MinimumUserAddress) &&
                (uint64_t)(address) <= (uint64_t)(MaximumUserAddress));
    }

    bool UpdateEntityList()
    {
        using namespace EntityManager;

        static auto klass  = (CBaseNetworkable*)il2cpp::InitClass(_("BaseNetworkable"));
        static auto klass2 = (BaseNetworkable_c*)il2cpp::InitClass(_("BaseNetworkable"));

        // reset shit
        DB::FullClear();

        auto               localPlayer = CLocalPlayer::GetLocalPlayer();
        auto               loc         = (BasePlayer_o*)localPlayer;
        BasePlayer_Fields& ff          = loc->fields;

        if (localPlayer == nullptr || localPlayer->m_CachedPtr == 0 || localPlayer->input == nullptr ||
            localPlayer->net == nullptr || localPlayer->eyes == nullptr)
            return false;

        if (localPlayer->_IsDestroyed_k__BackingField)
            return false;

        auto currentLocalPosition = localPlayer->GetOriginPosition();

        auto enityList = klass->StaticFields<BaseNetworkable_StaticFields>();
        auto cc        = klass2->static_fields->clientEntities;

        if (!IsAddressValid(cc))
            return false;

        auto items = cc->fields.entityList->fields.vals->fields;
        auto keys  = cc->fields.entityList->fields.keys->fields;

        std::span itemSpan((CBaseNetworkable**)items.buffer->m_Items, items.count);
        std::span idSpan((NetworkableId_o**)keys.buffer->m_Items, keys.count);

        nNetworkablesTotal = items.count;
        int idx            = 0;

        struct tt
        {
            CBasePlayer* ent;
            Layer        layer;
        };

        std::vector<tt> leftovers{};

        for (auto networkable : itemSpan)
        {
            if (networkable->_IsDestroyed_k__BackingField || networkable->m_CachedPtr == 0)
                continue;

            auto id = networkable->net->fields.ID.fields.Value;
            // auto classHash = HASH_RUNTIME(networkable->klass->_1.name);

            using namespace prefabs;
            switch (networkable->prefabID)
            {
            case player::player:
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
            case player::npc_tunneldweller:
            case player::npc_bandit_guard:
            case player::npc_underwaterdweller:
            {
                auto entity = (CBasePlayer*)networkable;

                if (entity->IsLocalPlayer())
                    continue;

                auto playerName = ((CString*)entity->_displayName)->str();

                Player player{};
                if (memcpy_s(player.name, 129, playerName.c_str(), playerName.size()) == 0)
                {
                    if (entity->playerModel->fields._IsNpc_k__BackingField)
                    {
                        DB::NPCCount++;
                    }
                    else
                    {
                        DB::PlayerCount++;
                    }
                    player.entity   = (CBasePlayer*)networkable;
                    player.position = player.entity->GetOriginPosition();
                    player.distance = currentLocalPosition.distance(player.position);

                    DB::players.emplace_back(player);
                }

                continue;
            }
            case ore::metal:
            case ore::metal2:
            case ore::metal3:
            case ore::metal4:
            case ore::sulfur:
            case ore::sulfur2:
            case ore::sulfur3:
            case ore::sulfur4:
            case ore::stone:
            case ore::stone2:
            case ore::stone3:
            case ore::stone4:
            {
                OreResource ore{};

                ore.entity   = (CBaseEntity*)networkable;
                ore.prefabId = networkable->prefabID;
                ore.position = ore.entity->GetOriginPosition();
                ore.distance = currentLocalPosition.distance(ore.position);
                DB::ores.emplace_back(ore);

                continue;
            }
            case animals::bear:
            case animals::polarBear:
            case animals::boar:
            case animals::chicken:
            case animals::stag:
            case animals::wolf:
            case animals::zombie:
            {
                Animal animal{};
                animal.entity   = (CBaseEntity*)networkable;
                animal.prefabId = networkable->prefabID;
                animal.position = animal.entity->GetOriginPosition();
                animal.distance = currentLocalPosition.distance(animal.position);
                DB::animals.emplace_back(animal);
                continue;
            }
            default:
                continue;
            }
        }

        nNetworkablesSaved = DB::TotalEntities();

        // sort by distance, it will make my life easier in future
        std::ranges::sort(DB::players, {}, &Player::distance);
        std::ranges::sort(DB::ores, {}, &OreResource::distance);
        std::ranges::sort(DB::animals, {}, &Animal::distance);

        return true;
    }

} // namespace EntityManager