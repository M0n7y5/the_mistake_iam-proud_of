#include "Aimbot.h"
#include "../SDK/structs.h"
#include "../SDK/il2cpp_api.h"
#include "../SDK/settings.h"
#include "../ui/ESP.h"
#include "EntityManager.h"
#include <algorithm>
#include <exception>
#include <numeric>
#include <span>
#include <stdint.h>
#include <vector>
#include <xutility>
#include <ranges>

using namespace SettingsData;

namespace Aimbot
{
#define MinimumUserAddress (uint64_t)0xffffff
#define MaximumUserAddress (uint64_t)0x00007FFFFFFFFFFF

    template <typename T> inline bool IsAddressValid(T address)
    {
        return ((uint64_t)(address) >= (uint64_t)(MinimumUserAddress) &&
                (uint64_t)(address) <= (uint64_t)(MaximumUserAddress));
    }

    // backup data for disabling things
    struct WeaponBackupData
    {
        bool automatic{};
        bool OverrideAimconeWithCurve{};
        bool UseCurves{};
        bool IsBaseLauncher{};

        float Aimcone{};
        float HipAimcone{};
        float ProjectileVelocityScale = 1.f;
        float RecoilYawMin{};
        float RecoilYawMax{};
        float RecoilPitchMin{};
        float RecoilPitchMax{};
        float MaxRecoilRadius{};
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
    // key prefabID
    ankerl::unordered_dense::map<uint32_t, WeaponBackupData> weaponBackupData{};
    // key itemID
    ankerl::unordered_dense::map<int32_t, AmmoBackupData> ammoBackupData{};

    int32_t               currentlyManagedAmmoID{};
    const AmmoBackupData* currentlyManagedAmmo{};

    uint32_t                currentlyManagedWeaponID{};
    const WeaponBackupData* currentlyManagedWeapon{};

    float currentVelocityScalarModifier = 1.f; // 1 in scalar => no change

    // TargetInfo PreviousTarget;
    TargetInfo   CurrentTarget{};
    CCamera*     camera      = nullptr;
    CBasePlayer* localPlayer = nullptr;

    // float drag;
    // float gravityModifier;
    // float projectileVelocity;
    // float projectileVelocityScale = 1.f;
    // bool  projectileHasComponents = false;
    // float projectileInitialDistance;

    static bool GetBestTarget(TargetInfo& target)
    {
        using namespace EntityManager;

        int           bestDistance = INT_MAX;
        const Player* bestPlayer   = nullptr;

        bool overrideRequested = false;

        for (const auto& p : DB::players)
        {
            if (p.entity->m_CachedPtr == 0 || p.entity->_IsDestroyed_k__BackingField == true)
                continue;

            if (p.entity->IsSleeping() || p.entity->IsWounded() || p.entity->InSafeZone() ||
                p.entity->_health <= _flt(0.f) || (LifeState)p.entity->lifestate == LifeState::Dead)
                continue;

            Vector3 aimHitBoxPos{};
            if (p.entity->playerModel->fields._IsNpc_k__BackingField)
                aimHitBoxPos =
                    ((CModel*)p.entity->model)->GetBonePosition(settings->ragebot.general.targeting.NPCHitbox);
            else
                aimHitBoxPos =
                    ((CModel*)p.entity->model)->GetBonePosition(settings->ragebot.general.targeting.PlayerHitbox);

            if (settings->ragebot.general.targeting.VisCheck)
            {
                if (!CGamePhysics::LineOfSight(((CPlayerEyes*)localPlayer->eyes)->GetPosition(), aimHitBoxPos,
                                               Layers::EntityLineOfSightCheck))
                    continue;
            }

            if (std::find(DB::priorityIDs.begin(), DB::priorityIDs.end(), p.entity->userID) != DB::priorityIDs.end())
            {
                bestDistance      = 0.f;
                bestPlayer        = &p;
                overrideRequested = true;

                target.entity = (Entity<CBaseCombatEntity>*)bestPlayer;
                target.type   = TargetType::Player;

                return true;
            }

            auto dist = FOV.DistanceFromCenterEx(aimHitBoxPos);

            if (dist < bestDistance)
            {
                bestDistance = dist;
                bestPlayer   = &p;
            }
        }

        if (bestDistance > FOV.GetRadiusPx())
            return false;

        target.entity = (Entity<CBaseCombatEntity>*)bestPlayer;
        target.type   = TargetType::Player;

        Vector3 aimHitBoxPos{};
        if (bestPlayer->entity->playerModel->fields._IsNpc_k__BackingField)
            aimHitBoxPos =
                ((CModel*)bestPlayer->entity->model)->GetBonePosition(settings->ragebot.general.targeting.NPCHitbox);
        else
            aimHitBoxPos =
                ((CModel*)bestPlayer->entity->model)->GetBonePosition(settings->ragebot.general.targeting.PlayerHitbox);

        target.TargetPos = aimHitBoxPos;

        return true;
    }

    bool BulletPredictionNoVel(const Vector3& shootPos, const Vector3& targetAimPos, Vector3& aimAtPos,
                               float& timeToTravel)
    {
        Vector3 startPos = shootPos;

        auto vel = currentlyManagedAmmo->ProjectileVelocity;
        vel *= currentVelocityScalarModifier;

        float speed      = vel * currentlyManagedWeapon->ProjectileVelocityScale;
        float gravityMod = currentlyManagedAmmo->GravityModifier;
        float drag       = currentlyManagedAmmo->Drag;

        const float radius   = _flt(0.05f);
        const float diameter = radius * _flt(2.f);
        const float stepSize = _flt(0.03125f);

        int currentIter = 0;

        Vector3 targetPos         = targetAimPos;
        Vector3 aimPos            = targetPos;
        Vector3 closestAimPos     = targetPos;
        float   closestAimPosDist = FLT_MAX;
        float   closestTravelTime = -_flt(1.f);

        while (currentIter++ < 35)
        {
            Vector3 startDir = (aimPos - startPos).Normalized();
            Vector3 startVel = startDir * speed;

            Vector3 currentVel  = startVel;
            Vector3 currentPos  = startPos;
            Vector3 prevPos     = currentPos;
            Vector3 prevPrevPos = prevPos;
            float   prevDist    = FLT_MAX;

            bool reached = false;

            for (float currentTime = _flt(0.f); currentTime < _flt(8.f); currentTime += stepSize)
            {
                currentPos += currentVel * stepSize;
                currentVel.y -= _flt(9.81f) * gravityMod * stepSize;
                currentVel -= currentVel * drag * stepSize;

                float dist = targetPos.distance(currentPos);

                // getting further away
                if (dist > prevDist)
                {
                    Vector3 lineClosestPoint = Line{prevPrevPos, prevPos}.ClosestPoint(targetPos);
                    currentPos               = lineClosestPoint;

                    float lineTargetDist = lineClosestPoint.distance(targetPos);

                    if (lineTargetDist < closestAimPosDist)
                    {
                        float currentTimeTmp = currentTime;

                        if (prevPos.distance(targetPos) > radius)
                        {
                            bool negate = startPos.distancesqr(prevPos) < startPos.distancesqr(targetPos);

                            float distToHit     = prevPos.distance(lineClosestPoint);
                            float thisTickSpeed = currentVel.length() * stepSize;

                            float finalDistTravel = (distToHit / thisTickSpeed) * stepSize;
                            if (negate)
                                finalDistTravel = -finalDistTravel;

                            currentTimeTmp -= finalDistTravel;
                        }

                        closestAimPos     = aimPos;
                        closestAimPosDist = lineTargetDist;
                        closestTravelTime = currentTimeTmp;
                    }
                    else
                        reached = true;

                    if (lineTargetDist <= radius)
                        reached = true;

                    break;
                }

                prevDist    = dist;
                prevPrevPos = prevPos;
                prevPos     = currentPos;
            }

            if (reached)
                break;

            // if (!higher && currentPos.y > targetPos.y)
            //     break;

            float addDist = (targetPos.y - currentPos.y) * _flt(0.65f);
            if (addDist < diameter)
                addDist = diameter;

            aimPos.y += addDist;
        }

        if (closestTravelTime > _flt(0.f) && closestAimPosDist < _flt(3.f))
        {
            aimAtPos     = closestAimPos;
            timeToTravel = closestTravelTime;

            return true;
        }

        return false;
    }

    bool Prediction(const Vector3& shootPos, const Vector3& targetPos, const Vector3& targetVel, Vector3& aimPos,
                    float& timeToTravel)
    {
        bool pred = BulletPredictionNoVel(shootPos, targetPos, aimPos, timeToTravel);
        if (!pred || targetVel.empty())
            return pred;

        Vector3 aimPos2;
        float   timeToTravel2;
        BulletPredictionNoVel(shootPos, targetPos + targetVel * timeToTravel, aimPos2, timeToTravel2);

        float speed = currentlyManagedAmmo->ProjectileVelocity * currentlyManagedWeapon->ProjectileVelocityScale;

        // aids
        if (speed == _flt(240.f) && shootPos.distance(targetPos) > _flt(260.f))
        {
            timeToTravel2 -= _flt(0.07f);
        }
        else if (speed == _flt(1125.f) && shootPos.distance(targetPos) > _flt(280.f))
        {
            timeToTravel2 -= _flt(0.065f);
        }
        else if (speed == _flt(375.f) && shootPos.distance(targetPos) > _flt(235.f))
        {
            timeToTravel2 -= _flt(0.08f);
        }
        else if (speed == _flt(656.25f) && shootPos.distance(targetPos) > _flt(260.f))
        {
            timeToTravel2 -= _flt(0.085f);
        }
        else if (timeToTravel2 >= _flt(0.135f))
        {
            timeToTravel2 -= _flt(0.095f);
        }
        else
            timeToTravel2 *= _flt(0.35f);

        aimPos += targetVel * timeToTravel2;

        return pred;
    }

    bool IsPrevTargetValid()
    {
        using namespace EntityManager;

        do
        {
            if (CurrentTarget.type != TargetType::Invalid && IsAddressValid(CurrentTarget.entity->entity) &&
                CurrentTarget.entity->entity->m_CachedPtr != 0)
            {
                Vector3     aimHitBoxPos{};
                const auto& p = (Entity<CBasePlayer>*)CurrentTarget.entity;

                if (IsAddressValid(p->entity->playerModel) == false)
                    break;

                if (p->entity->IsSleeping() || p->entity->IsWounded() || p->entity->InSafeZone() ||
                    p->entity->_health <= _flt(0.f) || (LifeState)p->entity->lifestate == LifeState::Dead)
                    break;

                if (CurrentTarget.type == TargetType::Player)
                {
                    if (p->entity->playerModel->fields._IsNpc_k__BackingField)
                        aimHitBoxPos =
                            ((CModel*)p->entity->model)->GetBonePosition(settings->ragebot.general.targeting.NPCHitbox);
                    else
                        aimHitBoxPos = ((CModel*)p->entity->model)
                                           ->GetBonePosition(settings->ragebot.general.targeting.PlayerHitbox);

                    if (settings->ragebot.general.targeting.VisCheck)
                    {
                        if (!CGamePhysics::LineOfSight(camera->GetPosition(), aimHitBoxPos,
                                                       Layers::EntityLineOfSightCheck))
                            break;
                    }
                }

                auto dist = FOV.DistanceFromCenterEx(aimHitBoxPos);

                if (dist < FOV.GetRadiusPx())
                {
                    CurrentTarget.TargetPos = aimHitBoxPos;

                    return true;
                }
            }

        } while (false);

        CurrentTarget = {}; // this is needed cuz it can be invalid next time
        return false;
    }

    Vector3 PredictPosition(TargetInfo& targetInfo)
    {
        if (settings->ragebot.general.aimbot.Prediction == false)
        {
            return targetInfo.TargetPos;
        }

        auto baseProjectile = localPlayer->GetHeldEntity()->As<CBaseProjectile>();

        Vector3 localPos = ((CPlayerEyes*)localPlayer->eyes)->GetPosition();
        Vector3 velocity = Vector3{0.f, 0.f, 0.f};

        int maxRecords = 25;

        switch (targetInfo.type)
        {
        case TargetType::Player:
        {
            velocity            = targetInfo.entity->entity->GetWorldVelocity();
            CBasePlayer* player = (CBasePlayer*)(targetInfo.entity->entity);
            if (player->mounted.fields.ent_cached != nullptr)
                maxRecords = 15;
            else
            {
                CModelState* modelState = (CModelState*)player->mounted.fields.ent_cached;
                if (modelState && !modelState->HasFlag(ModelStateFlags::OnGround))
                    maxRecords = 50;
            }

            Vector3 currVelocity = player->GetWorldVelocity();

            if (currVelocity.empty())
            {
                targetInfo.averageVelocity = {};
                targetInfo.velocities.clear();
            }
            else
            {
                targetInfo.velocities.push_back(currVelocity);
                targetInfo.averageVelocity =
                    std::accumulate(targetInfo.velocities.begin(), targetInfo.velocities.end(), Vector3{});

                targetInfo.averageVelocity /= targetInfo.velocities.size();
            }
        }
        break;
        default:
            return {};
        }

        float bulletTime;
        if (!Prediction(localPos, targetInfo.TargetPos, targetInfo.averageVelocity, PredictedPosition, bulletTime))
            return {};

        return PredictedPosition;
    }

    void WeaponModifiers() {}

    bool normalize(float& pitch, float& yaw)
    {
        // nancheck
        if (pitch == pitch && pitch < FLT_MAX && pitch > -FLT_MAX)
        {
            while (pitch > _flt(89.0f))
                pitch -= _flt(180.f);

            while (pitch < negate_flt(_flt(89.0f)))
                pitch += _flt(180.f);
        }
        else
            pitch = _flt(0.f);

        // nancheck
        if (yaw == yaw && yaw < FLT_MAX && yaw > -FLT_MAX)
        {
            while (yaw > _flt(180.f))
                yaw -= _flt(360.f);

            while (yaw < negate_flt(_flt(180.f)))
                yaw += _flt(360.f);
        }
        else
            yaw = _flt(0.f);

        return true;
    }

    void smooth_angle(Vector3& angles, Vector3& localViewAngles)
    {
        if (settings->ragebot.general.aimbot.Smooth <= 0)
            return;

        Vector3 delta{angles.x - localViewAngles.x, angles.y - localViewAngles.y, angles.z - localViewAngles.z};
        normalize(delta.x, delta.y);

        Vector3 toChange;

        if (settings->ragebot.general.aimbot.SmoothMode == AimbotSmooth::SlowEnd)
        {
            float smooth = std::powf(settings->ragebot.general.aimbot.Smooth / _flt(10.f), _flt(0.4f));
            smooth       = std::min(_flt(0.99f), smooth);

            toChange = delta - delta * smooth;
        }
        else
        {
            float smoothing_value = _flt(5.5f) * (settings->ragebot.general.aimbot.Smooth / _flt(100.f));
            float smooth          = std::powf(_flt(0.81f) + smoothing_value, _flt(0.4f));

            smooth = std::min(_flt(0.99f), smooth);

            float coeff = (_flt(1.0f) - smooth) / delta.length() * _flt(4.f);

            // fast end
            // coeff = crt_math::powf_(coeff, 2.f) * 80.f / Settings::AIM::m_flSmooth;

            coeff    = std::min(_flt(1.f), coeff);
            toChange = delta * coeff;
        }

        angles = localViewAngles + toChange;
    }

    void HandleRecoil(CBaseProjectile* wep)
    {
        RecoilProperties_o* recoilProp{};

        if (wep->recoil->fields.newRecoilOverride != nullptr)
        {
            recoilProp = wep->recoil->fields.newRecoilOverride;
        }
        else
        {
            recoilProp = wep->recoil;
        }

        if (settings->ragebot.general.weapon.NoRecoil)
        {
            auto& recoil = recoilProp->fields;

            recoil.recoilPitchMax           = 0.f;
            recoil.recoilPitchMin           = 0.f;
            recoil.recoilYawMax             = 0.f;
            recoil.recoilYawMin             = 0.f;
            recoil.maxRecoilRadius          = 0.f;
            recoil.useCurves                = false;
            recoil.overrideAimconeWithCurve = false;
        }
        else
        {
            auto& recoil = recoilProp->fields;

            recoil.recoilPitchMax           = currentlyManagedWeapon->RecoilPitchMax;
            recoil.recoilPitchMin           = currentlyManagedWeapon->RecoilPitchMin;
            recoil.recoilYawMax             = currentlyManagedWeapon->RecoilYawMax;
            recoil.maxRecoilRadius          = currentlyManagedWeapon->MaxRecoilRadius;
            recoil.useCurves                = currentlyManagedWeapon->UseCurves;
            recoil.overrideAimconeWithCurve = currentlyManagedWeapon->OverrideAimconeWithCurve;
        }
    }

    bool LauncherPrediction()
    {
        // CBaseProjectile* launcher = (CBaseProjectile*)Globals::Local->GetHeldEntity();
        // if (!launcher)
        //     return false;

        // if (launcher->GetItem()->m_pItemDefinition->m_dItemID != 442886268)
        //     return false;

        CPlayerEyes* eyes            = (CPlayerEyes*)localPlayer->eyes;
        float        gravityModifier = currentlyManagedAmmo->GravityModifier;
        float        speed = currentlyManagedAmmo->ProjectileVelocity * currentlyManagedWeapon->ProjectileVelocityScale;

        if (gravityModifier == _flt(0.f) || speed == _flt(0.f))
            return false;

        Vector3 startPos = eyes->GetPosition();
        Vector3 forward  = eyes->BodyForward().Normalized();

        constexpr float stepSize = 0.03125f;

        float       num2 = _flt(1.f);
        CRaycastHit hitInfo;
        if (CGamePhysics::Raycast(startPos, forward, &hitInfo, num2, 1236478737))
            num2 = hitInfo.m_Distance - _flt(0.1f);

        Vector3 currentPos       = startPos + forward * num2;
        Vector3 currentVel       = forward * speed;
        float   traveledDistance = num2;

        for (float currentTime = _flt(0.f); currentTime < _flt(10.f); currentTime += stepSize)
        {
            float speedStep = currentVel.length() * stepSize;
            traveledDistance += speedStep;

            if (CGamePhysics::Raycast(currentPos, currentVel.Normalized(), &hitInfo, speedStep, 1236478737))
            {
                traveledDistance += hitInfo.m_Distance;

                launcherInfo.valid      = true;
                launcherInfo.hitPoint   = *(Vector3*)&hitInfo.m_Point;
                launcherInfo.rotation   = Quaternion::QuaternionLookRotation(*(Vector3*)&hitInfo.m_Normal,
                                                                             Vector3(_flt(0.f), _flt(1.f), _flt(0.f)));
                launcherInfo.travelDist = traveledDistance;
                launcherInfo.travelTime = currentTime;

                return true;
            }

            currentVel.y -= _flt(9.81f) * gravityModifier * stepSize;
            currentPos += currentVel * stepSize;
        }

        return false;
    }

    void LateUpdate()
    {
        static auto main = (MainCamera_c*)il2cpp::InitClass(_("MainCamera"));
        camera           = (CCamera*)main->static_fields->mainCamera;

        PredictedPosition  = {};
        launcherInfo.valid = false;

        currentVelocityScalarModifier = 1.f; // reset this

        if (camera == nullptr || camera->m_CachedPtr == 0)
            return;

        FOV.Set(camera, &ESP::currentScreenSize, &settings->ragebot.general.aimbot.FOVRadius);

        localPlayer = CLocalPlayer::GetLocalPlayer();

        if (localPlayer == nullptr || localPlayer->m_CachedPtr == 0)
            return;

        if (localPlayer->HasFlag(PlayerFlags::Sleeping))
            return;

        if (localPlayer->inventory == nullptr || localPlayer->inventory->fields.m_CachedPtr == 0)
            return;

        if (localPlayer->GetHeldEntity() == nullptr || localPlayer->GetHeldEntity()->m_CachedPtr == 0)
            return;

        if (localPlayer->GetHeldEntity()->IsBaseProjectile() == false)
            return;

        auto baseProjectile = (CBaseProjectile*)localPlayer->GetHeldEntity();

        auto isLauncher = HASH_CTIME("BaseLauncher") == HASH_RUNTIME(baseProjectile->klass->_1.name);

        // we need to get ammo too
        auto ammoType         = (CItemDefinition*)baseProjectile->primaryMagazine->fields.ammoType;
        auto ammoDefComponent = (CComponent*)ammoType;
        auto ammoGameobject   = ammoDefComponent->GetGameobject();

        static auto itemModProjectileType      = CType::FromClass(_("ItemModProjectile"));
        static auto itemModProjectileSpawnType = CType::FromClass(_("ItemModProjectileSpawn"));

        /*
            "itemid": 605467368,
            "shortname": "ammo.rifle.incendiary",
            "itemid": 14241751,
            "shortname": "arrow.fire",
            "itemid": -1036635990,
            "shortname": "ammo.shotgun.fire",
            "itemid": 51984655,
            "shortname": "ammo.pistol.fire",
            "itemid": -1321651331,
            "shortname": "ammo.rifle.explosive",
        */

        if (currentlyManagedAmmoID != ammoType->itemid)
        {
            if (auto ss = ammoBackupData.find(ammoType->itemid); ss != ammoBackupData.end())
            {
                currentlyManagedAmmo   = &ss->second;
                currentlyManagedAmmoID = ammoType->itemid;
            }
            else
            {

                static auto projType       = CType::FromClass(_("Projectile"));
                static auto serverProjType = CType::FromClass(_("ServerProjectile"));

                switch (ammoType->itemid)
                {
                // handling ItemModProjectileSpawn
                case 605467368:
                case 14241751:
                case -1036635990:
                case 51984655:
                case -1321651331:
                {
                    auto mod = ammoGameobject->GetComponent<CItemModProjectileSpawn>(itemModProjectileSpawnType);

                    AmmoBackupData data{};

                    data.mod                = (CItemModProjectile*)mod;
                    data.ProjectileSpread   = mod->projectileSpread;
                    data.ProjectileVelocity = mod->projectileVelocity;
                    data.SpreadAngle        = mod->spreadAngle;
                    data.SpreadVelocityMax  = mod->spreadVelocityMax;
                    data.SpreadVelocityMin  = mod->spreadVelocityMin;
                    data.VelocitySpread     = mod->projectileVelocitySpread;
                    data.isSpawn            = true;

                    // this will return null, however it will initialize cached object down bellow
                    auto projEntity = ((CGameObjectRef*)mod->projectileObject)->GetEntity();

                    auto projObject = (CGameObject*)mod->projectileObject->fields._cachedObject;

                    if (projObject == nullptr)
                        return;

                    if (auto proj = projObject->GetComponent<CServerProjectile>(serverProjType))
                    {
                        data.GravityModifier    = proj->gravityModifier;
                        data.ProjectileVelocity = proj->speed;
                        data.Drag               = proj->drag;
                    }
                    else if (auto proj = projObject->GetComponent<CProjectile>(projType))
                    {
                        data.GravityModifier           = proj->gravityModifier;
                        data.Drag                      = proj->drag;
                        data.projectileInitialDistance = proj->initialDistance;
                    }
                    else
                    {
                        return; //?? should not happen, just quit here in case FP forgot something
                    }

                    ammoBackupData[ammoType->itemid] = data;

                    currentlyManagedAmmo   = &ammoBackupData[ammoType->itemid];
                    currentlyManagedAmmoID = ammoType->itemid;

                    break;
                }
                default:
                {
                    auto mod = ammoGameobject->GetComponent<CItemModProjectile>(itemModProjectileType);

                    AmmoBackupData data{};

                    data.mod                = (CItemModProjectile*)mod;
                    data.ProjectileSpread   = mod->projectileSpread;
                    data.VelocitySpread     = mod->projectileVelocitySpread;
                    data.ProjectileVelocity = mod->projectileVelocity;

                    // this will return null, however it will initialize cached object down bellow
                    auto projEntity = ((CGameObjectRef*)mod->projectileObject)->GetEntity();

                    auto projObject = (CGameObject*)mod->projectileObject->fields._cachedObject;

                    if (projObject == nullptr)
                        return;

                    if (auto proj = projObject->GetComponent<CServerProjectile>(serverProjType))
                    {
                        data.GravityModifier    = proj->gravityModifier;
                        data.ProjectileVelocity = proj->speed;
                        data.Drag               = proj->drag;
                    }
                    else if (auto proj = projObject->GetComponent<CProjectile>(projType))
                    {
                        data.GravityModifier           = proj->gravityModifier;
                        data.Drag                      = proj->drag;
                        data.projectileInitialDistance = proj->initialDistance;
                    }
                    else
                    {
                        return; //?? should not happen, just quit here in case FP forgot something
                    }

                    ammoBackupData[ammoType->itemid] = data;

                    currentlyManagedAmmo   = &ammoBackupData[ammoType->itemid];
                    currentlyManagedAmmoID = ammoType->itemid;

                    break;
                }
                }
            }
        }

        if (currentlyManagedAmmo->isSpawn)
        {
            auto mod = (CItemModProjectileSpawn*)currentlyManagedAmmo->mod;
            if (settings->ragebot.general.weapon.NoSpread)
            {
                mod->projectileSpread         = 0;
                mod->projectileVelocitySpread = 0;
                mod->spreadVelocityMax        = 0;
                mod->spreadVelocityMin        = 0;
                mod->spreadAngle              = 0;
            }
            else
            {
                mod->projectileSpread         = currentlyManagedAmmo->ProjectileSpread;
                mod->projectileVelocitySpread = currentlyManagedAmmo->VelocitySpread;
                mod->spreadVelocityMax        = currentlyManagedAmmo->SpreadVelocityMax;
                mod->spreadVelocityMin        = currentlyManagedAmmo->SpreadVelocityMin;
                mod->spreadAngle              = currentlyManagedAmmo->SpreadAngle;
            }

            if (settings->ragebot.general.projectile.FasterBullets)
            {
                mod->projectileVelocity = currentlyManagedAmmo->ProjectileVelocity * 1.1f;
            }
            else
            {
                mod->projectileVelocity = currentlyManagedAmmo->ProjectileVelocity;
            }
        }
        else
        {
            auto mod = currentlyManagedAmmo->mod;
            if (settings->ragebot.general.weapon.NoSpread)
            {
                mod->projectileSpread         = 0;
                mod->projectileVelocitySpread = 0;
            }
            else
            {
                mod->projectileSpread         = currentlyManagedAmmo->ProjectileSpread;
                mod->projectileVelocitySpread = currentlyManagedAmmo->VelocitySpread;
            }

            if (settings->ragebot.general.projectile.FasterBullets)
            {
                mod->projectileVelocity = currentlyManagedAmmo->ProjectileVelocity * 1.1f;
            }
            else
            {
                mod->projectileVelocity = currentlyManagedAmmo->ProjectileVelocity;
            }
        }

        auto modListData = baseProjectile->children->fields._items;

        std::span mods((CBaseEntity**)modListData->m_Items, modListData->max_length);

        for (auto ent : mods)
        {
            if (HASH_RUNTIME(ent->klass->_1.name) == HASH_CTIME("ProjectileWeaponMod"))
            {
                auto mod = (CProjectileWeaponMod*)ent;
                currentVelocityScalarModifier += mod->projectileVelocity.fields.scalar;
            }
        }

        if (baseProjectile->prefabID != currentlyManagedWeaponID)
        {
            if (auto ss = weaponBackupData.find(baseProjectile->prefabID); ss != weaponBackupData.end())
            {
                currentlyManagedWeapon   = &ss->second;
                currentlyManagedWeaponID = baseProjectile->prefabID;
            }
            else
            {
                WeaponBackupData data{};
                data.Aimcone                 = baseProjectile->aimCone;
                data.HipAimcone              = baseProjectile->hipAimCone;
                data.automatic               = baseProjectile->automatic;
                data.ProjectileVelocityScale = baseProjectile->projectileVelocityScale;

                if (baseProjectile->recoil == nullptr)
                    return;

                if (baseProjectile->recoil->fields.newRecoilOverride != nullptr)
                {
                    auto recoil = baseProjectile->recoil->fields.newRecoilOverride->fields;

                    data.RecoilPitchMin           = recoil.recoilPitchMin;
                    data.RecoilPitchMax           = recoil.recoilPitchMax;
                    data.RecoilYawMin             = recoil.recoilYawMin;
                    data.RecoilYawMax             = recoil.recoilYawMax;
                    data.MaxRecoilRadius          = recoil.maxRecoilRadius;
                    data.UseCurves                = recoil.useCurves;
                    data.OverrideAimconeWithCurve = recoil.overrideAimconeWithCurve;
                }
                else
                {
                    auto recoil = baseProjectile->recoil->fields;

                    data.RecoilPitchMin           = recoil.recoilPitchMin;
                    data.RecoilPitchMax           = recoil.recoilPitchMax;
                    data.RecoilYawMin             = recoil.recoilYawMin;
                    data.RecoilYawMax             = recoil.recoilYawMax;
                    data.MaxRecoilRadius          = recoil.maxRecoilRadius;
                    data.UseCurves                = recoil.useCurves;
                    data.OverrideAimconeWithCurve = recoil.overrideAimconeWithCurve;
                }

                weaponBackupData[baseProjectile->prefabID] = data;
                currentlyManagedWeapon                     = &weaponBackupData[baseProjectile->prefabID];
                currentlyManagedWeaponID                   = baseProjectile->prefabID;
            }
        }

        HandleRecoil(baseProjectile);

        auto weaponItem = baseProjectile->GetItem();

        // weapon features
        {
            if (settings->ragebot.general.weapon.NoSpread)
            {
                baseProjectile->aimCone    = -1.f;
                baseProjectile->hipAimCone = -1.f;
            }
            else
            {
                baseProjectile->aimCone    = currentlyManagedWeapon->Aimcone;
                baseProjectile->hipAimCone = currentlyManagedWeapon->HipAimcone;
            }

            if (settings->ragebot.general.weapon.Automatic)
            {
                baseProjectile->automatic = true;
            }
            else
            {
                baseProjectile->automatic = currentlyManagedWeapon->automatic;
            }

            if (settings->ragebot.general.weapon.NoSway)
            {
                baseProjectile->aimSway = 0.f;
            }
            else
            {
                baseProjectile->aimSway = currentlyManagedWeapon->AimSway;
            }
        }

        if (isLauncher)
        {
            if (LauncherPrediction() == false)
            {
                launcherInfo.valid = false;
            }
        }
        else
        {
            launcherInfo.valid = false;
        }

        if (settings->ragebot.general.aimbot.aim.Enabled == false)
            return;

        if ((settings->ragebot.general.targeting.TargetLock && IsPrevTargetValid() &&
             CInput::Active(settings->ragebot.general.aimbot.aim.key)) == false)
        {
            if (GetBestTarget(CurrentTarget) == false)
            {
                return;
            }
        }

        PredictedPosition = PredictPosition(CurrentTarget);
    }

    void ClientInput()
    {
        if (localPlayer == nullptr || localPlayer->m_CachedPtr == 0)
            return;

        if (localPlayer->HasFlag(PlayerFlags::Sleeping))
            return;

        if (PredictedPosition.empty())
            return;

        if (CInput::Active(settings->ragebot.general.aimbot.aim.key) == false)
        {
            return;
        }

        if (settings->ragebot.general.aimbot.Silent)
        {
            return;
        }

        auto input       = localPlayer->input;
        auto eyes        = (CPlayerEyes*)localPlayer->eyes;
        auto localOrigin = eyes->GetPosition();

        auto headAngle = *(Vector3*)&input->fields.bodyAngles.fields;

        Vector2 viewOffset = math_additional::CalcAngle(localOrigin, PredictedPosition) - headAngle;

        if (viewOffset.empty())
            return;

        Vector3 aimAngles = headAngle;
        aimAngles         = aimAngles + viewOffset;

        auto mount  = localPlayer->mounted.fields.ent_cached;
        auto parent = localPlayer->addedToParentEntity;

        if (!mount && !parent)
        {
            normalize(aimAngles.x, aimAngles.y);
            smooth_angle(aimAngles, headAngle);
            if (!normalize(aimAngles.x, aimAngles.y))
                return;

            // wtf
            if (aimAngles.Invalid() || aimAngles.x != aimAngles.x || aimAngles.y != aimAngles.y ||
                viewOffset.x >= _flt(88.f) || viewOffset.x <= _flt(-88.f) || aimAngles.x <= _flt(-88.f) ||
                aimAngles.x >= _flt(88.f))
                return;

            input->fields.bodyAngles.fields = {aimAngles.x, aimAngles.y, input->fields.bodyAngles.fields.z};
        }
        else
        {
            float deltaPitch = input->fields.bodyAngles.fields.x - input->fields.offsetAngles.fields.x;
            float deltaYaw   = input->fields.bodyAngles.fields.y - input->fields.offsetAngles.fields.y;
            aimAngles.x -= deltaPitch;
            aimAngles.y -= deltaYaw;

            normalize(aimAngles.x, aimAngles.y);
            smooth_angle(aimAngles, *(Vector3*)&input->fields.offsetAngles.fields);
            if (!normalize(aimAngles.x, aimAngles.y))
                return;
            if (aimAngles.Invalid() || aimAngles.x != aimAngles.x || aimAngles.y != aimAngles.y ||
                viewOffset.x >= _flt(88.f) || viewOffset.x <= _flt(-88.f) || aimAngles.x <= _flt(-88.f) ||
                aimAngles.x >= _flt(88.f))
                return;

            input->fields.offsetAngles.fields = {aimAngles.x, aimAngles.y, input->fields.offsetAngles.fields.z};
        }

        /*

           CBaseMountable* mount = Globals::Local->m_pMounted;
            CBaseEntity* parent = Globals::Local->m_pAddedToParentEntity;
            aimAngles = aimAngles + viewOffset - input->m_vecRecoilAngles;

            if (!mount && !parent)
            {
                normalize(aimAngles.x, aimAngles.y);
                smooth_angle(aimAngles, bodyAngles);
                if (!normalize(aimAngles.x, aimAngles.y))
                    return;

                if (aimAngles.Invalid() || aimAngles.x != aimAngles.x || aimAngles.y != aimAngles.y ||
                    viewOffset.x >= _flt(88.f) || viewOffset.x <= _flt(-88.f) || aimAngles.x <= _flt(-88.f)
                    || aimAngles.x >= _flt(88.f))
                    return;

                input->m_vecBodyAngles = { aimAngles.x, aimAngles.y, input->m_vecBodyAngles.z };
            }
            else
            {
                float deltaPitch = input->m_vecBodyAngles.x - input->m_vecOffsetAngles.x;
                float deltaYaw = input->m_vecBodyAngles.y - input->m_vecOffsetAngles.y;
                aimAngles.x -= deltaPitch;
                aimAngles.y -= deltaYaw;

                normalize(aimAngles.x, aimAngles.y);
                smooth_angle(aimAngles, input->m_vecOffsetAngles);
                if (!normalize(aimAngles.x, aimAngles.y))
                    return;
                if (aimAngles.Invalid() || aimAngles.x != aimAngles.x || aimAngles.y != aimAngles.y ||
                    viewOffset.x >= _flt(88.f) || viewOffset.x <= _flt(-88.f) || aimAngles.x <= _flt(-88.f)
                    || aimAngles.x >= _flt(88.f))
                    return;

                input->m_vecOffsetAngles = { aimAngles.x, aimAngles.y, input->m_vecOffsetAngles.z };
            }
        */
    }
} // namespace Aimbot