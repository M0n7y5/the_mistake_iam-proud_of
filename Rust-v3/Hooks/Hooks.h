#pragma once
#include "BasePlayer.h"
#include "ItemIcon.h"
#include "PlayerWalkMovement.h"
#include "Projectile.h"
#include "PerformanceText.h"
#include "MainCamera.h"
#include "Client.h"
#include "EntityList.h"

inline void InitHooks()
{
    using namespace Hooks;
    BasePlayer::Init();
    PlayerWalkMovement::Init();
    ItemIcon::Init();
    Projectile::Init();
    PerformanceText::Init();
    MainCamera::Init();
    Client::Init();
    EntityList::Init();
}
