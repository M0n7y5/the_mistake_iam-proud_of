#include "../ui/imgui/imgui.h"

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

    struct Visuals
    {
        struct ToggleColorOption
        {
            ImColor Color {};
            bool    Enable = false;

            constexpr ToggleColorOption(int r = 0.f, int g = 0.f, int b = 0.f, int a = 0.f, bool enabled = false)
            {
                Color  = ImColor(r, g, b, a);
                Enable = enabled;
            }
        };

        struct Chams
        {
            ImColor colChamsVis      = ImColor(255, 30, 30, 255);
            ImColor colChamsInvis    = ImColor(30, 255, 30, 255);
            ImColor colChamsAdditive = ImColor(30, 30, 255, 255);

            float ChamsGlowTime         = (1.f);
            float ChamsGlowIntensity    = (2.f);
            float ChamsOutlineThickness = (0.0035f);
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
            ToggleColorOption Wounded     = {252, 148, 3, true};

            Chams chams {};
        };

        struct General
        {
            bool Enabled             = true;
            bool Sleepers            = false;
            bool TeamAsFriends       = true;
            bool ForceSkeletonUpdate = false;
            int  SkeletonDistance    = 100.f;

            struct Misc
            {
                ToggleColorOption colSleepers = ToggleColorOption(252, 169, 3);
                ToggleColorOption colTeammate = ToggleColorOption(0, 255, 0);
            } misc;

            Player friends {};
            Player enemies {};
            Player npc {};

        } general;

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

            } general;

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
            } colors;
        } collectibles;

        struct Radtown
        {
            struct General
            {
                bool Enabled             = false;
                bool Fade                = false;
                bool AntiClutter         = false;
                int  Distance            = 80;
                int  MaxAnticlutterCount = 5;
            } general;

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
        } radtown;

        struct Ores
        {
            struct General
            {
                bool Enabled             = false;
                bool Fade                = false;
                bool AntiClutter         = false;
                int  Distance            = 150;
                int  MaxAnticlutterCount = 5;
            } general;

            struct Colors
            {
                ToggleColorOption stone  = {155, 155, 155};
                ToggleColorOption sulfur = {239, 201, 31};
                ToggleColorOption metal  = {86, 66, 50};
            } colors;
        } ores;

        struct Animals
        {
            struct General
            {
                bool Enabled  = false;
                bool Fade     = false;
                int  Distance = 150;
                bool Bear     = true;
                bool Boar     = true;
                bool Wolf     = true;
                bool Stag     = false;
            } general;

            struct Colors
            {
                ToggleColorOption animals = {203, 130, 255};
            } colors;
        } animals;

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
            } general;

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
            } colors;
        } vehicles;

    } visuals;
};

static Settings settings {};
