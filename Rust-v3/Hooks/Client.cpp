#include "Client.h"
#include "../SDK/il2cpp_api.h"
#include "../SDK/structs.h"
#include "../mrt/logging.h"
#include "../mrt/xorstr.hpp"

#include "../SDK/settings.h"
#include "../ui/ESP.h"
#include "../ui/GUI.h"
#include "../ui/imgui_backend/imgui_impl_unity.h"
#include "Hooks.h"

#include "../Features/Aimbot.h"

static uintptr_t LateUpdate_o = 0;
static uintptr_t Awake_o      = 0;
static uintptr_t OnDisable_o  = 0;

ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);

static bool isMenuOpen    = true;
static bool graceFullExit = true;

static void hk_LateUpdate(CClient* _this)
{
    static bool initMe = true;

    if (initMe)
    {
        // lets init this function by allowing orinal function run first
        initMe = false;
        reinterpret_cast<decltype(&hk_LateUpdate)>(LateUpdate_o)(_this);

        InitHooks();

#ifdef _DEBUG
        L::Print<L::Yellow>("Client LateUpdate -> initMe");
#endif
        // TODO: actually use this?
        auto success = ImGui_Impl_Unity_Init();

        return;
    }

    reinterpret_cast<decltype(&hk_LateUpdate)>(LateUpdate_o)(_this);

    EntityManager::UpdateEntityList();
    Aimbot::LateUpdate();

    if (CInput::GetKeyDown(KeyCode::Insert))
    {
        isMenuOpen ^= true;
    }

    auto& io = ImGui::GetIO();

    if (graceFullExit)
    {
        graceFullExit = false;

        ImGui_Impl_Unity_NewFrame(io);
        ImGui::NewFrame();

        ESP::g = ImGui::GetBackgroundDrawList();
        ESP::Draw();

        if (isMenuOpen)
        {
            GUI::Render();
        }

        ImGui::EndFrame();
        ImGui::Render();

        ImGui_Impl_Unity_RenderDrawData(ImGui::GetDrawData());
    }
    else
    {
        ImGui::EndFrame();
        graceFullExit = true;
        //__debugbreak(); // figure this one out
    }
    graceFullExit = true;
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
        L::Print<L::Yellow>("Client Awake -> initMe");
#endif

        return;
    }

    // L::Print("Client Awake -> Called");

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
        L::Print<L::Yellow>("Client OnDisable -> initMe");
#endif

        return;
    }

    // L::Print("Client OnDisable -> Called");

    reinterpret_cast<decltype(&hk_OnDisable)>(OnDisable_o)(_this);
}

void Hooks::Client::Init()
{
    auto klass   = il2cpp::InitClass(_("Client"));
    LateUpdate_o = il2cpp::HookVirtualFunction(klass, _("LateUpdate"), (void*)&hk_LateUpdate);
    // Awake_o      = il2cpp::HookVirtualFunction(klass, _("Awake"), (void*)&hk_Awake);
    // OnDisable_o  = il2cpp::HookVirtualFunction(klass, _("OnDisable"), (void*)&hk_OnDisable);
}