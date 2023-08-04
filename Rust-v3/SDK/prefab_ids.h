#pragma once
#include "../mrt/md5.h"
#include <stdint.h>

namespace prefabs
{
    constexpr uint32_t ToInt32(md5::Digest const& num)
    {
        return (uint32_t)((int)(num[0]) | ((int)num[1] << 8) | ((int)num[2] << 16) | ((int)num[3] << 24));
    }

    constexpr uint32_t STRHASH(const char* str)
    {
        return ToInt32(md5::compute(str));
    }

    namespace player
    {
        constexpr auto player_model                    = STRHASH("assets/prefabs/player/player_model.prefab");
        constexpr auto player                          = STRHASH("assets/prefabs/player/player.prefab");
        constexpr auto scientistnpc_arena              = STRHASH("assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_arena.prefab");
        constexpr auto scientistnpc_cargo              = STRHASH("assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_cargo.prefab");
        constexpr auto scientistnpc_cargo_turret_any   = STRHASH("assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_cargo_turret_any.prefab");
        constexpr auto scientistnpc_cargo_turret_lr300 = STRHASH("assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_cargo_turret_lr300.prefab");
        constexpr auto scientistnpc_ch47_gunner        = STRHASH("assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_ch47_gunner.prefab");
        constexpr auto scientistnpc_excavator          = STRHASH("assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_excavator.prefab");
        constexpr auto scientistnpc_full_any           = STRHASH("assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_full_any.prefab");
        constexpr auto scientistnpc_full_lr300         = STRHASH("assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_full_lr300.prefab");
        constexpr auto scientistnpc_full_mp5           = STRHASH("assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_full_mp5.prefab");
        constexpr auto scientistnpc_full_pistol        = STRHASH("assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_full_pistol.prefab");
        constexpr auto scientistnpc_full_shotgun       = STRHASH("assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_full_shotgun.prefab");
        constexpr auto scientistnpc_heavy              = STRHASH("assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_heavy.prefab");
        constexpr auto scientistnpc_junkpile_pistol    = STRHASH("assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_junkpile_pistol.prefab");
        constexpr auto scientistnpc_oilrig             = STRHASH("assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_oilrig.prefab");
        constexpr auto scientistnpc_patrol             = STRHASH("assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_patrol.prefab");
        constexpr auto scientistnpc_peacekeeper        = STRHASH("assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_peacekeeper.prefab");
        constexpr auto scientistnpc_roam               = STRHASH("assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_roam.prefab");
        constexpr auto scientistnpc_roam_nvg_variant   = STRHASH("assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_roam_nvg_variant.prefab");
        constexpr auto scientistnpc_roamtethered       = STRHASH("assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_roamtethered.prefab");
        constexpr auto npc_tunneldweller               = STRHASH("assets/rust.ai/agents/npcplayer/humannpc/tunneldweller/npc_tunneldweller.prefab");
        constexpr auto npc_bandit_guard                = STRHASH("assets/rust.ai/agents/npcplayer/humannpc/banditguard/npc_bandit_guard.prefab");
        constexpr auto npc_underwaterdweller           = STRHASH("assets/rust.ai/agents/npcplayer/humannpc/underwaterdweller/npc_underwaterdweller.prefab");
    } // namespace player

    namespace ore
    {
        constexpr auto metal   = STRHASH("assets/bundled/prefabs/autospawn/resource/ores/metal-ore.prefab");
        constexpr auto metal2  = STRHASH("assets/bundled/prefabs/autospawn/resource/ores_snow/metal-ore.prefab");
        constexpr auto metal3  = STRHASH("assets/bundled/prefabs/autospawn/resource/ores_sand/metal-ore.prefab");
        constexpr auto metal4  = STRHASH("assets/bundled/prefabs/radtown/ore_metal.prefab");
        constexpr auto sulfur  = STRHASH("assets/bundled/prefabs/autospawn/resource/ores/sulfur-ore.prefab");
        constexpr auto sulfur2 = STRHASH("assets/bundled/prefabs/radtown/ore_sulfur.prefab");
        constexpr auto sulfur3 = STRHASH("assets/bundled/prefabs/autospawn/resource/ores_snow/sulfur-ore.prefab");
        constexpr auto sulfur4 = STRHASH("assets/bundled/prefabs/autospawn/resource/ores_sand/sulfur-ore.prefab");
        constexpr auto stone   = STRHASH("assets/bundled/prefabs/autospawn/resource/ores/stone-ore.prefab");
        constexpr auto stone2  = STRHASH("assets/bundled/prefabs/radtown/ore_stone.prefab");
        constexpr auto stone3  = STRHASH("assets/bundled/prefabs/autospawn/resource/ores_snow/stone-ore.prefab");
        constexpr auto stone4  = STRHASH("assets/bundled/prefabs/autospawn/resource/ores_sand/stone-ore.prefab");
    } // namespace ore

    /* COLLECTABLES*/
    namespace collectable
    {
        constexpr auto hemp          = STRHASH("assets/bundled/prefabs/autospawn/collectable/hemp/hemp-collectable.prefab");
        constexpr auto mushroom      = STRHASH("assets/bundled/prefabs/autospawn/collectable/mushrooms/mushroom-cluster-6.prefab");
        constexpr auto pumpkin       = STRHASH("assets/bundled/prefabs/autospawn/collectable/pumpkin/pumpkin-collectable.prefab");
        constexpr auto corn          = STRHASH("assets/bundled/prefabs/autospawn/collectable/corn/corn-collectable.prefab");
        constexpr auto berry_white   = STRHASH("assets/bundled/prefabs/autospawn/collectable/berry-white/berry-white-collectable.prefab");
        constexpr auto berry_black   = STRHASH("assets/bundled/prefabs/autospawn/collectable/berry-black/berry-black-collectable.prefab");
        constexpr auto berry_blue    = STRHASH("assets/bundled/prefabs/autospawn/collectable/berry-blue/berry-blue-collectable.prefab");
        constexpr auto berry_yellow  = STRHASH("assets/bundled/prefabs/autospawn/collectable/berry-yellow/berry-yellow-collectable.prefab");
        constexpr auto berry_red     = STRHASH("assets/bundled/prefabs/autospawn/collectable/berry-red/berry-red-collectable.prefab");
        constexpr auto berry_green   = STRHASH("assets/bundled/prefabs/autospawn/collectable/berry-green/berry-green-collectable.prefab");
        constexpr auto potato        = STRHASH("assets/bundled/prefabs/autospawn/collectable/potato/potato-collectable.prefab");
        constexpr auto collectSulfur = STRHASH("assets/bundled/prefabs/autospawn/collectable/stone/sulfur-collectable.prefab");
        constexpr auto collectStone  = STRHASH("assets/bundled/prefabs/autospawn/collectable/stone/stone-collectable.prefab");
        constexpr auto collectWood   = STRHASH("assets/bundled/prefabs/autospawn/collectable/wood/wood-collectable.prefab");
        constexpr auto collectMetal  = STRHASH("assets/bundled/prefabs/autospawn/collectable/stone/metal-collectable.prefab");
    } // namespace collectable

    /* RADTOWN */
    namespace radtown
    {
        constexpr auto barrel1                   = STRHASH("assets/bundled/prefabs/autospawn/resource/loot/loot-barrel-1.prefab");
        constexpr auto barrel2                   = STRHASH("assets/bundled/prefabs/autospawn/resource/loot/loot-barrel-2.prefab");
        constexpr auto barrel_1                  = STRHASH("assets/bundled/prefabs/radtown/loot_barrel_1.prefab");
        constexpr auto barrel_2                  = STRHASH("assets/bundled/prefabs/radtown/loot_barrel_2.prefab");
        constexpr auto barrel_oil                = STRHASH("assets/bundled/prefabs/radtown/oil_barrel.prefab");
        constexpr auto crate_basic               = STRHASH("assets/bundled/prefabs/radtown/crate_basic.prefab");
        constexpr auto crate_elite               = STRHASH("assets/bundled/prefabs/radtown/crate_elite.prefab");
        constexpr auto crate_mili                = STRHASH("assets/bundled/prefabs/radtown/crate_normal.prefab");
        constexpr auto crate_normal2             = STRHASH("assets/bundled/prefabs/radtown/crate_normal_2.prefab");
        constexpr auto crate_normal_food         = STRHASH("assets/bundled/prefabs/radtown/crate_normal_2_food.prefab");
        constexpr auto crate_normal_medical      = STRHASH("assets/bundled/prefabs/radtown/crate_normal_2_medical.prefab");
        constexpr auto crate_tools               = STRHASH("assets/bundled/prefabs/radtown/crate_tools.prefab");
        constexpr auto crate_underwater_advanced = STRHASH("assets/bundled/prefabs/radtown/crate_underwater_advanced.prefab");
        constexpr auto crate_underwater_basic    = STRHASH("assets/bundled/prefabs/radtown/crate_underwater_basic.prefab");
        constexpr auto crate_bradley             = STRHASH("assets/prefabs/npc/m2bradley/bradley_crate.prefab");
        constexpr auto crate_heli                = STRHASH("assets/prefabs/npc/patrol helicopter/heli_crate.prefab");
        constexpr auto crate_food                = STRHASH("assets/bundled/prefabs/radtown/foodbox.prefab");
        constexpr auto airdrop                   = STRHASH("assets/prefabs/misc/supply drop/supply_drop.prefab");
    } // namespace radtown

    namespace animals
    {
        constexpr auto bear      = STRHASH("assets/rust.ai/agents/bear/bear.prefab/");
        constexpr auto polarBear = STRHASH("assets/rust.ai/agents/bear/polarbear.prefab");
        constexpr auto boar      = STRHASH("assets/rust.ai/agents/boar/boar.prefab");
        constexpr auto chicken   = STRHASH("assets/rust.ai/agents/chicken/chicken.prefab");
        constexpr auto stag      = STRHASH("assets/rust.ai/agents/stag/stag.prefab");
        constexpr auto wolf      = STRHASH("assets/rust.ai/agents/wolf/wolf.prefab");
        constexpr auto zombie    = STRHASH("assets/rust.ai/agents/zombie/zombie.prefab");
    } // namespace animals

} // namespace prefabs