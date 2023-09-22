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
    window.AddCategory(_("RageBot"), "B", false, true)
        .AddSubCategory(
            _("General"),
            [](mui::SubCategory& sub) {
                sub.AddFeatureSet(
                       _("Aim-bot"),
                       [](mui::FeatureSet& fs) -> void {
                           fs.AddFeature(_("Enabled"), &settings->ragebot.general.aimbot.aim.Enabled,
                                         &settings->ragebot.general.aimbot.aim.key);
                           fs.AddFeature(_("Silent Aim"), &settings->ragebot.general.aimbot.Silent);
                           fs.AddFeature(_("Prediction"), &settings->ragebot.general.aimbot.Prediction);
                           //    fs.AddFeature("Humanizer",
                           //    &settings->ragebot.general.aimbot.Humanizer);
                           //    fs.AddFeature("Humanizer Power",
                           //                  &settings->ragebot.general.aimbot.HumanizerAmount, 1,
                           //                  10,
                           //                  "%d");
                           fs.AddFeature(_("Smooth Curve"), &settings->ragebot.general.aimbot.SmoothMode,
                                         {AimbotSmooth::Linear, AimbotSmooth::SlowEnd}, {_("Linear"), _("SlowEnd")});
                           fs.AddFeature(_("Smoothing"), &settings->ragebot.general.aimbot.Smooth, 0, 50, "%d");
                           fs.AddFeature(_("FOV Circle"), &settings->ragebot.general.aimbot.FOV);
                           fs.AddFeature(_("FOV Radius"), &settings->ragebot.general.aimbot.FOVRadius, 10, 180, "%d");
                       })
                    .AddFeatureSet(
                        _("Deesync Nutz"),
                        [](mui::FeatureSet& fs) {
                            static bool lll = false;

                            fs.AddFeature(_("FIXED IN NEXT UPDATE"), &settings->ragebot.general.desync.shoot);
                            
                            // fs.AddFeature(_("Enabled"), &settings->ragebot.general.desync.shoot);
                            // fs.AddFeature(_("Rapid Fire"), &settings->ragebot.general.desync.RapidFire);
                            // fs.AddFeature(_("Smart Hit Scan"), &settings->ragebot.general.desync.SmartHitscan);
                            // fs.AddFeature(_("Max Hitscan Points"),
                            //               &settings->ragebot.general.desync.NumberOfHitscanPoints, 30, 400, "%d");
                        })
                    .AddFeatureSet(
                        _("Projectile"),
                        [](mui::FeatureSet& fs) {
                            fs.AddFeature(_("Hit Override"), &settings->ragebot.general.projectile.HitOverride);
                            fs.AddFeature(_("Hit Override Hitbox"),
                                          &settings->ragebot.general.projectile.PlayerHitOverride,
                                          {
                                              PlayerBones::eyeTranform,
                                              PlayerBones::neck,
                                              PlayerBones::spine1,
                                              PlayerBones::penis,
                                          },
                                          {
                                              _("Head"),
                                              _("Neck"),
                                              _("Spine"),
                                              _("Penis"),
                                          });
                            // fs.AddFeature(_("Bullet Teleport"), &settings->ragebot.general.projectile.BulletTP);
                            // fs.AddFeature(_("Pierce"), &settings->ragebot.general.projectile.Pierce);
                            // fs.AddFeature(_("Insta Hit"), &settings->ragebot.general.projectile.InstaHit);
                            // fs.AddFeature(_("Bullet Rain"), &settings->ragebot.general.projectile.BulletRain);
                        })
                    .AddFeatureSet(_("Targeting"),
                                   [](mui::FeatureSet& fs) {
                                       fs.AddFeature(_("Players"), &settings->ragebot.general.targeting.Players);
                                       fs.AddFeature(_("Player Hitbox"),
                                                     &settings->ragebot.general.targeting.PlayerHitbox,
                                                     {
                                                         PlayerBones::eyeTranform,
                                                         PlayerBones::neck,
                                                         PlayerBones::spine1,
                                                         PlayerBones::penis,
                                                     },
                                                     {
                                                         _("Head"),
                                                         _("Neck"),
                                                         _("Spine"),
                                                         _("Penis"),
                                                     });
                                       fs.AddFeature(_("NPC"), &settings->ragebot.general.targeting.NPC);
                                       fs.AddFeature(_("NPC Hitbox"), &settings->ragebot.general.targeting.NPCHitbox,
                                                     {
                                                         PlayerBones::eyeTranform,
                                                         PlayerBones::neck,
                                                         PlayerBones::spine1,
                                                         PlayerBones::penis,
                                                     },
                                                     {
                                                         _("Head"),
                                                         _("Neck"),
                                                         _("Spine"),
                                                         _("Penis"),
                                                     });
                                       fs.AddFeature(_("Friends"), &settings->ragebot.general.targeting.Friends);
                                       fs.AddFeature(_("Heli"), &settings->ragebot.general.targeting.Heli);
                                       fs.AddFeature(_("Traps"), &settings->ragebot.general.targeting.Traps);
                                       fs.AddFeature(_("Vis Check"), &settings->ragebot.general.targeting.VisCheck);
                                       fs.AddFeature(_("Target Lock"), &settings->ragebot.general.targeting.TargetLock);
                                       //    fs.AddFeature<float>("adj x",
                                       //    &settings->ragebot.general.targeting.headAdjustmentX,
                                       //                 -20.f, 20.f, "%f");
                                       //    fs.AddFeature<float>("adj y",
                                       //    &settings->ragebot.general.targeting.headAdjustmentY,
                                       //                 -20.f, 20.f, "%f");
                                       //    fs.AddFeature<float>("adj z",
                                       //    &settings->ragebot.general.targeting.headAdjustmentZ,
                                       //                 -20.f, 20.f, "%f");
                                   })
                    .AddFeatureSet(_("Weapon"), [](mui::FeatureSet& fs) {
                        fs.AddFeature(_("No Spread"), &settings->ragebot.general.weapon.NoSpread);
                        fs.AddFeature(_("Automatic"), &settings->ragebot.general.weapon.Automatic);
                        fs.AddFeature(_("No Sway"), &settings->ragebot.general.weapon.NoSway);
                        fs.AddFeature(_("No Recoil"), &settings->ragebot.general.weapon.NoRecoil);
                        fs.AddFeature(_("Instant Eoka"), &settings->ragebot.general.weapon.InstantEoka);
                        fs.AddFeature(_("Instant Compound Bow"), &settings->ragebot.general.weapon.InstantCompound);
                        fs.AddFeature(_("No Restriction"), &settings->ragebot.general.weapon.NoRestrictions);
                        fs.AddFeature(_("Force Weild"), &settings->ragebot.general.weapon.ForceWeild);
                        // fs.AddFeature(_("Recoil Humanizer"),
                        // &settings->ragebot.general.projectile.BulletRain);
                    });
            },
            true)
        .AddSubCategory(_("Anti-Aim"), [](mui::SubCategory& sub) {
            sub.AddFeatureSet(_("General"), [](mui::FeatureSet& fs) {
                fs.AddFeature(_("IN NEXT UPDATE"), &settings->ragebot.antiaim.general.Enabled);
                //    fs.AddFeature(_("Anti-Knife"), &settings->ragebot.antiaim.general.AntiKnife);
                //    fs.AddFeature(_("Anti-Zeus"), &settings->ragebot.antiaim.general.AntiZeus);
                //    fs.AddFeature(_("Nigga color"),
                //                  &settings->ragebot.antiaim.general.TestColor1);
                //    fs.AddFeature(_("Nigga color 2 Ex"),
                //                  &settings->ragebot.antiaim.general.TestColor2);
                //    fs.AddFeature(_("Intigros testos"),
                //                  &settings->ragebot.antiaim.general.testInt, 0, 50,
                //                  "%d zidcoins");
                //    fs.AddFeature(_("Numero uno"), &settings->ragebot.antiaim.general.testInt2,
                //                  -120, 300, "%d %%");
            });
            // .AddFeatureSet(_("Exploits"), [](mui::FeatureSet& fs) {

            // });
        });

    // window.AddCategory("Legit", "A");
    window.AddCategory(_("Visual"), "C")
        .AddSubCategory(
            _("General"),
            [](mui::SubCategory& sub) {
                sub.AddFeatureSet(_("General"),
                                  [](mui::FeatureSet& fs) {
                                      fs.AddFeature(_("Enabled"), &settings->visuals.general.Enabled);
                                      fs.AddFeature(_("Sleepers"), &settings->visuals.general.Sleepers);
                                      fs.AddFeature(_("Show HotBar"), &settings->visuals.general.ShowHotBar);
                                      fs.AddFeature(_("Team As Friends"), &settings->visuals.general.TeamAsFriends);
                                      fs.AddFeature(_("Force Skeleton Update"),
                                                    &settings->visuals.general.ForceSkeletonUpdate);
                                      fs.AddFeature(_("Skeleton Distance"), &settings->visuals.general.SkeletonDistance,
                                                    50, 300, "%d meters");
                                  })
                    .AddFeatureSet(_("Indicators"), [](mui::FeatureSet& fs) {
                        fs.AddFeature(_("Enabled"), &settings->visuals.general.indicators.Enabled);
                        fs.AddFeature(_("Radar"), &settings->visuals.general.indicators.Radar);
                        fs.AddFeature(_("Radar Size"), &settings->visuals.general.indicators.RadarSize, 50, 150,
                                      "%d %%");
                        fs.AddFeature(_("Radar Enemies"), &settings->visuals.general.indicators.RadarEnemies);
                        fs.AddFeature(_("Radar Friends"), &settings->visuals.general.indicators.RadarFriends);
                        fs.AddFeature(_("Radar Sleepers"), &settings->visuals.general.indicators.RadarSleepers);
                        fs.AddFeature(_("Radar Wounded"), &settings->visuals.general.indicators.RadarWounded);
                        fs.AddFeature(_("Radar NPC"), &settings->visuals.general.indicators.RadarNPC);
                        fs.AddFeature(_("Prediction"), &settings->visuals.general.indicators.Prediction);
                        fs.AddFeature(_("Launcher Prediction "),
                                      &settings->visuals.general.indicators.PredictionLauncher);
                        fs.AddFeature(_("Launcher Prediction Line"),
                                      &settings->visuals.general.indicators.PredictionLauncherLine);
                        fs.AddFeature(_("Crosshair"), &settings->visuals.general.indicators.CrossHair);
                    });
                // .AddFeatureSet("Misc.", [](mui::FeatureSet &fs) {
                //     fs.AddFeature("Sleepers", &settings.visuals.);
                //     fs.AddFeature("Teammates",
                //     &settings.visuals.misc.colTeammate);
                // });

                auto addPlayerOptions = [&](SettingsDataTypes::Player& player, std::string name) -> void {
                    sub.AddFeatureSet(std::move(name), [&](mui::FeatureSet& fs) {
                        auto& p = player;

                        fs.AddFeature(_("Enabled"), &p.Enabled);
                        fs.AddFeature(_("Box"), &p.Box.Color, &p.Box.Enable);
                        fs.AddFeature(_("Name"), &p.Name.Color, &p.Name.Enable);
                        fs.AddFeature(_("Skeleton"), &p.Skeleton.Color, &p.Skeleton.Enable);
                        fs.AddFeature(_("Distance"), &p.Dist.Color, &p.Dist.Enable);
                        fs.AddFeature(_("Active Item"), &p.ActiveItem.Color, &p.ActiveItem.Enable);
                        fs.AddFeature(_("Wounded"), &p.Wounded.Color, &p.Wounded.Enable);
                        fs.AddFeature(_("Sleeping"), &p.Sleeping.Color, &p.Sleeping.Enable);
                        fs.AddFeature(_("TeamID"), &p.TeamID.Color, &p.TeamID.Enable);
                        fs.AddFeature(_("Player Flags"), &p.PlayerFlags.Color, &p.PlayerFlags.Enable);
                        fs.AddFeature(_("Hotbar"), &p.Hotbar);
                        fs.AddFeature(_("Health"), &p.Health);
                    });
                };

                addPlayerOptions(settings->visuals.general.friends, _("Friends"));
                addPlayerOptions(settings->visuals.general.enemies, _("Enemies"));
                addPlayerOptions(settings->visuals.general.npc, _("NPC"));
            })
        .AddSubCategory(_("Chams"),
                        [](mui::SubCategory& sub) {
                            sub.AddFeatureSet(_("Local"),
                                              [](mui::FeatureSet& fs) {
                                                  fs.AddFeature(_("Enabled"),
                                                                &settings->ragebot.antiaim.general.Enabled);
                                              })
                                .AddFeatureSet(_("Friendly"),
                                               [](mui::FeatureSet& fs) {

                                               })
                                .AddFeatureSet(_("Enemies"), [](mui::FeatureSet& fs) {

                                });
                        })
        .AddSubCategory(_("Collectibles"),
                        [](mui::SubCategory& sub) {
                            sub.AddFeatureSet(_("General"), [](mui::FeatureSet& fs) {
                                fs.AddFeature(_("Enabled"), &settings->visuals.collectibles.general.Enabled);
                                fs.AddFeature(_("Fade"), &settings->visuals.collectibles.general.Fade);
                                fs.AddFeature(_("Distance"), &settings->visuals.collectibles.general.Distance, 50, 350,
                                              "%d meters");
                                fs.AddFeature(_("AntiClutter"), &settings->visuals.collectibles.general.AntiClutter);
                                fs.AddFeature(_("Show max"),
                                              &settings->visuals.collectibles.general.MaxAnticlutterCount, 3, 10, "%d");
                            });
                            sub.AddFeatureSet(_("Colors"), [](mui::FeatureSet& fs) {
                                fs.AddFeature(_("Food"), &settings->visuals.collectibles.colors.food);
                                fs.AddFeature(_("Mushrooms"), &settings->visuals.collectibles.colors.mushroom);
                                fs.AddFeature(_("Pumpkin"), &settings->visuals.collectibles.colors.pumpkin);
                                fs.AddFeature(_("Corn"), &settings->visuals.collectibles.colors.corn);
                                fs.AddFeature(_("Potato"), &settings->visuals.collectibles.colors.potato);
                                fs.AddFeature(_("Wood"), &settings->visuals.collectibles.colors.wood);
                                fs.AddFeature(_("Stone"), &settings->visuals.collectibles.colors.stone);
                                fs.AddFeature(_("Metal"), &settings->visuals.collectibles.colors.metal);
                                fs.AddFeature(_("Sulfur"), &settings->visuals.collectibles.colors.sulfur);
                                fs.AddFeature(_("Hemp"), &settings->visuals.collectibles.colors.hemp);
                                fs.AddFeature(_("Berry White"), &settings->visuals.collectibles.colors.berryWhite);
                                fs.AddFeature(_("Berry Red"), &settings->visuals.collectibles.colors.berryRed);
                                fs.AddFeature(_("Berry Blue"), &settings->visuals.collectibles.colors.berryBlue);
                                fs.AddFeature(_("Berry Black"), &settings->visuals.collectibles.colors.berryBlack);
                                fs.AddFeature(_("Berry Green"), &settings->visuals.collectibles.colors.berryGreen);
                                fs.AddFeature(_("Berry Yellow"), &settings->visuals.collectibles.colors.berryYellow);
                            });
                        })
        .AddSubCategory(
            _("Radtown"),
            [](mui::SubCategory& sub) {
                sub.AddFeatureSet(_("General"), [](mui::FeatureSet& fs) {
                    fs.AddFeature(_("Enabled"), &settings->visuals.radtown.general.Enabled);
                    fs.AddFeature(_("Fade"), &settings->visuals.radtown.general.Fade);
                    fs.AddFeature(_("Distance"), &settings->visuals.radtown.general.Distance, 50, 350, "%d meters");
                    fs.AddFeature(_("AntiClutter"), &settings->visuals.radtown.general.AntiClutter);
                    fs.AddFeature(_("Show max"), &settings->visuals.radtown.general.MaxAnticlutterCount, 3, 10, "%d");
                });
                sub.AddFeatureSet(_("Colors"), [](mui::FeatureSet& fs) {
                    fs.AddFeature(_("Barrel"), &settings->visuals.radtown.colors.barrels);
                    fs.AddFeature(_("Crate"), &settings->visuals.radtown.colors.crates);
                    fs.AddFeature(_("Military Crate"), &settings->visuals.radtown.colors.military);
                    fs.AddFeature(_("Heli Crate"), &settings->visuals.radtown.colors.heli);
                    fs.AddFeature(_("Elite Crate"), &settings->visuals.radtown.colors.elite);
                    fs.AddFeature(_("Toolbox"), &settings->visuals.radtown.colors.toolbox);
                    fs.AddFeature(_("Foodbox"), &settings->visuals.radtown.colors.foodbox);
                    fs.AddFeature(_("Airdrop"), &settings->visuals.radtown.colors.airdrop);
                });
            })
        .AddSubCategory(
            _("Ores"),
            [](mui::SubCategory& sub) {
                sub.AddFeatureSet(_("General"), [](mui::FeatureSet& fs) {
                    fs.AddFeature(_("Enabled"), &settings->visuals.ores.general.Enabled);
                    fs.AddFeature(_("Fade"), &settings->visuals.ores.general.Fade);
                    fs.AddFeature(_("Distance"), &settings->visuals.ores.general.Distance, 50, 300, "%d meters");
                    fs.AddFeature(_("AntiClutter"), &settings->visuals.ores.general.AntiClutter);
                    fs.AddFeature(_("Show max"), &settings->visuals.ores.general.MaxAnticlutterCount, 3, 10, "%d");
                    fs.AddFeature(_("Line to closest"), &settings->visuals.ores.general.LineToClosest);
                });
                sub.AddFeatureSet(_("Colors"), [](mui::FeatureSet& fs) {
                    fs.AddFeature(_("Stone"), &settings->visuals.ores.colors.stone);
                    fs.AddFeature(_("Sulfur"), &settings->visuals.ores.colors.sulfur);
                    fs.AddFeature(_("Metal"), &settings->visuals.ores.colors.metal);
                    fs.AddFeature(_("Line"), &settings->visuals.ores.colors.line);
                });
            })
        .AddSubCategory(
            _("Items"),
            [](mui::SubCategory& sub) {
                sub.AddFeatureSet(_("Dropped Items"), [](mui::FeatureSet& fs) {
                    fs.AddFeature(_("Weapons"), &settings->visuals.item.general.weapons);
                    fs.AddFeature(_("Other"), &settings->visuals.item.general.other);
                    fs.AddFeature(_("Distance"), &settings->visuals.item.general.Distance, 50, 350, "%d meters");
                });
                sub.AddFeatureSet(_("Backpacks"), [](mui::FeatureSet& fs) {
                    fs.AddFeature(_("Enabled"), &settings->visuals.item.backpacks.color);
                    fs.AddFeature(_("Distance"), &settings->visuals.item.backpacks.Distance, 50, 350, "%d meters");
                });
                sub.AddFeatureSet(_("Corpse"), [](mui::FeatureSet& fs) {
                    fs.AddFeature(_("Enabled"), &settings->visuals.item.corpses.option);
                    fs.AddFeature(_("Name"), &settings->visuals.item.corpses.Name);
                    fs.AddFeature(_("Distance"), &settings->visuals.item.corpses.Distance, 50, 350, "%d meters");
                });
                sub.AddFeatureSet(_("Stash"), [](mui::FeatureSet& fs) {
                    fs.AddFeature(_("Enabled"), &settings->visuals.item.stashes.option);
                    fs.AddFeature(_("Hide Open"), &settings->visuals.item.stashes.HideOpenStashes);
                    fs.AddFeature(_("Distance"), &settings->visuals.item.stashes.Distance, 50, 350, "%d meters");
                });
            })
        .AddSubCategory(_("Animals"),
                        [](mui::SubCategory& sub) {
                            sub.AddFeatureSet(_("General"), [](mui::FeatureSet& fs) {
                                fs.AddFeature(_("Enabled"), &settings->visuals.animals.general.Enabled);
                                fs.AddFeature(_("Fade"), &settings->visuals.animals.general.Fade);
                                fs.AddFeature(_("Distance"), &settings->visuals.animals.general.Distance, 50, 300,
                                              "%d meters");
                            });
                            sub.AddFeatureSet(_("Colors"), [](mui::FeatureSet& fs) {
                                fs.AddFeature(_("Bear"), &settings->visuals.animals.colors.bear);
                                fs.AddFeature(_("Polar Bear"), &settings->visuals.animals.colors.polarBear);
                                fs.AddFeature(_("Boar"), &settings->visuals.animals.colors.boar);
                                fs.AddFeature(_("Chicken"), &settings->visuals.animals.colors.chicken);
                                fs.AddFeature(_("Stag"), &settings->visuals.animals.colors.stag);
                                fs.AddFeature(_("Wolf"), &settings->visuals.animals.colors.wolf);
                                fs.AddFeature(_("Zombie"), &settings->visuals.animals.colors.zombie);
                            });
                        })
        .AddSubCategory(_("Vehicles"),
                        [](mui::SubCategory& sub) {
                            sub.AddFeatureSet(_("General"), [](mui::FeatureSet& fs) {
                                fs.AddFeature(_("Enabled"), &settings->visuals.vehicles.general.Enabled);
                                fs.AddFeature(_("Fade"), &settings->visuals.vehicles.general.PatrolHealth);
                                fs.AddFeature(_("Patrol Health"), &settings->visuals.vehicles.general.Fade);
                                fs.AddFeature(_("Heli Distance"), &settings->visuals.vehicles.general.HeliDistance, 50,
                                              2000, "%d meters");
                                fs.AddFeature(_("Boat Distance"), &settings->visuals.vehicles.general.BoatDistance, 50,
                                              1500, "%d meters");
                                fs.AddFeature(_("Patrol Distance"), &settings->visuals.vehicles.general.PatrolDistance,
                                              50, 4000, "%d meters");
                                fs.AddFeature(_("Other Distance"), &settings->visuals.vehicles.general.OtherDistance,
                                              50, 1500, "%d meters");
                            });
                            sub.AddFeatureSet(_("Colors Ridable"), [](mui::FeatureSet& fs) {
                                fs.AddFeature(_("Mini"), &settings->visuals.vehicles.colors.mini);
                                fs.AddFeature(_("Scrap Heli"), &settings->visuals.vehicles.colors.scrapHeli);
                                fs.AddFeature(_("Boat"), &settings->visuals.vehicles.colors.boat);
                                fs.AddFeature(_("RHIB"), &settings->visuals.vehicles.colors.rhib);
                                fs.AddFeature(_("TugBoat"), &settings->visuals.vehicles.colors.tugboat);
                                fs.AddFeature(_("Submarine Solo"), &settings->visuals.vehicles.colors.submarineSolo);
                                fs.AddFeature(_("Submarine Duo"), &settings->visuals.vehicles.colors.submarineDuo);
                                fs.AddFeature(_("Horse"), &settings->visuals.vehicles.colors.horse);
                                fs.AddFeature(_("Baloon"), &settings->visuals.vehicles.colors.baloon);
                            });
                            sub.AddFeatureSet(_("Colors Patrol"), [](mui::FeatureSet& fs) {
                                fs.AddFeature(_("Patrol"), &settings->visuals.vehicles.colors.patrol);
                                fs.AddFeature(_("Bradley"), &settings->visuals.vehicles.colors.bradley);
                                fs.AddFeature(_("Chinook"), &settings->visuals.vehicles.colors.chinook);
                            });
                        })
        .AddSubCategory(
            _("Traps"),
            [](mui::SubCategory& sub) {
                sub.AddFeatureSet(_("General"), [](mui::FeatureSet& fs) {
                    fs.AddFeature(_("Enabled"), &settings->visuals.traps.general.Enabled);
                    fs.AddFeature(_("Distance"), &settings->visuals.traps.general.Distance, 50, 350, "%d meters");
                });
                sub.AddFeatureSet(_("Colors"), [](mui::FeatureSet& fs) {
                    fs.AddFeature(_("Auto Turret"), &settings->visuals.traps.colors.autoTurret);
                    fs.AddFeature(_("Auto Turret Authed"), &settings->visuals.traps.colors.autoTurretAuthed);
                    fs.AddFeature(_("SAM Site"), &settings->visuals.traps.colors.samSite);
                    fs.AddFeature(_("Shotgun Trap"), &settings->visuals.traps.colors.shotgunTrap);
                    fs.AddFeature(_("Flame Turret"), &settings->visuals.traps.colors.flameTurret);
                    fs.AddFeature(_("Landmine"), &settings->visuals.traps.colors.landmine);
                    fs.AddFeature(_("Bear Trap"), &settings->visuals.traps.colors.bearTrap);
                });
            })
        .AddSubCategory(_("Raid"), [](mui::SubCategory& sub) {
            sub.AddFeatureSet(_("General"), [](mui::FeatureSet& fs) {
                fs.AddFeature(_("Enabled"), &settings->visuals.raid.Enabled);
                fs.AddFeature(_("C4"), &settings->visuals.raid.C4);
                fs.AddFeature(_("Satchel"), &settings->visuals.raid.Satchel);
                fs.AddFeature(_("Rocket"), &settings->visuals.raid.Rocket);
                fs.AddFeature(_("Rocket Incendiary"), &settings->visuals.raid.RocketIncendiary);
                fs.AddFeature(_("Explosive Ammo"), &settings->visuals.raid.ExplosiveAmmo);
                fs.AddFeature(_("Grenades"), &settings->visuals.raid.Grenades);
                fs.AddFeature(_("Show Time When Started"), &settings->visuals.raid.ShowWhenStarted);
                fs.AddFeature(_("Show Time Since Last Explosion"), &settings->visuals.raid.ShowLastExplosion);

                fs.AddFeature(_("Group by distance"), &settings->visuals.raid.GroupByDistance, 2, 20, "%d meters");
                fs.AddFeature(_("Max Distance Render"), &settings->visuals.raid.Distance, 50, 1500, "%d meters");
                fs.AddFeature(_("Max Show Time"), &settings->visuals.raid.MaxShowTime, 2, 60, "%d minutes");
            });
        });

    window.AddCategory(_("Player List"), "D");
    window.AddCategory(_("Misc."), "E").AddSubCategory(_("General"), [](mui::SubCategory& sub) {
        sub.AddFeatureSet(_("Movement"), [](mui::FeatureSet& fs) {
            fs.AddFeature(_("No Fall Damage"), &settings->misc.movement.NoFallDamage);
            fs.AddFeature(_("Spider Man"), &settings->misc.movement.SpiderMan);
            fs.AddFeature(_("Infinite Jump"), &settings->misc.movement.InfiniteJump);
            fs.AddFeature(_("Jesus"), settings->misc.movement.Jesus);
            fs.AddFeature(_("Omnisprint"), &settings->misc.movement.OmniSprint);
            fs.AddFeature(_("Silent Walk"), &settings->misc.movement.SilentWalk);
            fs.AddFeature(_("No Tree Collision"), settings->misc.movement.TreeCollision);
            fs.AddFeature(_("No Player Collision"), settings->misc.movement.PlayerCollision);
            fs.AddFeature(_("Phase"), &settings->misc.movement.Phase.Enabled, &settings->misc.movement.Phase.key);
        });

        sub.AddFeatureSet(_("Flyhack"), [](mui::FeatureSet& fs) {
            fs.AddFeature(_("Enabled"), &settings->misc.flyhack.Flyhack);
            fs.AddFeature(_("Forward"), &settings->misc.flyhack.FlyhackForward);
            fs.AddFeature(_("Back"), &settings->misc.flyhack.FlyhackBack);
            fs.AddFeature(_("Left"), &settings->misc.flyhack.FlyhackLeft);
            fs.AddFeature(_("Right"), &settings->misc.flyhack.FlyhackRight);
            fs.AddFeature(_("Up"), &settings->misc.flyhack.FlyhackUp);
            fs.AddFeature(_("Slow"), &settings->misc.flyhack.FlyhackSlow);
            fs.AddFeature(_("Boost"), &settings->misc.flyhack.FlyhackBoost);
            fs.AddFeature(_("Boost Speed"), &settings->misc.flyhack.FlyHackBoostSpeed, 1, 50, "%d");
            fs.AddFeature(_("Prevent Fly Kick"), &settings->misc.flyhack.AntiFlyKick);
            fs.AddFeature(_("Prevent Ban"), &settings->misc.flyhack.PreventBan);
            fs.AddFeature(_("Wall Phase"), settings->misc.flyhack.WallPhase);
        });

        sub.AddFeatureSet(_("Visibility"), [](mui::FeatureSet& fs) {
            fs.AddFeature(_("No View Model Sway"), &settings->misc.visibility.NoViewModelSway);
            fs.AddFeature(_("Hide Attire"), &settings->misc.visibility.HideAttireOverlays);
            fs.AddFeature(_("Interactive Debug Cam"), &settings->misc.visibility.InteractiveDebugCam);

            fs.AddFeature(_("Force FOV"), &settings->misc.visibility.ForceFOV);
            fs.AddFeature(_("FOV"), &settings->misc.visibility.FOV, 5, 140, "%d");

            fs.AddFeature(_("Bright Night"), &settings->misc.visibility.BrightNight);
            fs.AddFeature(_("Bright Night Intensity"), &settings->misc.visibility.BrightNightIntensity, 0, 100,
                          "%d %%");

            fs.AddFeature(_("Bright Cave"), &settings->misc.visibility.BrightCave);
            fs.AddFeature(_("Bright Cave Intesity"), &settings->misc.visibility.BrightCaveIntensity, 0, 100, "%d %%");

            fs.AddFeature(_("Zoom"), &settings->misc.visibility.Zoom.Enabled, &settings->misc.visibility.Zoom.key);
            fs.AddFeature(_("Zoom FOV"), &settings->misc.visibility.FOVZoom, 0, 100, "%d %%");
            fs.AddFeature(_("Giraffe"), &settings->misc.visibility.Giraffe.Enabled,
                          &settings->misc.visibility.Giraffe.key);
            fs.AddFeature(_("Gireaffe Offset"), &settings->misc.visibility.GiraffeOffset, 0, 100, "%d %%");
        });

        sub.AddFeatureSet(_("Other"), [](mui::FeatureSet& fs) {
            fs.AddFeature(_("Instant Revieve"), &settings->misc.other.InstantRevive);
            fs.AddFeature(_("Instant Heal"), &settings->misc.other.InstantHeal);
            fs.AddFeature(_("Instant Loot"), &settings->misc.other.InstantLoot);
            fs.AddFeature(_("Instant Suicide"), &settings->misc.other.InstantSuicide);
            fs.AddFeature(_("Auto Collect"), &settings->misc.other.AutoCollect);
            fs.AddFeature(_("Silent Farm"), &settings->misc.other.SilentFarm);
            fs.AddFeature(_("Silent Melee"), &settings->misc.other.SilentMelee);
            fs.AddFeature(_("Admin Flag"), settings->misc.other.AdminFlag);
        });
    });
    window.AddCategory(_("User"), "", true)
        .AddSubCategory(_("Configs"), [](mui::SubCategory& sub) { sub.AddConfigSection(); })
        .AddSubCategory(_("User Info"), [](mui::SubCategory& sub) {});
}

void GUI::Render()
{
    mui::Setup();
    window.Draw();
}
