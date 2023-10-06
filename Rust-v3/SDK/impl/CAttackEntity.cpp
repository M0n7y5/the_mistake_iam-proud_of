#include "../structs.h"
#include "../prefab_ids.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"

bool CAttackEntity::IsWeaponReady()
{
    auto bow = this->prefabID == prefabs::weapon::hunting_bow || this->prefabID == prefabs::weapon::coumpound_bow;

    if (this->nextAttackTime >= CTime::GetTime() || (!bow && this->timeSinceDeploy < this->deployDelay))
        return false;

    return true;
}

void CAttackEntity::StartAttackCooldown(float cooldown)
{
    static auto addr = OFF(Offsets::AttackEntity::Methods::StartAttackCooldown_System_Single_cooldown);
    ((void(__thiscall*)(CAttackEntity*, float))(addr))(this, cooldown);
}
