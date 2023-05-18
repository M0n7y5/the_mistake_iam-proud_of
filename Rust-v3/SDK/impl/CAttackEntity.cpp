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

bool CAttackEntity::IsMelee()
{
    const auto item   = (CItemDefinition*)(this->GetItem()->info);
    const auto itemId = item->itemid;

    switch (itemId)
    {
        case 1814288539: // knife.bone
        case -194509282: // knife.butcher
        case 2040726127: // knife.combat

        case -1780802565: // icepick.salvaged
        case 1104520648:  // chainsaw
        case 1488979457:  // jackhammer

        case -1360171080: // concretepickaxe
        case -1302129395: // pickaxe
        case 236677901:   // lumberjack.pickaxe
        case 171931394:   // stone.pickaxe
        case -262590403:  // axe.salvaged

        case -196667575:  // flashlight.held
        case 1973165031:  // cakefiveyear
        case 1803831286:  // toolgun
        case 200773292:   // hammer
        case -1506397857: // hammer.salvaged
        case -1583967946: // stonehatchet
        case 1176355476:  // concretehatchet
        case -1252059217: // hatchet
        case -399173933:  // lumberjack.hatchet

        case 963906841:   // rock
        case 795236088:   // torch
        case -1966748496: // mace
        case -1978999529: // salvaged.cleaver
        case -1137865085: // machete
        case 1789825282:  // candycaneclub
        case -1469578201: // longsword
        case 1326180354:  // salvaged.sword
        case 1090916276:  // pitchfork
        case 1540934679:  // spear.wooden
        case 1602646136:  // spear.stone
        case -363689972:  // snowball
            return true;

        default:
            return false;
    }
}