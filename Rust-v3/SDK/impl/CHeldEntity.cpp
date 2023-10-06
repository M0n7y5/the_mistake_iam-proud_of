#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"

CItem* CHeldEntity::GetItem()
{
    static auto addr = OFF(Offsets::HeldEntity::Methods::GetItem);
    return ((CItem * (__thiscall*)(void*))(addr))(this);
}

bool CHeldEntity::IsBaseProjectile()
{
    if (auto item = this->GetItem())
    {
        if (auto itemdef = (CItemDefinition*)item->info)
        {
            switch (itemdef->itemid)
            {
            // RIFLE AMMO
            case 1545779598:  // assault rifle
            case -1335497659: // ICE AK 
            case -1812555177: // LR-300 Assault Rifle
            case -904863145:  // Semi-Automatic Rifle
            case 1588298435:  // Bolt Action Rifle
            case -778367295:  // L96 Rifle
            case 28201841:    // M39 Rifle
            case -2069578888: // M249
            case -1214542497: // HMLMG
            case -139037392:  // Abyss AK

            // PISTOL AMMO
            case 1796682209:  // Custom SMG
            case 1318558775:  // MP5A4
            case -852563019:  // M92 Pistol
            case 1373971859:  // Python Revolver
            case 649912614:   // Revolver
            case 818877484:   // Semi-Automatic Pistol
            case -1758372725: // Thompson

            // SHOTGUNS
            case -765183617:  // Double Barrel Shotgun
            case 795371088:   // Pump Shotgun
            case -1367281941: // Waterpipe Shotgun
            case -41440462:   // Spas-12 Shotgun
            case -75944661:   // Eoka Pistol

            // ARROWS
            case 1443579727: // Hunting Bow
            case 884424049:  // Compound Bow
            case 1965232394: // Crossbow

            case 1953903201:  // Nailgun
            case 442886268:   // rocket launcher
            case -1123473824: // grenade launcher
                return true;

            default:
                return false;
            }
        }
    }
    return false;
}

bool CHeldEntity::IsMelee()
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