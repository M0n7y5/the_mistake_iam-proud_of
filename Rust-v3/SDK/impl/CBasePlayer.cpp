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
    return this->_maxHealth;
}

float CBasePlayer::MaxVelocity()
{
    auto addr = OFF(Offsets::BasePlayer::Methods::MaxVelocity);
    return ((float(__thiscall*)(void*))(addr))(this);
}

float CBasePlayer::WaterFactor()
{
    auto addr = OFF(Offsets::BasePlayer::Methods::WaterFactor);
    return ((float(__thiscall*)(void*))(addr))(this);
}

bool CBasePlayer::OnLadder()
{
    auto addr = OFF(Offsets::BasePlayer::Methods::OnLadder);
    return ((bool(__thiscall*)(void*))(addr))(this);
}

CItem* CBasePlayer::GetActiveItem()
{
    if (this->clActiveItem.fields.Value <= 0UL)
        return nullptr;

    if (this->GetLifeState() == LifeState::Dead)
        return nullptr;

    if (this->inventory == nullptr || this->inventory->fields.containerBelt == nullptr)
        return nullptr;

    auto container = (CItemContainer*)this->inventory->fields.containerBelt;

    return container->FindItemByUID(this->clActiveItem);
}

float CBasePlayer::StartHealth()
{
    return this->startHealth;
}

Vector3 CBasePlayer::GetMountVelocity()
{
    auto addr = OFF(Offsets::BasePlayer::Methods::GetMountVelocity);
    return ((Vector3(__thiscall*)(void*))(addr))(this);
}

// float CBasePlayer::StartMaxHealth()
// {
//     return this->max
// }

float CBasePlayer::BoundsPadding()
{
    return 0.1f;
}

float CBasePlayer::GetJumpHeight()
{
    return 1.5f;
}

float CBasePlayer::GetRadius()
{
    return 0.5f;
}

float CBasePlayer::NoClipRadius(float margin)
{
    return GetRadius() - margin;
}
void CBasePlayer::OnLand(float velocity)
{
    static auto addr = OFF(Offsets::BasePlayer::Methods::OnLand_System_Single_fVelocity);
    reinterpret_cast<void (*)(CBasePlayer*, float)>(addr)(this, velocity);
}

// float CBasePlayer::GetPlayerSpeedMaximum(bool flyhackActive)
// {
//     using namespace
//     auto* modelState = (CModelState*)this->modelState;

//     float mult = 1.f;
//     mult -= this->clothingMoveSpeedReduction;

//     if (modelState->waterLevel >= _flt(0.675f))
//         mult += this->clothingWaterSpeedBonus;

//     float ducking = (modelState->HasFlag(ModelStateFlags::Ducked) ||
//                      (modelState->waterLevel >= _flt(0.675f) && !flyhackActive) ||
//                      modelState->HasFlag(ModelStateFlags::OnLadder));

//     Vector3 vec1 = {_flt(2.8f), _flt(5.5f), 1.f};
//     Vector3 vec2 = {vec1.Lerp(), _flt(1.7f), ducking};

//     return vec2.Lerp() * mult;
// };