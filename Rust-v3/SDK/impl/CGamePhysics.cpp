#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"

bool CGamePhysics::LineOfSight(Vector3 src, Vector3 dest, Layers layerMask, float padding, CBaseEntity* ignoreEntity)
{
    static auto addr = OFF(
        Offsets::GamePhysics::StaticMethods::
            LineOfSight_UnityEngine_Vector3_p0__UnityEngine_Vector3_p1__System_Int32_layerMask__System_Single_padding0__System_Single_padding1__BaseEntity_ignoreEntity___null);
    return ((bool (*)(Vector3, Vector3, Layers, float, float, CBaseEntity*))(addr))(src, dest, layerMask, padding,
                                                                                    padding, ignoreEntity);
}

bool CGamePhysics::Raycast(Vector3 origin, Vector3 direction, CRaycastHit* hitInfo, float maxDistance, int layerMask)
{
    static auto addr = OFF(
        Offsets::UnityEngine_Physics::StaticMethods::
            Raycast_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask);

    return ((bool (*)(Vector3, Vector3, CRaycastHit*, float, int))(addr))(origin, direction, hitInfo, maxDistance,
                                                                          layerMask);
}