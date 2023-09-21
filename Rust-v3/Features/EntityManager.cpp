#include "EntityManager.h"
#include "../SDK/prefab_ids.h"
#include "../SDK/structs.h"
#include "../SDK/settings.h"
#include "../SDK/il2cpp_api.h"
#include <span>

/*

*/

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
        using namespace SettingsData;

        static auto klass  = (CBaseNetworkable*)il2cpp::InitClass(_("BaseNetworkable"));
        static auto klass2 = (BaseNetworkable_c*)il2cpp::InitClass(_("BaseNetworkable"));

        // reset shit
        DB::FullClear();

        auto               localPlayer = CLocalPlayer::GetLocalPlayer();
        auto               loc         = (BasePlayer_o*)localPlayer;
        //BasePlayer_Fields& ff          = loc->fields;

        if (localPlayer == nullptr || localPlayer->m_CachedPtr == 0 ||
            localPlayer->input == nullptr || localPlayer->net == nullptr ||
            localPlayer->eyes == nullptr)
            return false;

        if (localPlayer->_IsDestroyed_k__BackingField)
            return false;

        auto currentLocalPosition = localPlayer->GetOriginPosition();

        //auto enityList = klass->StaticFields<BaseNetworkable_StaticFields>();
        auto cc        = klass2->static_fields->clientEntities;

        if (!IsAddressValid(cc))
            return false;

        auto items = cc->fields.entityList->fields.vals->fields;
        auto keys  = cc->fields.entityList->fields.keys->fields;

        std::span itemSpan((CBaseNetworkable**)items.buffer->m_Items, items.count);
        std::span idSpan((NetworkableId_o**)keys.buffer->m_Items, keys.count);

        nNetworkablesTotal = items.count;
        //int idx            = 0;

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
            case collectable::pumpkin:
            case collectable::berry_black:
            case collectable::berry_blue:
            case collectable::berry_green:
            case collectable::berry_red:
            case collectable::berry_white:
            case collectable::berry_yellow:
            case collectable::corn:
            case collectable::hemp:
            case collectable::mushroom1:
            case collectable::mushroom2:
            case collectable::potato:
            case collectable::collectMetal:
            case collectable::collectStone:
            case collectable::collectSulfur:
            case collectable::collectWood:
            {
                Collectible collectible{};
                collectible.entity   = (CBaseEntity*)networkable;
                collectible.prefabId = networkable->prefabID;
                collectible.position = collectible.entity->GetOriginPosition();
                collectible.distance = currentLocalPosition.distance(collectible.position);
                DB::collectibles.emplace_back(collectible);
                continue;
            }
            case radtown::barrel1:
            case radtown::barrel2:
            case radtown::barrel_1:
            case radtown::barrel_2:
            case radtown::barrel_oil:
            case radtown::crate_basic:
            case radtown::crate_elite:
            case radtown::crate_mili:
            case radtown::crate_normal2:
            case radtown::crate_normal_food:
            case radtown::crate_normal_medical:
            case radtown::crate_tools:
            case radtown::crate_underwater_advanced:
            case radtown::crate_underwater_basic:
            case radtown::crate_bradley:
            case radtown::crate_heli:
            case radtown::crate_food:
            case radtown::airdrop:
            {
                if (settings->visuals.radtown.general.Enabled == false)
                    continue;

                RadTown radtown{};
                radtown.entity   = (CBaseEntity*)networkable;
                radtown.prefabId = networkable->prefabID;
                radtown.position = radtown.entity->GetOriginPosition();
                radtown.distance = currentLocalPosition.distance(radtown.position);
                DB::radtown.emplace_back(radtown);
                continue;
            }
            case vehicles::rhib:
            case vehicles::rowboat:
            case vehicles::tugboat:
            case vehicles::horse:
            case vehicles::mini:
            case vehicles::scrap:
            case vehicles::airballoon:
            case vehicles::submarinesolo:
            case vehicles::submarineduo:
            case vehicles::bradleyapc:
            case vehicles::patrolheli:
            case vehicles::chinook:
            {
                if (settings->visuals.vehicles.general.Enabled == false)
                    continue;

                Vehicle vehicle{};
                vehicle.entity   = (CBaseEntity*)networkable;
                vehicle.prefabId = networkable->prefabID;
                vehicle.position = vehicle.entity->GetOriginPosition();
                vehicle.distance = currentLocalPosition.distance(vehicle.position);
                DB::vehicles.emplace_back(vehicle);
                continue;
            }
            case traps::autoturret:
            case traps::flameturret:
            case traps::guntrap:
            case traps::samsite:
            case traps::landdmine:
            case traps::beartrap:
            {
                if (settings->visuals.traps.general.Enabled == false)
                    continue;

                Trap trap{};
                trap.entity   = (CBaseEntity*)networkable;
                trap.prefabId = networkable->prefabID;
                trap.position = trap.entity->GetOriginPosition();
                trap.distance = currentLocalPosition.distance(trap.position);
                DB::traps.emplace_back(trap);
                continue;
            }
            }

            auto classHash = HASH_RUNTIME(networkable->klass->_1.name);

            switch (classHash)
            {
            case HASH_CTIME("DroppedItem"):
            {
                auto wepEnabled   = settings->visuals.item.general.weapons.Enable;
                auto otherEnabled = settings->visuals.item.general.other.Enable;

                Item item{};
                item.entity   = (CBaseEntity*)networkable;
                item.prefabId = networkable->prefabID;
                item.position = item.entity->GetOriginPosition();
                item.distance = currentLocalPosition.distance(item.position);

                auto maxDist = settings->visuals.item.general.Distance;

                if (item.distance > maxDist)
                    continue;

                auto droppedItem = (DroppedItem_o*)item.entity;
                auto itemEnt     = (CItem*)droppedItem->fields.item;

                auto category = (ItemCategory)itemEnt->info->fields.category;
                item.category = category;
                item.amount   = itemEnt->amount;

                if ((category == ItemCategory::Weapon && wepEnabled) || otherEnabled)
                {
                    auto itemId     = itemEnt->info->fields.itemid;
                    item.itemid     = itemId;
                    item.namePoolID = DB::GetItemName((CItemDefinition*)itemEnt->info);

                    auto hashedName        = HASH_RUNTIME(DB::GetString(item.namePoolID)->c_str());
                    bool isBlacklistedItem = HASH_CTIME("Wooden Arrow") == hashedName ||
                                             hashedName == HASH_CTIME("Nailgun Nails");

                    if (isBlacklistedItem == false)
                    {
                        DB::items.emplace_back(item);
                    }
                }

                break;
            }
            case HASH_CTIME("DroppedItemContainer"):
            case HASH_CTIME("ItemContainer"):
            {
                Backpack backpack{};
                backpack.entity   = (CBaseEntity*)networkable;
                backpack.prefabId = networkable->prefabID;
                backpack.position = backpack.entity->GetOriginPosition();
                backpack.distance = currentLocalPosition.distance(backpack.position);

                if (settings->visuals.item.backpacks.color.Enable == false)
                    continue;

                if (backpack.distance > settings->visuals.item.backpacks.Distance)
                    continue;

                DB::backpacks.emplace_back(backpack);

                continue;
            }
            case HASH_CTIME("StashContainer"):
            {
                Stash stash{};
                stash.entity   = (CBaseEntity*)networkable;
                stash.prefabId = networkable->prefabID;
                stash.position = stash.entity->GetOriginPosition();
                stash.distance = currentLocalPosition.distance(stash.position);

                if (settings->visuals.item.stashes.option.Enable == false)
                    continue;

                if (stash.distance > settings->visuals.item.stashes.Distance)
                    continue;

                DB::stashes.emplace_back(stash);

                continue;
            }
            case HASH_CTIME("PlayerCorpse"):
            {
                Corpse corpse{};
                corpse.entity   = (CBaseEntity*)networkable;
                corpse.prefabId = networkable->prefabID;
                corpse.position = corpse.entity->GetOriginPosition();
                corpse.distance = currentLocalPosition.distance(corpse.position);

                if (settings->visuals.item.corpses.option.Enable == false)
                    continue;

                if (corpse.distance > settings->visuals.item.corpses.Distance)
                    continue;

                DB::corpses.emplace_back(corpse);

                continue;
            }
            }

            // if (settings->visuals.item.general.other.Enable)
            // {
            //     auto maxDist = settings->visuals.item.general.Distance;
            // }

            if (settings->misc.other.SilentFarm.Active())
            {
                // here we collect needed stuff for silent farm this frame
                if (DB::silentFarmStuff.size() >= 20)
                {
                    // 1000 trees wont probably fit in 3 meters radius anyways so ...
                    continue;
                }

                auto localPlayer = CLocalPlayer::GetLocalPlayer();

                if (localPlayer == nullptr)
                    continue;

                auto entity   = (CBaseEntity*)networkable;
                auto position = entity->GetOriginPosition();
                // auto lastTickPos = *(Vector3*)&localPlayer->lastSentTick->fields.eyePos;
                auto distance = currentLocalPosition.distance(position);

                if (distance > 3.f + 1.8f) // yeah but it saves cycles
                    continue;

                SilentFarmTarget target{};
                target.entity = entity;

                switch (classHash)
                {
                case HASH_CTIME("OreHotSpot"):
                {
                    target.type = SilentFarmTargetType::OreHotSpot;
                    break;
                }
                case HASH_CTIME("TreeMarker"):
                {
                    target.type = SilentFarmTargetType::TreeMarker;
                    break;
                }
                case HASH_CTIME("TreeEntity"):
                {
                    auto tree = (CTreeEntity*)entity;

                    if (tree->lastTreeFallTickTime > 0.f)
                        continue;

                    position.y  = currentLocalPosition.y;
                    target.type = SilentFarmTargetType::Tree;
                    break;
                }
                default:
                    continue;
                }

                target.position = position;
                target.distance = distance;

                DB::silentFarmStuff.emplace_back(target);
                continue;
            }
        }

        nNetworkablesSaved = DB::TotalEntities();

        // sort by distance, it will make my life easier in future
        std::ranges::sort(DB::players, {}, &Player::distance);
        std::ranges::sort(DB::ores, {}, &OreResource::distance);
        std::ranges::sort(DB::animals, {}, &Animal::distance);
        std::ranges::sort(DB::collectibles, {}, &Collectible::distance);
        std::ranges::sort(DB::radtown, {}, &RadTown::distance);
        std::ranges::sort(DB::vehicles, {}, &Vehicle::distance);
        std::ranges::sort(DB::traps, {}, &Trap::distance);
        std::ranges::sort(DB::silentFarmStuff, {}, &SilentFarmTarget::distance);
        std::ranges::sort(DB::items, {}, &Item::distance);
        std::ranges::sort(DB::backpacks, {}, &Backpack::distance);
        std::ranges::sort(DB::corpses, {}, &Corpse::distance);

        return true;
    }

} // namespace EntityManager