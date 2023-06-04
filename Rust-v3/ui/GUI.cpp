#include "GUI.h"
#include "mui.h"

struct Settings
{
    struct RageBot
    {
        struct General
        {
            struct Aimbot
            {
                bool Enabled      = false;
                bool RollResolver = false;
                bool SilentAim    = false;
            } aimbot;

            struct Exploits
            {
                bool DoubleTap = false;
                bool HideShots = false;
            } exploits;
        } general;

        struct AntiAim
        {
            struct General
            {
                bool Enabled   = false;
                bool AntiKnife = false;
                bool AntiZeus  = false;

                ImColor TestColor1 = ImColor(255, 255, 255);
                ImColor TestColor2 = ImColor(255, 255, 255);

                int testInt  = 0;
                int testInt2 = 132;
            } general;

            // struct Desync
            //{
            //     bool Roll = false;
            //     bool HideShots = false;
            // } exploits;
        } antiaim;
    } ragebot;
} settings;

mui::Window window {};

void GUI::Init()
{
    mui::fonts::Init();

    /*window.AddCategory("RageBot", "B")
        .AddSubCategory(
            "General",
            [](mui::SubCategory &sub) {
                sub.AddFeatureSet(
                       "Aim-bot",
                       [](mui::FeatureSet &fs) {
                           fs.AddFeature("Enabled", &settings.ragebot.general.aimbot.Enabled);
                           fs.AddFeature("Roll Resolver", &settings.ragebot.general.aimbot.RollResolver);
                           fs.AddFeature("Silent Aim", &settings.ragebot.general.aimbot.SilentAim);
                       })
                    .AddFeatureSet(
                        "Exploits",
                        [](mui::FeatureSet &fs) {
                            fs.AddFeature("DoubleTap", &settings.ragebot.general.exploits.DoubleTap);
                            fs.AddFeature("HideShots", &settings.ragebot.general.exploits.HideShots);
                        })
                    .AddFeatureSet(
                        "Aim-bot",
                        [](mui::FeatureSet &fs) {
                            fs.AddFeature("Enabled", &settings.ragebot.general.aimbot.Enabled);
                            fs.AddFeature("Roll Resolver", &settings.ragebot.general.aimbot.RollResolver);
                            fs.AddFeature("Silent Aim", &settings.ragebot.general.aimbot.SilentAim);
                        })
                    .AddFeatureSet(
                        "Aim-bot",
                        [](mui::FeatureSet &fs) {
                            fs.AddFeature("Enabled", &settings.ragebot.general.aimbot.Enabled);
                            fs.AddFeature("Roll Resolver", &settings.ragebot.general.aimbot.RollResolver);
                            fs.AddFeature("Silent Aim", &settings.ragebot.general.aimbot.SilentAim);
                        })
                    .AddFeatureSet(
                        "Aim-bot",
                        [](mui::FeatureSet &fs) {
                            fs.AddFeature("Enabled", &settings.ragebot.general.aimbot.Enabled);
                            fs.AddFeature("Roll Resolver", &settings.ragebot.general.aimbot.RollResolver);
                            fs.AddFeature("Silent Aim", &settings.ragebot.general.aimbot.SilentAim);
                        })
                    .AddFeatureSet(
                        "Aim-bot",
                        [](mui::FeatureSet &fs) {
                            fs.AddFeature("Enabled", &settings.ragebot.general.aimbot.Enabled);
                            fs.AddFeature("Roll Resolver", &settings.ragebot.general.aimbot.RollResolver);
                            fs.AddFeature("Silent Aim", &settings.ragebot.general.aimbot.SilentAim);
                        })
                    .AddFeatureSet(
                        "Aim-bot",
                        [](mui::FeatureSet &fs) {
                            fs.AddFeature("Enabled", &settings.ragebot.general.aimbot.Enabled);
                            fs.AddFeature("Roll Resolver", &settings.ragebot.general.aimbot.RollResolver);
                            fs.AddFeature("Silent Aim", &settings.ragebot.general.aimbot.SilentAim);
                        })
                    .AddFeatureSet(
                        "Aim-bot",
                        [](mui::FeatureSet &fs) {
                            fs.AddFeature("Enabled", &settings.ragebot.general.aimbot.Enabled);
                            fs.AddFeature("Roll Resolver", &settings.ragebot.general.aimbot.RollResolver);
                            fs.AddFeature("Silent Aim", &settings.ragebot.general.aimbot.SilentAim);
                        })
                    .AddFeatureSet(
                        "Aim-bot",
                        [](mui::FeatureSet &fs) {
                            fs.AddFeature("Enabled", &settings.ragebot.general.aimbot.Enabled);
                            fs.AddFeature("Roll Resolver", &settings.ragebot.general.aimbot.RollResolver);
                            fs.AddFeature("Silent Aim", &settings.ragebot.general.aimbot.SilentAim);
                        })
                    .AddFeatureSet(
                        "Aim-bot",
                        [](mui::FeatureSet &fs) {
                            fs.AddFeature("Enabled", &settings.ragebot.general.aimbot.Enabled);
                            fs.AddFeature("Roll Resolver", &settings.ragebot.general.aimbot.RollResolver);
                            fs.AddFeature("Silent Aim", &settings.ragebot.general.aimbot.SilentAim);
                        })
                    .AddFeatureSet(
                        "Aim-bot",
                        [](mui::FeatureSet &fs) {
                            fs.AddFeature("Enabled", &settings.ragebot.general.aimbot.Enabled);
                            fs.AddFeature("Roll Resolver", &settings.ragebot.general.aimbot.RollResolver);
                            fs.AddFeature("Silent Aim", &settings.ragebot.general.aimbot.SilentAim);
                        })

                    ;
            })
        .AddSubCategory("Anti-Aim", [](mui::SubCategory &sub) {
            sub.AddFeatureSet(
                   "General",
                   [](mui::FeatureSet &fs) {
                       fs.AddFeature("Enabled", &settings.ragebot.antiaim.general.Enabled);
                       fs.AddFeature("Anti-Knife", &settings.ragebot.antiaim.general.AntiKnife);
                       fs.AddFeature("Anti-Zeus", &settings.ragebot.antiaim.general.AntiZeus);
                       fs.AddFeature("Nigga color", &settings.ragebot.antiaim.general.TestColor1);
                       fs.AddFeature("Nigga color 2 Ex", &settings.ragebot.antiaim.general.TestColor2);
                       fs.AddFeature(
                           "Intigros testos", &settings.ragebot.antiaim.general.testInt, 0, 50,
                           (char *)u8"%d zidcoins");
                       fs.AddFeature("Numero uno", &settings.ragebot.antiaim.general.testInt2, -120, 300, "%d %%");
                   })
                .AddFeatureSet("Exploits", [](mui::FeatureSet &fs) {
                });
        });

    window.AddCategory("Legit", "A");
    window.AddCategory("Visual", "C");
    window.AddCategory("Player List", "D");
    window.AddCategory("Misc.", "E");
    window.AddCategory("User", "", true)
        .AddSubCategory("Configs", [](mui::SubCategory &sub) { sub.AddConfigSection(); })
        .AddSubCategory("User Info", [](mui::SubCategory &sub) {});*/
}

void GUI::Render()
{
    mui::Setup();
    window.Draw();
}