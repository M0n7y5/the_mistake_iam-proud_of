#pragma once
#include "../SDK/structs.h"

namespace Movement
{
    inline float flyhackDistanceVertical      = 0.f;
    inline float flyhackDistanceHorizontal    = 0.f;
    inline float flyhackDistanceVerticalMax   = 0.f;
    inline float flyhackDistanceHorizontalMax = 0.f;

    inline bool    IsWallTeleportPossible = false;
    inline Vector3 TeleportTargetPosition = {};

    void FlyHack(CBasePlayer* player);
    bool TestFlying(CBasePlayer* player, const Vector3& oldPos, const Vector3& newPos, bool verifyGrounded,
                    bool changeValues = true);

    void PreClientInput(CBasePlayer* player);
    void AfterClientInput(CBasePlayer* player);
} // namespace Movement