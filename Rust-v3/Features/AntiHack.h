#pragma once
#include "../SDK/structs.h"
#include "../SDK/il2cpp_api.h"
#include "../SDK/settings.h"
#include "../SDK/prefab_ids.h"
#include <algorithm>
#include <array>
#include <exception>
#include <numeric>
#include <span>
#include <stdint.h>
#include <vector>
#include <xutility>
#include <ranges>

namespace AntiHack
{
    inline constexpr float maxdesync    = 1.f;
    inline constexpr float maxdeltatime = 1.f;

    inline constexpr float flyhack_extrusion                      = 2.f;
    inline constexpr float flyhack_margin                         = 0.05f;
    inline constexpr float flyhack_stepsize                       = 0.1f;
    inline constexpr float flyhack_maxsteps                       = 15.f;
    inline constexpr float flyhack_forgiveness_vertical           = 1.5f;
    inline constexpr float flyhack_forgiveness_vertical_inertia   = 10.f;
    inline constexpr float flyhack_forgiveness_horizontal         = 1.5f;
    inline constexpr float flyhack_forgiveness_horizontal_inertia = 10.f;

    inline constexpr float eye_forgiveness         = 0.5f;
    inline constexpr float eye_serverframes        = 2.f;
    inline constexpr float eye_clientframes        = 2.f;
    inline constexpr float eye_noclip_cutoff       = 0.06f;
    inline constexpr float eye_noclip_margin       = 0.21f;
    inline constexpr float eye_noclip_backtracking = 0.01f;
    inline constexpr float eye_losradius           = 0.18f;
    inline constexpr float eye_history_forgiveness = 0.1f;
    inline constexpr bool  eye_terraincheck        = true;
    inline constexpr bool  eye_vehiclecheck        = true;

    inline constexpr float noclip_margin       = 0.09f;
    inline constexpr float noclip_stepsize     = 0.1f;
    inline constexpr int   noclip_maxsteps     = 15;
    inline constexpr float noclip_backtracking = 0.01f;

    inline constexpr float eyeForgivenessBase = 1.f + eye_forgiveness;
    inline constexpr float eyeClientFrameStep = eye_clientframes / 60.f;

    inline bool TestNoClipping(Vector3 oldPos, Vector3 newPos, float radius, float backtracking, bool sphereCast,
                               CCollider* collider = nullptr, bool vehicleLayer = false,
                               CBaseEntity* ignoreEntity = nullptr, float* maxDistance = nullptr)
    {
        CRaycastHit raycastHit{};

        int32_t layerMask = 429990145;
        if (vehicleLayer == false)
        {
            layerMask &= -8193;
        }
        Vector3 positionDelta            = newPos - oldPos;
        Vector3 direction                = positionDelta.Normalized();
        Vector3 maximumBacktrackPosition = oldPos - (direction * backtracking);

        positionDelta = newPos - maximumBacktrackPosition;

        float positionDeltaMagnitude = positionDelta.Magnitude();

        CRay ray = {maximumBacktrackPosition, direction};

        bool flag = false;

        if (ignoreEntity == nullptr)
        {
            flag = CGamePhysics::Raycast(ray, &raycastHit, positionDeltaMagnitude + radius, layerMask,
                                         QueryTriggerInteraction::Ignore);
        }
        else
        {
            flag = CGamePhysics::Trace(ray, 0.f, &raycastHit, positionDeltaMagnitude + radius, layerMask,
                                       QueryTriggerInteraction::Ignore, ignoreEntity);
        }

        if (flag == false && sphereCast)
        {
            if (ignoreEntity == nullptr)
            {
                flag = CGamePhysics::SphereCast(ray, radius, &raycastHit, positionDeltaMagnitude, layerMask,
                                                QueryTriggerInteraction::Ignore);
            }
            else
            {
                flag = CGamePhysics::Trace(ray, radius, &raycastHit, positionDeltaMagnitude, layerMask,
                                           QueryTriggerInteraction::Ignore, ignoreEntity);
            }
        }

        // collider = raycastHit.collider;

        // if (flag == false)
        // {
        // 	return false;
        // }

        // return GamePhysics.Verify(raycastHit, null);

        if (flag)
        {
            if (maxDistance != nullptr)
            {
                *maxDistance = raycastHit.m_Distance;
            }
        }

        return flag;
    }

    inline float MaximumDesyncDistance(CBasePlayer* player)
    {
        float eyeServerFrameStep =
            eye_serverframes *
            std::max<float>({CTime::GetDeltaTime(), CTime::GetSmoothDeltaTime(), CTime::GetFixedDeltaTime()});
        float eyeForgivnessThisFrame = (0.99f + eyeClientFrameStep + eyeServerFrameStep) * eyeForgivenessBase;

        auto  parentVelocity          = player->GetParentVelocity();
        auto  playerMaxVel            = player->MaxVelocity();
        float maxVelocity             = playerMaxVel + parentVelocity.Magnitude();
        float positionDeltaForgivness = player->BoundsPadding() + eyeForgivnessThisFrame * maxVelocity;

        return positionDeltaForgivness;
    }

    inline float MaximumDesyncAltitude(CBasePlayer* player)
    {
        float eyeServerFrameStep =
            eye_serverframes *
            std::max<float>({CTime::GetDeltaTime(), CTime::GetSmoothDeltaTime(), CTime::GetFixedDeltaTime()});
        float eyeForgivnessThisFrame = (0.99f + eyeClientFrameStep + eyeServerFrameStep) * eyeForgivenessBase;

        float maxAltitude = std::abs(player->GetMountVelocity().y + player->GetParentVelocity().y);
        float maxAltitudeThisFrame =
            player->BoundsPadding() + eyeForgivnessThisFrame * maxAltitude + player->GetJumpHeight();

        return maxAltitudeThisFrame;
    }

    inline bool IsNoClipping(CBasePlayer* ply, Vector3 startPoint, Vector3 endPoint, float* maxDist = nullptr)
    {
        auto noclipOffset = ply->NoClipOffset();
        auto noclipRadius = ply->NoClipRadius(noclip_margin);

        return TestNoClipping(startPoint + noclipOffset, endPoint + noclipOffset, noclipRadius, noclip_backtracking,
                              true, nullptr, true, nullptr, maxDist);
    }

    inline bool ValidateEyePos(CBasePlayer* player, Vector3 eyePos, bool checkLineOfSight = true,
                               int eyeProtectionLevel = 4)
    {
        // eye pos is valid = true
        bool isValid = true;

        float eyeForgiveness     = 1.f + eye_forgiveness;
        float eyeClientframes    = eye_clientframes;
        float eyeServerframes    = eye_serverframes;
        float eyeClientFrameStep = eyeClientframes / 60.f;
        float eyeServerFrameStep =
            eyeServerframes *
            std::max<float>({CTime::GetDeltaTime(), CTime::GetSmoothDeltaTime(), CTime::GetFixedDeltaTime()});
        float eyeForgivnessThisFrame =
            (player->GetDesyncTimeClamped() + eyeClientFrameStep + eyeServerFrameStep) * eyeForgiveness;

        auto currentEyePosition = ((CPlayerEyes*)player->eyes)->GetPosition();
        auto currentEyeCenter   = ((CPlayerEyes*)player->eyes)->GetCenter();

        // distance check
        if (eyeProtectionLevel >= 1)
        {
            float maxVelocity                 = player->MaxVelocity() + player->GetParentVelocity().Magnitude();
            float positionForgivnessThisFrame = player->BoundsPadding() + eyeForgivnessThisFrame * maxVelocity;
            isValid                           = currentEyePosition.distance(eyePos) < positionForgivnessThisFrame;
        }

        // altitude check
        if (eyeProtectionLevel >= 3)
        {
            float maxAltitude = std::abs(player->GetMountVelocity().y + player->GetParentVelocity().y);
            float maxAltitudeThisFrame =
                player->BoundsPadding() + eyeForgivnessThisFrame * maxAltitude + player->GetJumpHeight();
            float altitudeDelta = std::abs(currentEyePosition.y - eyePos.y);
            isValid             = altitudeDelta < maxAltitudeThisFrame;
        }

        // LOS check
        if (checkLineOfSight)
        {
            // TODO: make this dynamic?
            int layerLOSMask = 2162688;

            if (eye_terraincheck)
            {
                layerLOSMask |= 8388608;
            }
            if (eye_vehiclecheck)
            {
                layerLOSMask |= 134217728;
            }

            if (eyeProtectionLevel >= 2)
            {
                Vector3 eyeCenter          = currentEyeCenter;
                Vector3 currentEyePosition = currentEyeCenter;
                Vector3 eyePosCopy         = eyePos;

                auto hasLOS =
                    CGamePhysics::LineOfSightRadius(eyeCenter, currentEyePosition, (Layers)layerLOSMask, eye_losradius);

                if (hasLOS == false)
                {
                    hasLOS = CGamePhysics::LineOfSightRadius(currentEyePosition, eyePosCopy, (Layers)layerLOSMask,
                                                             eye_losradius);
                }

                isValid = hasLOS;
            }

            // noclip check
            if (eyeProtectionLevel >= 4 && player->HasParent() == false)
            {
                Vector3 currentEyePos = currentEyePosition;
                Vector3 eyePosCopy    = eyePos;
                float   eyePosDelta   = currentEyePos.distance(eyePosCopy);

                if (eyePosDelta > eye_noclip_cutoff)
                {
                    if (TestNoClipping(currentEyePos, eyePosCopy, player->NoClipRadius(eye_noclip_margin),
                                       eye_noclip_backtracking, eyeProtectionLevel >= 2))
                    {
                        isValid = false;
                    }
                }
                else if (eyePosDelta > 0.01f && TestNoClipping(currentEyePos, eyePosCopy, 0.01f,
                                                               eye_noclip_backtracking, eyeProtectionLevel >= 2))
                {
                    isValid = false;
                }
            }
        }

        return isValid;
    }
}; // namespace AntiHack