#include "Client.h"
#include "../SDK/il2cpp_api.h"
#include "../SDK/structs.h"
#include "../mrt/xorstr.hpp"
#include "../mrt/logging.h"

static uintptr_t LateUpdate_o = 0;
static uintptr_t Awake_o      = 0;
static uintptr_t OnDisable_o  = 0;

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
        L::Print("Client LateUpdate -> initMe");
        L::PopConsoleColor();
#endif

        return;
    }

    //auto camera = CCamera::GetMainCamera();
    //auto camera = CCamera::GetMainCamera();

    reinterpret_cast<decltype(&hk_LateUpdate)>(LateUpdate_o)(_this);
}

static void hk_Awake(void* _this)
{
    static bool initMe = true;

    if (initMe)
    {
        // lets init this function by allowing orinal function run first
        initMe = false;
        reinterpret_cast<decltype(&hk_Awake)>(Awake_o)(_this);

#ifdef _DEBUG
        L::PushConsoleColor(FOREGROUND_INTENSE_YELLOW);
        L::Print("Client Awake -> initMe");
        L::PopConsoleColor();
#endif

        return;
    }

    L::Print("Client Awake -> Called");

    reinterpret_cast<decltype(&hk_Awake)>(Awake_o)(_this);
}

static void hk_OnDisable(void* _this)
{
    static bool initMe = true;

    if (initMe)
    {
        // lets init this function by allowing orinal function run first
        initMe = false;
        reinterpret_cast<decltype(&hk_OnDisable)>(OnDisable_o)(_this);

#ifdef _DEBUG
        L::PushConsoleColor(FOREGROUND_INTENSE_YELLOW);
        L::Print("Client OnDisable -> initMe");
        L::PopConsoleColor();
#endif

        return;
    }

    L::Print("Client OnDisable -> Called");

    reinterpret_cast<decltype(&hk_OnDisable)>(OnDisable_o)(_this);
}

void Hooks::Client::Init()
{
    auto klass   = il2cpp::InitClass(_("Client"));
    LateUpdate_o = il2cpp::HookVirtualFunction(klass, _("LateUpdate"), (void*)&hk_LateUpdate);
    //Awake_o      = il2cpp::HookVirtualFunction(klass, _("Awake"), (void*)&hk_Awake);
    //OnDisable_o  = il2cpp::HookVirtualFunction(klass, _("OnDisable"), (void*)&hk_OnDisable);
}