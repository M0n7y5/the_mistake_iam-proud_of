#include "UIBlackoutOverlay.h"
#include "../SDK/il2cpp_api.h"
#include "../SDK/settings.h"
#include "../SDK/structs.h"
#include "../SDK/enums.h"
#include "../mrt/xorstr.hpp"
#include "../mrt/logging.h"

static uintptr_t Update_o = 0;

static void hk_Update(CUIBlackoutOverlay* _this, void* method)
{
    using namespace SettingsData;

    static bool initMe = true;

    if (initMe)
    {
        // lets init this function by allowing orinal function run first
        initMe = false;
        reinterpret_cast<decltype(&hk_Update)>(Update_o)(_this, method);

#ifdef _DEBUG
        L::Print("UIBlackoutOverlay LateUpdate -> initMe");
#endif

        return;
    }

    auto type = (blackoutType)_this->overlayType;

    if(settings->misc.visibility.HideAttireOverlays)
    {
        if(type == blackoutType::HELMETSLIT || type == blackoutType::SNORKELGOGGLE)
        {
            _this->myAlpha = 0.f;
        }
    }

    reinterpret_cast<decltype(&hk_Update)>(Update_o)(_this, method);
}

void Hooks::UIBlackoutOverlay::Init()
{
    auto klass = il2cpp::InitClass(_("UIBlackoutOverlay"));

    Update_o = il2cpp::HookVirtualFunction(klass, _("Update"), (void*)&hk_Update);

    // OnDestroy_o  = il2cpp::HookVirtualFunction(klass, _("OnDestroy"), &hk_OnDestroy);
    // Awake_o      = il2cpp::HookVirtualFunction(klass, _("Awake"), &hk_Awake);
}