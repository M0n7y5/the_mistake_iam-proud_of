#include "ESP.h"

#include <algorithm>
#include <numeric>
#include <span>
#include <stdint.h>
#include <utility>
#include <vcruntime.h>
#include <vector>

#include "../Features/EntityManager.h"
#include "../Features/Aimbot.h"
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

void Indicators()
{
    if (!settings->visuals.general.indicators.Enabled)
        return;

    Vector2 screenCenter = {currentScreenSize.m_Width / _flt(2.f), currentScreenSize.m_Height / _flt(2.f)};

    if (settings->visuals.general.indicators.PredictionLauncher.Enable && Aimbot::launcherInfo.valid)
    {
        Vector2    screenPoint, newPosScreen, firstPosScreen{};
        Vector3    point         = Aimbot::launcherInfo.hitPoint;
        Quaternion rotation      = Aimbot::launcherInfo.rotation;
        float      spreadRad     = Aimbot::launcherInfo.travelDist * _flt(0.01963747777f);
        float      spreadHalfRad = spreadRad * 0.7f;

        // FIXME: use arrays instead + std::span
        Vector2 drawPoints[32];
        Vector2 drawPointsGlow[32];
        Vector3 worldPoints[32];
        Vector3 worldPointsGlow[32];
        size_t  idx = 0;
        for (float a = _flt(0.f); a < _flt(2.f) * M_PI; a += M_PI / _flt(16.f))
        {
            Vector3 circlePos = point + Quaternion::QuatMult(rotation, Vector3(std::sin(a) * spreadRad,
                                                                               std::cos(a) * spreadRad, _flt(0.f)));
            Vector3 circlePosGlow =
                point + Quaternion::QuatMult(
                            rotation, Vector3(std::sin(a) * spreadHalfRad, std::cos(a) * spreadHalfRad, _flt(0.f)));
            worldPoints[idx]     = circlePos;
            worldPointsGlow[idx] = circlePosGlow;

            idx++;
        }

        if (camera->WorldToScreenVec2Ex({worldPoints, idx}, {drawPoints, idx}, currentScreenSize))
        {
            camera->WorldToScreenVec2Ex({worldPointsGlow, idx}, {drawPointsGlow, idx}, currentScreenSize);
            // drawPoints[drawPoints.size() - 1] = drawPoints[0];
            auto glow = Remap(drawPoints[0].distance(drawPointsGlow[0]), 5, 35, 25, 90);
            auto col  = settings->visuals.general.indicators.PredictionLauncher.Color;
            g->AddShadowConvexPoly(reinterpret_cast<ImVec2*>(&drawPointsGlow), idx, col, glow, {});

            auto col2    = col;
            col2.Value.w = Remap(drawPoints[0].distance(drawPointsGlow[0]), 5.f, 35.f, 0.f, 1.f);
            g->AddShadowConvexPoly(reinterpret_cast<ImVec2*>(&drawPointsGlow), idx, col2, glow, {});

            // g->AddConvexPolyFilled(reinterpret_cast<ImVec2*>(drawPoints.data()), drawPoints.size(),
            //                        settings->visuals.general.indicators.VisualPredition.Color);

            if (settings->visuals.general.indicators.PredictionLauncherLine.Enable)
            {
                g->AddPolyline(reinterpret_cast<ImVec2*>(&drawPoints), idx,
                               settings->visuals.general.indicators.PredictionLauncherLine.Color, ImDrawFlags_Closed,
                               _flt(1.f));
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
        g->AddCircle(ToImVec2(screenCenter), Aimbot::FOV.GetRadiusPx(), settings->ragebot.general.aimbot.FOV.Color);
    }
}

void DrawOres()
{
    using namespace EntityManager;
    int   clutterIdx = 0;
    auto& vis        = settings->visuals.ores;
    auto  drawOre    = [&](const char* name, OreResource& item, TCO& option) -> void {
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

    for (auto& ore : DB::ores)
    {
        if ((vis.general.AntiClutter) && (clutterIdx > vis.general.MaxAnticlutterCount))
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

void DrawAnimals()
{
    using namespace EntityManager;

    const auto& vis = settings->visuals.animals;

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

    for (const auto& animal : DB::animals)
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
    const float width  = right - left;

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
            DrawPlayerFlag(flagPosition, _("S"));

        if (player.entity->IsWounded())
            DrawPlayerFlag(flagPosition, _("W"));

        if (opts.TeamID.Enable)
        {
            auto tid = player.entity->GetTeamID();
            if (tid != 0u)
            {
                snprintf(buf, 48, "TID %llu", tid);
                DrawPlayerFlag(flagPosition, buf);
            }
        }
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
        snprintf(buf, 128, _("%dm"), player.distance);

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

    for (const auto& player : DB::players)
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
    const auto& settings = SettingsData::settings;
    static auto main     = (MainCamera_c*)il2cpp::InitClass(_("MainCamera"));

    if (g == nullptr)
        return;

    fontSize = ImGui::GetFontSize();

    if (settings->visuals.general.Watermark)
    {
        RenderTextOutline(ImVec2{_flt(2.f), _flt(0.f)}, ImColor(255, 255, 255), ImColor(0, 0, 0),
                          _("getrekt.io private"));
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

    if (localPlayer->_IsDestroyed_k__BackingField)
        return;

    _localPlayer         = localPlayer;
    currentLocalPosition = localPlayer->GetOriginPosition();
    currentScreenSize    = camera->GetPixelRect();

    // if (UpdateEntityList() == false)
    //     return;

    DrawAnimals();
    DrawOres();

    DrawPlayers();
    // TOPMOST
    Indicators();

    char buf[48];
    snprintf(buf, 48, "Total Entities: %d", EntityManager::nNetworkablesTotal);
    RenderTextOutline(ImVec2{_flt(2.f), _flt(0.f + fontSize)}, ImColor(255, 249, 97), ImColor(0, 0, 0), buf);

    snprintf(buf, 48, "Saved Entities: %d", EntityManager::nNetworkablesSaved);
    RenderTextOutline(ImVec2{_flt(2.f), _flt(0.f + fontSize * 3)}, ImColor(0, 255, 90), ImColor(0, 0, 0), buf);
}