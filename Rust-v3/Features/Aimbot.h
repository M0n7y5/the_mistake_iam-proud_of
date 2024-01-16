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
        float                   currentMaxDistance{};
        float                   currentMaxAltitude{};
        uint8_t                 maxReachablePoints{};
        Vector3                 direction{};
        std::array<Vector3, 22> points{};
    };

    // inline int   defaultDensity = 400;
    // inline float angleLimit     = 120.f;
    // inline float sideAngleLimit = 22.f;
    // inline float rayDistance    = 13.f;
    // inline float rayDivider     = 16.f;

    inline std::vector<Vector3>  currentSpherePoints;
    inline std::vector<TraceRay> currentTraceRays;
    inline std::vector<TraceRay> currentTPTraceRays;
    inline std::vector<TraceRay> desyncNormalizedTraceRays;
    inline std::vector<TraceRay> bulletTPNormalizedTraceRays;
} // namespace HitScanner

namespace Aimbot
{
    // backup data for disabling things
    struct WeaponBackupData
    {
        bool automatic{};
        bool OverrideAimconeWithCurve{};
        bool UseCurves{};
        bool IsBaseLauncher{};

        CBaseProjectile* wep{};

        float Aimcone{};
        float HipAimcone{};
        float AimConePenalty{};
        float AimConePenaltyMax{};
        float AimConePenaltyPreShot{};
        float ProjectileVelocityScale = 1.f;
        float RecoilYawMin{};
        float RecoilYawMax{};
        float RecoilPitchMin{};
        float RecoilPitchMax{};
        float MaxRecoilRadius{};
        float AimconeCurveScale{};
        float AimSway{};
    };

    struct AmmoBackupData
    {
        float ProjectileSpread{};
        float VelocitySpread{};
        float SpreadAngle{};
        float SpreadVelocityMin{};
        float SpreadVelocityMax{};

        // for prediction
        float projectileInitialDistance{};
        float Drag{};
        float GravityModifier = 1.f;
        float ProjectileVelocity{};

        //?
        bool projectileHasComponents = false;

        CItemModProjectile* mod;
        bool                isSpawn = false;
    };

    // inline WeaponBackupData* currentlyManagedWeapon{};
    // inline AmmoBackupData*   currentlyManagedAmmo{};

    inline int32_t  currentlyManagedAmmoID{};
    inline uint32_t currentlyManagedWeaponID{};

    // key prefabID
    inline ankerl::unordered_dense::map<uint32_t, WeaponBackupData> weaponBackupData{};
    // key itemID
    inline ankerl::unordered_dense::map<int32_t, AmmoBackupData> ammoBackupData{};

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
    inline LauncherPredictionInfo launcherInfo{};
    inline TargetInfo             CurrentTarget{};
    inline Vector3                PredictedPosition       = {};
    inline Vector3                DesyncOffset            = {};
    inline Vector3                DesyncPredictedPosition = {};

    void ClientInput(CBasePlayer* localPlayer);
    void LateUpdate();
} // namespace Aimbot