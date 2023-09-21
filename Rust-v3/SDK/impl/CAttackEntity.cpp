#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"

bool CAttackEntity::IsWeaponReady(bool bow)
{
    if (this->nextAttackTime >= CTime::GetTime() || (!bow && this->timeSinceDeploy < this->deployDelay))
        return false;

    return true;
}

void CAttackEntity::StartAttackCooldown(float cooldown)
{
    static auto addr = OFF(Offsets::AttackEntity::Methods::StartAttackCooldown_System_Single_cooldown);
    ((void(__thiscall*)(CAttackEntity*, float))(addr))(this, cooldown);
}
