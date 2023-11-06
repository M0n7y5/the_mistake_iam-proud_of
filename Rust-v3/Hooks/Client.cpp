#include "Client.h"
#include "../SDK/il2cpp_api.h"
#include "../SDK/structs.h"
#include "../SDK/globals.h"
#include "../SDK/prefab_ids.h"
#include "../mrt/logging.h"
#include "../mrt/constexpr-xxh3.h"
#include "../mrt/steam.hpp"
#include "../mrt/xorstr.hpp"

#include "../SDK/settings.h"
#include "../ui/ESP.h"
#include "../ui/GUI.h"
#include "../ui/imgui_backend/imgui_impl_unity.h"
#include "Hooks.h"

#include "../Features/Aimbot.h"
#include <vector>

namespace
{

    static uintptr_t Awake_o     = 0;
    static uintptr_t OnDisable_o = 0;

    // ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);

    static bool isMenuOpen    = true;
    static bool graceFullExit = true;

    static uintptr_t LateUpdate_o = 0;

    // NOTE: Keep in mind, any crash mid init will rerun init again, trying to rehook shit thats hooked etc.
    static void hk_LateUpdate(CClient* _this)
    {
        using namespace SettingsData;
        reinterpret_cast<decltype(&hk_LateUpdate)>(LateUpdate_o)(_this);

        static bool           initMe           = false;
        constexpr static auto NotoSans_Bold    = constexpr_xxh3::XXH3_64bits_withSeed_const("NotoSans-Bold", 42);
        constexpr static auto NotoSans_Regular = constexpr_xxh3::XXH3_64bits_withSeed_const("NotoSans-Regular", 42);
        constexpr static auto fontello         = constexpr_xxh3::XXH3_64bits_withSeed_const("fontello", 42);
        constexpr static auto LanaPixel        = constexpr_xxh3::XXH3_64bits_withSeed_const("LanaPixel", 42);
        constexpr static auto UIShaders        = constexpr_xxh3::XXH3_64bits_withSeed_const("uishaders", 42);
        constexpr static auto GRLogo           = constexpr_xxh3::XXH3_64bits_withSeed_const("grlogo", 42);

        auto mainCam = CCamera::GetMainCamera();

        if (initMe == false)
        {
            static auto menuKlass  = (MainMenuSystem_c*)il2cpp::InitClass(_("MainMenuSystem"));
            auto        isMenuOpen = menuKlass->static_fields->isOpen;

            if (isMenuOpen == false)
                return;

#if 1
            static bool fontsDone = false;
            if (fontsDone == false)
            {
                static int idx = 0;

                static float timer = 0.f;

                timer += CTime::GetUnscaledDeltaTime();

                if (timer < 1.5f)
                {
                    return;
                }

                switch (idx)
                {
                case 0:
                {
                    if (Steam::GetFont(G::NotoSans_Bold, NotoSans_Bold))
                        idx++;
                    break;
                }
                case 1:
                {
                    if (Steam::GetFont(G::NotoSans_Regular, NotoSans_Regular))
                        idx++;
                    break;
                }
                case 2:
                {
                    if (Steam::GetFont(G::fontello, fontello))
                        idx++;
                    break;
                }
                case 3:
                {
                    if (Steam::GetFont(G::lanaPixel, LanaPixel))
                        idx++;
                    break;
                }
                case 4:
                {
                    if (Steam::GetFont(G::shaders, UIShaders))
                        idx++;
                    break;
                }
                case 5:
                {
                    if (Steam::GetFont(G::GRLogo, GRLogo))
                        idx++;
                    break;
                }
                default:
                    fontsDone = true;
                    break;
                }

                timer = 0.f;

                return;
            }
#endif
            // lets init this function by allowing orinal function run first
            InitHooks();

#ifdef _DEBUG
            L::Print<L::Yellow>("Client LateUpdate -> initMe");
#endif
            // TODO: actually use this?
            auto success = ImGui_Impl_Unity_Init(mainCam);
            initMe       = true;
            return;
        }

        if (EntityManager::UpdateEntityList())
        {
            using namespace SettingsData;
            auto localplayer = CLocalPlayer::GetLocalPlayer();

            if (localplayer != nullptr)
            {
                Aimbot::LateUpdate();
            }
        }

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

            if (settings->visuals.general.BiggerESPFont)
            {
                ImGui::PushFont(io.Fonts->Fonts[1]);
            }

            ESP::g = ImGui::GetBackgroundDrawList();
            ESP::Draw();

            if (settings->visuals.general.BiggerESPFont)
            {
                ImGui::PopFont();
            }

            if (isMenuOpen)
            {
                GUI::Render();
            }

            ImGui::EndFrame();
            ImGui::Render();

            ImGui_Impl_Unity_RenderDrawData(ImGui::GetDrawData(), mainCam);
        }
        else
        {
            ImGui::EndFrame();
            ResetAllKeybindStates();
            graceFullExit = true;
            //__debugbreak(); // figure this one out
        }
        graceFullExit = true;
    }

    //     static void hk_Awake(void* _this)
    //     {
    //         static bool initMe = true;

    //         if (initMe)
    //         {
    //             // lets init this function by allowing orinal function run first
    //             initMe = false;
    //             reinterpret_cast<decltype(&hk_Awake)>(Awake_o)(_this);

    // #ifdef _DEBUG
    //             L::Print<L::Yellow>("Client Awake -> initMe");
    // #endif

    //             return;
    //         }

    //         // L::Print("Client Awake -> Called");

    //         reinterpret_cast<decltype(&hk_Awake)>(Awake_o)(_this);
    //     }

    //     static void hk_OnDisable(void* _this)
    //     {
    //         static bool initMe = true;

    //         if (initMe)
    //         {
    //             // lets init this function by allowing orinal function run first
    //             initMe = false;
    //             reinterpret_cast<decltype(&hk_OnDisable)>(OnDisable_o)(_this);

    // #ifdef _DEBUG
    //             L::Print<L::Yellow>("Client OnDisable -> initMe");
    // #endif

    //             return;
    //         }

    //         // L::Print("Client OnDisable -> Called");

    //         reinterpret_cast<decltype(&hk_OnDisable)>(OnDisable_o)(_this);
    //     }

    static uintptr_t OnNetworkMessage_o = 0;

    void hk_OnNetworkMessage(CClient* _this, CMessage* packet, void* method)
    {
        using namespace SettingsData;
        using namespace EntityManager;

        reinterpret_cast<decltype(&hk_OnNetworkMessage)>(OnNetworkMessage_o)(_this, packet, method);

        if (settings->visuals.raid.Enabled.Enable && ((MessageType)packet->type == MessageType::Effect))
        {
            static auto EffectNetworkKlass = (EffectNetwork_c*)il2cpp::InitClass("EffectNetwork");

            auto effect = EffectNetworkKlass->static_fields->effect->fields;

            EffectType type = EffectType::Invalid;

            const auto& opt = settings->visuals.raid;

#ifdef _DEBUG
            // Get all the juicy stuff
            auto poolStr = CStringPool::Get(effect.pooledstringid);
            L::Print<L::White>("Effect: ID: {}, string: {}", effect.pooledstringid, poolStr->str());
#endif

            switch (effect.pooledstringid)
            {
            case 857997843:
                if (opt.C4)
                    type = EffectType::C4;
                break;
            case 1289728008:
                if (opt.Satchel)
                    type = EffectType::Satchel;
                break;
            case prefabs::effects::rocketExplosion:
                if (opt.Rocket)
                    type = EffectType::Rocket;
                break;
            case prefabs::effects::rocketIncendiaryExplosion:
                if (opt.RocketIncendiary)
                    type = EffectType::RocketIncen;
                break;
            case 3702991035:
                if (opt.ExplosiveAmmo)
                    type = EffectType::ExplosiveAmmo;
                break;
            case prefabs::effects::grenadeExplosion:
                if (opt.Grenades)
                    type = EffectType::ExplosiveGrenade;
                break;
            case prefabs::effects::mlrsExplostion:
                if (opt.MLRS)
                    type = EffectType::MLRS;
                break;
            default:
                return;
            }

            auto pos = *(Vector3*)&effect.worldPos;

            if (pos.empty())
            {
                pos = *(Vector3*)&effect.origin;
            }

            if (pos.empty())
                return;

            for (auto& raid : DB::raids)
            {
                if (raid.position.distance(pos) < (float)settings->visuals.raid.GroupByDistance)
                {
                    raid.AddNewEffect(type, pos, CTime::GetRealTime());
                    return;
                }
            }

            RaidInfo info(type, pos, CTime::GetRealTime());

            DB::raids.emplace_back(info);
        }
    }

} // namespace

void Hooks::Client::Init()
{
    auto klass         = il2cpp::InitClass(_("Client"));
    LateUpdate_o       = il2cpp::HookVirtualFunction(klass, _("LateUpdate"), (void*)&hk_LateUpdate);
    OnNetworkMessage_o = il2cpp::HookVirtualFunction(klass, _("OnNetworkMessage"), (void*)&hk_OnNetworkMessage);

    EntityManager::Init();
    // Awake_o      = il2cpp::HookVirtualFunction(klass, _("Awake"), (void*)&hk_Awake);
    // OnDisable_o  = il2cpp::HookVirtualFunction(klass, _("OnDisable"), (void*)&hk_OnDisable);
}