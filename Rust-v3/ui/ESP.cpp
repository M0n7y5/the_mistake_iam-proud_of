#include "ESP.h"
#include "../Features/EntityManager.h"
#include "../SDK/math.h"
#include "../SDK/settings.h"
#include "../SDK/structs.h"
#include "../mrt/xorstr.hpp"
#include "easings.h"

using namespace ESP;
using namespace SettingsData;

ImVec2 ToImVec2(Vector2 vec)
{
    return ImVec2(vec.x, vec.y);
}

// Utils
ImVec2 GetTextSize(const char *text)
{
    return ImGui::GetFont()->CalcTextSizeA(_flt(13.f), FLT_MAX, 0, text);
}

// Draw helpers
void RenderTextOutline(ImVec2 pos, ImColor color, ImColor outlineColor, const char *text)
{
    outlineColor.Value.w = color.Value.w;

    auto font = ImGui::GetFont();

    g->AddText(font, 0.f, ImVec2(pos.x - 1.f, pos.y), outlineColor, text);
    g->AddText(font, 0.f, ImVec2(pos.x + 1.f, pos.y), outlineColor, text);

    g->AddText(font, 0.f, ImVec2(pos.x, pos.y - 1.f), outlineColor, text);
    g->AddText(font, 0.f, ImVec2(pos.x, pos.y + 1.f), outlineColor, text);

    g->AddText(font, 0.f, ImVec2(pos.x - 1.f, pos.y + 1.f), outlineColor, text);
    g->AddText(font, 0.f, ImVec2(pos.x + 1.f, pos.y - 1.f), outlineColor, text);

    g->AddText(font, 0.f, ImVec2(pos.x - 1.f, pos.y - 1.f), outlineColor, text);
    g->AddText(font, 0.f, ImVec2(pos.x + 1.f, pos.y + 1.f), outlineColor, text);

    g->AddText(font, 0.f, pos, color, text);
}

void RenderTextCenter(Vector2 centerPos, const char *str, ImColor color = ImColor(255, 255, 255),
                      ImColor outlineColor = ImColor(0, 0, 0))
{
    if (!str)
        return;

    ImVec2 textSize  = GetTextSize(str);
    ImVec2 screenPos = ImVec2(centerPos.x - textSize.x / _flt(2.f), centerPos.y);
    RenderTextOutline(screenPos, color, outlineColor, str);
}

void RenderTextCenterVH(Vector2 centerPos, const char *str, ImColor color = ImColor(255, 255, 255),
                        ImColor outlineColor = ImColor(0, 0, 0))
{
    if (!str)
        return;

    const ImVec2 textSize  = GetTextSize(str);
    const ImVec2 screenPos = ImVec2(centerPos.x - textSize.x / 2.f, centerPos.y - textSize.y / 2.f);
    RenderTextOutline(screenPos, color, outlineColor, str);
}

void Indicators()
{
    auto camera      = CCamera::GetMainCamera();
    auto screenSize  = camera->GetPixelRect();
    auto localPlayer = CLocalPlayer::GetLocalPlayer();

    if (settings->visuals.general.indicators.Radar)
    {
        float radarX = screenSize.m_Width - _flt(175.f), radarY = _flt(155.f);

        g->AddCircleFilled(ImVec2{radarX, radarY}, _flt(150.f),
                           ImColor(0.117f, 0.11f, 0.15f, 0.2f));
        g->AddCircle(ImVec2{radarX, radarY}, 150.f, ImColor(0.117f, 0.11f, 0.15f, 0.75f));
        g->AddCircle(ImVec2{radarX, radarY}, 100.f, ImColor(0.117f, 0.11f, 0.15f, 0.25f));
        g->AddCircle(ImVec2{radarX, radarY}, 50.f, ImColor(0.117f, 0.11f, 0.15f, 0.25f));

        static float elapsed{};
        static float localProgress{};
        static bool  animActive = false;
        elapsed += ImGui::GetIO().DeltaTime;

        if (elapsed >= _flt(5.f))
        {
            localProgress += ImGui::GetIO().DeltaTime;

            auto eas = easing::InCubic(localProgress);

            auto radAnim     = Remap(eas, 0.0f, _flt(1.f), 0.0f, _flt(150.f));
            auto opacityAnim = Remap(eas, 0.0f, _flt(1.f), _flt(0.5f), 0.f);

            g->AddCircle(ImVec2{radarX, radarY}, radAnim,
                         ImColor(_flt(1.f), _flt(1.f), _flt(1.f), opacityAnim));

            if (localProgress >= 1.f)
            {
                elapsed = 0.f;
            }
        }
        else
        {
            localProgress = 0.f;
        }

        Vector2 fovPoint = {radarX, radarY - 75.f};

        auto currentFOV = camera->GetFov();

        auto fovScreenPos1 =
            Vector2::RotatePoint(fovPoint, {radarX, radarY}, currentFOV / 2.f, false);
        auto fovScreenPos2 =
            Vector2::RotatePoint(fovPoint, {radarX, radarY}, -currentFOV / 2.f, false);

        g->AddTriangleFilled(ToImVec2(fovScreenPos1), ToImVec2(fovScreenPos2),
                             ImVec2{radarX, radarY}, ImColor(1.f, 1.f, 1.f, .15f));

        g->AddCircleFilled(ImVec2{radarX, radarY}, _flt(3.f), ImColor(1.f, 1.f, 1.f, 0.8f));

        Vector2 north{radarX, radarY - 150.f};

        auto curLocalBodyAngles =
            localPlayer->input->fields
                .bodyAngles; // Globals::Local->m_pPlayerInput->m_vecBodyAngles;

        auto northScreenPos = Vector2::RotatePoint(
            north, {radarX, radarY}, _flt(360.f) - curLocalBodyAngles.fields.y, false);
        auto westScreenPos  = Vector2::RotatePoint(north, {radarX, radarY},
                                                   _flt(270.f) - curLocalBodyAngles.fields.y, false);
        auto southScreenPos = Vector2::RotatePoint(
            north, {radarX, radarY}, _flt(180.f) - curLocalBodyAngles.fields.y, false);
        auto eastScreenPos = Vector2::RotatePoint(north, {radarX, radarY},
                                                  _flt(90.f) - curLocalBodyAngles.fields.y, false);

        RenderTextCenterVH(northScreenPos, "N", {255, 83, 56});
        RenderTextCenterVH(westScreenPos, "W", {255, 255, 255});
        RenderTextCenterVH(southScreenPos, "S", {255, 255, 255});
        RenderTextCenterVH(eastScreenPos, "E", {255, 255, 255});

        char buff[32];

        sprintf(buff, _("Players: %d"), EntityManager::DB::players.size());

        RenderTextCenterVH({radarX, 320}, buff, {255, 255, 255});

        sprintf(buff, _("NPCs: %d"), EntityManager::DB::npcs.size());

        RenderTextCenterVH({radarX, 330}, buff, settings->visuals.general.npc.Name.Color);
    }
}

void ESP::Draw()
{
    if (g == nullptr)
        return;

    if (settings->visuals.general.Watermark)
    {
        RenderTextOutline(ImVec2{_flt(2.f), _flt(0.f)}, ImColor(255, 255, 255), ImColor(0, 0, 0),
                          _("getrekt.io private"));
    }

    auto camera = CCamera::GetCurrentCamera();

    if (camera == nullptr)
        return;

    auto              localPlayer = CLocalPlayer::GetLocalPlayer();
    auto              loc         = (BasePlayer_o *)localPlayer;
    BasePlayer_Fields& ff          = loc->fields;
    if (localPlayer == nullptr || localPlayer->input == nullptr)
        return;

    if (localPlayer->_IsDestroyed_k__BackingField)
        return;

    if (settings->visuals.general.indicators.Enabled)
    {
        Indicators();
    }
}