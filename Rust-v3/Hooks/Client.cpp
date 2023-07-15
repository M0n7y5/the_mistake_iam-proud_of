#include "Client.h"
#include "../SDK/il2cpp_api.h"
#include "../SDK/structs.h"
#include "../mrt/logging.h"
#include "../mrt/xorstr.hpp"

#include "../SDK/settings.h"
#include "../ui/GUI.h"
#include "../ui/imgui_backend/imgui_impl_unity.h"

static uintptr_t LateUpdate_o = 0;
static uintptr_t Awake_o      = 0;
static uintptr_t OnDisable_o  = 0;

ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);

static bool isMenuOpen = true;

static void hk_LateUpdate(CClient *_this)
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
        // TODO: actually use this?
        auto success = ImGui_Impl_Unity_Init();

        return;
    }

    if(CInput::GetKeyDown(KeyCode::Insert))
    {
        isMenuOpen ^= true;
    }

    auto &io = ImGui::GetIO();

    ImGui_Impl_Unity_NewFrame(io);
    ImGui::NewFrame();

    if (isMenuOpen)
    {
        GUI::Render();
    }

    ImGui::EndFrame();
    ImGui::Render();

    ImGui_Impl_Unity_RenderDrawData(ImGui::GetDrawData());

    reinterpret_cast<decltype(&hk_LateUpdate)>(LateUpdate_o)(_this);
}

static void hk_Awake(void *_this)
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

    // L::Print("Client Awake -> Called");

    reinterpret_cast<decltype(&hk_Awake)>(Awake_o)(_this);
}

static void hk_OnDisable(void *_this)
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

    // L::Print("Client OnDisable -> Called");

    reinterpret_cast<decltype(&hk_OnDisable)>(OnDisable_o)(_this);
}

void Hooks::Client::Init()
{
    auto klass   = il2cpp::InitClass(_("Client"));
    LateUpdate_o = il2cpp::HookVirtualFunction(klass, _("LateUpdate"), (void *)&hk_LateUpdate);
    // Awake_o      = il2cpp::HookVirtualFunction(klass, _("Awake"), (void*)&hk_Awake);
    // OnDisable_o  = il2cpp::HookVirtualFunction(klass, _("OnDisable"), (void*)&hk_OnDisable);
}