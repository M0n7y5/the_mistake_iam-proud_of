#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"

float CBaseCombatEntity::MaxPlayerVelocity()
{
    static auto addr = OFF(Offsets::BasePlayer::Methods::MaxVelocity);
    return reinterpret_cast<float (*)(CBaseCombatEntity*)>(G::baseGameAssemlby + addr)(this);
}