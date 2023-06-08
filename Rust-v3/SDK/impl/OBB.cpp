#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"

Bounds OBB::ToBounds()
{
    static auto addr = OFF(Offsets::OBB::Methods::ToBounds);
    return ((Bounds(__thiscall*)(OBB*))(addr))(this);
}

Vector3 OBB::ClosestPoint(Vector3 position)
{
    static auto addr = OFF(Offsets::OBB::Methods::ClosestPoint_UnityEngine_Vector3_target);
    return ((Vector3(__thiscall*)(OBB*, Vector3))(addr))(this, position);
}
