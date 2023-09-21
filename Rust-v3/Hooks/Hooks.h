#pragma once
#include "BasePlayer.h"
#include "ItemIcon.h"
#include "PlayerWalkMovement.h"
#include "Projectile.h"
#include "PerformanceText.h"
#include "MainCamera.h"
#include "Client.h"
#include "UIBlackoutOverlay.h"
#include "BaseProjectile.h"
#include "Shared.h"
#include "EntityList.h"

inline void InitHooks()
{
    using namespace Hooks;
    BasePlayer::Init();
    PlayerWalkMovement::Init();
    ItemIcon::Init();
    Projectile::Init();
    PerformanceText::Init();
    UIBlackoutOverlay::Init();
    BaseProjectile::Init();
    Shared::Init();
    MainCamera::Init();
    EntityList::Init();
}

// we just hook this first and rest in Game Thread
inline void PreInitHooks()
{
    using namespace Hooks;

    Client::Init();
}