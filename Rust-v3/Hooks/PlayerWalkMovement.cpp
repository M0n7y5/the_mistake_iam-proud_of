#include "PlayerWalkMovement.h"
#include "../SDK/il2cpp_api.h"
#include "../SDK/structs.h"
#include "../mrt/xorstr.hpp"

bool joj = true;

void hk_DoFixedUpdate(CPlayerWalkMovement* _this, CModelState* modelState)
{
    static bool initme = true;

    if (initme)
    { // lets init this function by allowing orinal function run first
        initme = false;
        reinterpret_cast<decltype(&hk_DoFixedUpdate)>(Hooks::PlayerWalkMovement::DoFixedUpdate_o)(_this, modelState);
        return;
    }

    do
    {
        auto player = (CBasePlayer*)_this->_Owner_k__BackingField;

        if (!player->IsLocalPlayer()) //hmm
            break;

        if (modelState->HasFlag(ModelStateFlags::Sleeping))
            break;

        if (joj)
            _this->previousVelocity.fields.y = negate_flt(_flt(1.f));

        if (joj)
        {
            _this->jumpTime   = _flt(0.f);
            _this->groundTime = _flt(999999999.f);
        }
    }
    while (false);

    reinterpret_cast<decltype(&hk_DoFixedUpdate)>(Hooks::PlayerWalkMovement::DoFixedUpdate_o)(_this, modelState);
}

void hk_ClientInput(CPlayerWalkMovement* _this, CInputState* inputState, CModelState* modelState)
{
    static bool initme = true;

    if (initme)
    { // lets init this function by allowing orinal function run first
        initme = false;
        reinterpret_cast<decltype(&hk_ClientInput)>(Hooks::PlayerWalkMovement::ClientInput_o)(
            _this, inputState, modelState);
        return;
    }

    reinterpret_cast<decltype(&hk_ClientInput)>(Hooks::PlayerWalkMovement::ClientInput_o)(
        _this, inputState, modelState);
}

void hk_TeleportTo(CPlayerWalkMovement* _this, Vector3 position, CBasePlayer* player)
{
    static bool initme = true;

    if (initme)
    { // lets init this function by allowing orinal function run first
        initme = false;
        reinterpret_cast<decltype(&hk_TeleportTo)>(Hooks::PlayerWalkMovement::TeleportTo_o)(_this, position, player);
        return;
    }

    reinterpret_cast<decltype(&hk_TeleportTo)>(Hooks::PlayerWalkMovement::TeleportTo_o)(_this, position, player);
}

void Hooks::PlayerWalkMovement::Init()
{
    Il2CppClass* klass = il2cpp::InitClass(_("PlayerWalkMovement"));

    DoFixedUpdate_o = *(uintptr_t*)il2cpp::GetMethod(klass, _("DoFixedUpdate"));
    il2cpp::HookVirtualFunction((uintptr_t)klass, DoFixedUpdate_o, &hk_DoFixedUpdate);

    // il2cpp::HookVirtualFunction(klass, _("DoFixedUpdate"), &hk_DoFixedUpdate);

    // ClientInput_o   = il2cpp::HookVirtualFunction(klass, _("ClientInput"), &hk_ClientInput);
    // TeleportTo_o    = il2cpp::HookVirtualFunction(klass, _("TeleportTo"), &hk_DoFixedUpdate);
}
