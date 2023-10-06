#pragma once
#include "../SDK/structs.h"
#include "../SDK/math.h"
#include "../SDK/utils.h"
#include "EntityManager.h"
#include <array>
#include <vector>
#include "../mrt/circular_buffer.h"

namespace HitScanner
{
    struct TraceRay
    {
        float                   priority{};
        float                   maxDistance{};
        uint8_t                 maxReachablePoints{};
        Vector3                 direction{};
        std::array<Vector3, 22> points{};
    };

    inline int   defaultDensity = 400;
    inline float angleLimit     = 120.f;
    inline float sideAngleLimit = 22.f;
    inline float rayDistance    = 13.f;
    inline float rayDivider     = 16.f;

    inline std::vector<Vector3>  currentSpherePoints;
    inline std::vector<TraceRay> currentTraceRays;
    inline std::vector<TraceRay> testNormalizedTraceRays;
} // namespace HitScanner

namespace Aimbot
{
    enum class TargetType
    {
        Invalid = -1,
        Player  = 0,
        Heli,
        Trap,
        GunTrap,
        SAM,
        // special case for hotbar
        HotBar = 20
    };

    struct TargetInfo
    {
        EntityManager::Entity<CBaseCombatEntity>* entity = nullptr;
        TargetType                                type   = TargetType::Invalid;

        CircularBuffer<Vector3> velocities{32};
        Vector3                 averageVelocity{};
        Vector3                 TargetPos{};

        TargetInfo(EntityManager::Entity<CBaseCombatEntity>* _entity, TargetType _type)
        {
            entity = _entity;
            type   = _type;
        }

        TargetInfo()
        {
            entity = nullptr;
            type   = TargetType::Invalid;
        }
    };

    struct LauncherPredictionInfo
    {
        bool     valid{};
        Vector3  hitPoint{};
        Vector4  rotation{};
        float    travelDist{};
        float    travelTime{};
        uint32_t weaponID{};

        LauncherPredictionInfo()
            : valid(false), hitPoint(Vector3{}), rotation(Vector4{}), travelDist(_flt(0.f)), travelTime(_flt(0.f)){};
    };

    inline Utils::FOVCalc         FOV{};
    inline Vector3                PredictedPosition = {};
    inline LauncherPredictionInfo launcherInfo{};
    inline TargetInfo             CurrentTarget{};

    void ClientInput();
    void LateUpdate();
} // namespace Aimbot