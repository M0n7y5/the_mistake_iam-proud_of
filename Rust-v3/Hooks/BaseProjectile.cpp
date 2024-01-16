#include "BaseProjectile.h"

#include <cstdint>
#include <stdint.h>

#include "../SDK/il2cpp_api.h"
#include "../SDK/enums.h"
#include "../SDK/structs.h"
#include "../SDK/mem.h"
#include "../SDK/settings.h"
#include "../SDK/globals.h"
#include "../mrt/logging.h"
#include "../mrt/fnv1a.hpp"
#include "../mrt/xorstr.hpp"
#include "../mrt/scanner.h"
#include "../Features/Aimbot.h"

namespace
{
    union VEC3CONV {
        Vector3               vec3;
        UnityEngine_Vector3_o vec3u;
    };

#define TOVEC3(v)  (*(Vector3*)&v)
#define TOVEC3U(v) (*(UnityEngine_Vector3_o*)&v)

    static uintptr_t OnInput_o = 0;

    static void hk_OnInput(CBaseProjectile* _this, void* method)
    {
        using namespace SettingsData;
        static bool initMe = true;

        if (initMe)
        {
            // lets init this function by allowing orinal function run first
            initMe = false;
            reinterpret_cast<decltype(&hk_OnInput)>(OnInput_o)(_this, method);

#ifdef _DEBUG
            L::Print("BaseProjectile OnInput -> initMe");
#endif

            return;
        }

        do
        {
            bool backupAdminFlag = false;

            auto localPlayer = CLocalPlayer::GetLocalPlayer();

            if (localPlayer == nullptr)
                break;

            if (settings->ragebot.general.weapon.NoRestrictions)
            {
                backupAdminFlag                          = localPlayer->movement->fields.adminCheat;
                localPlayer->movement->fields.adminCheat = true;
            }

            if (settings->misc.visibility.NoViewModelSway)
            {
                auto& viewModel = _this->viewModel->fields.instance;

                if (viewModel != nullptr)
                {
                    auto& lower = viewModel->fields.lower->fields;

                    lower.rotateAngle         = 0.f;
                    lower.lowerOnSprint       = false;
                    lower.lowerWhenCantAttack = false;
                    lower.shouldLower         = false;

                    auto& sway = viewModel->fields.sway->fields;

                    sway.positionalSwayAmount = 0.f;
                    sway.rotationSwayAmount   = 0.f;
                }
            }

            if (settings->ragebot.general.weapon.NoRestrictions)
            {
                reinterpret_cast<decltype(&hk_OnInput)>(OnInput_o)(_this, method);
                localPlayer->movement->fields.adminCheat = backupAdminFlag;
                return;
            }

            if (settings->ragebot.general.desync.RapidFire)
            {
            }

        } while (false);

        reinterpret_cast<decltype(&hk_OnInput)>(OnInput_o)(_this, method);
    }

    static uintptr_t GetAimCone_o = 0;

    static float hk_GetAimCone(CBaseProjectile* _this, void* method)
    {
        using namespace SettingsData;
        static bool initMe = true;

        if (initMe)
        {
            // lets init this function by allowing orinal function run first
            initMe = false;
            return reinterpret_cast<decltype(&hk_GetAimCone)>(GetAimCone_o)(_this, method);

#ifdef _DEBUG
            L::Print("BaseProjectile GetAimCone -> initMe");
#endif
        }

        if (settings->ragebot.general.weapon.NoSpread)
        {
            return 0.f;
        }

        return reinterpret_cast<decltype(&hk_GetAimCone)>(GetAimCone_o)(_this, method);
    }

    float MaxProjectileDistanceInstantHit(float projSpeed, float desyncTime, float dragAmount, float initialDistance,
                                          bool drag = false)
    {
        if (drag)
            projSpeed -= projSpeed * dragAmount * desyncTime;

        float maxDistance = initialDistance + ((desyncTime + (2.f / 60.f) + (2.f * 0.03125f)) * 1.5f) * projSpeed;

        return maxDistance;
    }

    float MaxTeleportDistance(CProjectile proj, Aimbot::TargetInfo const& target)
    {
        if (target.type == Aimbot::TargetType::Invalid || target.entity == nullptr)
            return 0.f;

        float modifier = _flt(100.f);
        if (target.type == Aimbot::TargetType::Player)
        {
            CBasePlayer* player = (CBasePlayer*)target.entity->entity;
            modifier            = player->mounted.fields.ent_cached != 0 ? _flt(25.f)
                                                                         : CLocalPlayer::GetLocalPlayer()->MaxPlayerVelocity();
        }

        float timeSinceLastTick        = CTime::GetRealTime() - proj.owner->fields.lastSentTickTime;
        float timeSinceLastTickClamped = std::max(0.f, std::min(timeSinceLastTick, 1.f));

        return _flt(0.1f) + (timeSinceLastTickClamped + _flt(2.f) / _flt(60.f)) * _flt(1.5f) * modifier;
    }

    void BulletTeleport(CProjectile* projectile, Aimbot::TargetInfo const& target, float deltaTime,
                        bool doingBulletRain = false, bool limitTravelTime = false)
    {
        if (projectile->integrity <= _flt(0.f) || projectile->hitTest == nullptr)
            return;

        if (target.type == Aimbot::TargetType::Invalid || target.entity == nullptr)
            return;

        using namespace SettingsData;
        if (settings->ragebot.general.desync.shoot.Active() == false)
            return;

        CBasePlayer* targetPlayer = (CBasePlayer*)target.entity->entity;

        if (targetPlayer == nullptr || targetPlayer->_IsDestroyed_k__BackingField)
            return;

        CModel* model = (CModel*)targetPlayer->model;
        // if (!IsAddressValid<CModel*>(model))
        //     return;

        CTransform* headTransform = model->GetBoneTransform(PlayerBones::head);
        // if (!IsAddressValid<CTransform*>(headTransform))
        //     return;

        Vector3 headPos = headTransform->GetPosition();

        Vector3 traveledThisUpdate = TOVEC3(projectile->currentVelocity) * deltaTime;
        Vector3 nextBulletPos      = TOVEC3(projectile->currentPosition) + traveledThisUpdate;

        LineSegment ls               = {TOVEC3(projectile->currentPosition), nextBulletPos};
        Vector3     closestLinePoint = ls.ClosestPointOnLineToPos(headPos);

        float maxHitDistance = _flt(1.9f);

        CBaseMountable* mounted = (CBaseMountable*)targetPlayer->mounted.fields.ent_cached;

        auto desync = CLocalPlayer::GetLocalPlayer()->GetDesyncTimeClamped();

        if (mounted != nullptr)
        {
            // float timeSinceLastTick = Globals::realTimeSinceStartup - this->m_pOwner->m_flLastSentTickTime;
            if (desync >= _flt(1.f))
                return;

            Vector3 mountedVelocity = ((CBaseEntity*)mounted)->GetWorldVelocity();
            float   mountedSpeed    = mountedVelocity.length();
            if (mountedSpeed > _flt(0.f))
            {
                // float timeSinceLastTickClamped = std::max(0.f, std::min(timeSinceLastTick, 1.f));

                float desyncForgiveness = desync * _flt(1.5f);

                maxHitDistance += desyncForgiveness * mountedSpeed * _flt(0.9f);
            }
        }

        Vector3 closestPointToEnt;

        if (doingBulletRain)
        {
            closestPointToEnt = headPos;
            maxHitDistance    = _flt(1.2f);
        }
        else
            closestPointToEnt = targetPlayer->ClosestPoint(closestLinePoint);

        float targetDist = closestLinePoint.distance(closestPointToEnt);
        if (targetDist < maxHitDistance && targetDist == targetDist && targetDist >= _flt(0.f))
        {
            float targetDistPerc = targetDist / maxHitDistance;
            if (targetDistPerc > _flt(0.95f))
                targetDistPerc = _flt(0.95f);

            Vector3 tpDir     = (closestPointToEnt - closestLinePoint).Normalized();
            Vector3 tpDirMove = tpDir * targetDistPerc;
            Vector3 movePoint = closestLinePoint + tpDirMove;
            Vector3 hitPoint  = movePoint + tpDirMove;

            if (doingBulletRain)
            {
                movePoint = closestLinePoint + tpDir * _flt(0.35f);
                hitPoint  = movePoint + tpDir * (targetDist - _flt(0.35f));
            }

            if (CGamePhysics::LineOfSight(closestLinePoint, closestPointToEnt, (Layers)10551296) &&
                CGamePhysics::LineOfSight(closestPointToEnt, headPos, (Layers)10551296))
            {
                CPlayerProjectileUpdate* ppu = CFacepunchPool::GetPlayerProjectileUpdate();
                ppu->projectileID            = projectile->projectileID;
                projectile->traveledTime += deltaTime * _flt(1.5f);
                ppu->travelTime  = projectile->traveledTime;
                ppu->curPosition = TOVEC3U(closestLinePoint);
                ppu->curVelocity = projectile->currentVelocity;
                ((CBasePlayer*)projectile->owner)->SendProjectileUpdate(ppu);

                projectile->traveledTime += deltaTime * _flt(1.5f);
                ppu->travelTime  = projectile->traveledTime;
                ppu->curPosition = TOVEC3U(movePoint);
                ppu->curVelocity = projectile->currentVelocity;
                ((CBasePlayer*)projectile->owner)->SendProjectileUpdate(ppu);

                projectile->traveledDistance += _flt(1.95f);
                projectile->traveledDistance += traveledThisUpdate.length();
                projectile->traveledTime += deltaTime;

                if (doingBulletRain)
                {
                    projectile->traveledTime         = _flt(0.95f);
                    projectile->previousTraveledTime = projectile->traveledTime;
                }
                else if (limitTravelTime)
                {
                    if (projectile->traveledTime > _flt(0.98f))
                        projectile->traveledTime = _flt(0.98f);

                    projectile->previousTraveledTime = projectile->traveledTime;

                    auto drag            = TOVEC3(projectile->drag);
                    auto currentVelocity = TOVEC3(projectile->currentVelocity);
                    currentVelocity -= currentVelocity * drag * deltaTime * _flt(3.f);

                    projectile->currentVelocity = TOVEC3U(currentVelocity);
                }

                CHitTest* test                  = (CHitTest*)projectile->hitTest;
                test->HitTransform              = (UnityEngine_Transform_o*)headTransform;
                test->HitEntity                 = (BaseEntity_o*)targetPlayer;
                test->AttackRay.fields.m_Origin = TOVEC3U(movePoint);
                auto invHitpoint                = headTransform->InverseTransformPoint(hitPoint);
                auto invNormal    = {0.f, 0.f, 0.f}; // headTransform->InverseTransformDirection(hitPoint);
                test->HitPoint    = *(UnityEngine_Vector3_o*)&invHitpoint;
                test->HitNormal   = *(UnityEngine_Vector3_o*)&invNormal;
                test->DidHit      = true;
                auto origin       = TOVEC3(test->AttackRay.fields.m_Origin);
                auto hitDist      = TOVEC3(projectile->currentPosition).distance(origin);
                test->HitDistance = hitDist;
                test->MaxDistance = _flt(5.f);
                projectile->DoHit(test, TOVEC3(projectile->currentPosition), Vector3{0.f, 0.f, 0.f});

                // to kill the bullet
                projectile->integrity = 0.f;
            }
        }
    }

    static uintptr_t ProjectileShoot_o = 0;
    static void hk_ServerRpcProjectileShoot(CBaseProjectile* _this, uint64_t arg0, CString* funcName, uint64_t arg1,
                                            MethodInfo* method)
    {
        using namespace SettingsData;
        auto rpcType = HASH_RUNTIME(funcName->chars);

        switch (rpcType)
        {
        case HASH_CTIME(L"CLProject"):
        {
            if (_this->_IsDestroyed_k__BackingField)
                break;

            if (_this->IsMelee())
                break;

            auto localPlayer = (CBasePlayer*)_this->addedToParentEntity;

            if (localPlayer == nullptr)
                break;

            if (localPlayer->IsLocalPlayer() == false)
                break;

            auto isDesyncShootRequested =
                settings->ragebot.general.desync.shoot.Active() && Aimbot::DesyncPredictedPosition.empty() == false;

            auto silentRequested =
                settings->ragebot.general.aimbot.Silent && Aimbot::PredictedPosition.empty() == false;

            if (isDesyncShootRequested == false && silentRequested == false)
                break;

            auto weapon = _this;

            auto tmp = ((ProtoBuf_ProjectileShoot_o*)arg1);

            auto serverProjectiles = tmp->fields.projectiles;
            auto clientProjectiles = weapon->createdProjectiles;

            Vector3 targetPosition = Aimbot::PredictedPosition;

            Vector3 initialShootPosition  = ((CPlayerEyes*)localPlayer->eyes)->GetPosition();
            Vector3 initialShootDirection = (targetPosition - initialShootPosition).normalize();

            if (isDesyncShootRequested)
            {
                initialShootPosition  = Aimbot::DesyncOffset;
                initialShootDirection = (Aimbot::DesyncPredictedPosition - Aimbot::DesyncOffset).normalize();
                targetPosition        = Aimbot::DesyncPredictedPosition;
            }

            auto clientProjectilesSpan =
                std::span((CProjectile**)clientProjectiles->fields._items->m_Items, clientProjectiles->fields._size);
            auto serverProjectilesSpan =
                std::span(serverProjectiles->fields._items->m_Items, serverProjectiles->fields._size);

            // for instant hit
            Vector3 initialVelocity{};

            auto initialDistance = clientProjectilesSpan[0]->initialDistance;
            auto drag            = clientProjectilesSpan[0]->drag;

            for (int i = 0; i < serverProjectilesSpan.size(); i++)
            {
                auto clientProjectile = clientProjectilesSpan[i];
                auto serverProjectile = serverProjectilesSpan[i];

                auto initalSpeed = *(Vector3*)&clientProjectile->currentVelocity;
                initialVelocity  = initialShootDirection * initalSpeed.length();

                serverProjectile->fields.startVel = *(UnityEngine_Vector3_o*)&initialVelocity;
                serverProjectile->fields.startPos = *(UnityEngine_Vector3_o*)&initialShootPosition;

                clientProjectile->currentVelocity = *(UnityEngine_Vector3_o*)&initialVelocity;
                clientProjectile->initialVelocity = *(UnityEngine_Vector3_o*)&initialVelocity;
                clientProjectile->currentPosition = *(UnityEngine_Vector3_o*)&initialShootPosition;

                auto projectileTransform = clientProjectile->As<CComponent>()->GetTransform();

                projectileTransform->SetPosition(initialShootPosition);
                //     projectile->currentPosition = *(UnityEngine_Vector3_o*)&initialShootPosition;
            }

            reinterpret_cast<decltype(&hk_ServerRpcProjectileShoot)>(ProjectileShoot_o)(_this, arg0, funcName, arg1,
                                                                                        method);

            return; // BT no work rn fix incoming
            

            auto fixedDeltaTime = CTime::GetFixedDeltaTime();
            if (settings->ragebot.general.projectile.InstaHit)
            {
                if (Aimbot::currentlyManagedAmmoID == 0)
                    return;

                auto ammo = Aimbot::ammoBackupData[Aimbot::currentlyManagedAmmoID];

                auto localPlayer = (CBasePlayer*)_this->addedToParentEntity;

                auto maximumDistance = MaxProjectileDistanceInstantHit(
                    initialVelocity.length(), localPlayer->GetDesyncTimeClamped(), drag, initialDistance);

                if (initialShootPosition.distance(targetPosition) < maximumDistance)
                {

                    for (int i = 0; i < serverProjectilesSpan.size(); i++)
                    {
                        auto proj             = clientProjectilesSpan[i];
                        auto serverProjectile = serverProjectilesSpan[i];

                        proj->hitTest = (HitTest_o*)CHitTest::New();

                        auto initalSpeed = *(Vector3*)&proj->currentVelocity;
                        initialVelocity  = initialShootDirection * initalSpeed.length();

                        while (proj->integrity > 0.001f && proj->traveledTime < 8.f /* &&
                               proj->traveledDistance < proj->maxDistance*/)
                        {
                            // reduntant setup, if desync is enabled
                            if (proj->traveledTime == _flt(0.f))
                            {
                                proj->currentPosition  = *(UnityEngine_Vector3_o*)&initialShootPosition;
                                proj->previousPosition = proj->currentPosition;
                                proj->sentPosition     = proj->currentPosition;
                                // proj->m_vecCurrentVelocity = Aimbot::BulletRainVel;
                                proj->currentVelocity = *(UnityEngine_Vector3_o*)&initialVelocity;

                                if (CTransform* projT = proj->As<CComponent>()->GetTransform())
                                    projT->SetPosition(*(Vector3*)&proj->currentPosition);
                            }

                            BulletTeleport(proj, Aimbot::CurrentTarget, fixedDeltaTime, false, true);

                            proj->previousPosition     = proj->currentPosition;
                            proj->previousVelocity     = proj->currentVelocity;
                            proj->previousTraveledTime = proj->traveledTime;

                            Vector3 curPos =
                                TOVEC3(proj->currentPosition) + TOVEC3(proj->currentVelocity) * fixedDeltaTime;

                            proj->currentPosition = TOVEC3U(curPos);

                            Vector3 curVel = TOVEC3(proj->currentVelocity);
                            curVel.y -= _flt(9.81f) * proj->gravityModifier * fixedDeltaTime;
                            curVel -= TOVEC3(proj->currentVelocity) * proj->drag * fixedDeltaTime;

                            proj->currentVelocity = TOVEC3U(curVel);

                            proj->traveledDistance +=
                                TOVEC3(proj->currentPosition).distance(TOVEC3(proj->previousPosition));

#ifdef LOCAL_MACHINE
                            CDDraw::Line(proj->m_vecPreviousPosition, proj->m_vecCurrentPosition,
                                         col(255.f, 255.f, 255.f, 255.f), 15.f, false, true);
#endif

                            if (!CGamePhysics::LineOfSight(TOVEC3(proj->sentPosition), TOVEC3(proj->currentPosition),
                                                           (Layers)10551296))
                            {
                                CPlayerProjectileUpdate* ppu = CFacepunchPool::GetPlayerProjectileUpdate();
                                ppu->projectileID            = proj->projectileID;
                                ppu->travelTime              = proj->previousTraveledTime;
                                ppu->curPosition             = proj->previousPosition;
                                ppu->curVelocity             = proj->previousVelocity;
                                ((CBasePlayer*)proj->owner)->SendProjectileUpdate(ppu);

                                proj->sentPosition = proj->previousPosition;
                            }

                            proj->traveledTime += fixedDeltaTime;
                        }
                    }
                }

                return;
            }

            for (int i = 0; i < serverProjectilesSpan.size(); i++)
            {
                auto proj             = clientProjectilesSpan[i];
                auto serverProjectile = serverProjectilesSpan[i];

                if (proj == nullptr)
                    break;

                if (proj->hitTest == nullptr)
                    proj->hitTest = (HitTest_o*)CHitTest::New();

                while ((proj->integrity > _flt(0.001f) && proj->traveledDistance < proj->maxDistance &&
                        proj->traveledTime < _flt(8.f)) &&
                       (proj->traveledDistance < proj->initialDistance || proj->traveledTime < _flt(0.1f)))
                {
                    if (proj->traveledTime == 0.f)
                    {
                        if (CTransform* projT = proj->As<CComponent>()->GetTransform())
                        {
                            auto pos              = projT->GetPosition();
                            proj->currentPosition = TOVEC3U(pos);
                        }
                    }

                    if (settings->ragebot.general.projectile.BulletTP)
                    {
                        BulletTeleport(proj, Aimbot::CurrentTarget, fixedDeltaTime);
                    }

#ifdef PRIVATE_FEATURES
                    if (doShootThroughWallLadder)
                        proj->ShootThroughWallLadder(fixedDeltaTime);
#endif

                    proj->UpdateVelocity(fixedDeltaTime);
                }
            }

            return;
        }
        default:
            return reinterpret_cast<decltype(&hk_ServerRpcProjectileShoot)>(ProjectileShoot_o)(_this, arg0, funcName,
                                                                                               arg1, method);
        }

        return reinterpret_cast<decltype(&hk_ServerRpcProjectileShoot)>(ProjectileShoot_o)(_this, arg0, funcName, arg1,
                                                                                           method);
    }

    void MethodInfoInitStub(void* adr);

} // namespace

void Hooks::BaseProjectile::Init()
{
    auto klass   = il2cpp::InitClass(_("BaseProjectile"));
    OnInput_o    = il2cpp::HookVirtualFunction(klass, _("OnInput"), (void*)&hk_OnInput);
    GetAimCone_o = il2cpp::HookVirtualFunction(klass, _("GetAimCone"), (void*)&hk_GetAimCone);

    // ProjectileShoot 4C 8B 0D ?? ?? ?? ?? 4D 8B C7 48 8B 15 ?? ?? ?? ?? 48 8B CF

    // auto methodInfoInitAdr =
    //     Forza::IDAScan((void*)G::baseGameAssemlby,
    //                    _("E8 ?? ?? ?? ?? 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? C6 05 ?? ?? ?? ?? ?? 4C 8B 0D ?? ?? ??
    //                    ?? "
    //                      "4C 8B C3 48 8B 15 ?? ?? ?? ?? 48 8B CF 48 8B 5C 24 30 48 83 C4 20 5F E9"));

    // auto methodIniter = reinterpret_cast<decltype(&MethodInfoInitStub)>(mem::ResolveCall(methodInfoInitAdr));

    auto methodInfoAdr =
        Forza::IDAScan((void*)G::baseGameAssemlby, _("4C 8B 0D ?? ?? ?? ?? 4D 8B C7 48 8B 15 ?? ?? ?? ?? 48 8B CF"));

    auto method = mem::ResolveMov(methodInfoAdr);

    // methodIniter(method);

    il2cpp::InitializeMethodInfo(method);

    auto methodInfo = *(MethodInfo**)mem::ResolveMov(methodInfoAdr);

    auto RGCTXs = methodInfo->rgctx_data;

    auto rwMethod = (MethodInfo*)RGCTXs->method;

    ProjectileShoot_o              = (uintptr_t)RGCTXs->method->virtualMethodPointer;
    rwMethod->virtualMethodPointer = (Il2CppMethodPointer)&hk_ServerRpcProjectileShoot;
}
