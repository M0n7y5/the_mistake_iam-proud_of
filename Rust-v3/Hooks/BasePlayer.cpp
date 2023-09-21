#include "BasePlayer.h"
#include <algorithm>
#include <cstdint>

#include "../SDK/il2cpp_api.h"
#include "../SDK/enums.h"
#include "../SDK/structs.h"
#include "../SDK/settings.h"
#include "../mrt/logging.h"
#include "../mrt/xorstr.hpp"
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

    void SilentFarm(CBasePlayer* player, CCamera* cam)
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

        const auto gatherEntryTree = activeItem->GetGatherInfoFromIndex(GatherType::Tree);
        const auto gatherEntryOre  = activeItem->GetGatherInfoFromIndex(GatherType::Ore);

        // if (gatherEntryTree == nullptr || gatherEntryOre == nullptr)
        //     return;

        // GatherDamage dmg(gatherEntryTree->gatherDamage, gatherEntryOre->gatherDamage);

        if (gatherEntryTree != nullptr)
        {
            // wood moment

            // first, try to get TreeMarker if its not success
            // get closest tree
            // Remember its presorted by distance
            const SilentFarmTarget* target = nullptr;

            for (const auto& entry : DB::silentFarmStuff)
            {
                if (entry.type == SilentFarmTargetType::TreeMarker)
                {
                    if (entry.distance > activeItem->maxDistance)
                        continue;

                    target = &entry;
                    break;
                }
            }

            if (target == nullptr)
            {
                // well of the find some trees
                for (const auto& entry : DB::silentFarmStuff)
                {
                    if (entry.type == SilentFarmTargetType::Tree)
                    {
                        if (entry.distance > activeItem->maxDistance)
                            continue;
                        target = &entry;
                        break;
                    }
                }
            }

            // Still null?
            if (target == nullptr)
                return;

            auto transform = ((CGameObject*)target->entity)->GetTransform();
            auto camPos    = cam->GetPosition();

            if (itemDefinition->fields.itemid == 1104520648)
            {
                if (activeItem->HasFlag(BaseEntityFlags::On) == false)
                {
                    // TODO: Set Engine on automatically in future
                    return;
                }

                // activeItem->MeleeAttack(target->entity, camPos, transform, false, true);
            }
            else
            {
                // activeItem->MeleeAttack(target->entity, camPos, transform, false);
            }
        }
        else if (gatherEntryOre != nullptr)
        {
            // ore moment

            const SilentFarmTarget* target = nullptr;

            for (const auto& entry : DB::silentFarmStuff)
            {
                if (entry.type == SilentFarmTargetType::OreHotSpot)
                {
                    if (entry.distance > activeItem->maxDistance)
                        continue;

                    target = &entry;
                    break;
                }
            }

            // Still null?
            if (target == nullptr)
                return;

            auto transform = ((CGameObject*)target->entity)->GetTransform();

            // activeItem->MeleeAttack(target->entity, *(Vector3*)&player->lastSentTick->fields.eyePos, transform,
            // false);
        }
        else
        {
            return;
        }
    }

    void AutoCollect()
    {
        using namespace EntityManager;

        static Timer timer{};

        for (const auto& collectible : DB::collectibles)
        {
            if (collectible.distance > 2.8f)
                continue;

            if (timer.Expired(0.1))
            {
                collectible.entity->ServerRPC(_("Pickup"));
            }
            break;
        }
    }

    void SilentMelee(CHeldEntity* weapon, CBasePlayer* localPlayer, CCamera* camera)
    {
        using namespace SettingsData;
        using namespace EntityManager;

        if (settings->misc.other.SilentMelee.Active())
        {
            if (weapon->IsMelee())
            {
                auto melee    = (CBaseMelee*)weapon;
                auto maxReach = std::clamp(melee->maxDistance + 1.f, 0.f, 3.f);

                for (const auto& player : DB::players)
                {
                    if (player.distance < maxReach)
                    {
                        auto model                 = (CModel*)player.entity->model;
                        auto targetHitPosTransform = model->GetBoneTransform(PlayerBones::head);
                        auto eyePos                = ((CPlayerEyes*)localPlayer->eyes)->GetPosition();

                        melee->MeleeAttack(localPlayer, player.entity, eyePos, targetHitPosTransform);
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

        static auto graphics = (ConVar_Graphics_c*)il2cpp::InitClass("Graphics", "ConVar");

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
            SilentFarm(_this, camera);
        }

        if (settings->misc.movement.SilentWalk || settings->ragebot.general.weapon.NoRestrictions)
        {
            _this->movement->fields.adminCheat = true;
        }

        Aimbot::ClientInput();

        Movement::PreClientInput(_this);

        reinterpret_cast<decltype(&hk_ClientInput)>(ClientInput_o)(_this, state, method);

        Movement::AfterClientInput(_this);

        if (settings->misc.other.AdminFlag.Changed())
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

            SilentMelee(heldEntity, _this, camera);
        }

        auto lookingAt = (CBasePlayer*)_this->_lookingAtEntity;

        if (lookingAt != nullptr)
        {
            if (lookingAt->IsWounded() && settings->misc.other.InstantRevive.Active())
            {
                // No RPC Flood
                static Timer timer{};

                if (timer.Expired(0.1f))
                {
                    lookingAt->ServerRPC(_("RPC_KeepAlive"));
                    lookingAt->ServerRPC(_("RPC_Assist"));
                }
            }
        }
    }
} // namespace

void Hooks::BasePlayer::Init()
{
    auto klass    = il2cpp::InitClass(_("BasePlayer"));
    ClientInput_o = il2cpp::HookVirtualFunction(klass, _("ClientInput"), &hk_ClientInput);
}
