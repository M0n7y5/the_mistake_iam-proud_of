#pragma once
#include "../ui/imgui/imgui.h"
#include "enums.h"
#include "input_data.h"
#include "settings_types.h"
#include <memory>
#include <vector>

using cbType = void (*)();

inline std::vector<cbType> ResetHandler{};

// Needs to be called everytime we have new game
// aka switching servers etc.
// BUG: CALL IT
inline void ResetAllKeybindStates()
{
    for (auto callback : ResetHandler)
    {
        callback();
    }
}

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

    template <typename T> struct OV
    {
        T Value{};

        // observable part

        T PrevValue{};

        bool initiallySet = false;

        void Reset()
        {
            PrevValue    = {};
            initiallySet = false;
        };

        OV<T>(T defValue)
        {
            Value = defValue;
        };

        // changed this frame
        bool Changed()
        {
            auto changed = Value != PrevValue;

            if (initiallySet == false)
            {
                changed      = true;
                initiallySet = false;
            }

            if (changed)
            {
                PrevValue = Value;
                return true;
            }

            return false;
        }

        operator T()
        {
            return Value;
        }

        operator T*()
        {
            return &Value;
        }

        OV<T>&& operator=(T val)
        {
            OV<T> ov(val);

            // register reset handler
            ResetHandler.emplace_back(&ov.Reset);

            return ov;
        }
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
                bool         Prediction        = true;
                bool         Smoothing         = true;
                int          Smooth            = 10;
                TCO          FOV               = {255, 255, 255, 200, true};
                int          FOVRadius         = 90;
                AimbotSmooth SmoothMode        = AimbotSmooth::Linear;

            } aimbot{};

            struct Desync
            {
                TKO  shoot     = {KeyCode::Mouse4, true};
                bool RapidFire = false;
                // bool                MiniCopter            = false;
                // bool                HeliCopter            = false;
                // bool                ShootAtPos            = false;
                bool SmartHitscan          = true;
                int  NumberOfHitscanPoints = 120;
                int  PointsPerFrame        = 5;
            } desync{};

            struct Targeting
            {
                PlayerBones PlayerHitbox    = PlayerBones::eyeTranform;
                PlayerBones NPCHitbox       = PlayerBones::eyeTranform;
                bool        Players         = true;
                bool        NPC             = false;
                bool        Friends         = false;
                bool        Heli            = false;
                bool        Traps           = false;
                bool        VisCheck        = false;
                bool        TargetLock      = false;
                float       headAdjustmentX = {};
                float       headAdjustmentY = {};
                float       headAdjustmentZ = {};

            } targeting{};

            struct Projectile
            {
                bool        HitOverride       = true;
                PlayerBones PlayerHitOverride = PlayerBones::spine1;
                bool        BulletTP          = false;
                bool        Pierce            = false;
                bool        InstaHit          = false;
                bool        BulletRain        = false;
                bool        FasterBullets     = false;
            } projectile{};

            struct Weapon
            {
                bool NoSpread        = false;
                bool Automatic       = false;
                bool NoSway          = false;
                bool NoRecoil        = false;
                bool InstantEoka     = false;
                bool InstantCompound = false;
                bool NoRestrictions  = true;
                bool ForceWeild      = false;

                bool RecoilHumanizer    = false;
                int  RecoilHumanization = 0;
            } weapon{};

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
            bool Enabled                    = true;
            bool Sleepers                   = false;
            bool TeamAsFriends              = true;
            bool ForceSkeletonUpdate        = false;
            bool Watermark                  = true;
            bool ShowHotBar                 = true;
            bool HideHotBarWhenMenuIsOpened = true;
            int  SkeletonDistance           = 100.f;

            struct Indicators
            {
                bool Enabled                = true;
                bool Radar                  = true;
                int  RadarSize              = 100;
                TCO  RadarEnemies           = {255, 0, 0, 255, true};
                TCO  RadarFriends           = {0, 255, 0, 255, true};
                TCO  RadarSleepers          = {255, 204, 153, 255, true};
                TCO  RadarWounded           = {255, 179, 25, 255, true};
                TCO  RadarNPC               = {77, 136, 255, 255, true};
                TCO  Prediction             = {255, 0, 0, 255, true};
                TCO  PredictionLauncher     = {0, 83, 196, 255, true};
                TCO  PredictionLauncherLine = {0, 131, 232, 255, true};
                TCO  CrossHair              = {196, 0, 171, 255, true};

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
                TCO food        = {130, 104, 38};
                TCO mushroom    = {158, 121, 59};
                TCO pumpkin     = {130, 104, 38};
                TCO corn        = {249, 255, 89};
                TCO potato      = {255, 191, 89};
                TCO wood        = {125, 89, 42};
                TCO stone       = {155, 155, 155};
                TCO metal       = {86, 66, 50};
                TCO sulfur      = {239, 201, 31};
                TCO hemp        = {140, 227, 0};
                TCO berryWhite  = {255, 255, 255};
                TCO berryRed    = {255, 143, 143};
                TCO berryBlue   = {77, 173, 245};
                TCO berryBlack  = {30, 30, 30};
                TCO berryGreen  = {30, 255, 30};
                TCO berryYellow = {255, 255, 0};

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
                TCO barrels  = {153, 221, 255};
                TCO crates   = {255, 255, 153};
                TCO military = {128, 255, 149};
                TCO heli     = {128, 255, 149};
                TCO elite    = {128, 255, 149};
                TCO toolbox  = {255, 204, 179};
                TCO foodbox  = {209, 193, 19};
                TCO airdrop  = {255, 255, 255};
            } colors;
        } radtown{};

        struct Ores
        {
            struct General
            {
                bool Enabled             = false;
                bool Fade                = false;
                bool LineToClosest       = false;
                bool AntiClutter         = false;
                int  Distance            = 150;
                int  MaxAnticlutterCount = 5;
            } general{};

            struct Colors
            {
                TCO stone  = {155, 155, 155};
                TCO sulfur = {239, 201, 31};
                TCO metal  = {86, 66, 50};
                TCO line   = {255, 255, 255};
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
                int  PatrolDistance = 1500;
                int  OtherDistance  = 350;
            } general{};

            struct Colors
            {
                TCO mini          = {118, 191, 255};
                TCO scrapHeli     = {71, 121, 165};
                TCO boat          = {145, 103, 48};
                TCO rhib          = {145, 103, 48};
                TCO tugboat       = {145, 103, 48};
                TCO submarineSolo = {145, 103, 48};
                TCO submarineDuo  = {145, 103, 48};
                TCO horse         = {88, 217, 255};
                TCO baloon        = {79, 54, 21};
                TCO patrol        = {211, 127, 10};
                TCO bradley       = {211, 127, 10};
                TCO chinook       = {211, 127, 10};
            } colors{};
        } vehicles{};

        struct Traps
        {
            struct General
            {
                bool Enabled           = false;
                bool HideInactive      = false;
                bool HideAuthedTurrets = false;
                int  Distance          = 100;
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
                TCO weapons  = {251, 7, 160};
                TCO other    = {251, 7, 160};
                int Distance = 150;
            } general{};

            struct Backpack
            {
                TCO color    = {255, 245, 166, 255, true};
                int Distance = 150;
            } backpacks{};

            struct Corpse
            {
                TCO  option   = {255, 245, 166, 255, true};
                bool Name     = true;
                int  Distance = 150;
            } corpses{};

            struct Stash
            {
                bool HideOpenStashes = true;
                TCO  option          = {255, 245, 166, 255, true};
                int  Distance        = 200;
            } stashes{};

        } item{};

        struct Raid
        {
            TCO  Enabled           = TCO(255, 10, 10, 255);
            bool C4                = false;
            bool Satchel           = false;
            bool Rocket            = false;
            bool RocketIncendiary  = false;
            bool ExplosiveAmmo     = false;
            bool Grenades          = false;
            bool ShowWhenStarted   = false;
            bool ShowLastExplosion = false;
            int  GroupByDistance   = 5;
            int  Distance          = 1000;
            int  MaxShowTime       = 20;
        } raid{};

    } visuals{};

    struct Miscellaneous
    {
        struct Movement
        {
            bool                        NoFallDamage    = false;
            bool                        SpiderMan       = true;
            bool                        InfiniteJump    = false;
            SettingsDataTypes::OV<bool> Jesus           = true;
            bool                        OmniSprint      = true;
            bool                        SilentWalk      = false;
            SettingsDataTypes::OV<bool> TreeCollision   = false;
            SettingsDataTypes::OV<bool> PlayerCollision = false;

            TKO Phase = TKO(KeyCode::V, false);

        } movement{};

        struct FlyHack
        {
            TKO                         Flyhack            = TKO(KeyCode::F, true);
            TKO                         FlyhackForward     = TKO(KeyCode::W, true);
            TKO                         FlyhackBack        = TKO(KeyCode::S, true);
            TKO                         FlyhackLeft        = TKO(KeyCode::A, true);
            TKO                         FlyhackRight       = TKO(KeyCode::D, true);
            TKO                         FlyhackUp          = TKO(KeyCode::Space, true);
            TKO                         FlyhackBoost       = TKO(KeyCode::LeftShift, true);
            TKO                         FlyhackSlow        = TKO(KeyCode::LeftControl, true);
            int                         FlyHackBoostSpeed  = 10; // 10%
            bool                        AntiFlyKick        = true;
            bool                        AbsoluteFlyHack    = false;
            bool                        NoTerrainCollision = false;
            bool                        PreventBan         = true;
            SettingsDataTypes::OV<bool> WallPhase          = true;

        } flyhack{};

        struct Visibility
        {
            bool NoViewModelSway      = true;
            bool BrightNight          = true;
            bool BrightCave           = true;
            bool ForceFOV             = true;
            bool HideAttireOverlays   = true;
            bool InteractiveDebugCam  = true;
            int  BrightNightIntensity = 20; // 10%
            int  BrightCaveIntensity  = 20; // 10%
            int  FOV                  = 90;
            int  GiraffeOffset        = 50; // 50%
            int  FOVZoom              = 30;
            TKO  Zoom                 = TKO(KeyCode::V, false);
            TKO  Giraffe              = TKO(KeyCode::X, false);

        } visibility{};

        // struct Weapon
        // {
        //     bool InstantEoka        = false;
        //     bool InstantCompoundBow = false;
        //     bool NoRestrictions     = true;
        //     bool ForceWeild         = false;
        // } weapon{};

        struct Other
        {
            bool                        InstantLoot     = true;
            bool                        AutoCollect     = false;
            TKO                         InstantUntie    = TKO(KeyCode::E, false);
            TKO                         InstantRevive   = TKO(KeyCode::E, false);
            TKO                         InstantHeal     = TKO(KeyCode::R, false);
            TKO                         SilentFarm      = TKO(KeyCode::C, false);
            TKO                         SilentMelee     = TKO(KeyCode::B, false);
            TKO                         InstantSuicide  = TKO(KeyCode::None, false);
            TKO                         TeleportForward = TKO(KeyCode::Mouse2, false);
            SettingsDataTypes::OV<bool> AdminFlag       = true;
        } other{};
    } misc;
};

struct PlayerBackupData
{
    bool adminFlag = false;
};

namespace SettingsData
{
    extern Settings*        settings;
    inline PlayerBackupData playerbackupData{};
} // namespace SettingsData
