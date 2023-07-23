#include "GUI.h"
#include "../SDK/settings.h"
#include "mui.h"
#include <functional> // std::function
#include <utility>
#include "../mrt/xorstr.hpp"
// TODO: Implement support for toggle options

mui::Window window{};

void GUI::Init()
{
    using namespace SettingsData;
    // auto llll = settings;

    // auto lol = __("Enabled").get();

    mui::fonts::Init();
    window.AddCategory("RageBot", "B")
        .AddSubCategory(
            "General",
            [](mui::SubCategory& sub) {
                sub.AddFeatureSet(
                       "Aim-bot",
                       [](mui::FeatureSet& fs) -> void {
                           fs.AddFeature(_("Enabled"),
                                         &settings->ragebot.general.aimbot.aim.Enabled,
                                         &settings->ragebot.general.aimbot.aim.key);
                           fs.AddFeature("Silent Aim", &settings->ragebot.general.aimbot.Silent);
                           fs.AddFeature("Prediction",
                                         &settings->ragebot.general.aimbot.Prediction);
                           fs.AddFeature("Humanizer", &settings->ragebot.general.aimbot.Humanizer);
                           fs.AddFeature("Humanizer Power",
                                         &settings->ragebot.general.aimbot.HumanizerAmount, 1, 10,
                                         "%d");
                           fs.AddFeature("Smooth Curve",
                                         &settings->ragebot.general.aimbot.SmoothMode,
                                         {AimbotSmooth::Linear, AimbotSmooth::SlowEnd},
                                         {"Linear", "SlowEnd"});
                           fs.AddFeature("Smoothing", &settings->ragebot.general.aimbot.Smooth, 0,
                                         50, "%d");
                           fs.AddFeature("FOV Circle", &settings->ragebot.general.aimbot.FOV);
                           fs.AddFeature("FOV Radius", &settings->ragebot.general.aimbot.FOVRadius,
                                         10, 180, "%d");
                       })
                    .AddFeatureSet(
                        "Magic",
                        [](mui::FeatureSet& fs) {
                            fs.AddFeature("Enabled", &settings->ragebot.general.magic.mag.Enabled,
                                          &settings->ragebot.general.magic.mag.key);
                            fs.AddFeature("Rapid Fire", &settings->ragebot.general.magic.RapidFire);
                            fs.AddFeature("Smart Hit Scan",
                                          &settings->ragebot.general.magic.SmartHitscan);
                            fs.AddFeature("Max Hitscan Points",
                                          &settings->ragebot.general.magic.NumberOfHitscanPoints,
                                          30, 400, "%d");
                        })
                    .AddFeatureSet(
                        "Targeting",
                        [](mui::FeatureSet& fs) {
                            fs.AddFeature("Players", &settings->ragebot.general.targeting.Players);
                            fs.AddFeature("Player Hitbox",
                                          &settings->ragebot.general.targeting.PlayerHitbox,
                                          {
                                              PlayerBones::head,
                                              PlayerBones::neck,
                                              PlayerBones::spine1,
                                              PlayerBones::penis,
                                          },
                                          {
                                              "Head",
                                              "Neck",
                                              "Spine",
                                              "Penis",
                                          });
                            fs.AddFeature("NPC", &settings->ragebot.general.targeting.NPC);
                            fs.AddFeature("NPC Hitbox",
                                          &settings->ragebot.general.targeting.NPCHitbox,
                                          {
                                              PlayerBones::head,
                                              PlayerBones::neck,
                                              PlayerBones::spine1,
                                              PlayerBones::penis,
                                          },
                                          {
                                              "Head",
                                              "Neck",
                                              "Spine",
                                              "Penis",
                                          });
                            fs.AddFeature("Friends", &settings->ragebot.general.targeting.Friends);
                            fs.AddFeature("Heli", &settings->ragebot.general.targeting.Heli);
                            fs.AddFeature("Traps", &settings->ragebot.general.targeting.Traps);
                            fs.AddFeature("Vis Check",
                                          &settings->ragebot.general.targeting.VisCheck);
                            fs.AddFeature("Target Lock",
                                          &settings->ragebot.general.targeting.TargetLock);
                        })
                    .AddFeatureSet("Projectile", [](mui::FeatureSet& fs) {
                        fs.AddFeature("Hit Override", &settings->ragebot.general.targeting.Players);
                        fs.AddFeature("Hit Override Hitbox",
                                      &settings->ragebot.general.projectile.PlayerHitOverride,
                                      {
                                          PlayerBones::head,
                                          PlayerBones::neck,
                                          PlayerBones::spine1,
                                          PlayerBones::penis,
                                      },
                                      {
                                          "Head",
                                          "Neck",
                                          "Spine",
                                          "Penis",
                                      });
                        fs.AddFeature("Bullet Teleport",
                                      &settings->ragebot.general.projectile.BulletTP);
                        fs.AddFeature("Pierce", &settings->ragebot.general.projectile.Pierce);
                        fs.AddFeature("Insta Hit", &settings->ragebot.general.projectile.InstaHit);
                        fs.AddFeature("Bullet Rain",
                                      &settings->ragebot.general.projectile.BulletRain);
                    });
            },
            true)
        .AddSubCategory("Anti-Aim", [](mui::SubCategory& sub) {
            sub.AddFeatureSet(
                   "General",
                   [](mui::FeatureSet& fs) {
                       fs.AddFeature("Enabled", &settings->ragebot.antiaim.general.Enabled);
                       fs.AddFeature("Anti-Knife", &settings->ragebot.antiaim.general.AntiKnife);
                       fs.AddFeature("Anti-Zeus", &settings->ragebot.antiaim.general.AntiZeus);
                       fs.AddFeature("Nigga color", &settings->ragebot.antiaim.general.TestColor1);
                       fs.AddFeature("Nigga color 2 Ex",
                                     &settings->ragebot.antiaim.general.TestColor2);
                       fs.AddFeature("Intigros testos", &settings->ragebot.antiaim.general.testInt,
                                     0, 50, (char*)u8"%d zidcoins");
                       fs.AddFeature("Numero uno", &settings->ragebot.antiaim.general.testInt2,
                                     -120, 300, "%d %%");
                   })
                .AddFeatureSet("Exploits", [](mui::FeatureSet& fs) {

                });
        });

    // window.AddCategory("Legit", "A");
    window.AddCategory("Visual", "C")
        .AddSubCategory(
            "General",
            [](mui::SubCategory& sub) {
                sub.AddFeatureSet("General", [](mui::FeatureSet& fs) {
                    fs.AddFeature("Enabled", &settings->visuals.general.Enabled);
                    fs.AddFeature("Sleepers", &settings->visuals.general.Sleepers);
                    fs.AddFeature("Team As Friends", &settings->visuals.general.TeamAsFriends);
                    fs.AddFeature("Force Skeleton Update",
                                  &settings->visuals.general.ForceSkeletonUpdate);
                    fs.AddFeature("Skeleton Distance", &settings->visuals.general.SkeletonDistance,
                                  50, 300, "%d meters");
                });
                // .AddFeatureSet("Misc.", [](mui::FeatureSet &fs) {
                //     fs.AddFeature("Sleepers", &settings.visuals.);
                //     fs.AddFeature("Teammates",
                //     &settings.visuals.misc.colTeammate);
                // });

                auto addPlayerOptions = [&](SettingsDataTypes::Player& player,
                                            std::string                name) -> void {
                    sub.AddFeatureSet(std::move(name), [&](mui::FeatureSet& fs) {
                        auto& p = player;

                        fs.AddFeature("Enabled", &p.Enabled);
                        fs.AddFeature("Box", &p.Box.Color, &p.Box.Enable);
                        fs.AddFeature("Name", &p.Name.Color, &p.Name.Enable);
                        fs.AddFeature("Skeleton", &p.Skeleton.Color, &p.Skeleton.Enable);
                        fs.AddFeature("Distance", &p.Dist.Color, &p.Dist.Enable);
                        fs.AddFeature("Active Item", &p.ActiveItem.Color, &p.ActiveItem.Enable);
                        fs.AddFeature("Wounded", &p.Wounded.Color, &p.Wounded.Enable);
                        fs.AddFeature("Sleeping", &p.Sleeping.Color, &p.Sleeping.Enable);
                        fs.AddFeature("TeamID", &p.TeamID.Color, &p.TeamID.Enable);
                        fs.AddFeature("Player Flags", &p.PlayerFlags.Color, &p.PlayerFlags.Enable);
                        fs.AddFeature("Hotbar", &p.Hotbar);
                        fs.AddFeature("Health", &p.Health);
                    });
                };

                addPlayerOptions(settings->visuals.general.friends, "Friends");
                addPlayerOptions(settings->visuals.general.enemies, "Enemies");
                addPlayerOptions(settings->visuals.general.npc, "NPC");
            })
        .AddSubCategory("Chams",
                        [](mui::SubCategory& sub) {
                            sub.AddFeatureSet("Local",
                                              [](mui::FeatureSet& fs) {
                                                  fs.AddFeature(
                                                      "Enabled",
                                                      &settings->ragebot.antiaim.general.Enabled);
                                              })
                                .AddFeatureSet("Friendly",
                                               [](mui::FeatureSet& fs) {

                                               })
                                .AddFeatureSet("Enemies", [](mui::FeatureSet& fs) {

                                });
                        })
        .AddSubCategory(
            "Collectibles",
            [](mui::SubCategory& sub) {
                sub.AddFeatureSet("General", [](mui::FeatureSet& fs) {
                    fs.AddFeature("Enabled", &settings->visuals.collectibles.general.Enabled);
                    fs.AddFeature("Fade", &settings->visuals.collectibles.general.Fade);
                    fs.AddFeature("Distance", &settings->visuals.collectibles.general.Distance, 50,
                                  300, "%d meters");
                    fs.AddFeature("AntiClutter",
                                  &settings->visuals.collectibles.general.AntiClutter);
                    fs.AddFeature("Show max",
                                  &settings->visuals.collectibles.general.MaxAnticlutterCount, 3,
                                  10, "%d");
                });
                sub.AddFeatureSet("Colors", [](mui::FeatureSet& fs) {
                    fs.AddFeature("Food", &settings->visuals.collectibles.colors.food);
                    fs.AddFeature("Mushrooms", &settings->visuals.collectibles.colors.mushroom);
                    fs.AddFeature("Pumpkin", &settings->visuals.collectibles.colors.pumpkin);
                    fs.AddFeature("Corn", &settings->visuals.collectibles.colors.corn);
                    fs.AddFeature("Potato", &settings->visuals.collectibles.colors.potato);
                    fs.AddFeature("Wood", &settings->visuals.collectibles.colors.wood);
                    fs.AddFeature("Stone", &settings->visuals.collectibles.colors.stone);
                    fs.AddFeature("Metal", &settings->visuals.collectibles.colors.metal);
                    fs.AddFeature("Sulfur", &settings->visuals.collectibles.colors.sulfur);
                    fs.AddFeature("Hemp", &settings->visuals.collectibles.colors.hemp);
                });
            })
        .AddSubCategory(
            "Radtown",
            [](mui::SubCategory& sub) {
                sub.AddFeatureSet("General", [](mui::FeatureSet& fs) {
                    fs.AddFeature("Enabled", &settings->visuals.radtown.general.Enabled);
                    fs.AddFeature("Fade", &settings->visuals.radtown.general.Fade);
                    fs.AddFeature("Distance", &settings->visuals.radtown.general.Distance, 50, 300,
                                  "%d meters");
                    fs.AddFeature("AntiClutter", &settings->visuals.radtown.general.AntiClutter);
                    fs.AddFeature("Show max",
                                  &settings->visuals.radtown.general.MaxAnticlutterCount, 3, 10,
                                  "%d");
                });
                sub.AddFeatureSet("Colors", [](mui::FeatureSet& fs) {
                    fs.AddFeature("Barrel", &settings->visuals.radtown.colors.barrels);
                    fs.AddFeature("Crate", &settings->visuals.radtown.colors.crates);
                    fs.AddFeature("Military Crate", &settings->visuals.radtown.colors.military);
                    fs.AddFeature("Heli CRate", &settings->visuals.radtown.colors.heli);
                    fs.AddFeature("Lootbox", &settings->visuals.radtown.colors.lootbox);
                    fs.AddFeature("Lootbox Elite", &settings->visuals.radtown.colors.lootboxElite);
                    fs.AddFeature("Toolbox", &settings->visuals.radtown.colors.toolbox);
                    fs.AddFeature("Foodbox", &settings->visuals.radtown.colors.foodbox);
                    fs.AddFeature("Other", &settings->visuals.radtown.colors.other);
                });
            })
        .AddSubCategory(
            "Ores",
            [](mui::SubCategory& sub) {
                sub.AddFeatureSet("General", [](mui::FeatureSet& fs) {
                    fs.AddFeature("Enabled", &settings->visuals.ores.general.Enabled);
                    fs.AddFeature("Fade", &settings->visuals.ores.general.Fade);
                    fs.AddFeature("Distance", &settings->visuals.ores.general.Distance, 50, 300,
                                  "%d meters");
                    fs.AddFeature("AntiClutter", &settings->visuals.ores.general.AntiClutter);
                    fs.AddFeature("Show max", &settings->visuals.ores.general.MaxAnticlutterCount,
                                  3, 10, "%d");
                });
                sub.AddFeatureSet("Colors", [](mui::FeatureSet& fs) {
                    fs.AddFeature("Stone", &settings->visuals.ores.colors.stone);
                    fs.AddFeature("Sulfur", &settings->visuals.ores.colors.sulfur);
                    fs.AddFeature("Metal", &settings->visuals.ores.colors.metal);
                });
            })
        .AddSubCategory(
            "Animals",
            [](mui::SubCategory& sub) {
                sub.AddFeatureSet("General", [](mui::FeatureSet& fs) {
                    fs.AddFeature("Enabled", &settings->visuals.animals.general.Enabled);
                    fs.AddFeature("Fade", &settings->visuals.animals.general.Fade);
                    fs.AddFeature("Distance", &settings->visuals.animals.general.Distance, 50, 300,
                                  "%d meters");
                });
                sub.AddFeatureSet("Colors", [](mui::FeatureSet& fs) {
                    fs.AddFeature("Bear", &settings->visuals.animals.colors.bear);
                    fs.AddFeature("Polar Bear", &settings->visuals.animals.colors.polarBear);
                    fs.AddFeature("Boar", &settings->visuals.animals.colors.boar);
                    fs.AddFeature("Chicken", &settings->visuals.animals.colors.chicken);
                    fs.AddFeature("Stag", &settings->visuals.animals.colors.stag);
                    fs.AddFeature("Wolf", &settings->visuals.animals.colors.wolf);
                    fs.AddFeature("Zombie", &settings->visuals.animals.colors.zombie);
                });
            })
        .AddSubCategory(
            "Vehicles",
            [](mui::SubCategory& sub) {
                sub.AddFeatureSet("General", [](mui::FeatureSet& fs) {
                    fs.AddFeature("Enabled", &settings->visuals.vehicles.general.Enabled);
                    fs.AddFeature("Fade", &settings->visuals.vehicles.general.PatrolHealth);
                    fs.AddFeature("Patrol Health", &settings->visuals.vehicles.general.Fade);
                    fs.AddFeature("Heli Distance", &settings->visuals.vehicles.general.HeliDistance,
                                  50, 1500, "%d meters");
                    fs.AddFeature("Boat Distance", &settings->visuals.vehicles.general.BoatDistance,
                                  50, 300, "%d meters");
                    fs.AddFeature("Patrol Distance",
                                  &settings->visuals.vehicles.general.PatrolDistance, 50, 300,
                                  "%d meters");
                    fs.AddFeature("Other Distance",
                                  &settings->visuals.vehicles.general.OtherDistance, 50, 300,
                                  "%d meters");
                });
                sub.AddFeatureSet("Colors", [](mui::FeatureSet& fs) {
                    fs.AddFeature("Mini", &settings->visuals.vehicles.colors.mini);
                    fs.AddFeature("Scrap Heli", &settings->visuals.vehicles.colors.scrapHeli);
                    fs.AddFeature("Boat", &settings->visuals.vehicles.colors.boat);
                    fs.AddFeature("RHIB", &settings->visuals.vehicles.colors.rhib);
                    fs.AddFeature("Horse", &settings->visuals.vehicles.colors.horse);
                    fs.AddFeature("Baloon", &settings->visuals.vehicles.colors.baloon);
                    fs.AddFeature("Patrol", &settings->visuals.vehicles.colors.patrol);
                    fs.AddFeature("Bradley", &settings->visuals.vehicles.colors.bradley);
                });
            })
        .AddSubCategory("Traps",
                        [](mui::SubCategory& sub) {

                        })
        .AddSubCategory("Raid", [](mui::SubCategory& sub) {

        });

    window.AddCategory("Player List", "D");
    window.AddCategory("Misc.", "E");
    window.AddCategory("User", "", true)
        .AddSubCategory("Configs", [](mui::SubCategory& sub) { sub.AddConfigSection(); })
        .AddSubCategory("User Info", [](mui::SubCategory& sub) {});
}

void GUI::Render()
{
    mui::Setup();
    window.Draw();
}
