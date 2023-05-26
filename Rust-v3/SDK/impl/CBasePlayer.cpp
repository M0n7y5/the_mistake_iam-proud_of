#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"

// Impl : CBasePlayer

uint64_t CBasePlayer::GetTeamID()
{
    return this->currentTeam;
}

bool CBasePlayer::IsLocalPlayer()
{
    static auto addr = OFF(Offsets::BasePlayer::Methods::IsLocalPlayer);
    return reinterpret_cast<bool (*)(CBasePlayer*)>(addr)(this);
}

bool CBasePlayer::IsWounded()
{
    return this->HasFlag(PlayerFlags::Wounded);
}

bool CBasePlayer::IsSleeping()
{
    return ((CModelState*)this->modelState)->HasFlag(ModelStateFlags::Sleeping);
}

bool CBasePlayer::InSafeZone()
{
    return this->HasFlag(PlayerFlags::SafeZone);
}

CHeldEntity* CBasePlayer::GetHeldEntity()
{
    auto addr = OFF(Offsets::BasePlayer::Methods::GetHeldEntity);
    return ((CHeldEntity * (__thiscall*)(void*))(addr))(this);
}

float CBasePlayer::MaxHealth()
{
    return 0.0f;
}

float CBasePlayer::StartHealth()
{
    return 0.0f;
}

float CBasePlayer::StartMaxHealth()
{
    return 0.0f;
}

float CBasePlayer::BoundsPadding()
{
    return 0.0f;
}

float CBasePlayer::GetJumpHeight()
{
    return 0.0f;
}

float CBasePlayer::GetRadius()
{
    return 0.0f;
}

float CBasePlayer::NoClipRadius(float margin)
{
    return 0.0f;
}
