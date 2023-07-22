#include "PlayerWalkMovement.h"
#include "../SDK/il2cpp_api.h"
#include "../SDK/structs.h"
#include "../mrt/logging.h"
#include "../mrt/xorstr.hpp"

uintptr_t DoFixedUpdate_o = 0;
uintptr_t ClientInput_o   = 0;
uintptr_t TeleportTo_o    = 0;

bool joj = true;

void hk_DoFixedUpdate(CPlayerWalkMovement *_this, CModelState *modelState)
{
    static bool initme = true;

    if (initme)
    {
        // lets init this function by allowing orinal function run first
        initme = false;
        reinterpret_cast<decltype(&hk_DoFixedUpdate)>(DoFixedUpdate_o)(_this, modelState);

#ifdef _DEBUG
        L::Print<L::Yellow>("PlayerWalkMovement DoFixedUpdate -> initMe");
#endif
        return;
    }

    do
    {
        auto player = (CBasePlayer *)_this->_Owner_k__BackingField;

        if (!player->IsLocalPlayer()) // hmm
            break;

        auto lula = player->input;

        if (modelState->HasFlag(ModelStateFlags::Sleeping))
            break;

        if (joj)
            _this->previousVelocity.fields.y = negate_flt(_flt(1.f));

        if (joj)
        {
            _this->jumpTime   = _flt(0.f);
            _this->groundTime = _flt(999999999.f);
        }
    } while (false);

    reinterpret_cast<decltype(&hk_DoFixedUpdate)>(DoFixedUpdate_o)(_this, modelState);
}

void hk_ClientInput(CPlayerWalkMovement *_this, CInputState *inputState, CModelState *modelState)
{
    static bool initme = true;

    if (initme)
    { // lets init this function by allowing orinal function run first
        initme = false;
        reinterpret_cast<decltype(&hk_ClientInput)>(ClientInput_o)(_this, inputState, modelState);

#ifdef _DEBUG
        L::Print<L::Yellow>("PlayerWalkMovement ClientInput -> initMe");
#endif
        return;
    }

    reinterpret_cast<decltype(&hk_ClientInput)>(ClientInput_o)(_this, inputState, modelState);
}

void hk_TeleportTo(CPlayerWalkMovement *_this, Vector3 position, CBasePlayer *player)
{
    static bool initme = true;

    if (initme)
    { // lets init this function by allowing orinal function run first
        initme = false;
        reinterpret_cast<decltype(&hk_TeleportTo)>(TeleportTo_o)(_this, position, player);

#ifdef _DEBUG
        L::Print<L::Yellow>("PlayerWalkMovement TeleportTo -> initMe");
#endif
        return;
    }

    reinterpret_cast<decltype(&hk_TeleportTo)>(TeleportTo_o)(_this, position, player);
}

void Hooks::PlayerWalkMovement::Init()
{

    auto klass = il2cpp::InitClass(_("PlayerWalkMovement"));

    DoFixedUpdate_o = il2cpp::HookVirtualFunction(klass, _("DoFixedUpdate"), &hk_DoFixedUpdate);
    ClientInput_o   = il2cpp::HookVirtualFunction(klass, _("ClientInput"), &hk_ClientInput);
    TeleportTo_o    = il2cpp::HookVirtualFunction(klass, _("TeleportTo"), &hk_DoFixedUpdate);
}
