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
            do
            {
                if (_this->_IsDestroyed_k__BackingField)
                    break;

                if (_this->IsMelee())
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

                auto localPlayer = (CBasePlayer*)_this->addedToParentEntity;

                Vector3 targetPosition = Aimbot::PredictedPosition;

                Vector3 initialShootPosition  = ((CPlayerEyes*)localPlayer->eyes)->GetPosition();
                Vector3 initialShootDirection = (targetPosition - initialShootPosition).normalize();

                if (isDesyncShootRequested)
                {
                    initialShootPosition  = Aimbot::DesyncOffset;
                    initialShootDirection = (Aimbot::DesyncPredictedPosition - Aimbot::DesyncOffset).normalize();
                    targetPosition        = Aimbot::DesyncPredictedPosition;
                }

                auto clientProjectilesSpan = std::span((CProjectile**)clientProjectiles->fields._items->m_Items,
                                                       clientProjectiles->fields._size);
                auto serverProjectilesSpan =
                    std::span(serverProjectiles->fields._items->m_Items, serverProjectiles->fields._size);

                // for instant hit
                Vector3 initialVelocity{};

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

                    auto projectileTransform = ((CComponent*)clientProjectile)->GetTransform();

                    projectileTransform->SetPosition(initialShootPosition);
                    //     projectile->currentPosition = *(UnityEngine_Vector3_o*)&initialShootPosition;
                }

                // reinterpret_cast<decltype(&hk_ServerRpcProjectileShoot)>(ProjectileShoot_o)(_this, arg0, funcName,
                // arg1,
                //                                                                             method);

                // if (settings->ragebot.general.projectile.InstaHit)
                // {
                //     if (Aimbot::currentlyManagedAmmoID == 0)
                //         break;

                //     auto ammo = Aimbot::ammoBackupData[Aimbot::currentlyManagedAmmoID];

                //     auto localPlayer = (CBasePlayer*)_this->addedToParentEntity;

                //     auto maximumDistance =
                //         MaxProjectileDistanceInstantHit(initialVelocity.length(),
                //         localPlayer->GetDesyncTimeClamped(),
                //                                         ammo.Drag, ammo.projectileInitialDistance);

                //     if (initialShootPosition.distance(targetPosition) < maximumDistance)
                //     {
                //         auto fixedDeltaTime = CTime::GetFixedDeltaTime();

                //         for (int i = 0; i < serverProjectilesSpan.size(); i++)
                //         {
                //             auto clientProjectile = clientProjectilesSpan[i];
                //             auto serverProjectile = serverProjectilesSpan[i];
                //         }
                //     }
                // }

                // return;

            } while (false);

            break;
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
    //                    _("E8 ?? ?? ?? ?? 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? C6 05 ?? ?? ?? ?? ?? 4C 8B 0D ?? ?? ?? ?? "
    //                      "4C 8B C3 48 8B 15 ?? ?? ?? ?? 48 8B CF 48 8B 5C 24 30 48 83 C4 20 5F E9"));

    // auto methodIniter = reinterpret_cast<decltype(&MethodInfoInitStub)>(mem::ResolveCall(methodInfoInitAdr));

    auto methodInfoAdr =
        Forza::IDAScan((void*)G::baseGameAssemlby, _("4C 8B 0D ?? ?? ?? ?? 4D 8B C7 48 8B 15 ?? ?? ?? ?? 48 8B CF"));

    auto method = mem::ResolveMov(methodInfoAdr);

    //methodIniter(method);

    il2cpp::InitializeMethodInfo(method);

    auto methodInfo = *(MethodInfo**)mem::ResolveMov(methodInfoAdr);

    auto RGCTXs = methodInfo->rgctx_data;

    auto rwMethod = (MethodInfo*)RGCTXs->method;

    ProjectileShoot_o              = (uintptr_t)RGCTXs->method->virtualMethodPointer;
    rwMethod->virtualMethodPointer = (Il2CppMethodPointer)&hk_ServerRpcProjectileShoot;
}
