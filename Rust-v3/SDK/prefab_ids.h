#pragma once
#include "../mrt/md5.h"
#include <stdint.h>
#include <string_view>

namespace prefabs
{
    //NOTE: Make shure all text is in lowercase
    constexpr uint32_t ToInt32(md5::Digest const& num)
    {
        return (uint32_t)((int)(num[0]) | ((int)num[1] << 8) | ((int)num[2] << 16) | ((int)num[3] << 24));
    }

    constexpr uint32_t STRHASH(const char* str)
    {
        return ToInt32(md5::compute(str));
    }

#define PREFABID(name, x) constexpr auto name = STRHASH(x)
#define BONEID(name) constexpr auto name = STRHASH(#name)

    namespace other
    {
        PREFABID(treeMarker1, "assets/content/nature/treesprefabs/trees/effects/tree_marking_nospherecast.prefab");
        PREFABID(treeMarker2, "assets/content/nature/treesprefabs/trees/effects/tree_marking.prefab");
        PREFABID(workbench1, "assets/prefabs/deployable/tier 1 workbench/workbench1.deployed.prefab");
        PREFABID(workbench2, "assets/prefabs/deployable/tier 2 workbench/workbench2.deployed.prefab");
        PREFABID(workbench3, "assets/prefabs/deployable/tier 3 workbench/workbench3.deployed.prefab");
        PREFABID(toolcupboard, "assets/prefabs/deployable/tool cupboard/cupboard.tool.deployed.prefab");
    } // namespace other

    namespace weapon
    {
        PREFABID(eoka, "assets/prefabs/weapons/eoka pistol/pistol_eoka.entity.prefab");
        PREFABID(ice_ak, "assets/prefabs/weapons/ak47u/iceskin/ak47u_ice.entity.prefab");
        PREFABID(hunting_bow, "assets/prefabs/weapons/bow/bow_hunting.entity.prefab");
        PREFABID(coumpound_bow, "assets/prefabs/weapons/compound bow/compound_bow.entity.prefab");
    } // namespace weapon
    namespace effects
    {
        // 4089790239, string: assets/prefabs/weapons/f1 grenade/effects/f1grenade_explosion.prefab
        // 3053816283, string: assets/prefabs/weapons/rocketlauncher/effects/rocket_explosion.prefab
        // 1437504946, string: assets/prefabs/weapons/rocketlauncher/effects/rocket_explosion_incendiary.prefab
        // 857997843, string: assets/prefabs/tools/c4/effects/c4_explosion.prefab
        // 1289728008, string: assets/prefabs/weapons/satchelcharge/effects/satchel-charge-explosion.prefab
        // 1161374517, string: assets/content/vehicles/mlrs/effects/pfx_mlrs_rocket_explosion_ground.prefab
        PREFABID(grenadeExplosion, "assets/prefabs/weapons/f1 grenade/effects/f1grenade_explosion.prefab");
        PREFABID(rocketExplosion, "assets/prefabs/weapons/rocketlauncher/effects/rocket_explosion.prefab");
        PREFABID(rocketIncendiaryExplosion,
                 "assets/prefabs/weapons/rocketlauncher/effects/rocket_explosion_incendiary.prefab");
    } // namespace effects

    namespace underwater
    {
        PREFABID(crate, "assets/bundled/prefabs/radtown/crate_underwater_basic.prefab");
        PREFABID(crate_advanced, "assets/bundled/prefabs/radtown/crate_underwater_advanced.prefab");
    } // namespace underwater

    // namespace tools
    // {
    //     PREFABID(chainsaw, "assets/prefabs/weapons/chainsaw/chainsaw.entity.prefab");
    //     PREFABID(jackhammer, "assets/prefabs/tools/jackhammer/jackhammer.worldmodel.prefab");
    // }

    namespace vehicles
    {
        PREFABID(rhib, "assets/content/vehicles/boats/rhib/rhib.prefab");
        PREFABID(rowboat, "assets/content/vehicles/boats/rowboat/rowboat.prefab");
        PREFABID(tugboat, "assets/content/vehicles/boats/tugboat/tugboat.prefab");
        PREFABID(horse, "assets/rust.ai/agents/horse/horse.prefab");
        PREFABID(mini, "assets/content/vehicles/minicopter/minicopter.entity.prefab");
        PREFABID(scrap, "assets/content/vehicles/scrap heli carrier/scraptransporthelicopter.prefab");
        PREFABID(airballoon, "assets/prefabs/deployable/hot air balloon/hotairballoon.prefab");
        PREFABID(submarinesolo, "assets/content/vehicles/submarine/submarinesolo.entity.prefab");
        PREFABID(submarineduo, "assets/content/vehicles/submarine/submarineduo.entity.prefab");
        PREFABID(bradleyapc, "assets/prefabs/npc/m2bradley/bradleyapc.prefab");
        PREFABID(patrolheli, "assets/prefabs/npc/patrol helicopter/patrolhelicopter.prefab");
        PREFABID(chinook, "assets/prefabs/npc/ch47/ch47scientists.entity.prefab");
    } // namespace vehicles

    namespace player
    {
        PREFABID(player_model, "assets/prefabs/player/player_model.prefab");
        PREFABID(player, "assets/prefabs/player/player.prefab");
        PREFABID(scientistnpc_arena, "assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_arena.prefab");
        PREFABID(scientistnpc_cargo, "assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_cargo.prefab");
        PREFABID(scientistnpc_cargo_turret_any, "assets/rust.ai/agents/npcplayer/humannpc/"
                                                "scientist/scientistnpc_cargo_turret_any.prefab");
        PREFABID(scientistnpc_cargo_turret_lr300, "assets/rust.ai/agents/npcplayer/humannpc/scientist/"
                                                  "scientistnpc_cargo_turret_lr300.prefab");
        PREFABID(scientistnpc_ch47_gunner,
                 "assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_ch47_gunner.prefab");
        PREFABID(scientistnpc_excavator,
                 "assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_excavator.prefab");
        PREFABID(scientistnpc_full_any,
                 "assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_full_any.prefab");
        PREFABID(scientistnpc_full_lr300,
                 "assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_full_lr300.prefab");
        PREFABID(scientistnpc_full_mp5,
                 "assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_full_mp5.prefab");
        PREFABID(scientistnpc_full_pistol,
                 "assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_full_pistol.prefab");
        PREFABID(scientistnpc_full_shotgun,
                 "assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_full_shotgun.prefab");
        PREFABID(scientistnpc_heavy, "assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_heavy.prefab");
        PREFABID(scientistnpc_junkpile_pistol, "assets/rust.ai/agents/npcplayer/humannpc/scientist/"
                                               "scientistnpc_junkpile_pistol.prefab");
        PREFABID(scientistnpc_oilrig, "assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_oilrig.prefab");
        PREFABID(scientistnpc_patrol, "assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_patrol.prefab");
        PREFABID(scientistnpc_peacekeeper,
                 "assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_peacekeeper.prefab");
        PREFABID(scientistnpc_roam, "assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_roam.prefab");
        PREFABID(scientistnpc_roam_nvg_variant, "assets/rust.ai/agents/npcplayer/humannpc/"
                                                "scientist/scientistnpc_roam_nvg_variant.prefab");
        PREFABID(scientistnpc_roamtethered,
                 "assets/rust.ai/agents/npcplayer/humannpc/scientist/scientistnpc_roamtethered.prefab");
        PREFABID(npc_tunneldweller, "assets/rust.ai/agents/npcplayer/humannpc/tunneldweller/npc_tunneldweller.prefab");
        PREFABID(npc_bandit_guard, "assets/rust.ai/agents/npcplayer/humannpc/banditguard/npc_bandit_guard.prefab");
        PREFABID(npc_underwaterdweller, "assets/rust.ai/agents/npcplayer/humannpc/"
                                        "underwaterdweller/npc_underwaterdweller.prefab");
    } // namespace player

    namespace ore
    {
        PREFABID(metal, "assets/bundled/prefabs/autospawn/resource/ores/metal-ore.prefab");
        PREFABID(metal2, "assets/bundled/prefabs/autospawn/resource/ores_snow/metal-ore.prefab");
        PREFABID(metal3, "assets/bundled/prefabs/autospawn/resource/ores_sand/metal-ore.prefab");
        PREFABID(metal4, "assets/bundled/prefabs/radtown/ore_metal.prefab");
        PREFABID(sulfur, "assets/bundled/prefabs/autospawn/resource/ores/sulfur-ore.prefab");
        PREFABID(sulfur2, "assets/bundled/prefabs/radtown/ore_sulfur.prefab");
        PREFABID(sulfur3, "assets/bundled/prefabs/autospawn/resource/ores_snow/sulfur-ore.prefab");
        PREFABID(sulfur4, "assets/bundled/prefabs/autospawn/resource/ores_sand/sulfur-ore.prefab");
        PREFABID(stone, "assets/bundled/prefabs/autospawn/resource/ores/stone-ore.prefab");
        PREFABID(stone2, "assets/bundled/prefabs/radtown/ore_stone.prefab");
        PREFABID(stone3, "assets/bundled/prefabs/autospawn/resource/ores_snow/stone-ore.prefab");
        PREFABID(stone4, "assets/bundled/prefabs/autospawn/resource/ores_sand/stone-ore.prefab");
    } // namespace ore

    /* COLLECTABLES*/
    namespace collectable
    {
        PREFABID(hemp, "assets/bundled/prefabs/autospawn/collectable/hemp/hemp-collectable.prefab");
        PREFABID(mushroom1, "assets/bundled/prefabs/autospawn/collectable/mushrooms/mushroom-cluster-5.prefab");
        PREFABID(mushroom2, "assets/bundled/prefabs/autospawn/collectable/mushrooms/mushroom-cluster-6.prefab");
        PREFABID(pumpkin, "assets/bundled/prefabs/autospawn/collectable/pumpkin/pumpkin-collectable.prefab");
        PREFABID(corn, "assets/bundled/prefabs/autospawn/collectable/corn/corn-collectable.prefab");
        PREFABID(berry_white, "assets/bundled/prefabs/autospawn/collectable/berry-white/"
                              "berry-white-collectable.prefab");
        PREFABID(berry_black, "assets/bundled/prefabs/autospawn/collectable/berry-black/"
                              "berry-black-collectable.prefab");
        PREFABID(berry_blue, "assets/bundled/prefabs/autospawn/collectable/berry-blue/"
                             "berry-blue-collectable.prefab");
        PREFABID(berry_yellow, "assets/bundled/prefabs/autospawn/collectable/berry-yellow/"
                               "berry-yellow-collectable.prefab");
        PREFABID(berry_red, "assets/bundled/prefabs/autospawn/collectable/berry-red/berry-red-collectable.prefab");
        PREFABID(berry_green, "assets/bundled/prefabs/autospawn/collectable/berry-green/"
                              "berry-green-collectable.prefab");
        PREFABID(potato, "assets/bundled/prefabs/autospawn/collectable/potato/potato-collectable.prefab");
        PREFABID(collectSulfur, "assets/bundled/prefabs/autospawn/collectable/stone/sulfur-collectable.prefab");
        PREFABID(collectStone, "assets/bundled/prefabs/autospawn/collectable/stone/stone-collectable.prefab");
        PREFABID(collectWood, "assets/bundled/prefabs/autospawn/collectable/wood/wood-collectable.prefab");
        PREFABID(collectMetal, "assets/bundled/prefabs/autospawn/collectable/stone/metal-collectable.prefab");
    } // namespace collectable

    /* RADTOWN */
    namespace radtown
    {
        PREFABID(barrel1, "assets/bundled/prefabs/autospawn/resource/loot/loot-barrel-1.prefab");
        PREFABID(barrel2, "assets/bundled/prefabs/autospawn/resource/loot/loot-barrel-2.prefab");
        PREFABID(barrel_1, "assets/bundled/prefabs/radtown/loot_barrel_1.prefab");
        PREFABID(barrel_2, "assets/bundled/prefabs/radtown/loot_barrel_2.prefab");
        PREFABID(barrel_oil, "assets/bundled/prefabs/radtown/oil_barrel.prefab");
        PREFABID(crate_basic, "assets/bundled/prefabs/radtown/crate_basic.prefab");
        PREFABID(crate_elite, "assets/bundled/prefabs/radtown/crate_elite.prefab");
        PREFABID(crate_mili, "assets/bundled/prefabs/radtown/crate_normal.prefab");
        PREFABID(crate_normal2, "assets/bundled/prefabs/radtown/crate_normal_2.prefab");
        PREFABID(crate_normal_food, "assets/bundled/prefabs/radtown/crate_normal_2_food.prefab");
        PREFABID(crate_normal_medical, "assets/bundled/prefabs/radtown/crate_normal_2_medical.prefab");
        PREFABID(crate_tools, "assets/bundled/prefabs/radtown/crate_tools.prefab");
        PREFABID(crate_underwater_advanced, "assets/bundled/prefabs/radtown/crate_underwater_advanced.prefab");
        PREFABID(crate_underwater_basic, "assets/bundled/prefabs/radtown/crate_underwater_basic.prefab");
        PREFABID(crate_bradley, "assets/prefabs/npc/m2bradley/bradley_crate.prefab");
        PREFABID(crate_heli, "assets/prefabs/npc/patrol helicopter/heli_crate.prefab");
        PREFABID(crate_food, "assets/bundled/prefabs/radtown/foodbox.prefab");
        PREFABID(airdrop, "assets/prefabs/misc/supply drop/supply_drop.prefab");
    } // namespace radtown

    namespace animals
    {
        PREFABID(bear, "assets/rust.ai/agents/bear/bear.prefab");
        PREFABID(polarBear, "assets/rust.ai/agents/bear/polarbear.prefab");
        PREFABID(boar, "assets/rust.ai/agents/boar/boar.prefab");
        PREFABID(chicken, "assets/rust.ai/agents/chicken/chicken.prefab");
        PREFABID(stag, "assets/rust.ai/agents/stag/stag.prefab");
        PREFABID(wolf, "assets/rust.ai/agents/wolf/wolf.prefab");
        PREFABID(zombie, "assets/rust.ai/agents/zombie/zombie.prefab");
    } // namespace animals

    namespace traps
    {
        PREFABID(autoturret, "assets/prefabs/npc/autoturret/autoturret_deployed.prefab");
        PREFABID(flameturret, "assets/prefabs/npc/flame turret/flameturret.deployed.prefab");
        PREFABID(guntrap, "assets/prefabs/deployable/single shot trap/guntrap.deployed.prefab");
        PREFABID(samsite, "assets/prefabs/npc/sam_site_turret/sam_site_turret_deployed.prefab");
        PREFABID(landdmine, "assets/prefabs/deployable/landmine/landmine.prefab");
        PREFABID(beartrap, "assets/prefabs/deployable/bear trap/beartrap.prefab");
    } // namespace traps

    namespace bones
    {
        BONEID(spine1);
        BONEID(spine2);
        BONEID(spine3);
        BONEID(spine4);
        BONEID(head);
        BONEID(neck);
        BONEID(pelvis);
        BONEID(l_hip);
        BONEID(r_hip);
    }

} // namespace prefabs