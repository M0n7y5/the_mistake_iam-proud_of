#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"

float Bounds::SqrDistance(Vector3 point)
{
    static auto addr = OFF(Offsets::UnityEngine_Bounds::Methods::SqrDistance_UnityEngine_Vector3_point);
    return reinterpret_cast<float (*)(Bounds*, Vector3)>(G::baseGameAssemlby + addr)(this, point);
}