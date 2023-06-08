#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"

void CTerrainCollision::Reset(CColider* collider)
{
    static auto addr = OFF(Offsets::TerrainCollision::Methods::Reset_UnityEngine_Collider_collider);
    ((void(__thiscall*)(void*, void*))(addr))(this, collider);
}
