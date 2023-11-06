#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"
#include "../il2cpp_api.h"

bool CGamePhysics::LineOfSight(Vector3 src, Vector3 dest, Layers layerMask, float padding, CBaseEntity* ignoreEntity)
{
    static auto addr = OFF(
        Offsets::GamePhysics::StaticMethods::
            LineOfSight_UnityEngine_Vector3_p0__UnityEngine_Vector3_p1__System_Int32_layerMask__System_Single_padding0__System_Single_padding1__BaseEntity_ignoreEntity___null);
    return ((bool (*)(Vector3, Vector3, Layers, float, float, CBaseEntity*))(addr))(src, dest, layerMask, padding,
                                                                                    padding, ignoreEntity);
}

bool CGamePhysics::LineOfSightRadius(Vector3 src, Vector3 dst, Layers layerMask, float radius,
                                  CBaseEntity* ignoreEntity)
{
    static auto addr = OFF(
        Offsets::GamePhysics::StaticMethods::
            LineOfSightRadius_UnityEngine_Vector3_p0__UnityEngine_Vector3_p1__System_Int32_layerMask__System_Single_radius__BaseEntity_ignoreEntity___null);
    return ((bool (*)(Vector3, Vector3, Layers, float, CBaseEntity*))(addr))(src, dst, layerMask, radius,
                                                                                    ignoreEntity);
}

bool CGamePhysics::Raycast(Vector3 origin, Vector3 direction, CRaycastHit* hitInfo, float maxDistance, int layerMask)
{
    static auto addr = OFF(
        Offsets::UnityEngine_Physics::StaticMethods::
            Raycast_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask);

    return ((bool (*)(Vector3, Vector3, CRaycastHit*, float, int))(addr))(origin, direction, hitInfo, maxDistance,
                                                                          layerMask);
}
bool CGamePhysics::Raycast(CRay ray, CRaycastHit* hitInfo, float maxDistance, int32_t layerMask,
                           QueryTriggerInteraction triggerInteraction)
{
    static auto addr = OFF(
        Offsets::UnityEngine_Physics::StaticMethods::
            Raycast_UnityEngine_Ray_ray__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction);

    return ((bool (*)(CRay, CRaycastHit*, float, int32_t, QueryTriggerInteraction))(addr))(
        ray, hitInfo, maxDistance, layerMask, triggerInteraction);
}

void CGamePhysics::IgnoreLayerCollision(Layer layer1, Layer layer2, bool ignore)
{
    // UnityEngine.Physics::IgnoreLayerCollision()
    static auto addr = il2cpp_resolve_icall(_("UnityEngine.Physics::IgnoreLayerCollision"));
    ((void (*)(Layer, Layer, bool))(addr))(layer1, layer2, ignore);
}

bool CGamePhysics::CheckCapsule(Vector3 start, Vector3 end, float radius, int32_t layerMask,
                                QueryTriggerInteraction triggerInteraction)
{
    static auto addr = OFF(
        Offsets::UnityEngine_Physics::StaticMethods::
            CheckCapsule_UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction);

    return ((bool (*)(Vector3, Vector3, float, int32_t, QueryTriggerInteraction))(addr))(start, end, radius, layerMask,
                                                                                         triggerInteraction);
}
bool CGamePhysics::SphereCast(CRay ray, float radius, CRaycastHit* hitInfo, float maxDistance, int layerMask,
                              QueryTriggerInteraction queryTriggerInteraction)
{
    static auto addr = OFF(
        Offsets::UnityEngine_Physics::StaticMethods::
            SphereCast_UnityEngine_Ray_ray__System_Single_radius__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction);

    return ((bool (*)(CRay, float, CRaycastHit*, float, int, QueryTriggerInteraction))(addr))(
        ray, radius, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
}

bool CGamePhysics::Trace(CRay ray, float radius, CRaycastHit* hitInfo, float maxDistance, int32_t layerMask,
                         QueryTriggerInteraction triggerInteraction, CBaseEntity* ignoreEntity)
{
    static auto addr = OFF(
        Offsets::GamePhysics::StaticMethods::
            Trace_UnityEngine_Ray_ray__System_Single_radius__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance______System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___0__BaseEntity_ignoreEntity___null);

    return ((bool (*)(CRay, float, CRaycastHit*, float, int32_t, QueryTriggerInteraction, CBaseEntity*))(addr))(
        ray, radius, hitInfo, maxDistance, layerMask, triggerInteraction, ignoreEntity);
}