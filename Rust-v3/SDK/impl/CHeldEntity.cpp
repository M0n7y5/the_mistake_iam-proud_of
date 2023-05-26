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