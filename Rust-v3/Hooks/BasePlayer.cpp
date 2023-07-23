#include "BasePlayer.h"
#include <cstdint>

#include "../SDK/il2cpp_api.h"
#include "../SDK/structs.h"
#include "../mrt/logging.h"
#include "../mrt/xorstr.hpp"
#include "../Features/Aimbot.h"

namespace
{
    uintptr_t   ClientInput_o = 0;
    static void hk_ClientInput(CBasePlayer* _this, InputState_o* state, const MethodInfo* method)
    {

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

        if (_this->IsLocalPlayer() == false)
        {
            reinterpret_cast<decltype(&hk_ClientInput)>(ClientInput_o)(_this, state, method);
            return;
        }

        if (_this->m_CachedPtr == 0)
        {
            reinterpret_cast<decltype(&hk_ClientInput)>(ClientInput_o)(_this, state, method);
            return;
        }

        Aimbot::ClientInput();

        reinterpret_cast<decltype(&hk_ClientInput)>(ClientInput_o)(_this, state, method);
    }
} // namespace

void Hooks::BasePlayer::Init()
{
    auto klass = il2cpp::InitClass(_("BasePlayer"));

    ClientInput_o = il2cpp::HookVirtualFunction(klass, _("ClientInput"), &hk_ClientInput);
}
