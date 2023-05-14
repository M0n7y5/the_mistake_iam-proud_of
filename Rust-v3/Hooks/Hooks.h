#pragma once
#include "BasePlayer.h"
#include "ItemIcon.h"
#include "PlayerWalkMovement.h"
#include "Projectile.h"

inline void InitHooks()
{
    using namespace Hooks;
    BasePlayer::Init();
    PlayerWalkMovement::Init();
    ItemIcon::Init();
    Projectile::Init();
}
