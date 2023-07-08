#include "GUI.h"
#include "mui.h"
#include <functional> // std::function
#include "../SDK/settings.h"

mui::Window window {};

void GUI::Init()
{
    mui::fonts::Init();

    window.AddCategory("RageBot", "B")
        .AddSubCategory("General",
            [](mui::SubCategory& sub)
            {
                sub.AddFeatureSet("Aim-bot",
                       [](mui::FeatureSet& fs) -> void
                       {
                           fs.AddFeature("Enabled", &settings.ragebot.general.aimbot.Enabled);
                           fs.AddFeature("Roll Resolver", &settings.ragebot.general.aimbot.RollResolver);
                           fs.AddFeature("Silent Aim", &settings.ragebot.general.aimbot.SilentAim);
                       })
                    .AddFeatureSet("Exploits",
                        [](mui::FeatureSet& fs)
                        {
                            fs.AddFeature("DoubleTap", &settings.ragebot.general.exploits.DoubleTap);
                            fs.AddFeature("HideShots", &settings.ragebot.general.exploits.HideShots);
                        })
                    .AddFeatureSet("Aim-bot",
                        [](mui::FeatureSet& fs)
                        {
                            fs.AddFeature("Enabled", &settings.ragebot.general.aimbot.Enabled);
                            fs.AddFeature("Roll Resolver", &settings.ragebot.general.aimbot.RollResolver);
                            fs.AddFeature("Silent Aim", &settings.ragebot.general.aimbot.SilentAim);
                        })
                    .AddFeatureSet("Aim-bot",
                        [](mui::FeatureSet& fs)
                        {
                            fs.AddFeature("Enabled", &settings.ragebot.general.aimbot.Enabled);
                            fs.AddFeature("Roll Resolver", &settings.ragebot.general.aimbot.RollResolver);
                            fs.AddFeature("Silent Aim", &settings.ragebot.general.aimbot.SilentAim);
                        })
                    .AddFeatureSet("Aim-bot",
                        [](mui::FeatureSet& fs)
                        {
                            fs.AddFeature("Enabled", &settings.ragebot.general.aimbot.Enabled);
                            fs.AddFeature("Roll Resolver", &settings.ragebot.general.aimbot.RollResolver);
                            fs.AddFeature("Silent Aim", &settings.ragebot.general.aimbot.SilentAim);
                        })
                    .AddFeatureSet("Aim-bot",
                        [](mui::FeatureSet& fs)
                        {
                            fs.AddFeature("Enabled", &settings.ragebot.general.aimbot.Enabled);
                            fs.AddFeature("Roll Resolver", &settings.ragebot.general.aimbot.RollResolver);
                            fs.AddFeature("Silent Aim", &settings.ragebot.general.aimbot.SilentAim);
                        })
                    .AddFeatureSet("Aim-bot",
                        [](mui::FeatureSet& fs)
                        {
                            fs.AddFeature("Enabled", &settings.ragebot.general.aimbot.Enabled);
                            fs.AddFeature("Roll Resolver", &settings.ragebot.general.aimbot.RollResolver);
                            fs.AddFeature("Silent Aim", &settings.ragebot.general.aimbot.SilentAim);
                        })
                    .AddFeatureSet("Aim-bot",
                        [](mui::FeatureSet& fs)
                        {
                            fs.AddFeature("Enabled", &settings.ragebot.general.aimbot.Enabled);
                            fs.AddFeature("Roll Resolver", &settings.ragebot.general.aimbot.RollResolver);
                            fs.AddFeature("Silent Aim", &settings.ragebot.general.aimbot.SilentAim);
                        })
                    .AddFeatureSet("Aim-bot",
                        [](mui::FeatureSet& fs)
                        {
                            fs.AddFeature("Enabled", &settings.ragebot.general.aimbot.Enabled);
                            fs.AddFeature("Roll Resolver", &settings.ragebot.general.aimbot.RollResolver);
                            fs.AddFeature("Silent Aim", &settings.ragebot.general.aimbot.SilentAim);
                        })
                    .AddFeatureSet("Aim-bot",
                        [](mui::FeatureSet& fs)
                        {
                            fs.AddFeature("Enabled", &settings.ragebot.general.aimbot.Enabled);
                            fs.AddFeature("Roll Resolver", &settings.ragebot.general.aimbot.RollResolver);
                            fs.AddFeature("Silent Aim", &settings.ragebot.general.aimbot.SilentAim);
                        })
                    .AddFeatureSet("Aim-bot",
                        [](mui::FeatureSet& fs)
                        {
                            fs.AddFeature("Enabled", &settings.ragebot.general.aimbot.Enabled);
                            fs.AddFeature("Roll Resolver", &settings.ragebot.general.aimbot.RollResolver);
                            fs.AddFeature("Silent Aim", &settings.ragebot.general.aimbot.SilentAim);
                        })

                    ;
            })
        .AddSubCategory("Anti-Aim",
            [](mui::SubCategory& sub)
            {
                sub.AddFeatureSet("General",
                       [](mui::FeatureSet& fs)
                       {
                           fs.AddFeature("Enabled", &settings.ragebot.antiaim.general.Enabled);
                           fs.AddFeature("Anti-Knife", &settings.ragebot.antiaim.general.AntiKnife);
                           fs.AddFeature("Anti-Zeus", &settings.ragebot.antiaim.general.AntiZeus);
                           fs.AddFeature("Nigga color", &settings.ragebot.antiaim.general.TestColor1);
                           fs.AddFeature("Nigga color 2 Ex", &settings.ragebot.antiaim.general.TestColor2);
                           fs.AddFeature("Intigros testos", &settings.ragebot.antiaim.general.testInt, 0, 50,
                               (char*)u8"%d zidcoins");
                           fs.AddFeature("Numero uno", &settings.ragebot.antiaim.general.testInt2, -120, 300, "%d %%");
                       })
                    .AddFeatureSet("Exploits",
                        [](mui::FeatureSet& fs) {

                        });
            });

    window.AddCategory("Legit", "A");
    window.AddCategory("Visual", "C")
        .AddSubCategory("General",
            [](mui::SubCategory& sub)
            {
                sub.AddFeatureSet("General",
                       [](mui::FeatureSet& fs)
                       {
                           fs.AddFeature("Enabled", &settings.visuals.general.Enabled);
                           fs.AddFeature("Sleepers", &settings.visuals.general.Sleepers);
                           fs.AddFeature("Team As Friends", &settings.visuals.general.TeamAsFriends);
                           fs.AddFeature("Force Skeleton Update", &settings.visuals.general.ForceSkeletonUpdate);
                           fs.AddFeature(
                               "Skeleton Distance", &settings.visuals.general.SkeletonDistance, 50.f, 300.f, "%f");
                       })
                    .AddFeatureSet("Misc.",
                        [](mui::FeatureSet& fs)
                        {
                            fs.AddFeature("Sleepers", &settings.visuals.misc.colSleepers);
                            fs.AddFeature("Teammates", &settings.visuals.misc.colTeammate);
                        });

                auto addPlayerOptions = [&](Settings::Visuals::Player& player, std::string name) -> void
                {
                    sub.AddFeatureSet(name,
                        [&](mui::FeatureSet& fs)
                        {
                            auto& p = player;

                            fs.AddFeature("Enabled", &p.Enabled);
                            fs.AddFeature("Box", &p.Box);
                            fs.AddFeature("Box Color", &p.colBox);
                            fs.AddFeature("Name", &p.Name);
                            fs.AddFeature("Name Color", &p.colName);
                            fs.AddFeature("Skeleton", &p.Skeleton);
                            fs.AddFeature("Skeleton Color", &p.colSkeleton);
                            fs.AddFeature("Distance", &p.Dist);
                            fs.AddFeature("Distance Color", &p.colDist);
                            fs.AddFeature("Active Item", &p.ActiveItem);
                            fs.AddFeature("Active Item Color", &p.colActiveItem);
                            fs.AddFeature("Wounded", &p.Wounded);
                            fs.AddFeature("Wounded Color", &p.colWounded);
                            fs.AddFeature("Hotbar", &p.Hotbar);
                            fs.AddFeature("Health", &p.Health);
                            fs.AddFeature("TeamID", &p.TeamID);
                            fs.AddFeature("Player Flags", &p.PlayerFlags);
                        });
                };

                addPlayerOptions(settings.visuals.friends, "Friends");
                addPlayerOptions(settings.visuals.enemies, "Enemies");
                addPlayerOptions(settings.visuals.npc, "NPC");
            })
        .AddSubCategory("Chams",
            [](mui::SubCategory& sub)
            {
                sub.AddFeatureSet("Local",
                       [](mui::FeatureSet& fs)
                       {
                           fs.AddFeature("Enabled", &settings.ragebot.antiaim.general.Enabled);
                       })
                    .AddFeatureSet("Friendly",
                        [](mui::FeatureSet& fs) {

                        })
                    .AddFeatureSet("Enemies",
                        [](mui::FeatureSet& fs) {

                        });
            })
        .AddSubCategory("Collectibles",
            [](mui::SubCategory& sub) {

            })
        .AddSubCategory("Radtown",
            [](mui::SubCategory& sub) {

            })
        .AddSubCategory("Ores",
            [](mui::SubCategory& sub) {

            })
        .AddSubCategory("Animals",
            [](mui::SubCategory& sub) {

            })
        .AddSubCategory("Vehicles",
            [](mui::SubCategory& sub) {

            })
        .AddSubCategory("Traps",
            [](mui::SubCategory& sub) {

            })
        .AddSubCategory("Raid",
            [](mui::SubCategory& sub) {

            });

    window.AddCategory("Player List", "D");
    window.AddCategory("Misc.", "E");
    window.AddCategory("User", "", true)
        .AddSubCategory("Configs",
            [](mui::SubCategory& sub)
            {
                sub.AddConfigSection();
            })
        .AddSubCategory("User Info", [](mui::SubCategory& sub) {});
}

void GUI::Render()
{
    mui::Setup();
    window.Draw();
}
