#include "PerformanceText.h"
#include "../SDK/il2cpp_api.h"
#include "../SDK/structs.h"
#include "../mrt/xorstr.hpp"
#include "../mrt/logging.h"

static uintptr_t LateUpdate_o = 0;

static void hk_LateUpdate(void* _this)
{
    static bool initMe = true;

    if (initMe)
    {
        // lets init this function by allowing orinal function run first
        initMe = false;
        reinterpret_cast<decltype(&hk_LateUpdate)>(LateUpdate_o)(_this);

#ifdef _DEBUG
        L::PushConsoleColor(FOREGROUND_INTENSE_YELLOW);
        L::Print("PerformanceText LateUpdate -> initMe");
        L::PopConsoleColor();
#endif

        return;
    }

    auto camera = CCamera::GetMainCamera();

    reinterpret_cast<decltype(&hk_LateUpdate)>(LateUpdate_o)(_this);
}

void Hooks::PerformanceText::Init()
{
    auto klass = il2cpp::InitClass(_("PerformanceText"));

    LateUpdate_o = il2cpp::HookVirtualFunction(klass, _("LateUpdate"), (void*)&hk_LateUpdate);

    // OnDestroy_o  = il2cpp::HookVirtualFunction(klass, _("OnDestroy"), &hk_OnDestroy);
    // Awake_o      = il2cpp::HookVirtualFunction(klass, _("Awake"), &hk_Awake);
}