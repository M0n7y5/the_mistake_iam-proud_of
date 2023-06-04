#pragma once
#include "../mrt/fnv1a.hpp"

namespace Hashes
{
    /* ORES */
    constexpr auto metal  = HASH_CTIME("assets/bundled/prefabs/autospawn/resource/ores/metal-ore.prefab");
    constexpr auto metal2 = HASH_CTIME("assets/bundled/prefabs/autospawn/resource/ores_snow/metal-ore.prefab");
    constexpr auto metal3 = HASH_CTIME("assets/bundled/prefabs/autospawn/resource/ores_sand/metal-ore.prefab");
    constexpr auto metal4 = HASH_CTIME("assets/bundled/prefabs/radtown/ore_metal.prefab");

    constexpr auto sulfur  = HASH_CTIME("assets/bundled/prefabs/autospawn/resource/ores/sulfur-ore.prefab");
    constexpr auto sulfur2 = HASH_CTIME("assets/bundled/prefabs/radtown/ore_sulfur.prefab");
    constexpr auto sulfur3 = HASH_CTIME("assets/bundled/prefabs/autospawn/resource/ores_snow/sulfur-ore.prefab");
    constexpr auto sulfur4 = HASH_CTIME("assets/bundled/prefabs/autospawn/resource/ores_sand/sulfur-ore.prefab");

    constexpr auto stone  = HASH_CTIME("assets/bundled/prefabs/autospawn/resource/ores/stone-ore.prefab");
    constexpr auto stone2 = HASH_CTIME("assets/bundled/prefabs/radtown/ore_stone.prefab");
    constexpr auto stone3 = HASH_CTIME("assets/bundled/prefabs/autospawn/resource/ores_snow/stone-ore.prefab");
    constexpr auto stone4 = HASH_CTIME("assets/bundled/prefabs/autospawn/resource/ores_sand/stone-ore.prefab");

    /* COLLECTABLES*/
    constexpr auto hemp = HASH_CTIME("assets/bundled/prefabs/autospawn/collectable/hemp/hemp-collectable.prefab");
    constexpr auto mushroom =
        HASH_CTIME("assets/bundled/prefabs/autospawn/collectable/mushrooms/mushroom-cluster-6.prefab");
    constexpr auto pumpkin =
        HASH_CTIME("assets/bundled/prefabs/autospawn/collectable/pumpkin/pumpkin-collectable.prefab");
    constexpr auto corn = HASH_CTIME("assets/bundled/prefabs/autospawn/collectable/corn/corn-collectable.prefab");
    constexpr auto berry_white =
        HASH_CTIME("assets/bundled/prefabs/autospawn/collectable/berry-white/berry-white-collectable.prefab");
    constexpr auto berry_black =
        HASH_CTIME("assets/bundled/prefabs/autospawn/collectable/berry-black/berry-black-collectable.prefab");
    constexpr auto berry_blue =
        HASH_CTIME("assets/bundled/prefabs/autospawn/collectable/berry-blue/berry-blue-collectable.prefab");
    constexpr auto berry_yellow =
        HASH_CTIME("assets/bundled/prefabs/autospawn/collectable/berry-yellow/berry-yellow-collectable.prefab");
    constexpr auto berry_red =
        HASH_CTIME("assets/bundled/prefabs/autospawn/collectable/berry-red/berry-red-collectable.prefab");
    constexpr auto berry_green =
        HASH_CTIME("assets/bundled/prefabs/autospawn/collectable/berry-green/berry-green-collectable.prefab");
    constexpr auto potato = HASH_CTIME("assets/bundled/prefabs/autospawn/collectable/potato/potato-collectable.prefab");
    constexpr auto collectSulfur =
        HASH_CTIME("assets/bundled/prefabs/autospawn/collectable/stone/sulfur-collectable.prefab");
    constexpr auto collectStone =
        HASH_CTIME("assets/bundled/prefabs/autospawn/collectable/stone/stone-collectable.prefab");
    constexpr auto collectWood =
        HASH_CTIME("assets/bundled/prefabs/autospawn/collectable/wood/wood-collectable.prefab");
    constexpr auto collectMetal =
        HASH_CTIME("assets/bundled/prefabs/autospawn/collectable/stone/metal-collectable.prefab");

    /* RADTOWN */
    constexpr auto barrel1       = HASH_CTIME("assets/bundled/prefabs/autospawn/resource/loot/loot-barrel-1.prefab");
    constexpr auto barrel2       = HASH_CTIME("assets/bundled/prefabs/autospawn/resource/loot/loot-barrel-2.prefab");
    constexpr auto barrel_1      = HASH_CTIME("assets/bundled/prefabs/radtown/loot_barrel_1.prefab");
    constexpr auto barrel_2      = HASH_CTIME("assets/bundled/prefabs/radtown/loot_barrel_2.prefab");
    constexpr auto barrel_oil    = HASH_CTIME("assets/bundled/prefabs/radtown/oil_barrel.prefab");
    constexpr auto crate_basic   = HASH_CTIME("assets/bundled/prefabs/radtown/crate_basic.prefab");
    constexpr auto crate_elite   = HASH_CTIME("assets/bundled/prefabs/radtown/crate_elite.prefab");
    constexpr auto crate_mili    = HASH_CTIME("assets/bundled/prefabs/radtown/crate_normal.prefab");
    constexpr auto crate_normal2 = HASH_CTIME("assets/bundled/prefabs/radtown/crate_normal_2.prefab");
    constexpr auto crate_normal_food    = HASH_CTIME("assets/bundled/prefabs/radtown/crate_normal_2_food.prefab");
    constexpr auto crate_normal_medical = HASH_CTIME("assets/bundled/prefabs/radtown/crate_normal_2_medical.prefab");
    constexpr auto crate_tools          = HASH_CTIME("assets/bundled/prefabs/radtown/crate_tools.prefab");
    constexpr auto crate_underwater_advanced =
        HASH_CTIME("assets/bundled/prefabs/radtown/crate_underwater_advanced.prefab");
    constexpr auto crate_underwater_basic = HASH_CTIME("assets/bundled/prefabs/radtown/crate_underwater_basic.prefab");
    constexpr auto crate_bradley          = HASH_CTIME("assets/prefabs/npc/m2bradley/bradley_crate.prefab");
    constexpr auto crate_heli             = HASH_CTIME("assets/prefabs/npc/patrol helicopter/heli_crate.prefab");
    constexpr auto crate_food             = HASH_CTIME("assets/bundled/prefabs/radtown/foodbox.prefab");
    constexpr auto airdrop                = HASH_CTIME("assets/prefabs/misc/supply drop/supply_drop.prefab");

    /* CLASSES */
    constexpr auto droppedItem          = HASH_CTIME("DroppedItem");
    constexpr auto droppedItemContainer = HASH_CTIME("DroppedItemContainer");
    constexpr auto itemContainer        = HASH_CTIME("ItemContainer");
    constexpr auto playerCorpse         = HASH_CTIME("PlayerCorpse");
    constexpr auto oreResource          = HASH_CTIME("OreResourceEntity");
    constexpr auto baseHelicopter       = HASH_CTIME("BaseHelicopter");
    constexpr auto bradley              = HASH_CTIME("BradleyAPC");
    constexpr auto lootContainer        = HASH_CTIME("LootContainer");
    constexpr auto collectible          = HASH_CTIME("CollectibleEntity");
    constexpr auto stash                = HASH_CTIME("StashContainer");
    constexpr auto lockedByEntityCrate  = HASH_CTIME("LockedByEntCrate");
    constexpr auto supplydrop           = HASH_CTIME("SupplyDrop");

    // animals
    constexpr auto polarbear = HASH_CTIME("Polarbear");
    constexpr auto bear      = HASH_CTIME("Bear");
    constexpr auto boar      = HASH_CTIME("Boar");
    constexpr auto chicken   = HASH_CTIME("Chicken");
    constexpr auto horse     = HASH_CTIME("Horse");
    constexpr auto stag      = HASH_CTIME("Stag");
    constexpr auto wolf      = HASH_CTIME("Wolf");
    constexpr auto zombie    = HASH_CTIME("Zombie");

    // vehicles
    constexpr auto minicopter    = HASH_CTIME("MiniCopter");
    constexpr auto scrapheli     = HASH_CTIME("ScrapTransportHelicopter");
    constexpr auto boat          = HASH_CTIME("MotorRowboat");
    constexpr auto rhib          = HASH_CTIME("RHIB");
    constexpr auto ridableHorse  = HASH_CTIME("RidableHorse");
    constexpr auto hotAirBalloon = HASH_CTIME("HotAirBalloon");

    // traps
    constexpr auto autoTurret  = HASH_CTIME("AutoTurret");
    constexpr auto landmine    = HASH_CTIME("Landmine");
    constexpr auto bearTrap    = HASH_CTIME("BearTrap");
    constexpr auto shotgunTrap = HASH_CTIME("GunTrap");
    constexpr auto flameTurret = HASH_CTIME("FlameTurret");
    constexpr auto samSite     = HASH_CTIME("SamSite");

    // buildables
    constexpr auto toolCupboard = HASH_CTIME("BuildingPrivlidge");
    constexpr auto workbench    = HASH_CTIME("Workbench");
    constexpr auto sleepingBag  = HASH_CTIME("SleepingBag");
} // namespace Hashes