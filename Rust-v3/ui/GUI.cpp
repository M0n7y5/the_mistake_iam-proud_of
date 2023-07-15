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
            [](mui::SubCategory &sub) {
                sub.AddFeatureSet(
                       "Aim-bot",
                       [](mui::FeatureSet &fs) -> void {
                           fs.AddFeature(_("Enabled"), &settings->ragebot.general.aimbot.aim.Enabled,
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
                           fs.AddFeature("FOV", &settings->ragebot.general.aimbot.FOV, 60, 150,
                                         "%d");
                       })
                    .AddFeatureSet(
                        "Magic",
                        [](mui::FeatureSet &fs) {
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
                        [](mui::FeatureSet &fs) {
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
                    .AddFeatureSet("Projectile", [](mui::FeatureSet &fs) {
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
        .AddSubCategory("Anti-Aim", [](mui::SubCategory &sub) {
            sub.AddFeatureSet(
                   "General",
                   [](mui::FeatureSet &fs) {
                       fs.AddFeature("Enabled", &settings->ragebot.antiaim.general.Enabled);
                       fs.AddFeature("Anti-Knife", &settings->ragebot.antiaim.general.AntiKnife);
                       fs.AddFeature("Anti-Zeus", &settings->ragebot.antiaim.general.AntiZeus);
                       fs.AddFeature("Nigga color", &settings->ragebot.antiaim.general.TestColor1);
                       fs.AddFeature("Nigga color 2 Ex",
                                     &settings->ragebot.antiaim.general.TestColor2);
                       fs.AddFeature("Intigros testos", &settings->ragebot.antiaim.general.testInt,
                                     0, 50, (char *)u8"%d zidcoins");
                       fs.AddFeature("Numero uno", &settings->ragebot.antiaim.general.testInt2,
                                     -120, 300, "%d %%");
                   })
                .AddFeatureSet("Exploits", [](mui::FeatureSet &fs) {

                });
        });

    window.AddCategory("Legit", "A");
    window.AddCategory("Visual", "C")
        .AddSubCategory(
            "General",
            [](mui::SubCategory &sub) {
                sub.AddFeatureSet("General", [](mui::FeatureSet &fs) {
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

                auto addPlayerOptions = [&](Settings::Visuals::Player &player,
                                            std::string                name) -> void {
                    sub.AddFeatureSet(std::move(name), [&](mui::FeatureSet &fs) {
                        auto &p = player;

                        fs.AddFeature("Enabled", &p.Enabled);
                        fs.AddFeature("Box", &p.Box.Color, &p.Box.Enable);
                        fs.AddFeature("Name", &p.Name.Color, &p.Name.Enable);
                        fs.AddFeature("Skeleton", &p.Skeleton.Color, &p.Skeleton.Enable);
                        fs.AddFeature("Distance", &p.Dist.Color, &p.Dist.Enable);
                        fs.AddFeature("Active Item", &p.ActiveItem.Color, &p.ActiveItem.Enable);
                        fs.AddFeature("Wounded", &p.Wounded.Color, &p.Wounded.Enable);
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
                        [](mui::SubCategory &sub) {
                            sub.AddFeatureSet("Local",
                                              [](mui::FeatureSet &fs) {
                                                  fs.AddFeature(
                                                      "Enabled",
                                                      &settings->ragebot.antiaim.general.Enabled);
                                              })
                                .AddFeatureSet("Friendly",
                                               [](mui::FeatureSet &fs) {

                                               })
                                .AddFeatureSet("Enemies", [](mui::FeatureSet &fs) {

                                });
                        })
        .AddSubCategory("Collectibles",
                        [](mui::SubCategory &sub) {

                        })
        .AddSubCategory("Radtown",
                        [](mui::SubCategory &sub) {

                        })
        .AddSubCategory("Ores",
                        [](mui::SubCategory &sub) {

                        })
        .AddSubCategory("Animals",
                        [](mui::SubCategory &sub) {

                        })
        .AddSubCategory("Vehicles",
                        [](mui::SubCategory &sub) {

                        })
        .AddSubCategory("Traps",
                        [](mui::SubCategory &sub) {

                        })
        .AddSubCategory("Raid", [](mui::SubCategory &sub) {

        });

    window.AddCategory("Player List", "D");
    window.AddCategory("Misc.", "E");
    window.AddCategory("User", "", true)
        .AddSubCategory("Configs", [](mui::SubCategory &sub) { sub.AddConfigSection(); })
        .AddSubCategory("User Info", [](mui::SubCategory &sub) {});
}

void GUI::Render()
{
    mui::Setup();
    window.Draw();
}
