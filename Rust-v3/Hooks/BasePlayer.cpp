#include "BasePlayer.h"
#include <algorithm>
#include <cstdint>
#include <span>
#include <stdint.h>
#include <vadefs.h>
#include <vector>

#include "../SDK/il2cpp_api.h"
#include "../SDK/enums.h"
#include "../SDK/structs.h"
#include "../SDK/settings.h"
#include "../SDK/prefab_ids.h"
#include "../SDK/globals.h"
#include "../SDK/mem.h"
#include "../mrt/logging.h"
#include "../mrt/xorstr.hpp"
#include "../mrt/Randomak.h"
#include "../mrt/scanner.h"
#include "../Features/Aimbot.h"
#include "../Features/Movement.h"

namespace
{
    struct GatherDamage
    {
        float tree;
        float ore;

        GatherDamage(float tree, float ore) : tree(tree), ore(ore){};

        GatherDamage()
        {
            tree = _flt(0.f);
            ore  = _flt(0.f);
        }
    };

    struct ClosestGatherable
    {
        CBaseEntity* entity;
        bool         tree;
        Vector3      localPosition;
        Vector3      entityPosition;
        CTransform*  transform;

        ClosestGatherable(CBaseEntity* closest, bool tree, Vector3 local, Vector3 enemy, CTransform* transform)
            : entity(closest), tree(tree), localPosition(local), entityPosition(enemy), transform(transform){};

        ClosestGatherable()
        {
            entity         = nullptr;
            localPosition  = Vector3();
            entityPosition = Vector3();
            tree           = false;
            transform      = nullptr;
        }
    };

    void SilentFarm(CBasePlayer* player)
    {
        const auto activeItem = reinterpret_cast<CBaseMelee*>(player->GetHeldEntity());
        if (activeItem == nullptr)
            return;

        const auto item = activeItem->GetItem();
        if (item == nullptr)
            return;

        const auto itemDefinition = item->info;
        if (itemDefinition == nullptr)
            return;

        if (itemDefinition->fields.category != (int)ItemCategory::Tool)
            return;

        // whitelist only for items that can gather
        switch (itemDefinition->fields.itemid)
        {
        case 1488979457: // jackhammer
        case 1104520648: // chainsaw
        case -1302129395:
        case -262590403:
        case 171931394:
        case -1583967946:
        case -1506397857:
        case 963906841:
        case -1252059217:
        case -1780802565:
            break;
        default:
            return;
        }

        using namespace EntityManager;

        const CGatherPropertyEntry* gatherEntryTree = activeItem->GetGatherInfoFromIndex(GatherType::Tree);
        const CGatherPropertyEntry* gatherEntryOre  = activeItem->GetGatherInfoFromIndex(GatherType::Ore);

        if (gatherEntryTree == nullptr || gatherEntryOre == nullptr)
            return;

        GatherDamage dmg(gatherEntryTree->gatherDamage, gatherEntryOre->gatherDamage);
        Vector3      targetPos{};
        CTransform*  targetTransform{};

        auto eyePos   = player->Eyes()->GetPosition();
        auto maxReach = 3.5f;
        if (dmg.tree > 0.f)
        {
            // wood moment

            // first, try to get TreeMarker if its not success
            // get closest tree
            // Remember its presorted by distance
            CBaseEntity* target = nullptr;

            for (const auto& entry : DB::silentFarmStuff)
            {
                if (entry.type == SilentFarmTargetType::TreeMarker)
                {
                    if (entry.entity->_IsDestroyed_k__BackingField)
                        continue;

                    if (eyePos.distance(entry.position) > maxReach)
                        continue;

                    target    = entry.entity;
                    targetPos = entry.position;

                    for (const auto& entry : DB::silentFarmStuff)
                    {
                        if (entry.type == SilentFarmTargetType::Tree)
                        {
                            if (entry.entity->_IsDestroyed_k__BackingField)
                                continue;

                            if (entry.position.distance(eyePos) > maxReach)
                                continue;

                            targetTransform = ((CGameObject*)target)->GetTransform();
                            target          = entry.entity;

                            break;
                        }
                    }

                    break;
                }
            }

            if (target == nullptr)
            {
                targetPos       = {};
                targetTransform = {};

                // well of the find some trees
                for (const auto& entry : DB::silentFarmStuff)
                {
                    if (entry.type == SilentFarmTargetType::Tree)
                    {
                        if (entry.entity->_IsDestroyed_k__BackingField)
                            continue;

                        if (entry.position.distance(eyePos) > maxReach)
                            continue;

                        target          = entry.entity;
                        targetTransform = ((CGameObject*)target)->GetTransform();
                        targetPos       = entry.position;

                        break;
                    }
                }
            }

            // Still null?
            if (target == nullptr)
                return;

            if (itemDefinition->fields.itemid == 1104520648)
            {
                if (activeItem->HasFlag(BaseEntityFlags::On) == false)
                {
                    // TODO: Set Engine on automatically in future
                    return;
                }

                activeItem->MeleeAttack(player, target, eyePos, targetTransform, targetPos, false, true);
            }
            else
            {
                activeItem->MeleeAttack(player, target, eyePos, targetTransform, targetPos, false);
            }
        }
        else if (dmg.ore > 0.f)
        {
            // ore moment

            CBaseEntity* target = nullptr;

            for (const auto& entry : DB::silentFarmStuff)
            {
                if (entry.type == SilentFarmTargetType::OreHotSpot)
                {
                    if (entry.entity->_IsDestroyed_k__BackingField)
                        continue;

                    if (entry.position.distance(eyePos) > maxReach)
                        continue;

                    target          = entry.entity;
                    targetTransform = ((CGameObject*)target)->GetTransform();
                    targetPos       = entry.position;

                    break;
                }
            }

            if (target == nullptr)
            {
                for (const auto& entry : DB::ores)
                {
                    if (entry.entity->_IsDestroyed_k__BackingField)
                        continue;

                    if (entry.distance > activeItem->maxDistance)
                        continue;

                    target          = entry.entity;
                    targetTransform = ((CGameObject*)target)->GetTransform();
                    targetPos       = entry.position;
                    targetPos.y += 0.1f;

                    break;
                }
            }

            // Still null?
            if (target == nullptr)
                return;

            activeItem->MeleeAttack(player, target, eyePos, targetTransform, targetPos, false);
        }
        else
        {
            return;
        }
    }

    void AutoCollect()
    {
        using namespace EntityManager;
        using namespace SettingsData;

        static Timer timer{};

        if (settings->misc.other.AutoCollect)
        {
            for (const auto& collectible : DB::collectibles)
            {
                if (collectible.distance > 3.f)
                    continue;

                if (timer.Expired(0.15))
                {
                    collectible.entity->ServerRPC(_("Pickup"));
                }
                break;
            }
        }
    }

    void SilentMelee(CHeldEntity* weapon, CBasePlayer* localPlayer)
    {
        using namespace SettingsData;
        using namespace EntityManager;

        if (settings->misc.other.SilentMelee.Active())
        {
            if (weapon->IsMelee())
            {
                auto melee    = (CBaseMelee*)weapon;
                auto maxReach = 3.5f;
                auto eyePos   = ((CPlayerEyes*)localPlayer->eyes)->GetPosition();

                for (const auto& player : DB::players)
                {
                    if (player.entity->_IsDestroyed_k__BackingField)
                        continue;

                    auto model           = (CModel*)player.entity->model;
                    auto targetTransform = model->GetBoneTransform(PlayerBones::head);
                    auto targetPos       = targetTransform->GetPosition();

                    if (eyePos.distance(targetPos) < maxReach)
                    {
                        melee->MeleeAttack(localPlayer, player.entity, eyePos, targetTransform, targetPos);
                        return;
                    }
                }
            }
        }
    }

    uintptr_t   ClientInput_o = 0;
    static void hk_ClientInput(CBasePlayer* _this, InputState_o* state, const MethodInfo* method)
    {
        using namespace SettingsData;
        static bool initme = true;

        if (initme)
        {
            // lets init this function by allowing orinal function run first
            initme = false;
            reinterpret_cast<decltype(&hk_ClientInput)>(ClientInput_o)(_this, state, method);

#ifdef _DEBUG
            L::Print<L::Yellow>("BasePlayer ClientInput -> initMe");
#endif
            return;
        }

        if (_this->m_CachedPtr == 0)
        {
            reinterpret_cast<decltype(&hk_ClientInput)>(ClientInput_o)(_this, state, method);
            return;
        }

        if (_this->IsLocalPlayer() == false)
        {
            reinterpret_cast<decltype(&hk_ClientInput)>(ClientInput_o)(_this, state, method);
            return;
        }

        if (_this->HasFlag(PlayerFlags::Sleeping))
        {
            reinterpret_cast<decltype(&hk_ClientInput)>(ClientInput_o)(_this, state, method);
            return;
        }

        playerbackupData.adminFlag = _this->movement->fields.adminCheat;

        static auto main   = (MainCamera_c*)il2cpp::InitClass(_("MainCamera"));
        auto        camera = (CCamera*)main->static_fields->mainCamera;

        auto tod = CTOD_Sky::GetInstance();

        auto                                    gradient = (CGradient*)tod->Night->fields.AmbientColor;
        static std::array<CGradientColorKey, 2> backupNightColors{};

        static bool gotNighCols = false;

        auto nightColors = gradient->GetColorKeys();

        if (gotNighCols == false)
        {
            backupNightColors[0] = {nightColors->m_Items[0]};
            backupNightColors[1] = {nightColors->m_Items[1]};

            gotNighCols = true;
        }

        if (settings->misc.visibility.BrightNight)
        {
            auto mult = Remap(settings->misc.visibility.BrightNightIntensity, 0, 100, 0.f, 5.f);

            nightColors->m_Items[0].fields.color = {.5f, .5f, .5f, 1};
            nightColors->m_Items[1].fields.color = {.5f, .5f, .5f, 1};

            gradient->SetColorKeys(nightColors);

            tod->Night->fields.AmbientMultiplier = mult;
        }
        else
        {
            nightColors->m_Items[0] = backupNightColors[0];
            nightColors->m_Items[1] = backupNightColors[1];

            gradient->SetColorKeys(nightColors);
        }

        if (settings->misc.visibility.BrightCave)
        {
            auto mult                          = Remap(settings->misc.visibility.BrightCaveIntensity, 0, 100, 0.f, 5.f);
            tod->Day->fields.AmbientMultiplier = mult;
        }

        static auto graphics = (ConVar_Graphics_c*)il2cpp::InitClass(_("Graphics"), _("ConVar"));

        if (settings->misc.visibility.ForceFOV && settings->misc.visibility.Zoom.Active() == false)
        {
            graphics->static_fields->_fov = (float)settings->misc.visibility.FOV;
        }

        if (settings->misc.visibility.Zoom.Active())
        {
            auto zoom                     = Remap(settings->misc.visibility.FOVZoom, 0, 100, 10.f, 85.f);
            graphics->static_fields->_fov = (float)settings->misc.visibility.FOVZoom;
        }

        static float eyeHeight = _this->eyes->fields.viewOffset.fields.y;

        if (settings->misc.visibility.Giraffe.Active())
        {
            auto off = Remap(settings->misc.visibility.GiraffeOffset, 0, 100, eyeHeight * 5, -eyeHeight * 5);
            _this->eyes->fields.viewOffset.fields.y += off;

            // hoookTest();
        }
        // else
        // {
        //     _this->eyes->fields.viewOffset.fields.y = eyeHeight;
        // }

        if (settings->ragebot.general.weapon.ForceWeild)
        {
            if (_this->mounted.fields.ent_cached != nullptr &&
                _this->mounted.fields.ent_cached->fields.m_CachedPtr != 0)
            {
                auto mount = (CBaseMountable*)_this->mounted.fields.ent_cached;

                mount->canWieldItems = true;
            }
        }

        if (settings->misc.other.SilentFarm.Active())
        {
            SilentFarm(_this);
        }

        if (settings->misc.movement.SilentWalk || settings->ragebot.general.weapon.NoRestrictions)
        {
            _this->movement->fields.adminCheat = true;
        }

        Aimbot::ClientInput(_this);

        Movement::PreClientInput(_this);

        reinterpret_cast<decltype(&hk_ClientInput)>(ClientInput_o)(_this, state, method);

        Movement::AfterClientInput(_this);

        if (settings->misc.other.AdminFlag)
        {
            _this->SetFlag(PlayerFlags::IsAdmin, settings->misc.other.AdminFlag);
        }

        if (settings->misc.movement.SilentWalk)
        {
            auto modelstate = (CModelState*)_this->modelState;
            modelstate->SetFlag(ModelStateFlags::OnGround, false);
        }

        if (settings->misc.other.InstantSuicide.Active())
        {
            static Timer timer{};

            if (timer.Expired(0.1f))
            {
                _this->OnLand(-999.f);
            }
        }

        AutoCollect();

        auto heldEntity = _this->GetHeldEntity();

        if (heldEntity != nullptr)
        {
            auto heldItem = heldEntity->GetItem();

            if (settings->misc.other.InstantHeal.Active())
            {
                if ((ItemCategory)heldItem->info->fields.category == ItemCategory::Medical)
                {
                    ((CMedicalTool*)heldEntity)->InstaHeal();
                }
            }

            SilentMelee(heldEntity, _this);
        }

        auto lookingAt = (CBaseEntity*)_this->_lookingAtEntity;

        if (lookingAt != nullptr)
        {
            switch (lookingAt->prefabID)
            {
            case prefabs::player::player:
            case prefabs::player::player_model:
            {
                auto lookingAtPlayer = (CBasePlayer*)lookingAt;

                if (lookingAtPlayer->IsWounded() && settings->misc.other.InstantRevive.Active())
                {
                    // No RPC Flood
                    static Timer timer{};

                    if (timer.Expired(0.15f))
                    {
                        lookingAtPlayer->ServerRPC(_("RPC_KeepAlive"));
                        lookingAtPlayer->ServerRPC(_("RPC_Assist"));
                    }
                }
                break;
            }
            case prefabs::radtown::crate_underwater_basic:
            case prefabs::radtown::crate_underwater_advanced:
            {
                auto lookingAtPlayer = (CBaseEntity*)lookingAt;

                if (lookingAtPlayer->HasFlag(BaseEntityFlags::Reserved8) && settings->misc.other.InstantUntie.Active())
                {
                    // No RPC Flood
                    static Timer timer{};

                    if (timer.Expired(0.15f))
                    {
                        lookingAtPlayer->ServerRPC(_("RPC_FreeCrate"));
                    }
                }
                break;
            }
            }
        }
    }

    uint64_t GetRBX()
    {
        uint64_t out = 0;
        // asm("movl %0, %%rbx;"
        //     : "=r"(out) /* output */
        // );

        __asm__("mov %%rbx, %0" : "=r"(out));
        // return rv;

        return out;
    }

    uintptr_t   ServerRPC_SendProjectileAttack_o = 0;
    static void hk_ServerRPC_SendProjectileAttack(CBaseEntity* _this, uint64_t ukn1, CString* funcName,
                                                  ProtoBuf_PlayerProjectileAttack_o* playerProjectileAttack,
                                                  MethodInfo*                        method)
    {
        using namespace SettingsData;
        CProjectile* proj = (CProjectile*)GetRBX();

        // #ifdef _DEBUG
        //         std::string hitName{};
        //         std::string boneName{};
        //         auto boneID = playerProjectileAttack->fields.playerAttack->fields.attack->fields.hitBone;
        //         if (proj != nullptr)
        //         {
        //             if (proj->hitTest != nullptr)
        //             {
        //                 if (proj->hitTest->fields.HitEntity != nullptr)
        //                 {
        //                     auto ent = proj->hitTest->fields.HitEntity;
        //                     auto nn = (CString*)ent->fields._prefabName;
        //                     if (nn != nullptr)
        //                     {
        //                         hitName = nn->str();
        //                         if (boneID != 0)
        //                         {
        //                             auto bonemapetit = CStringPool::Get(boneID);
        //                             if (bonemapetit != nullptr)
        //                             {
        //                                 boneName = bonemapetit->str();
        //                             }
        //                         }
        //                     }
        //                 }
        //             }
        //         }
        //         L::Print<L::Yellow>("BaseEntity ServerRPC_SendProjectileAttack -> CALL EntityHit: {}, BoneID: {},
        //         Bone: {}",
        //                             hitName, boneID, boneName);
        // #endif

        do
        {
            if (settings->ragebot.general.projectile.HitOverride == false)
                break;

            if (proj == nullptr)
                break;

            auto hitTest = proj->hitTest;
            if (hitTest == nullptr)
                break;

            auto hitEntity = (CBaseEntity*)hitTest->fields.HitEntity;
            if (hitEntity == nullptr)
                break;

            auto attack = playerProjectileAttack->fields.playerAttack->fields.attack;

            static Randomak rnd(CTime::GetRealTime() + CTime::GetSmoothDeltaTime());

            using namespace prefabs;

            switch (hitEntity->prefabID)
            {
            case player::player:
            case player::scientistnpc_arena:
            case player::scientistnpc_cargo:
            case player::scientistnpc_cargo_turret_any:
            case player::scientistnpc_cargo_turret_lr300:
            case player::scientistnpc_ch47_gunner:
            case player::scientistnpc_excavator:
            case player::scientistnpc_full_any:
            case player::scientistnpc_full_lr300:
            case player::scientistnpc_full_mp5:
            case player::scientistnpc_full_pistol:
            case player::scientistnpc_full_shotgun:
            case player::scientistnpc_heavy:
            case player::scientistnpc_junkpile_pistol:
            case player::scientistnpc_oilrig:
            case player::scientistnpc_patrol:
            case player::scientistnpc_peacekeeper:
            case player::scientistnpc_roam:
            case player::scientistnpc_roam_nvg_variant:
            case player::scientistnpc_roamtethered:
            case player::npc_tunneldweller:
            case player::npc_bandit_guard:
            case player::npc_underwaterdweller:
            {
                auto override = settings->ragebot.general.projectile.PlayerHitOverride;

                switch (override)
                {
                case PlayerBones::BoobCensor:
                {
                    static std::vector<uint32_t> bonePool{
                        bones::head,   bones::neck,   bones::spine1, bones::spine2, bones::spine3,
                        bones::spine4, bones::pelvis, bones::l_hip,  bones::r_hip,

                    };

                    auto idIndex = rnd.GetUInt(0, bonePool.size() - 1);

                    auto bone = bonePool[idIndex];

                    attack->fields.hitBone = bone;
                    break;
                }
                case PlayerBones::eyeTranform:
                {
                    attack->fields.hitBone = bones::head;
                    break;
                }
                case PlayerBones::neck:
                {
                    attack->fields.hitBone = bones::neck;
                    break;
                }
                case PlayerBones::spine1:
                {
                    attack->fields.hitBone = bones::spine1;
                    break;
                }
                case PlayerBones::penis:
                {
                    attack->fields.hitBone = bones::pelvis;
                    break;
                }
                default:
                    break;
                }

                attack->fields.hitPositionLocal = {-0.1f, -0.1f, 0.f};
                attack->fields.hitNormalLocal   = {0.f, -0.1f, 0.f};
                break;
            }
            default:
                break;
            }

        } while (false);

        reinterpret_cast<decltype(&hk_ServerRPC_SendProjectileAttack)>(ServerRPC_SendProjectileAttack_o)(
            _this, ukn1, funcName, playerProjectileAttack, method);
    }

    void MethodInfoInitStub(void* adr);
} // namespace

void Hooks::BasePlayer::Init()
{
    auto klass    = il2cpp::InitClass(_("BasePlayer"));
    ClientInput_o = il2cpp::HookVirtualFunction(klass, _("ClientInput"), &hk_ClientInput);

    // auto methodInfoInitAdr =
    //     Forza::IDAScan((void*)G::baseGameAssemlby,
    //                    _("E8 ?? ?? ?? ?? 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? C6 05 ?? ?? ?? ?? ?? 4C 8B 0D ?? ?? ??
    //                    ?? "
    //                      "4C 8B C3 48 8B 15 ?? ?? ?? ?? 48 8B CF 48 8B 5C 24 30 48 83 C4 20 5F E9"));

    // auto methodIniter = reinterpret_cast<decltype(&MethodInfoInitStub)>(mem::ResolveCall(methodInfoInitAdr));

    auto methodInfoAdr = Forza::IDAScan(
        (void*)G::baseGameAssemlby,
        _("4C 8B 0D ?? ?? ?? ?? 4C 8B C3 48 8B 15 ?? ?? ?? ?? 48 8B CF 48 8B 5C 24 30 48 83 C4 20 5F E9"));
    auto method = mem::ResolveMov(methodInfoAdr);

    // methodIniter(method);

    il2cpp::InitializeMethodInfo(method);

    auto methodInfo = *(MethodInfo**)mem::ResolveMov(methodInfoAdr);

    auto RGCTXs = methodInfo->rgctx_data;

    auto rwMethod = (MethodInfo*)RGCTXs->method;

    ServerRPC_SendProjectileAttack_o = (uintptr_t)RGCTXs->method->virtualMethodPointer;
    rwMethod->virtualMethodPointer   = (Il2CppMethodPointer)&hk_ServerRPC_SendProjectileAttack;
}
