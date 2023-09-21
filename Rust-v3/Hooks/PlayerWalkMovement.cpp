#include "PlayerWalkMovement.h"
#include "../SDK/il2cpp_api.h"
#include "../SDK/structs.h"
#include "../SDK/settings.h"
#include "../mrt/logging.h"
#include "../mrt/xorstr.hpp"
#include "../Features/Movement.h"

namespace
{

    uintptr_t DoFixedUpdate_o = 0;
    uintptr_t ClientInput_o   = 0;
    uintptr_t TeleportTo_o    = 0;

    // bool joj = true;

    void OmniSprint(CBasePlayer* local, CPlayerWalkMovement* movement, CModelState* modelState)
    {
        using namespace SettingsData;

        auto flyhackActive = settings->misc.flyhack.Flyhack.Active();
        if (local->modelState->fields.waterLevel > _flt(0.55f) && !flyhackActive)
            return;

        float TargetSpeed = local->GetPlayerSpeedMaximum(flyhackActive);
        if (modelState->HasFlag(ModelStateFlags::OnLadder))
            return;

        Vector3 CurrentVelocity = *(Vector3*)&movement->_TargetMovement_k__BackingField;
        if (!CurrentVelocity.empty() && !movement->adminCheat) // noclip fix
        {
            Vector3 PreparedVelocity =
                Vector3{CurrentVelocity.x, _flt(0.f), CurrentVelocity.z}.normalized() * TargetSpeed;
            CurrentVelocity                           = {PreparedVelocity.x, CurrentVelocity.y, PreparedVelocity.z};
            movement->_TargetMovement_k__BackingField = *(UnityEngine_Vector3_o*)&CurrentVelocity;
            modelState->SetFlag(ModelStateFlags::Sprinting, true);
        }
    }

    void hk_DoFixedUpdate(CPlayerWalkMovement* _this, CModelState* modelState, void* method)
    {
        using namespace SettingsData;
        static bool initme = true;

        if (initme)
        {
            // lets init this function by allowing orinal function run first
            initme = false;
            reinterpret_cast<decltype(&hk_DoFixedUpdate)>(DoFixedUpdate_o)(_this, modelState, method);

#ifdef _DEBUG
            L::Print<L::Yellow>("PlayerWalkMovement DoFixedUpdate -> initMe");
#endif
            return;
        }

        do
        {
            auto player = (CBasePlayer*)_this->_Owner_k__BackingField;

            if (!player->IsLocalPlayer()) // hmm
                break;

            if (modelState->HasFlag(ModelStateFlags::Sleeping))
                break;

            auto isMounted = player->mounted.fields.ent_cached != nullptr &&
                             player->mounted.fields.ent_cached->fields.m_CachedPtr == 0;

            if (settings->misc.flyhack.Flyhack.Active() == false || isMounted == false)
            {
                if (settings->misc.movement.NoFallDamage)
                    _this->previousVelocity.fields.y = -(1.f);

                if (settings->misc.movement.InfiniteJump)
                {
                    _this->jumpTime   = _flt(0.f);
                    _this->groundTime = _flt(999999999.f);
                }

                if (settings->misc.movement.SpiderMan)
                {
                    _this->groundAngle    = _flt(0.f);
                    _this->groundAngleNew = _flt(0.f);
                }
            }

        } while (false);

        reinterpret_cast<decltype(&hk_DoFixedUpdate)>(DoFixedUpdate_o)(_this, modelState, method);
    }

    void hk_ClientInput(CPlayerWalkMovement* _this, CInputState* inputState, CModelState* modelState, void* method)
    {
        using namespace SettingsData;
        static bool initme = true;

        if (initme)
        { // lets init this function by allowing orinal function run first
            initme = false;
            reinterpret_cast<decltype(&hk_ClientInput)>(ClientInput_o)(_this, inputState, modelState, method);

#ifdef _DEBUG
            L::Print<L::Yellow>("PlayerWalkMovement ClientInput -> initMe");
#endif
            return;
        }

        static auto waterSystemklass = (WaterSystem_c*)il2cpp::InitClass(_("WaterSystem"));

        static CBoxCollider* collider = nullptr;

        if (collider == nullptr || collider->m_CachedPtr == 0)
        {
            auto ocean = waterSystemklass->static_fields->_Ocean_k__BackingField;

            if (ocean != nullptr || ocean->fields.m_CachedPtr != 0)
            {
                auto gmo  = ((CComponent*)ocean)->GetGameobject();
                auto type = CType::FromClass(_("BoxCollider"), _("UnityEngine"));

                collider = gmo->AddComponent<CBoxCollider>(type);
                collider->SetSize({5000.f, 0.001f, 5000.f});
            }
        }

        if (settings->misc.movement.Jesus.Changed())
        {
            CGamePhysics::IgnoreLayerCollision(Layer::Player_Movement, Layer::Water, !settings->misc.movement.Jesus);
        }

        if (settings->misc.movement.TreeCollision.Changed())
        {
            CGamePhysics::IgnoreLayerCollision(Layer::Player_Movement, Layer::Tree,
                                               settings->misc.movement.TreeCollision);
        }

        if (settings->misc.movement.PlayerCollision.Changed())
        {
            CGamePhysics::IgnoreLayerCollision(Layer::Player_Movement, Layer::AI,
                                               settings->misc.movement.PlayerCollision);
        }

        _this->adminCheat = playerbackupData.adminFlag;

        reinterpret_cast<decltype(&hk_ClientInput)>(ClientInput_o)(_this, inputState, modelState, method);

        auto player = (CBasePlayer*)_this->_Owner_k__BackingField;

        if (player->IsLocalPlayer() == false)
            return;

        auto isMounted =
            player->mounted.fields.ent_cached != nullptr && player->mounted.fields.ent_cached->fields.m_CachedPtr == 0;

        if (settings->misc.flyhack.Flyhack.Active() == false || isMounted == false)
        {
            if (settings->misc.movement.OmniSprint)
            {
                OmniSprint((CBasePlayer*)_this->_Owner_k__BackingField, _this, modelState);
            }
        }
    }

    void hk_TeleportTo(CPlayerWalkMovement* _this, Vector3 position, CBasePlayer* player, void* method)
    {
        static bool initme = true;

        if (initme)
        { // lets init this function by allowing orinal function run first
            initme = false;
            reinterpret_cast<decltype(&hk_TeleportTo)>(TeleportTo_o)(_this, position, player, method);

#ifdef _DEBUG
            L::Print<L::Yellow>("PlayerWalkMovement TeleportTo -> initMe");
#endif
            return;
        }

        if (player->lastSentTick != nullptr)
        {
            if (player->modelState != nullptr)
            {
                auto modelState = (CModelState*)player->modelState;
                if (modelState->HasFlag(ModelStateFlags::Sleeping) == false)
                {
                    player->lastSentTick->fields.position = *reinterpret_cast<UnityEngine_Vector3_o*>(&position);
                }
            }
        }

        reinterpret_cast<decltype(&hk_TeleportTo)>(TeleportTo_o)(_this, position, player, method);
    }

    static uintptr_t PlayerTick_WriteToStreamDelta_o = 0;

    static void hk_PlayerTick_WriteToStreamDelta(CPlayerTick* _this, uintptr_t stream, CPlayerTick* previous,
                                                 void* method)
    {
        using namespace SettingsData;

        static bool initMe = true;

        if (initMe)
        {
            // lets init this function by allowing orinal function run first
            initMe = false;
            reinterpret_cast<decltype(&hk_PlayerTick_WriteToStreamDelta)>(PlayerTick_WriteToStreamDelta_o)(
                _this, stream, previous, method);

#ifdef _DEBUG
            L::Print("PlayerTick WriteToStreamDelta -> initMe");
#endif

            return;
        }

        auto player = CLocalPlayer::GetLocalPlayer();

        using namespace SettingsData;

        if (settings->misc.flyhack.AntiFlyKick)
        {
            if (previous != nullptr && player != nullptr)
            {
                auto prevPos    = *(Vector3*)&previous->position;
                auto newPos     = *(Vector3*)&_this->position;
                auto relPrevPos = prevPos;
                auto relNewPos  = newPos;

                auto parent_id      = _this->parentID.fields.Value;
                auto prev_parent_id = previous->parentID.fields.Value;
                bool flag           = parent_id == 0 && prev_parent_id == 0;

                bool flyhackDetected = false;
                if (flag)
                {
                    flyhackDetected = Movement::TestFlying(player, relPrevPos, relNewPos, true);
                }
                else
                {
                    Movement::flyhackDistanceHorizontal = 0.f;
                    Movement::flyhackDistanceVertical   = 0.f;
                }

                if (flyhackDetected)
                {
                    _this->position = *reinterpret_cast<UnityEngine_Vector3_o*>(&prevPos);
                    hk_TeleportTo((CPlayerWalkMovement*)player->movement, relPrevPos, player, nullptr);
                }

                if (settings->misc.flyhack.PreventBan)
                {
                    auto modelState = (CModelState*)_this->modelState;
                    modelState->SetFlag(ModelStateFlags::Flying, false);

                    auto modelStatePrev = (CModelState*)previous->modelState;
                    modelStatePrev->SetFlag(ModelStateFlags::Flying, false);
                }
            }
        }

        reinterpret_cast<decltype(&hk_PlayerTick_WriteToStreamDelta)>(PlayerTick_WriteToStreamDelta_o)(
            _this, stream, previous, method);
    }

} // namespace

void Hooks::PlayerWalkMovement::Init()
{
    auto klassMovement = il2cpp::InitClass(_("PlayerWalkMovement"));

    DoFixedUpdate_o = il2cpp::HookVirtualFunction(klassMovement, _("DoFixedUpdate"), &hk_DoFixedUpdate);
    TeleportTo_o    = il2cpp::HookVirtualFunction(klassMovement, _("TeleportTo"), &hk_TeleportTo);
    ClientInput_o   = il2cpp::HookVirtualFunction(klassMovement, _("ClientInput"), &hk_ClientInput);

    auto klassPlayerTick = il2cpp::InitClass(_("PlayerTick"));
    PlayerTick_WriteToStreamDelta_o =
        il2cpp::HookVirtualFunction(klassPlayerTick, _("WriteToStreamDelta"), &hk_PlayerTick_WriteToStreamDelta);
}
