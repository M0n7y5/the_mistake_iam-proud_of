#pragma once
#include "BasePlayer.h"
#include "ItemIcon.h"
#include "PlayerWalkMovement.h"
#include "Projectile.h"
#include "PerformanceText.h"
#include "MainCamera.h"

inline void InitHooks()
{
    using namespace Hooks;
    BasePlayer::Init();
    PlayerWalkMovement::Init();
    ItemIcon::Init();
    Projectile::Init();
    PerformanceText::Init();
    MainCamera::Init();
}
