#pragma once
#include "../SDK/structs.h"
#include "../SDK/math.h"
#include "../SDK/utils.h"

namespace Aimbot
{
    enum class TargetType
    {
        Invalid = -1,
        Player  = 0,
        Heli,
        Trap,
        GunTrap,
        SAM
    };

    struct TargetInfo
    {
        CBaseCombatEntity* entity = nullptr;
        TargetType         type   = TargetType::Invalid;

        TargetInfo(CBaseCombatEntity* _entity, TargetType _type)
        {
            entity = _entity;
            type   = _type;
        }

        TargetInfo()
        {
            entity = nullptr;
            type   = TargetType::Invalid;
        }
    };

    inline Utils::FOVCalc FOV{};
    inline Vector3        PredictedPosition = {};

    void ClientInput();
} // namespace Aimbot