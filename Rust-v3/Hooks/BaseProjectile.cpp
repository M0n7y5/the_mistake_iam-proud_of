#include "BaseProjectile.h"

#include <cstdint>

#include "../SDK/il2cpp_api.h"
#include "../SDK/enums.h"
#include "../SDK/structs.h"
#include "../SDK/settings.h"
#include "../mrt/logging.h"
#include "../mrt/xorstr.hpp"

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

            if(settings->ragebot.general.desync.RapidFire)
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

} // namespace

void Hooks::BaseProjectile::Init()
{
    auto klass   = il2cpp::InitClass(_("BaseProjectile"));
    OnInput_o    = il2cpp::HookVirtualFunction(klass, _("OnInput"), (void*)&hk_OnInput);
    GetAimCone_o = il2cpp::HookVirtualFunction(klass, _("GetAimCone"), (void*)&hk_GetAimCone);
}
