#pragma once
#include "../ui/imgui/imgui.h"
#include "enums.h"
#include "input_data.h"
#include "settings_types.h"
#include <memory>

namespace SettingsDataTypes
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
        bool Enabled = true;
        bool Hotbar  = true;
        bool Health  = true;

        TCO Box         = {255, 255, 255, 255};
        TCO Skeleton    = {255, 255, 255, 255, true};
        TCO Name        = {255, 255, 255, 255, true};
        TCO Dist        = {255, 255, 255, 255, true};
        TCO ActiveItem  = {8, 255, 190, 255, true};
        TCO TeamID      = {255, 255, 255, 255, true};
        TCO PlayerFlags = {255, 255, 255, 255, true};
        TCO Wounded     = {252, 148, 3, 255, true};
        TCO Sleeping    = {252, 148, 3, 255, true};

        Chams chams{};
    };
} // namespace SettingsDataTypes

struct Settings
{
    struct RageBot
    {
        struct General
        {
            struct Aimbot
            {
                TKO          aim               = TKO(KeyCode::Mouse3);
                bool         Silent            = false;
                bool         ShootWhenPossible = true;
                bool         Humanizer         = true;
                bool         Prediction        = true;
                bool         Smoothing         = true;
                int          HumanizerAmount   = 4;
                int          Smooth            = 10;
                TCO          FOV               = {255, 255, 255, 200, true};
                int          FOVRadius         = 90;
                AimbotSmooth SmoothMode        = AimbotSmooth::Linear;

            } aimbot{};

            struct Magic
            {
                TKO  mag       = {KeyCode::Mouse4, true};
                bool RapidFire = false;
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
                bool Enabled         = true;
                bool Radar           = true;
                int  RadarSize       = 100;
                TCO  RadarEnemies    = {255, 0, 0, 255, true};
                TCO  RadarFriends    = {0, 255, 0, 255, true};
                TCO  RadarSleepers   = {255, 204, 153, 255, true};
                TCO  RadarWounded    = {255, 179, 25, 255, true};
                TCO  RadarNPC        = {77, 136, 255, 255, true};
                TCO  VisualPredition = {255, 0, 0, 255, true};

                // bool Enabled = true;

                // ToggleColorOption colTeammate = ToggleColorOption(0, 255, 0);
            } indicators{};

            SettingsDataTypes::Player friends = {
                .Enabled     = true,
                .Hotbar      = true,
                .Health      = true,
                .Box         = TCO(0, 255, 0),
                .Skeleton    = TCO(0, 255, 0, 255, true),
                .Name        = TCO(0, 255, 0, 255, true),
                .Dist        = TCO(0, 255, 0, 255, true),
                .ActiveItem  = TCO(8, 255, 190, 255, true),
                .TeamID      = TCO(255, 255, 255, 255, true),
                .PlayerFlags = TCO(255, 255, 255, 255, true),
                .Wounded     = TCO(252, 148, 3, 255, true),
                .Sleeping    = TCO(252, 148, 3, 255, true),
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
            SettingsDataTypes::Player enemies = {
                .Enabled     = true,
                .Hotbar      = true,
                .Health      = true,
                .Box         = TCO(255, 255, 255, 255),
                .Skeleton    = TCO(255, 255, 255, 255, true),
                .Name        = TCO(255, 255, 255, 255, true),
                .Dist        = TCO(255, 255, 255, 255, true),
                .ActiveItem  = TCO(8, 255, 190, 255, true),
                .TeamID      = TCO(255, 255, 255, 255, true),
                .PlayerFlags = TCO(255, 255, 255, 255, true),
                .Wounded     = TCO(252, 148, 3, 255, true),
                .Sleeping    = TCO(252, 148, 3, 255, true),
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
            SettingsDataTypes::Player npc = {
                .Enabled     = true,
                .Hotbar      = true,
                .Health      = true,
                .Box         = TCO(77, 136, 255),
                .Skeleton    = TCO(77, 136, 255, 255, true),
                .Name        = TCO(77, 136, 255, 255, true),
                .Dist        = TCO(77, 136, 255, 255, true),
                .ActiveItem  = TCO(8, 255, 190, 255, true),
                .TeamID      = TCO(255, 255, 255, 255, true),
                .PlayerFlags = TCO(255, 255, 255, 255, true),
                .Wounded     = TCO(252, 148, 3, 255, true),
                .Sleeping    = TCO(252, 148, 3, 255, true),
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
                TCO food     = {130, 104, 38};
                TCO mushroom = {158, 121, 59};
                TCO pumpkin  = {130, 104, 38};
                TCO corn     = {249, 255, 89};
                TCO potato   = {255, 191, 89};
                TCO wood     = {125, 89, 42};
                TCO stone    = {155, 155, 155};
                TCO metal    = {86, 66, 50};
                TCO sulfur   = {239, 201, 31};
                TCO hemp     = {140, 227, 0};
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
                TCO barrels      = {153, 221, 255};
                TCO crates       = {255, 255, 153};
                TCO military     = {128, 255, 149};
                TCO heli         = {128, 255, 149};
                TCO lootbox      = {130, 104, 38};
                TCO lootboxElite = {128, 255, 149};
                TCO toolbox      = {255, 204, 179};
                TCO foodbox      = {209, 193, 19};
                TCO other        = {255, 255, 255};
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
                TCO stone  = {155, 155, 155};
                TCO sulfur = {239, 201, 31};
                TCO metal  = {86, 66, 50};
            } colors{};
        } ores{};

        struct Animals
        {
            struct General
            {
                bool Enabled  = false;
                bool Fade     = false;
                int  Distance = 150;

            } general{};

            struct Colors
            {
                TCO bear      = {203, 130, 255};
                TCO polarBear = {203, 130, 255};
                TCO boar      = {203, 130, 255};
                TCO chicken   = {203, 130, 255};
                TCO stag      = {203, 130, 255};
                TCO wolf      = {203, 130, 255};
                TCO zombie    = {203, 130, 255};
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
                TCO mini      = {118, 191, 255};
                TCO scrapHeli = {71, 121, 165};
                TCO boat      = {145, 103, 48};
                TCO rhib      = {145, 103, 48};
                TCO horse     = {88, 217, 255};
                TCO baloon    = {79, 54, 21};
                TCO patrol    = {211, 127, 10};
                TCO bradley   = {211, 127, 10};
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
                TCO autoTurret       = {240, 56, 10};
                TCO autoTurretAuthed = {44, 222, 20};
                TCO samSite          = {240, 56, 10};
                TCO shotgunTrap      = {240, 56, 10};
                TCO flameTurret      = {240, 56, 10};
                TCO landmine         = {240, 56, 10};
                TCO bearTrap         = {255, 245, 166};
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
                TCO option   = {255, 245, 166, 255, true};
                int Distance = 150;
            } backpacks{};

            struct Corpse
            {
                bool Name     = true;
                TCO  option   = {255, 245, 166, 255, true};
                int  Distance = 150;
            } corpses{};

            struct Stash
            {
                bool HideOpenStashes = true;
                TCO  option          = {255, 245, 166, 255, true};
                int  Distance        = 200;
            } stashes{};

        } item{};

    } visuals{};
};

namespace SettingsData
{
    extern Settings* settings;
}
