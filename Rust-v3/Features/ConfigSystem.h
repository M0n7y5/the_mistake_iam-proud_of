#pragma once

#include <stdint.h>
#include <string>
#include <unordered_map>
#include <variant>
#include <vector>

#define ALPACA_EXCLUDE_SUPPORT_STD_MAP
#define ALPACA_EXCLUDE_SUPPORT_STD_UNIQUE_PTR
#define ALPACA_EXCLUDE_SUPPORT_STD_OPTIONAL
#define ALPACA_EXCLUDE_SUPPORT_STD_SET
#define ALPACA_EXCLUDE_SUPPORT_STD_TUPLE
#define ALPACA_EXCLUDE_SUPPORT_STD_UNORDERED_SET
#define ALPACA_EXCLUDE_SUPPORT_STD_PAIR
#define ALPACA_EXCLUDE_SUPPORT_STD_MAP

#include "../mrt/alpaca/alpaca.h"
#include "../mrt/constexpr-xxh3.h"
#include "../SDK/settings.h"
#include "EntityManager.h"

using namespace SettingsData;

// Manual increment this when something changes in the cfg layout
constexpr uint64_t SchemaVersionNumber = 1;

namespace Config
{
    using ValType = std::variant<bool, int, float, ImColor, TCO, TKO, std::string>;

    // Player DB Data
    struct PlayerData
    {
        uint64_t    SteamID{};
        bool        IsFriend{};
        bool        Highlight{};
        bool        IsCheater{};
        std::string Notes{};
    };

    struct ConfigFile
    {
        uint64_t                              Header{'REKT'};
        uint64_t                              SchemaVersion{};
        uint64_t                              Created{};
        uint64_t                              Updated{};
        std::string                           Name{};
        std::unordered_map<uint64_t, ValType> SettingsKV{};
        std::vector<PlayerData>                 PlayerDB{};
        //skinz maybe?
    };

    // key/values settings
    inline std::unordered_map<uint64_t, ValType> settingsKV{};

#define VAL(x)                                                                                                         \
    if constexpr (isSaving)                                                                                            \
        settingsKV[constexpr_xxh3::XXH3_64bits_withSeed_const(#x, 0)] = x;                                             \
    else                                                                                                               \
    {                                                                                                                  \
        if (settingsKV.count(CONST_XHASH(#x, 0)) == 1)                                                                 \
        {                                                                                                              \
            constexpr auto hash = constexpr_xxh3::XXH3_64bits_withSeed_const(#x, 0);                                   \
            x                   = std::get_if<decltype(x)>(settingsKV[hash]);                                          \
        }                                                                                                              \
    }

    template <bool isSaving = false> inline void ProcessKV()
    {
        settingsKV.clear();

        settings->ragebot.general.aimbot.aim =
            std::get_if<decltype(settings->ragebot.general.aimbot.aim)>(ValType{ImColor{}});

        // long ass list
        VAL(settings->ragebot.general.aimbot.aim);
        VAL(settings->ragebot.general.aimbot.aim);
        VAL(settings->ragebot.general.aimbot.aim);
        VAL(settings->ragebot.general.aimbot.aim);
        VAL(settings->ragebot.general.aimbot.aim);
        VAL(settings->ragebot.general.aimbot.aim);
        VAL(settings->ragebot.general.aimbot.aim);
    }

} // namespace Config
