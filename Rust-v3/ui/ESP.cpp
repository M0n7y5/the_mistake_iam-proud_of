#include "ESP.h"

#include <algorithm>
#include <iterator>
#include <numeric>
#include <span>
#include <stdint.h>
#include <utility>
#include <vcruntime.h>
#include <vector>
#include <xutility>
#include <ranges>

#include "../Features/EntityManager.h"
#include "../Features/Aimbot.h"
#include "../Features/Movement.h"
#include "../SDK/math.h"
#include "../SDK/settings.h"
#include "../SDK/structs.h"
#include "../mrt/xorstr.hpp"
#include "easings.h"
#include "../SDK/il2cpp_api.h"
#include "imgui/imgui_internal.h"

#include "../mrt/logging.h"
#include "../SDK/prefab_ids.h"

using namespace ESP;
using namespace SettingsData;
// some locals
CCamera*     camera               = nullptr;
float        fontSize             = 0.0f;
Vector3      currentLocalPosition = {};
CBasePlayer* _localPlayer         = 0;
bool         isSomeGameMenuOpened = false;
// types

struct Box
{
    Vector2 points[2];

    Box(Vector2 p1, Vector2 p2)
    {
        points[0] = p1;
        points[1] = p2;
    }

    Box(float x, float y, float x2, float y2)
    {
        points[0] = Vector2(x, y);
        points[1] = Vector2(x2, y2);
    }

    Box()
    {
        points[0] = Vector2();
        points[1] = Vector2();
    }

    ImVec2 ToImVec2(int idx) const
    {
        return ImVec2(points[idx].x, points[idx].y);
    }

    Box Offset(float offset) const
    {
        return Box(points[0].x + offset, points[0].y + offset, points[1].x - offset, points[1].y - offset);
    }
};

// tools
ImVec2 ToImVec2(Vector2 vec)
{
    return ImVec2(vec.x, vec.y);
}

static Vector2 ScreenToImgui(Vector2 point)
{
    return {point.x, currentScreenSize.m_Height - point.y};
}

// Utils
ImVec2 GetTextSize(const char* text)
{
    return ImGui::GetFont()->CalcTextSizeA(fontSize, FLT_MAX, 0, text);
}

/*
rendering colliders
    BoxCollider boxCollider = GetComponent<BoxCollider>();
    if (boxCollider != null)
    {
        Material material = new Material(Shader.Find("Unlit/Color"));
        Color color = Color.green;
        material.color = color;
        float width = 0.01f;
        Vector3 rightDir = boxCollider.transform.right.normalized;
        Vector3 forwardDir = boxCollider.transform.forward.normalized;
        Vector3 upDir = boxCollider.transform.up.normalized;
        Vector3 center = boxCollider.transform.position + boxCollider.center;
        Vector3 size = boxCollider.size;
        size.x *= boxCollider.transform.lossyScale.x;
        size.y *= boxCollider.transform.lossyScale.y;
        size.z *= boxCollider.transform.lossyScale.z;
        DrawLine(center + upDir * size.y / 2f + rightDir * size.x / 2f + forwardDir * size.z / 2f, center + upDir *
size.y / 2f - rightDir * size.x / 2f + forwardDir * size.z / 2f, color, material, width); DrawLine(center - upDir *
size.y / 2f + rightDir * size.x / 2f + forwardDir * size.z / 2f, center - upDir * size.y / 2f - rightDir * size.x / 2f +
forwardDir * size.z / 2f, color, material, width); DrawLine(center + upDir * size.y / 2f + rightDir * size.x / 2f +
forwardDir * size.z / 2f, center - upDir * size.y / 2f + rightDir * size.x / 2f + forwardDir * size.z / 2f, color,
material, width); DrawLine(center + upDir * size.y / 2f - rightDir * size.x / 2f + forwardDir * size.z / 2f, center -
upDir * size.y / 2f - rightDir * size.x / 2f + forwardDir * size.z / 2f, color, material, width); DrawLine(center +
upDir * size.y / 2f + rightDir * size.x / 2f - forwardDir * size.z / 2f, center + upDir * size.y / 2f - rightDir *
size.x / 2f - forwardDir * size.z / 2f, color, material, width); DrawLine(center - upDir * size.y / 2f + rightDir *
size.x / 2f - forwardDir * size.z / 2f, center - upDir * size.y / 2f - rightDir * size.x / 2f - forwardDir * size.z /
2f, color, material, width); DrawLine(center + upDir * size.y / 2f + rightDir * size.x / 2f - forwardDir * size.z / 2f,
center - upDir * size.y / 2f + rightDir * size.x / 2f - forwardDir * size.z / 2f, color, material, width);
        DrawLine(center + upDir * size.y / 2f - rightDir * size.x / 2f - forwardDir * size.z / 2f, center - upDir *
size.y / 2f - rightDir * size.x / 2f - forwardDir * size.z / 2f, color, material, width); DrawLine(center + upDir *
size.y / 2f + rightDir * size.x / 2f + forwardDir * size.z / 2f, center + upDir * size.y / 2f + rightDir * size.x / 2f -
forwardDir * size.z / 2f, color, material, width); DrawLine(center - upDir * size.y / 2f + rightDir * size.x / 2f +
forwardDir * size.z / 2f, center - upDir * size.y / 2f + rightDir * size.x / 2f - forwardDir * size.z / 2f, color,
material, width); DrawLine(center + upDir * size.y / 2f - rightDir * size.x / 2f + forwardDir * size.z / 2f, center +
upDir * size.y / 2f - rightDir * size.x / 2f - forwardDir * size.z / 2f, color, material, width); DrawLine(center -
upDir * size.y / 2f - rightDir * size.x / 2f + forwardDir * size.z / 2f, center - upDir * size.y / 2f - rightDir *
size.x / 2f - forwardDir * size.z / 2f, color, material, width);
    }
*/

// Draw helpers
void RenderTextOutline(ImVec2 pos, ImColor color, ImColor outlineColor, const char* text)
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

void RenderTextCenter(Vector2 centerPos, const char* str, ImColor color = ImColor(255, 255, 255),
                      ImColor outlineColor = ImColor(0, 0, 0))
{
    if (!str)
        return;

    ImVec2 textSize  = GetTextSize(str);
    ImVec2 screenPos = ImVec2(centerPos.x - textSize.x / _flt(2.f), centerPos.y);
    RenderTextOutline(screenPos, color, outlineColor, str);
}

void RenderTextCenterVH(Vector2 centerPos, const char* str, ImColor color = ImColor(255, 255, 255),
                        ImColor outlineColor = ImColor(0, 0, 0))
{
    if (!str)
        return;

    const ImVec2 textSize  = GetTextSize(str);
    const ImVec2 screenPos = ImVec2(centerPos.x - textSize.x / 2.f, centerPos.y - textSize.y / 2.f);
    RenderTextOutline(screenPos, color, outlineColor, str);
}

bool DrawDefault(const char* str, const Vector3& pos, const ImColor& clr, const float& distance)
{
    Vector2 screenPos;
    if (camera->WorldToScreen(pos, screenPos, currentScreenSize))
    {
        char distBuff[8];

        RenderTextCenter(screenPos, str, clr);
        snprintf(distBuff, 8, _("%dm"), (int)distance);
        screenPos.y += fontSize;
        RenderTextCenter(screenPos, distBuff, clr);
        return true;
    }

    return false;
}

void DrawPlayerFlag(ImVec2& flagPosition, const char* flag)
{
    RenderTextOutline(flagPosition, ImColor(255, 255, 255), ImColor(0, 0, 0), flag);
    flagPosition.y += fontSize;
}

static float SinPulse(float time)
{
   const float pi = 3.14F;
   const float frequency = 3.f; // Frequency in Hz
   return 0.5F * (1.f + (float)std::sin(2.f * pi * frequency * time));
}

void Indicators()
{
    if (!settings->visuals.general.indicators.Enabled)
        return;

    Vector2 screenCenter = {currentScreenSize.m_Width / _flt(2.f), currentScreenSize.m_Height / _flt(2.f)};

    if (settings->ragebot.general.desync.shoot.Active())
    {
        if (_localPlayer->input->fields.state->fields.current != nullptr)
        {
            // auto lastEyePos   = *(Vector3*)&_localPlayer->lastSentTick->fields.eyePos;
            // auto lastLocalPos = *(Vector3*)&_localPlayer->lastSentTick->fields.position;
            // auto rotation     = *(Quaternion*)&_localPlayer->eyes->fields._rotationLook_k__BackingField;

            for (const auto& ray : HitScanner::currentTraceRays)
            {
                for (const auto& point : ray.points)
                {
                    if (point.empty() == false)
                    {
                        Vector2 screenPos{};
                        // make it faster??
                        if (camera->WorldToScreen(point, screenPos, currentScreenSize))
                        {
                            g->AddCircleFilled(ToImVec2(screenPos), 2.3f, ImColor(0, 255, 0));
                        }
                    }
                }
            }
        }
    }

    if (settings->visuals.ores.general.LineToClosest)
    {
        using namespace EntityManager;
        if (DB::ores.size() > 0)
        {
            const auto& ore = DB::ores[0];

            Vector2 screenPos{};
            if (camera->WorldToScreen(ore.position, screenPos, currentScreenSize))
            {
                g->AddLine(ToImVec2(screenCenter), ToImVec2(screenPos), settings->visuals.ores.colors.line.Color);
            }
        }
    }

    if (settings->visuals.general.indicators.PredictionLauncher.Enable && Aimbot::launcherInfo.valid)
    {
        Vector2 screenPoint, newPosScreen, firstPosScreen{};
        Vector3 point    = Aimbot::launcherInfo.hitPoint;
        Vector4 rotation = Aimbot::launcherInfo.rotation;

        float spreadRad = // aprox
            Aimbot::launcherInfo.travelDist * _flt(0.01963747777f);

        float spreadHalfRad = spreadRad * 0.6f;

        // FIXME: use arrays instead + std::span
        Vector2 drawPoints[32];
        Vector2 drawPointsGlow[32];
        Vector3 worldPoints[32];
        Vector3 worldPointsGlow[32];
        size_t  idx = 0;

        for (float a = _flt(0.f); a < _flt(2.f) * M_PI; a += M_PI / _flt(16.f))
        {
            Vector3 circlePos = point + Vector4::QuatMult(rotation, Vector3(std::sin(a) * spreadRad,
                                                                            std::cos(a) * spreadRad, _flt(0.f)));
            Vector3 circlePosGlow =
                point + Vector4::QuatMult(rotation,
                                          Vector3(std::sin(a) * spreadHalfRad, std::cos(a) * spreadHalfRad, _flt(0.f)));

            worldPoints[idx]     = circlePos;
            worldPointsGlow[idx] = circlePosGlow;

            idx++;
        }

        if (camera->WorldToScreenVec2Ex({worldPoints, idx}, {drawPoints, idx}, currentScreenSize))
        {
            if (settings->visuals.general.indicators.PredictionLauncherLine.Enable)
            {
                g->AddPolyline(reinterpret_cast<ImVec2*>(&drawPoints), idx,
                               settings->visuals.general.indicators.PredictionLauncherLine.Color, ImDrawFlags_Closed,
                               1.55f);
            }
        }

        if (camera->WorldToScreenVec2Ex({worldPointsGlow, idx}, {drawPointsGlow, idx}, currentScreenSize))
        {
            if (settings->visuals.general.indicators.PredictionLauncher.Enable)
            {
                auto absDistance = std::abs(drawPoints[0].distance(drawPointsGlow[0]));

                // close glow
                auto col    = settings->visuals.general.indicators.PredictionLauncher.Color;
                col.Value.w = Remap(absDistance, 10.f, 35.f, 1.f, 0.f);
                // auto glow   = Remap(absDistance, 5.f, 35.f, 35.f, 50.f);

                g->AddShadowConvexPoly(reinterpret_cast<ImVec2*>(&drawPointsGlow), idx, col, 50.f, {});

                // far glow
                auto col2    = settings->visuals.general.indicators.PredictionLauncher.Color;
                col2.Value.w = RemapClamped(absDistance, 15.f, 35.f, 0.f, 1.f);
                // auto glow2   = Remap(absDistance, 25.f, 5.f, 35.f, 50.f);

                g->AddShadowConvexPoly(reinterpret_cast<ImVec2*>(&drawPointsGlow), idx, col2, 75.f, {});
            }
        }
    }

    if (settings->visuals.general.indicators.Prediction.Enable && (Aimbot::PredictedPosition.empty() == false))
    {
        Vector2 pos{};
        if (camera->WorldToScreen(Aimbot::PredictedPosition, pos, currentScreenSize))
        {
            g->AddCircleFilled({pos.x, pos.y}, 3.f, settings->visuals.general.indicators.Prediction.Color);
        }

        // do
        // {
        //     if (_localPlayer == nullptr || _localPlayer->m_CachedPtr == 0)
        //         break;

        //     if (_localPlayer->HasFlag(PlayerFlags::Sleeping))
        //         break;

        //     if (_localPlayer->inventory == nullptr || _localPlayer->inventory->fields.m_CachedPtr == 0)
        //         break;

        //     auto input       = _localPlayer->input;
        //     auto eyes        = (CPlayerEyes*)_localPlayer->eyes;
        //     auto localOrigin = eyes->GetPosition();
        //     auto eyesTransformPos =
        //         ((CModel*)_localPlayer->model)->GetBoneTransform(PlayerBones::eyeTranform)->GetPosition();
        //     auto headTransformPos =
        //     ((CModel*)_localPlayer->model)->GetBoneTransform(PlayerBones::head)->GetPosition();

        //     if (camera->WorldToScreen(eyesTransformPos, pos, currentScreenSize))
        //     {
        //         g->AddCircleFilled({pos.x, pos.y}, 3.f, ImColor(0, 0, 255));
        //     }

        //     if (camera->WorldToScreen(localOrigin, pos, currentScreenSize))
        //     {
        //         g->AddCircleFilled({pos.x, pos.y}, 3.f, ImColor(0, 255, 0));
        //     }

        //     if (camera->WorldToScreen(headTransformPos, pos, currentScreenSize))
        //     {
        //         g->AddCircleFilled({pos.x, pos.y}, 3.f, ImColor(255, 0, 0));
        //     }

        // } while (false);
    }

    if (settings->visuals.general.indicators.Radar)
    {
        float radarX = currentScreenSize.m_Width - _flt(175.f), radarY = _flt(155.f);

        g->AddCircleFilled(ImVec2{radarX, radarY}, _flt(150.f), ImColor(0.117f, 0.11f, 0.15f, 0.2f));
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

            auto radAnim     = Remap((float)eas, 0.0f, _flt(1.f), 0.0f, _flt(150.f));
            auto opacityAnim = Remap((float)eas, 0.0f, _flt(1.f), _flt(0.5f), 0.f);

            g->AddCircle(ImVec2{radarX, radarY}, radAnim, ImColor(_flt(1.f), _flt(1.f), _flt(1.f), opacityAnim));

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

        auto fovScreenPos1 = Vector2::RotatePoint(fovPoint, {radarX, radarY}, currentFOV / 2.f, false);
        auto fovScreenPos2 = Vector2::RotatePoint(fovPoint, {radarX, radarY}, -currentFOV / 2.f, false);

        g->AddTriangleFilled(ToImVec2(fovScreenPos1), ToImVec2(fovScreenPos2), ImVec2{radarX, radarY},
                             ImColor(1.f, 1.f, 1.f, .15f));

        g->AddCircleFilled(ImVec2{radarX, radarY}, _flt(3.f), ImColor(1.f, 1.f, 1.f, 0.8f));

        Vector2 north{radarX, radarY - 150.f};

        auto curLocalBodyAngles = _localPlayer->input->fields.bodyAngles;

        auto northScreenPos =
            Vector2::RotatePoint(north, {radarX, radarY}, _flt(360.f) - curLocalBodyAngles.fields.y, false);
        auto westScreenPos =
            Vector2::RotatePoint(north, {radarX, radarY}, _flt(270.f) - curLocalBodyAngles.fields.y, false);
        auto southScreenPos =
            Vector2::RotatePoint(north, {radarX, radarY}, _flt(180.f) - curLocalBodyAngles.fields.y, false);
        auto eastScreenPos =
            Vector2::RotatePoint(north, {radarX, radarY}, _flt(90.f) - curLocalBodyAngles.fields.y, false);

        RenderTextCenterVH(northScreenPos, "N", {255, 83, 56});
        RenderTextCenterVH(westScreenPos, "W", {255, 255, 255});
        RenderTextCenterVH(southScreenPos, "S", {255, 255, 255});
        RenderTextCenterVH(eastScreenPos, "E", {255, 255, 255});

        char buff[32];

        sprintf(buff, _("Players: %d"), EntityManager::DB::PlayerCount);

        RenderTextCenterVH({radarX, 320}, buff, {255, 255, 255});

        sprintf(buff, _("NPCs: %d"), EntityManager::DB::NPCCount);

        RenderTextCenterVH({radarX, 320 + fontSize}, buff, settings->visuals.general.npc.Name.Color);

        for (auto playerData : EntityManager::DB::players)
        {
            auto player = (CBasePlayer*)playerData.entity;

            if (playerData.position.empty())
                continue;

            ImColor dotColor = settings->visuals.general.indicators.RadarEnemies.Color;

            auto userId = player->userID;

            if (player->playerModel->fields._IsNpc_k__BackingField)
            {
                if (!settings->visuals.general.indicators.RadarNPC.Enable)
                    continue;

                dotColor = settings->visuals.general.indicators.RadarNPC.Color;
            }

            if (player->IsSleeping())
            {
                if (!settings->visuals.general.indicators.RadarSleepers.Enable)
                    continue;

                dotColor = settings->visuals.general.indicators.RadarSleepers.Color;
            }

            if (player->IsWounded())
            {
                if (!settings->visuals.general.indicators.RadarWounded.Enable)
                    continue;

                dotColor = settings->visuals.general.indicators.RadarWounded.Color;
            }

            if (std::find(EntityManager::DB::friendlyIDs.begin(), EntityManager::DB::friendlyIDs.end(), userId) !=
                EntityManager::DB::friendlyIDs.end())
            {
                if (!settings->visuals.general.indicators.RadarFriends.Enable)
                    continue;

                dotColor = settings->visuals.general.indicators.RadarFriends.Color;
            }

            if (dotColor == settings->visuals.general.indicators.RadarEnemies.Color &&
                !settings->visuals.general.indicators.RadarEnemies.Enable)
            {
                continue;
            }

            Vector2 enemyPosition = {playerData.position.x, playerData.position.z};
            enemyPosition         = Vector2{currentLocalPosition.x, currentLocalPosition.z} - enemyPosition;

            float distance = enemyPosition.length();
            enemyPosition  = enemyPosition.normalized();
            distance       = std::min(_flt(145.f), distance);
            enemyPosition *= distance;
            enemyPosition = Vector2::RotatePoint(enemyPosition, {_flt(0.f), _flt(0.f)},
                                                 _flt(360.f) - _localPlayer->input->fields.bodyAngles.fields.y, false);

            float x = currentScreenSize.m_Width - _flt(175.f), y = _flt(155.f);
            g->AddCircleFilled(ImVec2{x - enemyPosition.x, y + enemyPosition.y}, _flt(3.f), dotColor, 8);
        }
    }

    if (settings->visuals.general.indicators.CrossHair.Enable)
    {
        g->AddCircleFilled({screenCenter.x, screenCenter.y}, 4.f, ImColor{0, 0, 0, 255});
        g->AddCircleFilled({screenCenter.x, screenCenter.y}, 3.f, settings->visuals.general.indicators.CrossHair.Color);
    }

    if (settings->ragebot.general.aimbot.FOV.Enable)
    {
        auto radius = Aimbot::FOV.GetRadiusPx();
        if (radius < 10000.f && radius > 5.f)
        {
            g->AddCircle(ToImVec2(screenCenter), radius, settings->ragebot.general.aimbot.FOV.Color, 0, 1.25f);
        }
    }

    // TODO: Modernize bellow shit
    float heightModifier = 0.f;
    auto  screenHeight   = currentScreenSize.m_Height;

    auto circleCenter = ToImVec2(screenCenter);
    circleCenter.y -= 30.f;

    if (settings->misc.flyhack.AntiFlyKick)
    {
        if (Movement::flyhackDistanceHorizontal > 0.f || Movement::flyhackDistanceVertical > 0.f)
        {
            float percentage1 = Movement::flyhackDistanceHorizontal / _flt(6.5f);
            float percentage2 = Movement::flyhackDistanceVertical / _flt(3.f);

            auto color1 =
                ImGui::GetColorU32(ImLerp(ImColor(32, 243, 32).Value, ImColor(243, 32, 32).Value, percentage1));
            auto color2 =
                ImGui::GetColorU32(ImLerp(ImColor(32, 243, 32).Value, ImColor(243, 32, 32).Value, percentage2));

            auto rectWidth1 = RemapClamped(percentage1, 0.f, 1.f, 2.f, 160.f);
            auto halfWidth1 = rectWidth1 / 2.f;

            auto pMin1 = ImVec2{screenCenter.x - halfWidth1, screenCenter.y};
            auto pMax1 = ImVec2{screenCenter.x + halfWidth1, screenCenter.y + 100.f};

            auto rectWidth2 = RemapClamped(percentage2, 0.f, 1.f, 2.f, 160.f);
            auto halfWidth2 = rectWidth2 / 2.f;

            auto pMin2 = ImVec2{screenCenter.x - halfWidth2, screenCenter.y};
            auto pMax2 = ImVec2{screenCenter.x + halfWidth2, screenCenter.y + 100.f};

            // g->AddRect(pMin, pMax, ImColor(255, 222, 0));

            g->PushClipRect(pMin1, pMax1);
            g->AddCircle(circleCenter, 68.f, color1, 0, 2.55);
            g->AddShadowCircle(circleCenter, 68.f, color1, 110.f, {}, ImDrawFlags_ShadowCutOutShapeBackground);
            g->PopClipRect();

            circleCenter.y += 2.55;

            g->PushClipRect(pMin2, pMax2);
            g->AddCircle(circleCenter, 70.f, color2, 0, 2.55);
            g->AddShadowCircle(circleCenter, 70.f, color2, 110.f, {}, ImDrawFlags_ShadowCutOutShapeBackground);
            g->PopClipRect();
        }

        heightModifier += _flt(12.f);
    }

    if (settings->misc.other.TeleportForward.Active())
    {
        auto pos = screenCenter;
        pos.y += fontSize + 5.f;

        auto opa = RemapClamped(SinPulse(CTime::GetTime()), 0.f, 1.f, 0.f, 255.f);

        if (settings->misc.other.TeleportForward.Active())
            RenderTextCenter(pos, _("TELEPORTING"), ImColor(0, 180, 255, (int)opa));
        // else
        //     RenderTextCenter(pos, _("CAN TP"), ImColor(0, 180, 255));

        if (_localPlayer->lastSentTick != nullptr)
        {
            auto    localPos = *(Vector3*)&_localPlayer->lastSentTick->fields.position;
            Vector2 pos1{};
            Vector2 pos2{};
            camera->WorldToScreen(localPos, pos1, currentScreenSize);
            camera->WorldToScreen(Movement::TeleportTargetPosition, pos2, currentScreenSize);

            if (pos1.empty() == false)
                g->AddLine(ToImVec2(pos1), ToImVec2(pos2), settings->visuals.general.indicators.CrossHair.Color);

            g->AddCircleFilled(ToImVec2(pos2), 3.55f, settings->visuals.general.indicators.CrossHair.Color);
        }
    }

    auto currentDesync = _localPlayer->GetDesyncTimeClamped();

    if (currentDesync > 0.1f)
    {
        auto rectWidth = RemapClamped(currentDesync, 0.f, 0.99f, 2.f, 160.f);
        auto halfWidth = rectWidth / 2.f;

        auto pMin = ImVec2{screenCenter.x - halfWidth, screenCenter.y};
        auto pMax = ImVec2{screenCenter.x + halfWidth, screenCenter.y + 100.f};

        // g->AddRect(pMin, pMax, ImColor(255, 222, 0));
        circleCenter.y += 2.55;

        g->PushClipRect(pMin, pMax);
        g->AddCircle(circleCenter, 72.f, ImColor(0, 180, 255), 0, 2.65);
        g->AddShadowCircle(circleCenter, 72.f, ImColor(0, 180, 255), 110.f, {},
                           ImDrawFlags_ShadowCutOutShapeBackground);
        g->AddShadowCircle(circleCenter, 72.f, ImColor(0, 180, 255), 110.f, {},
                           ImDrawFlags_ShadowCutOutShapeBackground);
        g->AddShadowCircle(circleCenter, 72.f, ImColor(0, 180, 255), 110.f, {},
                           ImDrawFlags_ShadowCutOutShapeBackground);
        g->AddShadowCircle(circleCenter, 72.f, ImColor(0, 180, 255), 110.f, {},
                           ImDrawFlags_ShadowCutOutShapeBackground);
        g->PopClipRect();
    }

    if (settings->misc.other.SilentFarm.Active())
    {
        RenderTextOutline(ImVec2{_flt(5.f), screenHeight / _flt(2.f) + heightModifier}, ImColor{138, 245, 66},
                          ImColor{0, 0, 0}, _("FARM"));
        heightModifier += _flt(12.f);
    }
    if (settings->misc.other.SilentMelee.Active())
    {
        RenderTextOutline(ImVec2{_flt(5.f), screenHeight / _flt(2.f) + heightModifier}, ImColor{138, 245, 66},
                          ImColor{0, 0, 0}, _("MELEE"));
        heightModifier += _flt(12.f);
    }

    if (settings->visuals.general.ShowHotBar &&
        (settings->visuals.general.HideHotBarWhenMenuIsOpened && isSomeGameMenuOpened == false))
    {

        static auto gameHotBar = CGameObject::Find<CGameObject>(_("GameUI.Hud.BeltBar"));
        static auto gameHotBarRectTransform =
            gameHotBar->GetComponent<CRectTransform>(CType::FromClass(_("RectTransform"), _("UnityEngine")));

        auto gameUipos = gameHotBarRectTransform->GetPosition();

        auto beltUiScale = gameHotBarRectTransform->GetLossyScale().x;
        auto beltUIPos   = ScreenToImgui({gameUipos.x, gameUipos.y});

        if (Aimbot::CurrentTarget.type == Aimbot::TargetType::Player ||
            Aimbot::CurrentTarget.type == Aimbot::TargetType::HotBar)
        {
            auto target = (CBasePlayer*)Aimbot::CurrentTarget.entity->entity;
            // draw belt
            {

                constexpr static float itemSize       = 75.f;
                constexpr static float itemSizeHalf   = itemSize / 2.f;
                constexpr static float margin         = 2.f;
                constexpr static float totalWidth     = 6.f * (itemSize + margin) - margin;
                constexpr static float totalWidthHalf = totalWidth / 2.f;

                auto screenPos =
                    Vector2{screenCenter.x - totalWidthHalf, beltUIPos.y - 64.f * beltUiScale - 20.f - itemSize * 2.f};

                float currX = screenPos.x;

                auto belt = (CPlayerBelt*)target->Belt;

                auto activeItem = target->GetActiveItem();

                auto playerNameID = EntityManager::DB::GetPlayerName(target);
                auto playerName   = EntityManager::DB::GetString(playerNameID);

                RenderTextCenter({screenCenter.x, screenPos.y - fontSize - 3.f}, playerName->c_str());

                // some design stuff
                g->AddRectFilled({screenPos.x, screenPos.y}, {screenPos.x + totalWidth, screenPos.y + itemSize},
                                 ImColor(20, 25, 31, 180), 7.f);
                g->AddRect({screenPos.x, screenPos.y}, {screenPos.x + totalWidth, screenPos.y + itemSize},
                           ImColor(25, 33, 42, 220), 7.f, 0, 1.55f);

                char buf[16]{};
                for (int i = 0; i < 6; i++)
                {
                    auto currentItem = belt->GetItemInSlot(i);

                    auto rectMin = ImVec2{currX, screenPos.y};
                    auto rectMax = ImVec2{currX + itemSize, screenPos.y + itemSize};

                    // debug rect
                    // g->AddRect(rectMin, rectMax, ImColor(255, 0, 0), 7.f, 0, 1.55f);

                    // g->AddCircleFilled({currX, screenPos.y}, itemSize, ImColor(20, 25, 31));
                    // g->AddCircle({currX, screenPos.y}, itemSize, ImColor(25, 33, 42));

                    if (currentItem == nullptr)
                    {
                        g->AddShadowCircle({rectMin.x + itemSizeHalf, rectMin.y + itemSizeHalf}, 5.f,
                                           ImColor(255, 255, 255, 50), 75, {});
                    }
                    else
                    {
                        auto sprite = (CSprite*)currentItem->info->fields.iconSprite;
                        auto tex    = sprite->GetTexture();

                        // auto imgPos    = ImVec2{currX - itemSize / 2.f - margin, screenPos.y - itemSize / 2.f -
                        // margin}; auto imgPosEnd = ImVec2{imgPos.x + 50.f, imgPos.y + 50.f};

                        if (activeItem != nullptr)
                        {
                            if (activeItem == currentItem)
                            {
                                g->AddRectFilled(rectMin, rectMax, ImColor(255, 0, 0, 150), 7.f, 0);
                            }

                            g->AddShadowCircle({rectMin.x + itemSizeHalf, rectMin.y + itemSizeHalf}, 5.f,
                                               ImColor(255, 255, 255, 220), 85.f, {});
                        }
                        else
                        {
                            g->AddShadowCircle({rectMin.x + itemSizeHalf, rectMin.y + itemSizeHalf}, 5.f,
                                               ImColor(255, 255, 255, 220), 85, {});
                        }

                        if (currentItem->HasCondition())
                        {
                            auto isBroken  = currentItem->IsBroken();
                            auto rectColor = isBroken ? ImColor(255, 89, 38) : ImColor(111, 136, 66);

                            auto offsetCond =
                                Remap(currentItem->_condition, 0, currentItem->_maxCondition, itemSize, 0);

                            if (isBroken)
                            {
                                g->PushClipRect({rectMin.x, rectMin.y}, {rectMin.x + 5.f, rectMin.y + itemSize});
                                g->AddRectFilled(rectMin, rectMax, rectColor, i == 0 ? 7.f : 0.f);
                                g->PopClipRect();
                            }
                            else
                            {
                                g->PushClipRect({rectMin.x, rectMin.y + offsetCond},
                                                {rectMin.x + 5.f, rectMin.y + itemSize + offsetCond});
                                g->AddRectFilled(rectMin, rectMax, rectColor, i == 0 ? 7.f : 0.f);
                                g->PopClipRect();
                            }
                        }
                        g->AddImage((ImTextureID)tex, rectMin, rectMax);
                        snprintf(buf, 16, "[%dx]", currentItem->amount);

                        auto txtSize = GetTextSize(buf);
                        auto txtPos  = ImVec2{rectMax.x - txtSize.x - 5.f, rectMax.y - fontSize - 5.f};

                        RenderTextOutline(txtPos, ImColor{255, 255, 255}, ImColor{0, 0, 0, 255}, buf);
                    }

                    currX += margin + itemSize;
                }
            }

            // draw wear
            {
                constexpr static float itemSize     = 75.f;
                constexpr static float itemSizeHalf = itemSize / 2.f;
                constexpr static float margin       = 2.f;

                auto wearItems = (CItemContainer*)target->inventory->fields.containerWear;

                if (wearItems != nullptr)
                {
                    size_t countItems = target->playerModel->fields._IsNpc_k__BackingField ? 4 : 8;

                    // if (wearItems->itemList->fields._items->max_length == 0 ||
                    //     wearItems->itemList->fields._items->max_length >= 9)
                    // {
                    //     countItems = 0;
                    // }

                    std::span items{(CItem**)wearItems->itemList->fields._items->m_Items,
                                    (size_t)wearItems->itemList->fields._size};

                    float totalWidth     = (items.size() + 1.f) * (itemSize + margin) - margin;
                    float totalWidthHalf = totalWidth / 2.f;

                    auto screenPos =
                        Vector2{screenCenter.x - totalWidthHalf, beltUIPos.y - 64.f * beltUiScale - 10.f - itemSize};

                    float currX = screenPos.x;

                    if (items.size() != 0)
                    {
                        g->AddRectFilled({screenPos.x, screenPos.y}, {screenPos.x + totalWidth, screenPos.y + itemSize},
                                         ImColor(20, 25, 31, 180), 7.f);
                        g->AddRect({screenPos.x, screenPos.y}, {screenPos.x + totalWidth, screenPos.y + itemSize},
                                   ImColor(25, 33, 42, 220), 7.f, 0, 1.55f);

                        int i = 0;
                        for (const auto& currentItem : items)
                        {
                            auto rectMin = ImVec2{currX, screenPos.y};
                            auto rectMax = ImVec2{currX + itemSize, screenPos.y + itemSize};

                            // auto ent = currentItem->worldEnt.fields.ent_cached;

                            if (currentItem == nullptr /*|| currentItem-> heldEntity.fields.ent_cached == nullptr ||
                        currentItem->worldEnt.fields.ent_cached->fields._IsDestroyed_k__BackingField == true ||
                        currentItem->worldEnt.fields.ent_cached->fields.m_CachedPtr == 0*/)
                            {
                                g->AddShadowCircle({rectMin.x + itemSizeHalf, rectMin.y + itemSizeHalf}, 5.f,
                                                   ImColor(255, 255, 255, 50), 75, {});
                            }
                            else
                            {
                                auto sprite = (CSprite*)currentItem->info->fields.iconSprite;
                                auto tex    = sprite->GetTexture();

                                g->AddShadowCircle({rectMin.x + itemSizeHalf, rectMin.y + itemSizeHalf}, 5.f,
                                                   ImColor(255, 255, 255, 220), 85, {});

                                if (currentItem->HasCondition())
                                {
                                    auto isBroken  = currentItem->IsBroken();
                                    auto rectColor = isBroken ? ImColor(255, 89, 38) : ImColor(111, 136, 66);

                                    auto offsetCond =
                                        Remap(currentItem->_condition, 0, currentItem->_maxCondition, itemSize, 0);

                                    if (isBroken)
                                    {
                                        g->PushClipRect({rectMin.x, rectMin.y},
                                                        {rectMin.x + 5.f, rectMin.y + itemSize});
                                        g->AddRectFilled(rectMin, rectMax, rectColor, i == 0 ? 7.f : 0.f);
                                        g->PopClipRect();
                                    }
                                    else
                                    {
                                        g->PushClipRect({rectMin.x, rectMin.y + offsetCond},
                                                        {rectMin.x + 5.f, rectMin.y + itemSize + offsetCond});
                                        g->AddRectFilled(rectMin, rectMax, rectColor, i == 0 ? 7.f : 0.f);
                                        g->PopClipRect();
                                    }
                                }

                                g->AddImage((ImTextureID)tex, rectMin, rectMax);
                            }

                            currX += margin + itemSize;
                            i++;
                        }
                    }
                }

                // some design stuff

                // for (int i = 0; i < 6; i++)
                // {
                //     auto currentItem = belt->GetItemInSlot(i);

                //     auto rectMin = ImVec2{currX, screenPos.y};
                //     auto rectMax = ImVec2{currX + itemSize, screenPos.y + itemSize};

                //     // debug rect
                //     // g->AddRect(rectMin, rectMax, ImColor(255, 0, 0), 7.f, 0, 1.55f);

                //     // g->AddCircleFilled({currX, screenPos.y}, itemSize, ImColor(20, 25, 31));
                //     // g->AddCircle({currX, screenPos.y}, itemSize, ImColor(25, 33, 42));

                //     if (currentItem == nullptr)
                //     {
                //         g->AddShadowCircle({rectMin.x + itemSizeHalf, rectMin.y + itemSizeHalf}, 5.f,
                //                            ImColor(255, 255, 255, 50), 75, {});
                //     }
                //     else
                //     {
                //         auto sprite = (CSprite*)currentItem->info->fields.iconSprite;
                //         auto tex    = sprite->GetTexture();

                //         if (currentItem->HasCondition())
                //         {
                //             auto isBroken  = currentItem->IsBroken();
                //             auto rectColor = isBroken ? ImColor(255, 89, 38) : ImColor(111, 136, 66);

                //             auto offsetCond =
                //                 Remap(currentItem->_condition, 0, currentItem->_maxCondition, itemSize, 0);

                //             if (isBroken)
                //             {
                //                 g->PushClipRect({rectMin.x, rectMin.y}, {rectMin.x + 5.f, rectMin.y + itemSize});
                //                 g->AddRectFilled(rectMin, rectMax, rectColor, i == 0 ? 7.f : 0.f);
                //                 g->PopClipRect();
                //             }
                //             else
                //             {
                //                 g->PushClipRect({rectMin.x, rectMin.y + offsetCond},
                //                                 {rectMin.x + 5.f, rectMin.y + itemSize + offsetCond});
                //                 g->AddRectFilled(rectMin, rectMax, rectColor, i == 0 ? 7.f : 0.f);
                //                 g->PopClipRect();
                //             }
                //         }

                //         g->AddImage((ImTextureID)tex, rectMin, rectMax);
                //     }

                //     currX += margin + itemSize;
                // }
            }
        }
    }

    // g->AddImage(ImTextureID user_texture_id, const ImVec2 &p_min, const ImVec2 &p_max)
}

void DrawOres()
{
    using namespace EntityManager;

    auto& vis = settings->visuals.ores;

    if (vis.general.Enabled == false)
        return;

    int  clutterIdx = 0;
    auto drawOre    = [&](const char* name, OreResource& item, TCO& option) -> void {
        if (!option.Enable)
            return;

        if (item.position.Invalid())
            return;

        if (item.distance > vis.general.Distance)
            return;

        auto col = option.Color;
        if (vis.general.Fade)
        {
            col.Value.w = Remap(item.distance, 0.f, vis.general.Distance, 1.f, 0.f);
        }

        DrawDefault(name, item.position, col, item.distance);
        clutterIdx++;
    };

    if (vis.general.AntiClutter)
    {
        for (auto& ore : DB::ores)
        {
            if (clutterIdx > vis.general.MaxAnticlutterCount)
                return;

            switch (ore.prefabId)
            {
            case 960501790:  // stone
            case 4124824587: // stone
            case 266547145:  // stone
            case 723721358:  // stone
                drawOre(_("Stone Ore"), ore, vis.colors.stone);
                break;
            case 152562243:  // sulfur
            case 3058967796: // sulfur
            case 1227527004: // sulfur
            case 2204178116: // sulfur
                drawOre(_("Sulfur Ore"), ore, vis.colors.sulfur);
                break;
            case 3327726152: // metal
            case 3774647716: // metal
            case 4225479497: // metal
            case 3345228353: // metal
                drawOre(_("Metal Ore"), ore, vis.colors.metal);
                break;
            default:
                break;
            }
        }
    }
    else
    {
        std::ranges::reverse_view rv{DB::ores};
        for (auto& ore : rv)
        {
            switch (ore.prefabId)
            {
            case 960501790:  // stone
            case 4124824587: // stone
            case 266547145:  // stone
            case 723721358:  // stone
                drawOre(_("Stone Ore"), ore, vis.colors.stone);
                break;
            case 152562243:  // sulfur
            case 3058967796: // sulfur
            case 1227527004: // sulfur
            case 2204178116: // sulfur
                drawOre(_("Sulfur Ore"), ore, vis.colors.sulfur);
                break;
            case 3327726152: // metal
            case 3774647716: // metal
            case 4225479497: // metal
            case 3345228353: // metal
                drawOre(_("Metal Ore"), ore, vis.colors.metal);
                break;
            default:
                break;
            }
        }
    }
}

void DrawAnimals()
{
    using namespace EntityManager;

    const auto& vis = settings->visuals.animals;

    if (vis.general.Enabled == false)
        return;

    auto drawAnimal = [&](Animal const& animal, TCO const& option) -> void {
        if (!option.Enable)
            return;

        if (animal.position.Invalid())
            return;

        if (animal.distance > vis.general.Distance)
            return;

        auto col = option.Color;
        if (vis.general.Fade)
        {
            col.Value.w = Remap(animal.distance, 0.f, vis.general.Distance, 1.f, 0.f);
        }

        DrawDefault(animal.entity->klass->_1.name, animal.position, col, animal.distance);
    };

    if (!settings->visuals.animals.general.Enabled)
        return;

    std::ranges::reverse_view rv{DB::animals};

    for (const auto& animal : rv)
    {
        using namespace prefabs;

        switch (animal.prefabId)
        {
        case animals::bear:
            drawAnimal(animal, vis.colors.bear);
            break;
        case animals::boar:
            drawAnimal(animal, vis.colors.boar);
            break;
        case animals::chicken:
            drawAnimal(animal, vis.colors.chicken);
            break;
        case animals::polarBear:
            drawAnimal(animal, vis.colors.polarBear);
            break;
        case animals::stag:
            drawAnimal(animal, vis.colors.stag);
            break;
        case animals::wolf:
            drawAnimal(animal, vis.colors.wolf);
            break;
        case animals::zombie:
            drawAnimal(animal, vis.colors.zombie);
            break;
        default:
            break;
        }
    }
}

void DrawRaids()
{
    if (settings->visuals.raid.Enabled.Enable == false)
        return;

    char    tmpStr[64]{};
    Vector2 screenPos{};

    for (const auto raid : EntityManager::DB::raids)
    {
        auto dist = currentLocalPosition.distance(raid.position);

        if (dist > settings->visuals.raid.Distance)
            continue;

        if (camera->WorldToScreen(raid.position, screenPos, currentScreenSize) == false)
            continue;

        snprintf(tmpStr, 64, _("%dm"), (int)dist);
        RenderTextOutline({screenPos.x, screenPos.y - fontSize}, settings->visuals.raid.Enabled.Color, ImColor(0, 0, 0),
                          tmpStr);
        RenderTextOutline({screenPos.x, screenPos.y}, settings->visuals.raid.Enabled.Color, ImColor(0, 0, 0),
                          _("Raid"));

        auto opt = settings->visuals.raid;

        for (int i = 0; i < (int)EffectType::Count; i++)
        {
            int effectCount = raid.effects[i].count;
            if (effectCount < 1)
                continue;

            std::string effectTypeName;
            switch ((EffectType)i)
            {
            case EffectType::C4:
                if (!opt.C4)
                    continue;

                effectTypeName = _("C4");
                break;

            case EffectType::Satchel:
                if (!opt.Satchel)
                    continue;

                effectTypeName = _("Satchel");
                break;

            case EffectType::Rocket:
                if (!opt.Rocket)
                    continue;

                effectTypeName = _("Rocket");
                break;
            case EffectType::RocketIncen:
                if (!opt.RocketIncendiary)
                    continue;

                effectTypeName = _("Incen Rocket");
                break;
            case EffectType::ExplosiveAmmo:
                if (!opt.ExplosiveAmmo)
                    continue;

                effectTypeName = _("Explo Ammo");
                break;
            case EffectType::ExplosiveGrenade:
                if (!opt.Grenades)
                    continue;
                effectTypeName = _("Grenade");
                break;

            default:
                return;
            }

            screenPos.y += fontSize;

            snprintf(tmpStr, 64, _("%s %dx"), effectTypeName.c_str(), effectCount);
            RenderTextOutline({screenPos.x, screenPos.y}, settings->visuals.raid.Enabled.Color, ImColor(0, 0, 0),
                              tmpStr);
        }

        if (opt.ShowWhenStarted)
        {
            float secondsSinceStart  = CTime::GetRealTime() - raid.startTime;
            int   nSecondsSinceStart = (int)secondsSinceStart;

            int seconds = nSecondsSinceStart % 60;
            int minutes = (nSecondsSinceStart - seconds) / 60;

            snprintf(tmpStr, 64, _("Start: %dm%ds"), minutes, seconds);
            screenPos.y += fontSize;
            RenderTextOutline({screenPos.x, screenPos.y}, settings->visuals.raid.Enabled.Color, ImColor(0, 0, 0),
                              tmpStr);
        }

        if (opt.ShowLastExplosion)
        {
            float secondsSinceLastExpl  = CTime::GetRealTime() - raid.lastExplosionTime;
            int   nSecondsSinceLastExpl = (int)secondsSinceLastExpl;

            int seconds = nSecondsSinceLastExpl % 60;
            int minutes = (nSecondsSinceLastExpl - seconds) / 60;

            snprintf(tmpStr, 64, _("Last: %dm%ds"), minutes, seconds);
            screenPos.y += fontSize;
            RenderTextOutline({screenPos.x, screenPos.y}, settings->visuals.raid.Enabled.Color, ImColor(0, 0, 0),
                              tmpStr);
        }
    }
}

void DrawCollectibles()
{
    using namespace EntityManager;
    int         clutterIdx = 0;
    const auto& vis        = settings->visuals.collectibles;

    if (vis.general.Enabled == false)
        return;

    auto drawCollectible = [&](const char* name, Collectible& item, const TCO& option) -> void {
        if (!option.Enable)
            return;

        if (item.position.Invalid())
            return;

        if (item.distance > vis.general.Distance)
            return;

        auto col = option.Color;
        if (vis.general.Fade)
        {
            col.Value.w = Remap(item.distance, 0.f, vis.general.Distance, 1.f, 0.f);
        }

        DrawDefault(name, item.position, col, item.distance);
        clutterIdx++;
    };

    if (vis.general.AntiClutter)
    {
        for (auto& collectible : DB::collectibles)
        {
            using namespace prefabs;

            if ((clutterIdx > vis.general.MaxAnticlutterCount))
                return;

            switch (collectible.prefabId)
            {
            case collectable::berry_black:
                drawCollectible(_("Berry"), collectible, vis.colors.berryBlack);
                break;
            case collectable::berry_blue:
                drawCollectible(_("Berry"), collectible, vis.colors.berryBlue);
                break;
            case collectable::berry_green:
                drawCollectible(_("Berry"), collectible, vis.colors.berryGreen);
                break;
            case collectable::berry_red:
                drawCollectible(_("Berry"), collectible, vis.colors.berryRed);
                break;
            case collectable::berry_white:
                drawCollectible(_("Berry"), collectible, vis.colors.berryWhite);
                break;
            case collectable::berry_yellow:
                drawCollectible(_("Berry"), collectible, vis.colors.berryYellow);
                break;
            case collectable::collectMetal:
                drawCollectible(_("Metal"), collectible, vis.colors.metal);
                break;
            case collectable::collectStone:
                drawCollectible(_("Stone"), collectible, vis.colors.stone);
                break;
            case collectable::collectSulfur:
                drawCollectible(_("Sulfur"), collectible, vis.colors.sulfur);
                break;
            case collectable::collectWood:
                drawCollectible(_("Wood"), collectible, vis.colors.wood);
                break;
            case collectable::corn:
                drawCollectible(_("Corn"), collectible, vis.colors.corn);
                break;
            case collectable::potato:
                drawCollectible(_("Potato"), collectible, vis.colors.potato);
                break;
            case collectable::pumpkin:
                drawCollectible(_("Pumpkin"), collectible, vis.colors.pumpkin);
                break;
            case collectable::hemp:
                drawCollectible(_("Hemp"), collectible, vis.colors.hemp);
                break;
            case collectable::mushroom1:
            case collectable::mushroom2:
                drawCollectible(_("Mushroom"), collectible, vis.colors.mushroom);
                break;
            default:
                break;
            }
        }
    }
    else
    {
        std::ranges::reverse_view rv{DB::collectibles};

        for (auto& collectible : rv)
        {
            using namespace prefabs;

            switch (collectible.prefabId)
            {
            case collectable::berry_black:
                drawCollectible(_("Berry"), collectible, vis.colors.berryBlack);
                break;
            case collectable::berry_blue:
                drawCollectible(_("Berry"), collectible, vis.colors.berryBlue);
                break;
            case collectable::berry_green:
                drawCollectible(_("Berry"), collectible, vis.colors.berryGreen);
                break;
            case collectable::berry_red:
                drawCollectible(_("Berry"), collectible, vis.colors.berryRed);
                break;
            case collectable::berry_white:
                drawCollectible(_("Berry"), collectible, vis.colors.berryWhite);
                break;
            case collectable::berry_yellow:
                drawCollectible(_("Berry"), collectible, vis.colors.berryYellow);
                break;
            case collectable::collectMetal:
                drawCollectible(_("Metal"), collectible, vis.colors.metal);
                break;
            case collectable::collectStone:
                drawCollectible(_("Stone"), collectible, vis.colors.stone);
                break;
            case collectable::collectSulfur:
                drawCollectible(_("Sulfur"), collectible, vis.colors.sulfur);
                break;
            case collectable::collectWood:
                drawCollectible(_("Wood"), collectible, vis.colors.wood);
                break;
            case collectable::corn:
                drawCollectible(_("Corn"), collectible, vis.colors.corn);
                break;
            case collectable::potato:
                drawCollectible(_("Potato"), collectible, vis.colors.potato);
                break;
            case collectable::pumpkin:
                drawCollectible(_("Pumpkin"), collectible, vis.colors.pumpkin);
                break;
            case collectable::hemp:
                drawCollectible(_("Hemp"), collectible, vis.colors.hemp);
                break;
            case collectable::mushroom1:
            case collectable::mushroom2:
                drawCollectible(_("Mushroom"), collectible, vis.colors.mushroom);
                break;
            default:
                break;
            }
        }
    }
}

void DrawRadTown()
{
    using namespace EntityManager;
    int         clutterIdx = 0;
    const auto& vis        = settings->visuals.radtown;

    if (vis.general.Enabled == false)
        return;

    auto drawRadTown = [&](const char* name, RadTown& item, const TCO& option, bool limitDist = true) -> void {
        if (!option.Enable)
            return;

        if (item.position.Invalid())
            return;

        if (limitDist)
        {
            if (item.distance > vis.general.Distance)
                return;
        }

        auto col = option.Color;
        if (vis.general.Fade)
        {
            col.Value.w = Remap(item.distance, 0.f, vis.general.Distance, 1.f, 0.f);
        }

        DrawDefault(name, item.position, col, item.distance);
        clutterIdx++;
    };

    if (vis.general.AntiClutter)
    {
        for (auto& radtown : DB::radtown)
        {
            using namespace prefabs;

            if ((clutterIdx > vis.general.MaxAnticlutterCount))
                return;

            switch (radtown.prefabId)
            {
            case radtown::barrel1:
            case radtown::barrel2:
            case radtown::barrel_1:
            case radtown::barrel_2:
            case radtown::barrel_oil:
                drawRadTown(_("Barrel"), radtown, vis.colors.barrels);
                break;
            case radtown::crate_basic:
            case radtown::crate_underwater_basic:
            case radtown::crate_normal2:
            case radtown::crate_normal_medical:
                drawRadTown(_("Crate"), radtown, vis.colors.crates);
                break;
            case radtown::crate_mili:
                drawRadTown(_("Crate Military"), radtown, vis.colors.military);
                break;
            case radtown::crate_heli:
                drawRadTown(_("Crate Heli"), radtown, vis.colors.heli);
                break;
            case radtown::crate_elite:
            case radtown::crate_underwater_advanced:
                drawRadTown(_("Crate Elite"), radtown, vis.colors.elite);
                break;
            case radtown::crate_tools:
                drawRadTown(_("Crate Tools"), radtown, vis.colors.toolbox);
                break;
            case radtown::crate_food:
            case radtown::crate_normal_food:
                drawRadTown(_("Crate Food"), radtown, vis.colors.foodbox);
                break;
            case radtown::airdrop:
                drawRadTown(_("Airdrop"), radtown, vis.colors.airdrop, false);
                break;
            default:
                break;
            }
        }
    }
    else
    {
        std::ranges::reverse_view rv{DB::radtown};

        for (auto& radtown : rv)
        {
            using namespace prefabs;

            switch (radtown.prefabId)
            {
            case radtown::barrel1:
            case radtown::barrel2:
            case radtown::barrel_1:
            case radtown::barrel_2:
            case radtown::barrel_oil:
                drawRadTown(_("Barrel"), radtown, vis.colors.barrels);
                break;
            case radtown::crate_basic:
            case radtown::crate_underwater_basic:
            case radtown::crate_normal2:
            case radtown::crate_normal_medical:
                drawRadTown(_("Crate"), radtown, vis.colors.crates);
                break;
            case radtown::crate_mili:
                drawRadTown(_("Crate Military"), radtown, vis.colors.military);
                break;
            case radtown::crate_heli:
                drawRadTown(_("Crate Heli"), radtown, vis.colors.heli);
                break;
            case radtown::crate_elite:
            case radtown::crate_underwater_advanced:
                drawRadTown(_("Crate Elite"), radtown, vis.colors.elite);
                break;
            case radtown::crate_tools:
                drawRadTown(_("Crate Tools"), radtown, vis.colors.toolbox);
                break;
            case radtown::crate_food:
            case radtown::crate_normal_food:
                drawRadTown(_("Crate Food"), radtown, vis.colors.foodbox);
                break;
            case radtown::airdrop:
                drawRadTown(_("Airdrop"), radtown, vis.colors.airdrop, false);
                break;
            default:
                break;
            }
        }
    }
}

void DrawVehicles()
{
    using namespace EntityManager;

    const auto& vis = settings->visuals.vehicles;

    if (vis.general.Enabled == false)
        return;

    auto drawVehicle = [&](const char* name, const Vehicle& item, const TCO& option, float maxDistance) -> void {
        if (!option.Enable)
            return;

        if (item.position.Invalid())
            return;

        if (item.distance > maxDistance)
            return;

        auto col = option.Color;
        if (vis.general.Fade)
        {
            col.Value.w = Remap(item.distance, 0.f, maxDistance, 1.f, 0.f);
        }

        DrawDefault(name, item.position, col, item.distance);
    };

    std::ranges::reverse_view rv{DB::vehicles};

    for (const auto& vehicle : rv)
    {
        using namespace prefabs;

        switch (vehicle.prefabId)
        {
        case vehicles::mini:
            drawVehicle(_("Minicopter"), vehicle, vis.colors.mini, vis.general.HeliDistance);
            break;
        case vehicles::scrap:
            drawVehicle(_("Scrap Heli"), vehicle, vis.colors.scrapHeli, vis.general.HeliDistance);
            break;
        case vehicles::rowboat:
            drawVehicle(_("Boat"), vehicle, vis.colors.boat, vis.general.BoatDistance);
            break;
        case vehicles::rhib:
            drawVehicle(_("RHIB"), vehicle, vis.colors.rhib, vis.general.BoatDistance);
            break;
        case vehicles::tugboat:
            drawVehicle(_("Tugboat"), vehicle, vis.colors.tugboat, vis.general.BoatDistance);
            break;
        case vehicles::submarinesolo:
            drawVehicle(_("Submarine Solo"), vehicle, vis.colors.submarineSolo, vis.general.BoatDistance);
            break;
        case vehicles::submarineduo:
            drawVehicle(_("Submarine Duo"), vehicle, vis.colors.submarineDuo, vis.general.BoatDistance);
            break;
        case vehicles::horse:
            drawVehicle(_("Horse"), vehicle, vis.colors.horse, vis.general.OtherDistance);
            break;
        case vehicles::airballoon:
            drawVehicle(_("Air Balloon"), vehicle, vis.colors.baloon, vis.general.OtherDistance);
            break;
        case vehicles::patrolheli:
            drawVehicle(_("Patrol Heli"), vehicle, vis.colors.patrol, vis.general.PatrolDistance);

            {
                const auto& option = vis.colors.patrol;
                const auto& item   = vehicle;

                if (!option.Enable)
                    return;

                if (item.position.Invalid())
                    return;

                if (item.distance > vis.general.PatrolDistance)
                    return;

                Vector2 screenPos;
                if (camera->WorldToScreen(item.position, screenPos, currentScreenSize))
                {
                    char distBuff[8];

                    RenderTextCenter(screenPos, _("Patrol Heli"), option.Color);
                    snprintf(distBuff, 8, _("%dm"), (int)item.distance);
                    screenPos.y += fontSize;
                    RenderTextCenter(screenPos, distBuff, option.Color);
                }
                else
                {
                    continue;
                }

                auto heli = reinterpret_cast<PatrolHelicopter_o*>(item.entity);

                auto weakspots = heli->fields.weakspots;

                if (weakspots == nullptr)
                    break;

                int size = weakspots->max_length;
                if (size < 1)
                    break;

                float tailHealth    = _flt(0.f);
                float mainHealth    = _flt(0.f);
                float tailMaxHealth = _flt(0.f);
                float mainMaxHealth = _flt(0.f);

                for (int i = 0; i < size; i++)
                {
                    auto weakspot = weakspots->m_Items[i];
                    if (weakspot == nullptr)
                        break;

                    if (i == 0)
                    {
                        mainHealth    = weakspot->fields.health;
                        mainMaxHealth = weakspot->fields.maxHealth;
                    }
                    else
                    {
                        tailHealth    = weakspot->fields.health;
                        tailMaxHealth = weakspot->fields.maxHealth;
                        break;
                    }
                }

                if (mainHealth <= _flt(1.f) && tailHealth == _flt(22.f))
                    break;

                float percentage1 = mainHealth / mainMaxHealth;
                float percentage2 = tailHealth / tailMaxHealth;

                int green1 = (int)((percentage1 * _flt(100.f)) * _flt(2.55f));
                int red1   = 255 - green1;

                int green2 = (int)((percentage2 * _flt(100.f)) * _flt(2.55f));
                int red2   = 255 - green2;

                static ImVec2 boxLength    = ImGui::CalcTextSize(_("Patrol Heli"));
                const float   centerPointX = boxLength.x / _flt(2.f);
                const float   centerPointY = boxLength.y / _flt(2.f);

                const float _x = screenPos.x - centerPointX;
                const float _y = screenPos.y + boxLength.y + centerPointY;

                percentage1 = std::clamp(percentage1, 0.f, _flt(1.f));
                percentage2 = std::clamp(percentage2, 0.f, _flt(1.f));

                g->AddRectFilled({_x, _y - _flt(3.f)}, {_x + boxLength[0] + _flt(1.f), _y + _flt(3.f)},
                                 ImColor(0, 0, 0));
                g->AddRectFilled(
                    {_x + _flt(1.f), _y - _flt(2.f)},
                    {std::max(_x + _flt(1.f) + std::max(boxLength[0] * percentage1 - _flt(1.f), _flt(1.f)), _flt(0.f)),
                     _y + _flt(2.f)},
                    ImColor(red1, green1, 0));

                g->AddRectFilled({_x, _y + _flt(4.f)}, {_x + boxLength[0] + _flt(1.f), _y + _flt(10.f)},
                                 ImColor(0, 0, 0));
                g->AddRectFilled(
                    {_x + _flt(1.f), _y + _flt(5.f)},
                    {std::max(_x + _flt(1.f) + std::max(boxLength[0] * percentage2 - _flt(1.f), _flt(1.f)), _flt(0.f)),
                     _y + _flt(9.f)},
                    ImColor(red2, green2, 0));

                break;
            }

            break;
        case vehicles::chinook:
            drawVehicle(_("Chinook"), vehicle, vis.colors.chinook, vis.general.PatrolDistance);
            break;
        case vehicles::bradleyapc:
            drawVehicle(_("Bradley APC"), vehicle, vis.colors.bradley, vis.general.PatrolDistance);
            break;
        default:
            break;
        }
    }
}

void DrawTraps()
{
    using namespace EntityManager;
    // int         clutterIdx = 0;
    const auto& vis = settings->visuals.traps;

    if (vis.general.Enabled == false)
        return;

    auto drawTrap = [&](const char* name, Trap& item, const TCO& option) -> void {
        if (!option.Enable)
            return;

        if (item.position.Invalid())
            return;

        if (item.distance > vis.general.Distance)
            return;

        auto col = option.Color;

        DrawDefault(name, item.position, col, item.distance);
    };

    std::ranges::reverse_view rv{DB::traps};

    char buf[32];
    for (auto& trap : rv)
    {
        using namespace prefabs;

        switch (trap.prefabId)
        {
        case traps::beartrap:
        {
            auto ent = (CBaseCombatEntity*)trap.entity;

            auto isOn = ent->HasFlag(BaseEntityFlags::On);
            if (isOn == false && vis.general.HideInactive)
                break;

            drawTrap(_("Bear Trap"), trap, vis.colors.bearTrap);
            break;
        }
        case traps::landdmine:
            drawTrap(_("Landmine"), trap, vis.colors.landmine);
            break;
        case traps::flameturret:
        {
            auto       ent           = (CBaseCombatEntity*)trap.entity;
            const auto currentHealth = ent->_health;
            const int  healthPercent = Remap(currentHealth, _flt(0.f), ent->_maxHealth, 0, 100);

            snprintf(buf, 32, _("Flame Turret [%d %%HP]"), healthPercent);

            drawTrap(buf, trap, vis.colors.flameTurret);
            break;
        }
        case traps::guntrap:
        {
            auto       ent           = (CBaseCombatEntity*)trap.entity;
            const auto currentHealth = ent->_health;
            const int  healthPercent = Remap(currentHealth, _flt(0.f), ent->_maxHealth, 0, 100);

            snprintf(buf, 32, _("Shotgun Trap [%d %%HP]"), healthPercent);

            drawTrap(buf, trap, vis.colors.flameTurret);
            break;
        }
        case traps::samsite:
        {
            auto ent = (CBaseCombatEntity*)trap.entity;

            auto isOn = ent->HasFlag(BaseEntityFlags::Reserved8);
            if (isOn == false && vis.general.HideInactive)
                break;

            const auto currentHealth = ent->_health;
            const int  healthPercent = Remap(currentHealth, _flt(0.f), ent->_maxHealth, 0, 100);

            snprintf(buf, 32, _("[%s] SAM Site [%d %%HP]"), (isOn ? _("ON") : _("OFF")), healthPercent);

            drawTrap(buf, trap, vis.colors.samSite);
            break;
        }

        case traps::autoturret:
        {
            auto ent = (CBaseCombatEntity*)trap.entity;

            auto isOn = ent->HasFlag(BaseEntityFlags::On) && ent->HasFlag(BaseEntityFlags::Reserved3);
            if (isOn == false && vis.general.HideInactive)
                break;

            auto turret   = (AutoTurret_o*)ent;
            auto auth     = turret->fields.authorizedPlayers;
            bool isAuthed = false;

            for (auto id : std::span(auth->fields._items->m_Items, auth->fields._items->max_length))
            {
                if (id->fields.userid == _localPlayer->userID)
                {
                    isAuthed = true;
                    break;
                }
            }

            if (vis.general.HideAuthedTurrets && isAuthed)
                break;

            const auto currentHealth = ent->_health;
            const int  healthPercent = Remap(currentHealth, _flt(0.f), ent->_maxHealth, 0, 100);

            snprintf(buf, 32, _("[%s] Auto Turret [%d %%HP]"), (isOn ? _("ON") : _("OFF")), healthPercent);

            drawTrap(buf, trap, isAuthed ? vis.colors.autoTurretAuthed : vis.colors.autoTurret);
            break;
        }
        default:
            break;
        }
    }
}

void RenderItems()
{
    char buf[48];
    using namespace EntityManager;

    const auto& vis = settings->visuals.item;

    for (const auto& item : DB::items)
    {
        using namespace prefabs;

        auto name = DB::GetString(item.namePoolID);

        if (item.amount > 1)
        {
            snprintf(buf, 48, "%s (%dx)", name->c_str(), item.amount);
            DrawDefault(buf, item.position,
                        (item.category == ItemCategory::Weapon ? vis.general.weapons.Color : vis.general.other.Color),
                        item.distance);
        }
        else
        {
            DrawDefault(name->c_str(), item.position,
                        (item.category == ItemCategory::Weapon ? vis.general.weapons.Color : vis.general.other.Color),
                        item.distance);
        }
    }

    for (const auto& backpack : DB::backpacks)
    {
        using namespace prefabs;

        DrawDefault(_("Backpack"), backpack.position, vis.backpacks.color.Color, backpack.distance);
    }

    for (const auto& corpse : DB::corpses)
    {
        using namespace prefabs;

        if (vis.corpses.Name)
        {
            // TODO: CACHE THOSE NAMES!! ALL NEEDED INFO IN PLAYER CORPSE
            auto cc   = (PlayerCorpse_o*)corpse.entity;
            auto strr = (CString*)cc->fields._playerName;

            snprintf(buf, 48, "Corpse %s", strr->str().c_str());

            DrawDefault(buf, corpse.position, vis.corpses.option.Color, corpse.distance);
        }
        else
        {
            DrawDefault(_("Corpse"), corpse.position, vis.corpses.option.Color, corpse.distance);
        }
    }

    for (const auto& stash : DB::stashes)
    {
        using namespace prefabs;

        auto isOpen = !stash.entity->HasFlag(BaseEntityFlags::Reserved5);

        if (settings->visuals.item.stashes.HideOpenStashes && isOpen)
            continue;

        if (isOpen)
            DrawDefault(_("[Open] Stash"), stash.position, vis.backpacks.color.Color, stash.distance);
        else
            DrawDefault(_("[Hidden] stash"), stash.position, vis.backpacks.color.Color, stash.distance);
    }
}

bool Getbox(EntityManager::Player const& player, Box& box)
{
    Bounds obb    = *(Bounds*)&player.entity->bounds;
    obb.extents.x = obb.extents.y * 0.4f;
    obb.extents.z = obb.extents.y * 0.4f;
    obb.extents.y = obb.extents.y * 0.78f;

    auto pos = player.entity->GetOriginPosition();

    const Vector3 min = obb.GetMin() + pos;
    const Vector3 max = obb.GetMax() + pos;

    // Vector2 flb, brt, blb, frt, frb, brb, blt, flt;

    // index helpers
    constexpr auto _flb = 0;
    // constexpr auto _brt = 1;
    // constexpr auto _blb = 2;
    // constexpr auto _frt = 3;
    // constexpr auto _frb = 4;
    // constexpr auto _brb = 5;
    // constexpr auto _blt = 6;
    // constexpr auto _flt = 7;

    std::array<Vector3, 8> points = {Vector3(min.x, min.y, min.z), Vector3(min.x, max.y, min.z),
                                     Vector3(max.x, max.y, min.z), Vector3(max.x, min.y, min.z),
                                     Vector3(max.x, max.y, max.z), Vector3(min.x, max.y, max.z),
                                     Vector3(min.x, min.y, max.z), Vector3(max.x, min.y, max.z)};

    std::array<Vector3, 8> arr{};

    if (camera->WorldToScreenVec2Ex(points, arr, currentScreenSize) == false)
        return false;

    float left   = arr[_flb].x;
    float top    = arr[_flb].y;
    float right  = arr[_flb].x;
    float bottom = arr[_flb].y;

    // Find the bounding corners for our box
    for (int i = 1; i < 8; i++)
    {
        if (left > arr[i].x)
            left = arr[i].x;
        if (bottom < arr[i].y)
            bottom = arr[i].y;
        if (right < arr[i].x)
            right = arr[i].x;
        if (top > arr[i].y)
            top = arr[i].y;
    }

    left   = std::roundf(left);
    top    = std::roundf(top);
    right  = std::roundf(right);
    bottom = std::roundf(bottom);

    const float height = bottom - top;
    //    const float width  = right - left;

    if (player.entity->IsWounded() || player.entity->IsSleeping())
        top = bottom - height * 0.4f;
    else if (player.entity->IsDucking())
        top = bottom - height * 0.73f;
    else
        top = bottom - height * 1.05f;

    bottom += height * 0.05f;

    const float deltawidth = right - left;
    const float num1       = 6.f;
    if (deltawidth <= 6.f)
    {
        left -= (num1 - deltawidth) * _flt(0.5f);
        right += (num1 - deltawidth) * _flt(0.5f);
    }

    const float deltaheight = bottom - top;
    const float num2        = player.entity->IsWounded() || player.entity->IsSleeping() ? 4.f : _flt(8.f);
    if (deltaheight <= num2)
    {
        top -= (num2 - deltaheight) * _flt(0.5f);
        bottom += (num2 - deltaheight) * _flt(0.5f);
    }

    left   = std::roundf(left);
    right  = std::roundf(right);
    top    = std::roundf(top);
    bottom = std::roundf(bottom);

    box.points[0] = Vector2{left, top};
    box.points[1] = Vector2{right, bottom};
    return true;
}

static bool dumped = false;

#ifdef _DEBUG
void DumpSkeletonToConsole(EntityManager::Player const& player)
{
    auto model = (CModel*)player.entity->model;

    auto namesData = model->GetBoneNames();

    std::span names(namesData->data, namesData->max_length);

    L::Print("Dumpking skeleton names:");
    int i = 0;
    for (auto name : names)
    {
        L::Print("\t{} = {},", name->str(), i++);
    }
    dumped = true;
}
#endif

void RenderPlayer(SettingsDataTypes::Player const& opts, EntityManager::Player const& player, Box const& box)
{
    if (opts.Enabled == false)
        return;

    char buf[128];

    auto& vis = SettingsData::settings->visuals.general;

    if (player.distance > 350)
        return;

    if ((player.entity->IsSleeping() == true) && (opts.Sleeping.Enable == false))
        return;

    // if (dumped == false)
    // {
    //     DumpSkeletonToConsole(player);
    // }

    if (opts.Box.Enable)
    {
        g->AddRect(box.Offset(1).ToImVec2(0), ImVec2(box.points[1].x - 1, box.points[1].y - 1), ImColor(0, 0, 0, 120));
        g->AddRect(box.Offset(-1).ToImVec2(0), box.Offset(-1).ToImVec2(1), ImColor(0, 0, 0, 120));

        if (player.entity->IsSleeping())
            g->AddRect(box.ToImVec2(0), box.ToImVec2(1), opts.Sleeping.Color);
        else
            g->AddRect(box.ToImVec2(0), box.ToImVec2(1), opts.Box.Color);
    }

    if (opts.Health)
    {
        float       maxHealth   = player.entity->_maxHealth; // m_flMaxHealth;
        const float startHealth = player.entity->startHealth;

        if (startHealth > maxHealth)
            maxHealth = startHealth;

        float healthPerc = ImClamp(player.entity->_health / maxHealth, 0.0f, 1.f);

        auto col = ImLerp(ImColor(255, 0, 0).Value, ImColor(0, 255, 0).Value, healthPerc);

        const float boxHeight = box.points[1].y - box.points[0].y;

        const float healthBarHeight = boxHeight * healthPerc;

        g->AddRectFilled(ImVec2(box.points[0].x - 7, box.points[0].y - 1),
                         ImVec2(box.points[0].x - 3, box.points[0].y + boxHeight + 1), ImColor(0, 0, 0, 120));
        g->AddRectFilled(ImVec2(box.points[0].x - 6, box.points[0].y + boxHeight - healthBarHeight),
                         ImVec2(box.points[0].x - 4, box.points[0].y + (boxHeight - healthBarHeight) + healthBarHeight),
                         ImColor(col));
    }

    if (opts.Name.Enable)
    {
        const ImVec2 textSize        = GetTextSize(player.name);
        ImVec2       playerNamePoint = box.ToImVec2(0);

        playerNamePoint.x = box.points[0].x + (box.points[1].x - box.points[0].x) / 2.f;
        playerNamePoint.x -= textSize.x / 2.f;
        playerNamePoint.y -= textSize.y + 2.f;

        if (player.entity->IsSleeping())
            RenderTextOutline(playerNamePoint, opts.Sleeping.Color, ImColor(0, 0, 0), player.name);
        else
            RenderTextOutline(playerNamePoint, opts.Name.Color, ImColor(0, 0, 0), player.name);
    }

    if (opts.PlayerFlags.Enable)
    {
        ImVec2 flagPosition{box.points[1].x + 2.f, box.points[0].y - 2.f};

        if (player.entity->InSafeZone())
            DrawPlayerFlag(flagPosition, "S");

        if (player.entity->IsWounded())
            DrawPlayerFlag(flagPosition, "W");

        // if (opts.TeamID.Enable)
        // {
        //     auto tid = player.entity->GetTeamID();
        //     if (tid != 0u)
        //     {
        //         snprintf(buf, 48, _("TID %llu"), tid);
        //         DrawPlayerFlag(flagPosition, buf);
        //     }
        // }
    }

    ImVec2 itemNamePoint = box.ToImVec2(1);
    itemNamePoint.x      = box.points[0].x + (box.points[1].x - box.points[0].x) / 2.f;

    if (opts.ActiveItem.Enable)
    {
        auto heldEntity = player.entity->GetHeldEntity();

        if (heldEntity != nullptr)
        {
            auto item = heldEntity->GetItem();

            auto         monoStr  = (CString*)item->info->fields.displayName->fields.english;
            auto         name     = monoStr->str();
            const ImVec2 textSize = GetTextSize(name.c_str());

            auto localPoint = itemNamePoint;
            localPoint.x -= textSize.x / 2.f;

            if (item->amount > 1)
                snprintf(buf, 128, _("%s (%dx)"), name.c_str(), item->amount);
            else
                snprintf(buf, 128, _("%s"), name.c_str());

            RenderTextOutline(localPoint, opts.ActiveItem.Color, ImColor(0, 0, 0), buf);

            itemNamePoint.y += fontSize;
        }
    }

    if (opts.Dist.Enable)
    {
        snprintf(buf, 128, _("%dm"), (int)player.distance);

        ImVec2 textSize   = GetTextSize(buf);
        auto   localPoint = itemNamePoint;
        localPoint.x -= textSize.x / _flt(2.f);

        RenderTextOutline(localPoint, opts.Dist.Color, ImColor(0, 0, 0), buf);
    }
}

void DrawPlayers()
{
    using namespace EntityManager;
    const auto& settings = SettingsData::settings;
    const auto& vis      = settings->visuals.general;

    std::ranges::reverse_view rv{DB::players};

    for (const auto& player : rv)
    {
        // const auto& player = pair.second;

        if (player.entity->GetLifeState() == LifeState::Dead)
            continue;

        Box box{};
        if (Getbox(player, box) == false)
            continue;

        if (player.entity->playerModel->fields._IsNpc_k__BackingField)
        {
            RenderPlayer(settings->visuals.general.npc, player, box);
        }
        else
        {
            // todo: Handle friends
            if (vis.TeamAsFriends)
            {
                auto myTeamID = _localPlayer->GetTeamID();

                if (myTeamID == 0)
                {
                    RenderPlayer(settings->visuals.general.enemies, player, box);
                }
                else if (myTeamID == player.entity->GetTeamID())
                {
                    RenderPlayer(settings->visuals.general.friends, player, box);
                }
            }
            else
            {
                if (std::find(EntityManager::DB::friendlyIDs.begin(), EntityManager::DB::friendlyIDs.end(),
                              player.entity->userID) != EntityManager::DB::friendlyIDs.end())
                {
                    RenderPlayer(settings->visuals.general.friends, player, box);
                }
                RenderPlayer(settings->visuals.general.enemies, player, box);
            }
        };
    }
}

void ESP::Draw()
{
    const auto& settings          = SettingsData::settings;
    static auto main              = (MainCamera_c*)il2cpp::InitClass(_("MainCamera"));
    static auto inventory         = (UIInventory_c*)il2cpp::InitClass(_("UIInventory"));
    static auto menuKlass         = (MainMenuSystem_c*)il2cpp::InitClass(_("MainMenuSystem"));
    static auto mapInterfaceKlass = (MapInterface_c*)il2cpp::InitClass(_("MapInterface"));
    auto        isMenuOpen        = menuKlass->static_fields->isOpen;
    auto        isInventoryOpen   = inventory->static_fields->isOpen;
    auto        isMapOpen         = mapInterfaceKlass->static_fields->IsOpen;

    if (g == nullptr)
        return;

    fontSize = ImGui::GetFontSize();

    if (settings->visuals.general.Watermark)
    {
        RenderTextOutline(ImVec2{_flt(2.f), _flt(0.f)}, ImColor(255, 255, 255), ImColor(0, 0, 0),
                          _("getrekt.io V3 beta"));
    }

    camera = (CCamera*)main->static_fields->mainCamera;

    if (camera == nullptr)
        return;

    auto               localPlayer = CLocalPlayer::GetLocalPlayer();
    auto               loc         = (BasePlayer_o*)localPlayer;
    BasePlayer_Fields& ff          = loc->fields;

    if (localPlayer == nullptr || localPlayer->m_CachedPtr == 0 || localPlayer->input == nullptr ||
        localPlayer->net == nullptr || localPlayer->eyes == nullptr)
        return;

    if (localPlayer->_IsDestroyed_k__BackingField || localPlayer->_JustCreated_k__BackingField)
        return;

    isSomeGameMenuOpened = isMenuOpen || isInventoryOpen || isMapOpen;

    _localPlayer         = localPlayer;
    currentLocalPosition = localPlayer->GetOriginPosition();
    currentScreenSize    = camera->GetPixelRect();

    // if (UpdateEntityList() == false)
    //     return;

    DrawAnimals();
    DrawOres();
    DrawRaids();
    DrawCollectibles();
    DrawRadTown();
    DrawVehicles();
    DrawTraps();
    RenderItems();
    DrawPlayers();

    // TOPMOST
    Indicators();

    char buf[48];
    snprintf(buf, 48, "Total Entities: %d", EntityManager::nNetworkablesTotal);
    RenderTextOutline(ImVec2{_flt(2.f), _flt(0.f + fontSize)}, ImColor(255, 249, 97), ImColor(0, 0, 0), buf);

    snprintf(buf, 48, "Saved Entities: %d", EntityManager::nNetworkablesSaved);
    RenderTextOutline(ImVec2{_flt(2.f), _flt(0.f + fontSize * 3)}, ImColor(0, 255, 90), ImColor(0, 0, 0), buf);
}