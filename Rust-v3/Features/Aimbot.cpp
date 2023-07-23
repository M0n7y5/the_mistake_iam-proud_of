#include "Aimbot.h"
#include "../SDK/structs.h"
#include "../SDK/il2cpp_api.h"
#include "../SDK/settings.h"
#include "../ui/ESP.h"

using namespace SettingsData;

static CCamera* camera = nullptr;

namespace Aimbot
{
    TargetInfo PreviousTarget;

    void ClientInput()
    {
        static auto main = (MainCamera_c*)il2cpp::InitClass(_("MainCamera"));
        camera           = (CCamera*)main->static_fields->mainCamera;

        if (camera == nullptr)
            return;

        FOV.Set(camera, &ESP::currentScreenSize, &settings->ragebot.general.aimbot.FOVRadius);

        if (settings->ragebot.general.aimbot.aim.Enabled == false)
            return;

        if (PreviousTarget.type != TargetType::Invalid)
        {
            if (settings->ragebot.general.targeting.TargetLock)
            {
            }
        }
    }
} // namespace Aimbot