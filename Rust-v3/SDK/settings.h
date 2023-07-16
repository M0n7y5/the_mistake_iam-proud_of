#pragma once
#include "../ui/imgui/imgui.h"
#include "enums.h"
#include "input_data.h"
#include "settings_types.h"
#include <memory>

struct Settings
{
    struct RageBot
    {
        struct General
        {
            struct Aimbot
            {
                ToggleKeybindOption aim               = ToggleKeybindOption(KeyCode::Mouse3);
                bool                Silent            = false;
                bool                ShootWhenPossible = true;
                bool                Humanizer         = true;
                bool                Prediction        = true;
                bool                Smoothing         = true;
                int                 HumanizerAmount   = 4;
                int                 Smooth            = 10;
                int                 FOV               = 90;
                AimbotSmooth        SmoothMode        = AimbotSmooth::Linear;

            } aimbot{};

            struct Magic
            {
                ToggleKeybindOption mag       = {KeyCode::Mouse4, true};
                bool                RapidFire = false;
                // bool                MiniCopter            = false;
                // bool                HeliCopter            = false;
                // bool                ShootAtPos            = false;
                bool SmartHitscan          = true;
                int  NumberOfHitscanPoints = 120;
                int  PointsPerFrame        = 5;
            } magic{};

            struct Targeting
            {
                PlayerBones PlayerHitbox = PlayerBones::head;
                PlayerBones NPCHitbox    = PlayerBones::head;
                bool        Players      = true;
                bool        NPC          = false;
                bool        Friends      = false;
                bool        Heli         = false;
                bool        Traps        = false;
                bool        VisCheck     = false;
                bool        TargetLock   = false;

            } targeting{};

            struct Projectile
            {
                bool        HitOverride       = true;
                PlayerBones PlayerHitOverride = PlayerBones::spine1;
                bool        BulletTP          = false;
                bool        Pierce            = false;
                bool        InstaHit          = false;
                bool        BulletRain        = false;
            } projectile{};
        } general{};

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

        } antiaim{};

    } ragebot;

    struct Visuals
    {
        struct Chams
        {
            ImColor colChamsVis           = ImColor(255, 30, 30, 255);
            ImColor colChamsInvis         = ImColor(30, 255, 30, 255);
            ImColor colChamsAdditive      = ImColor(30, 30, 255, 255);
            float   ChamsGlowTime         = (1.f);
            float   ChamsGlowIntensity    = (2.f);
            float   ChamsOutlineThickness = (0.0035f);
        };

        struct Player
        {
            bool              Enabled     = true;
            bool              Hotbar      = true;
            bool              Health      = true;
            ToggleColorOption Box         = {255, 255, 255, 255};
            ToggleColorOption Skeleton    = {255, 255, 255, 255, true};
            ToggleColorOption Name        = {255, 255, 255, 255, true};
            ToggleColorOption Dist        = {255, 255, 255, 255, true};
            ToggleColorOption ActiveItem  = {8, 255, 190, 255, true};
            ToggleColorOption TeamID      = {255, 255, 255, 255, true};
            ToggleColorOption PlayerFlags = {255, 255, 255, 255, true};
            ToggleColorOption Wounded     = {252, 148, 3, 255, true};
            ToggleColorOption Sleeping    = {252, 148, 3, 255, true};

            Chams chams{};
        };

        struct General
        {
            bool Enabled             = true;
            bool Sleepers            = false;
            bool TeamAsFriends       = true;
            bool ForceSkeletonUpdate = false;
            int  SkeletonDistance    = 100.f;
            bool Watermark           = true;

            struct Indicators
            {
                bool Enabled   = true;
                bool Radar     = true;
                int  RadarSize = 100;

                ToggleColorOption VisualPredition = {255, 0, 0, 255, true};

                // bool Enabled = true;

                // ToggleColorOption colTeammate = ToggleColorOption(0, 255, 0);
            } indicators{};

            Player friends = {
                .Enabled     = true,
                .Hotbar      = true,
                .Health      = true,
                .Box         = ToggleColorOption(0, 255, 0),
                .Skeleton    = ToggleColorOption(0, 255, 0, 255, true),
                .Name        = ToggleColorOption(0, 255, 0, 255, true),
                .Dist        = ToggleColorOption(0, 255, 0, 255, true),
                .ActiveItem  = ToggleColorOption(8, 255, 190, 255, true),
                .TeamID      = ToggleColorOption(255, 255, 255, 255, true),
                .PlayerFlags = ToggleColorOption(255, 255, 255, 255, true),
                .Wounded     = ToggleColorOption(252, 148, 3, 255, true),
                .Sleeping    = ToggleColorOption(252, 148, 3, 255, true),
                .chams =
                    {
                        .colChamsVis           = ImColor(255, 30, 30, 255),
                        .colChamsInvis         = ImColor(30, 255, 30, 255),
                        .colChamsAdditive      = ImColor(30, 30, 255, 255),
                        .ChamsGlowTime         = (1.f),
                        .ChamsGlowIntensity    = (2.f),
                        .ChamsOutlineThickness = (0.0035f),
                    },
            };
            Player enemies = {
                .Enabled     = true,
                .Hotbar      = true,
                .Health      = true,
                .Box         = ToggleColorOption(255, 255, 255, 255),
                .Skeleton    = ToggleColorOption(255, 255, 255, 255, true),
                .Name        = ToggleColorOption(255, 255, 255, 255, true),
                .Dist        = ToggleColorOption(255, 255, 255, 255, true),
                .ActiveItem  = ToggleColorOption(8, 255, 190, 255, true),
                .TeamID      = ToggleColorOption(255, 255, 255, 255, true),
                .PlayerFlags = ToggleColorOption(255, 255, 255, 255, true),
                .Wounded     = ToggleColorOption(252, 148, 3, 255, true),
                .Sleeping    = ToggleColorOption(252, 148, 3, 255, true),
                .chams =
                    {
                        .colChamsVis           = ImColor(255, 30, 30, 255),
                        .colChamsInvis         = ImColor(30, 255, 30, 255),
                        .colChamsAdditive      = ImColor(30, 30, 255, 255),
                        .ChamsGlowTime         = (1.f),
                        .ChamsGlowIntensity    = (2.f),
                        .ChamsOutlineThickness = (0.0035f),
                    },
            };
            Player npc = {
                .Enabled     = true,
                .Hotbar      = true,
                .Health      = true,
                .Box         = ToggleColorOption(77, 136, 255),
                .Skeleton    = ToggleColorOption(77, 136, 255, 255, true),
                .Name        = ToggleColorOption(77, 136, 255, 255, true),
                .Dist        = ToggleColorOption(77, 136, 255, 255, true),
                .ActiveItem  = ToggleColorOption(8, 255, 190, 255, true),
                .TeamID      = ToggleColorOption(255, 255, 255, 255, true),
                .PlayerFlags = ToggleColorOption(255, 255, 255, 255, true),
                .Wounded     = ToggleColorOption(252, 148, 3, 255, true),
                .Sleeping    = ToggleColorOption(252, 148, 3, 255, true),
                .chams =
                    {
                        .colChamsVis           = ImColor(255, 30, 30, 255),
                        .colChamsInvis         = ImColor(30, 255, 30, 255),
                        .colChamsAdditive      = ImColor(30, 30, 255, 255),
                        .ChamsGlowTime         = (1.f),
                        .ChamsGlowIntensity    = (2.f),
                        .ChamsOutlineThickness = (0.0035f),
                    },
            };

        } general{};

        struct Collectibles
        {
            struct General
            {
                bool Enabled             = false;
                bool Fade                = false;
                bool AntiClutter         = false;
                bool Berries             = false;
                int  Distance            = 150;
                int  MaxAnticlutterCount = 5;

            } general{};

            struct Colors
            {
                ToggleColorOption food     = {130, 104, 38};
                ToggleColorOption mushroom = {158, 121, 59};
                ToggleColorOption pumpkin  = {130, 104, 38};
                ToggleColorOption corn     = {249, 255, 89};
                ToggleColorOption potato   = {255, 191, 89};
                ToggleColorOption wood     = {125, 89, 42};
                ToggleColorOption stone    = {155, 155, 155};
                ToggleColorOption metal    = {86, 66, 50};
                ToggleColorOption sulfur   = {239, 201, 31};
                ToggleColorOption hemp     = {140, 227, 0};
            } colors{};
        } collectibles{};

        struct Radtown
        {
            struct General
            {
                bool Enabled             = false;
                bool Fade                = false;
                bool AntiClutter         = false;
                int  Distance            = 80;
                int  MaxAnticlutterCount = 5;
            } general{};

            struct Colors
            {
                ToggleColorOption barrels      = {153, 221, 255};
                ToggleColorOption crates       = {255, 255, 153};
                ToggleColorOption military     = {128, 255, 149};
                ToggleColorOption heli         = {128, 255, 149};
                ToggleColorOption lootbox      = {130, 104, 38};
                ToggleColorOption lootboxElite = {128, 255, 149};
                ToggleColorOption toolbox      = {255, 204, 179};
                ToggleColorOption foodbox      = {209, 193, 19};
                ToggleColorOption other        = {255, 255, 255};
            } colors;
        } radtown{};

        struct Ores
        {
            struct General
            {
                bool Enabled             = false;
                bool Fade                = false;
                bool AntiClutter         = false;
                int  Distance            = 150;
                int  MaxAnticlutterCount = 5;
            } general{};

            struct Colors
            {
                ToggleColorOption stone  = {155, 155, 155};
                ToggleColorOption sulfur = {239, 201, 31};
                ToggleColorOption metal  = {86, 66, 50};
            } colors{};
        } ores{};

        struct Animals
        {
            struct General
            {
                bool Enabled  = false;
                bool Fade     = false;
                bool Bear     = true;
                bool Boar     = true;
                bool Wolf     = true;
                bool Stag     = false;
                int  Distance = 150;

            } general{};

            struct Colors
            {
                ToggleColorOption animals = {203, 130, 255};
            } colors{};
        } animals{};

        struct Vehicles
        {
            struct General
            {
                bool Enabled        = false;
                bool Fade           = false;
                bool PatrolHealth   = false;
                int  HeliDistance   = 500;
                int  BoatDistance   = 350;
                int  PatrolDistance = 150;
                int  OtherDistance  = 350;
            } general{};

            struct Colors
            {
                ToggleColorOption mini      = {118, 191, 255};
                ToggleColorOption scrapHeli = {71, 121, 165};
                ToggleColorOption boat      = {145, 103, 48};
                ToggleColorOption rhib      = {145, 103, 48};
                ToggleColorOption horse     = {88, 217, 255};
                ToggleColorOption baloon    = {79, 54, 21};
                ToggleColorOption patrol    = {211, 127, 10};
                ToggleColorOption bradley   = {211, 127, 10};
            } colors{};
        } vehicles{};

        struct Traps
        {
            struct General
            {
                bool Enabled      = false;
                bool HideInactive = false;
                int  Distance     = 100;
            } general{};

            struct Colors
            {
                ToggleColorOption autoTurret       = {240, 56, 10};
                ToggleColorOption autoTurretAuthed = {44, 222, 20};
                ToggleColorOption samSite          = {240, 56, 10};
                ToggleColorOption shotgunTrap      = {240, 56, 10};
                ToggleColorOption flameTurret      = {240, 56, 10};
                ToggleColorOption landmine         = {240, 56, 10};
                ToggleColorOption bearTrap         = {255, 245, 166};
            } colors{};
        } traps{};

        struct Items
        {
            struct General
            {
                ImColor weapons  = {251, 7, 160};
                ImColor other    = {251, 7, 160};
                int     Distance = 150;
            } general{};

            struct Backpack
            {
                ToggleColorOption option   = {255, 245, 166, 255, true};
                int               Distance = 150;
            } backpacks{};

            struct Corpse
            {
                bool              Name     = true;
                ToggleColorOption option   = {255, 245, 166, 255, true};
                int               Distance = 150;
            } corpses{};

            struct Stash
            {
                bool              HideOpenStashes = true;
                ToggleColorOption option          = {255, 245, 166, 255, true};
                int               Distance        = 200;
            } stashes{};

        } item{};

    } visuals{};
};

namespace SettingsData
{
extern Settings *settings;
}
