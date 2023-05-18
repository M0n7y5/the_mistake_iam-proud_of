#include "MainCamera.h"
#include "../SDK/il2cpp_api.h"
#include "../SDK/structs.h"
#include "../mrt/xorstr.hpp"
#include "../mrt/logging.h"

uintptr_t LateUpdate_o = 0;
uintptr_t OnDestroy_o  = 0;
uintptr_t Awake_o      = 0;

void hk_LateUpdate(CMainCamera* _this)
{
    static bool initMe = true;

    if (initMe)
    {
        // lets init this function by allowing orinal function run first
        initMe = false;
        reinterpret_cast<decltype(&hk_LateUpdate)>(LateUpdate_o)(_this);

#ifdef _DEBUG
        L::PushConsoleColor(FOREGROUND_INTENSE_YELLOW);
        L::Print("MainCamera LateUpdate -> initMe");
        L::PopConsoleColor();
#endif

        return;
    }

    reinterpret_cast<decltype(&hk_LateUpdate)>(LateUpdate_o)(_this);
}

void hk_OnDestroy(CMainCamera* _this)
{
    static bool initMe = true;

    if (initMe)
    {
        // lets init this function by allowing orinal function run first
        initMe = false;
        reinterpret_cast<decltype(&hk_OnDestroy)>(OnDestroy_o)(_this);

#ifdef _DEBUG
        L::PushConsoleColor(FOREGROUND_INTENSE_YELLOW);
        L::Print("MainCamera OnDestroy -> initMe");
        L::PopConsoleColor();
#endif

        return;
    }

    L::Print("MainCamera OnDestroy -> Called");

    reinterpret_cast<decltype(&hk_OnDestroy)>(OnDestroy_o)(_this);
}

void hk_Awake(CMainCamera* _this)
{
    static bool initMe = true;

    if (initMe)
    {
        // lets init this function by allowing orinal function run first
        initMe = false;
        reinterpret_cast<decltype(&hk_Awake)>(Awake_o)(_this);

#ifdef _DEBUG
        L::PushConsoleColor(FOREGROUND_INTENSE_YELLOW);
        L::Print("MainCamera Awake -> initMe");
        L::PopConsoleColor();
#endif

        return;
    }
#ifdef _DEBUG
    L::Print("MainCamera Awake -> Called");
#endif
    reinterpret_cast<decltype(&hk_Awake)>(Awake_o)(_this);
}
void Hooks::MainCamera::Init()
{
    // auto klass = il2cpp::InitClass(_("MainCamera"));

    // LateUpdate_o = il2cpp::HookVirtualFunction(klass, _("LateUpdate"), &hk_LateUpdate);
    // OnDestroy_o  = il2cpp::HookVirtualFunction(klass, _("OnDestroy"), &hk_OnDestroy);
    // Awake_o      = il2cpp::HookVirtualFunction(klass, _("Awake"), &hk_Awake);
}