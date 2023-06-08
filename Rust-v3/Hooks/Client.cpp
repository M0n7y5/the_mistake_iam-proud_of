#include "Client.h"
#include "../SDK/il2cpp_api.h"
#include "../SDK/structs.h"
#include "../mrt/xorstr.hpp"
#include "../mrt/logging.h"

#include "../ui/imgui_backend/imgui_impl_unity.h"

static uintptr_t LateUpdate_o = 0;
static uintptr_t Awake_o      = 0;
static uintptr_t OnDisable_o  = 0;

ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);

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
        auto camera = CCamera::GetMainCamera();

        auto success = ImGui_Impl_Unity_Init(camera);

        return;
    }

    // auto camera = CCamera::GetMainCamera();
    // auto camera = CCamera::GetMainCamera();

    auto& io = ImGui::GetIO();

    ImGui_Impl_Unity_NewFrame(io);
    ImGui::NewFrame();

    // 2. Show a simple window that we create ourselves. We use a Begin/End pair to create a named window.
    {
        static float f       = 0.0f;
        static int   counter = 0;

        ImGui::Begin("Hello, world!"); // Create a window called "Hello, world!" and append into it.

        ImGui::Text("This is some useful text."); // Display some text (you can use a format strings too)
        // ImGui::Checkbox("Demo Window", &show_demo_window); // Edit bools storing our window open/close state
        // ImGui::Checkbox("Another Window", &show_another_window);

        ImGui::SliderFloat("float", &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f
        ImGui::ColorEdit3("clear color", (float*)&clear_color); // Edit 3 floats representing a color

        if (ImGui::Button(
                "Button")) // Buttons return true when clicked (most widgets return true when edited/activated)
            counter++;
        ImGui::SameLine();
        ImGui::Text("counter = %d", counter);

        ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / io.Framerate, io.Framerate);
        ImGui::End();
    }

    ImGui::EndFrame();
    ImGui::Render();

    ImGui_Impl_Unity_RenderDrawData(ImGui::GetDrawData());

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
    // Awake_o      = il2cpp::HookVirtualFunction(klass, _("Awake"), (void*)&hk_Awake);
    // OnDisable_o  = il2cpp::HookVirtualFunction(klass, _("OnDisable"), (void*)&hk_OnDisable);
}