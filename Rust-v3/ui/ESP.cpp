#include "ESP.h"
#include "../Features/EntityManager.h"
#include "../SDK/math.h"
#include "../SDK/settings.h"
#include "../SDK/structs.h"
#include "../mrt/xorstr.hpp"
#include "easings.h"
#include "../SDK/il2cpp_api.h"
#include <algorithm>
#include <span>
#include <stdint.h>
#include <utility>
#include <vector>

using namespace ESP;
using namespace SettingsData;

CCamera* camera               = nullptr;
float    fontSize             = 0.0f;
Vector3  currentLocalPosition = {};
CRect    currentScreenSize    = {};
ImVec2   ToImVec2(Vector2 vec)
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
    return ImGui::GetFont()->CalcTextSizeA(_flt(13.f), FLT_MAX, 0, text);
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
    if (camera->WorldToScreen(pos, screenPos, currentScreenSize.m_Height))
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

void Indicators()
{

    if (!settings->visuals.general.indicators.Enabled)
        return;

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

            auto radAnim     = Remap((float)eas, 0.0f, _flt(1.f), 0.0f, _flt(150.f));
            auto opacityAnim = Remap((float)eas, 0.0f, _flt(1.f), _flt(0.5f), 0.f);

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

        auto curLocalBodyAngles = localPlayer->input->fields.bodyAngles;

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

        sprintf(buff, _("Players: %d"), EntityManager::DB::PlayerCount);

        RenderTextCenterVH({radarX, 320}, buff, {255, 255, 255});

        sprintf(buff, _("NPCs: %d"), EntityManager::DB::NPCCount);

        RenderTextCenterVH({radarX, 330}, buff, settings->visuals.general.npc.Name.Color);

        // Render players pos on top
        auto localPosition = localPlayer->GetOriginPosition();

        for (auto entry : EntityManager::DB::players)
        {
            auto player = (CBasePlayer*)entry.second.entity;

            Vector3 position = player->GetOriginPosition();
            if (position.empty())
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

            if (std::find(EntityManager::DB::friendlyIDs.begin(),
                          EntityManager::DB::friendlyIDs.end(),
                          userId) != EntityManager::DB::friendlyIDs.end())
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

            Vector2 enemyPosition = {position.x, position.z};
            enemyPosition         = Vector2{localPosition.x, localPosition.z} - enemyPosition;

            float distance = enemyPosition.length();
            enemyPosition  = enemyPosition.normalized();
            distance       = std::min(_flt(145.f), distance);
            enemyPosition *= distance;
            enemyPosition = Vector2::RotatePoint(
                enemyPosition, {_flt(0.f), _flt(0.f)},
                _flt(360.f) - localPlayer->input->fields.bodyAngles.fields.y, false);

            float x = screenSize.m_Width - _flt(175.f), y = _flt(155.f);
            g->AddCircleFilled(ImVec2{x - enemyPosition.x, y + enemyPosition.y}, _flt(3.f),
                               dotColor, 8);
        }
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

        auto pos = item.entity->GetOriginPosition();

        if (pos.Invalid())
            return;

        auto dist = pos.distance(currentLocalPosition);

        if (dist > vis.general.Distance)
            return;

        auto col = option.Color;
        if (vis.general.Fade)
        {
            col.Value.w = Remap(dist, 0.f, vis.general.Distance, 1.f, 0.f);
        }

        DrawDefault(name, pos, col, dist);
        clutterIdx++;
    };

    if (vis.general.AntiClutter)
    {
        std::vector<std::pair<uint64_t, OreResource>> lst(DB::ores.begin(), DB::ores.end());
        std::sort(
            lst.begin(), lst.end(),
            [](std::pair<uint64_t, OreResource>& a, std::pair<uint64_t, OreResource>& b) -> bool {
                return a.second.distance > b.second.distance;
            });

        for (auto& pair : lst)
        {
            if (clutterIdx > vis.general.MaxAnticlutterCount)
                return;

            auto& ore = pair.second;

            switch (pair.second.prefabId)
            {
            case 960501790: // stone
                drawOre(_("Stone Ore"), ore, vis.colors.stone);
                break;
            case 152562243: // sulfur
                drawOre(_("Sulfur Ore"), ore, vis.colors.sulfur);
                break;
            case 3327726152: // metal
                drawOre(_("Metal Ore"), ore, vis.colors.metal);
                break;
            default:
                break;
            }
        }
    }
    else
    {
        for (auto& pair : DB::ores)
        {
            auto& ore = pair.second;

            switch (pair.second.prefabId)
            {
            case 960501790: // stone
            case 4124824587: // stone
            case 266547145: // stone
            case 723721358: // stone
                drawOre(_("Stone Ore"), ore, vis.colors.stone);
                break;
            case 152562243: // sulfur
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

    auto& vis = settings->visuals.animals;

    auto drawAnimal = [&](Animal& animal, TCO& option) -> void {
        if (!option.Enable)
            return;

        auto pos = animal.entity->GetOriginPosition();

        if (pos.Invalid())
            return;

        auto dist = pos.distance(currentLocalPosition);

        if (dist > vis.general.Distance)
            return;

        auto col = option.Color;
        if (vis.general.Fade)
        {
            col.Value.w = Remap(dist, 0.f, vis.general.Distance, 1.f, 0.f);
        }

        DrawDefault(animal.entity->klass->_1.name, pos, col, dist);
    };

    if (!settings->visuals.animals.general.Enabled)
        return;

    for (auto& pair : DB::animals)
    {
        auto& animal = pair.second;

        switch (pair.second.classHash)
        {
        case HASH_CTIME("Bear"):
            drawAnimal(animal, vis.colors.bear);
            break;
        case HASH_CTIME("Boar"):
            drawAnimal(animal, vis.colors.boar);
            break;
        case HASH_CTIME("Chicken"):
            drawAnimal(animal, vis.colors.chicken);
            break;
        case HASH_CTIME("Polarbear"):
            drawAnimal(animal, vis.colors.polarBear);
            break;
        case HASH_CTIME("Stag"):
            drawAnimal(animal, vis.colors.stag);
            break;
        case HASH_CTIME("Wolf"):
            drawAnimal(animal, vis.colors.wolf);
            break;
        case HASH_CTIME("Zombie"):
            drawAnimal(animal, vis.colors.zombie);
            break;
        default:
            break;
        }
    }
}

// TODO: do we need it?
#define MinimumUserAddress (uint64_t)0xffffff
#define MaximumUserAddress (uint64_t)0x00007FFFFFFFFFFF

template <typename T> inline bool IsAddressValid(T address)
{
    return ((uint64_t)(address) >= (uint64_t)(MinimumUserAddress) &&
            (uint64_t)(address) <= (uint64_t)(MaximumUserAddress));
}

bool UpdateEntityList()
{
    static auto klass  = (CBaseNetworkable*)il2cpp::InitClass(_("BaseNetworkable"));
    static auto klass2 = (BaseNetworkable_c*)il2cpp::InitClass(_("BaseNetworkable"));

    auto enityList = klass->StaticFields<BaseNetworkable_StaticFields>();
    auto cc        = klass2->static_fields->clientEntities;

    if (!IsAddressValid(cc))
        return false;

    auto items = cc->fields.entityList->fields.vals->fields;
    auto keys  = cc->fields.entityList->fields.keys->fields;

    std::span itemSpan((CBaseNetworkable**)items.buffer->m_Items, items.count);
    std::span idSpan((NetworkableId_o**)keys.buffer->m_Items, keys.count);

    using namespace EntityManager;

    // reset shit

    DB::FullClear();

    int idx = 0;
    for (auto networkable : itemSpan)
    {
        if (networkable->_IsDestroyed_k__BackingField || networkable->m_CachedPtr == 0)
            continue;

        auto layer = ((CGameObject*)networkable)->GetLayer();

        switch (layer)
        {
        case Layer::Construction:
        case Layer::UI:
        case Layer::TransparentFX:
        case Layer::Trigger:
        case Layer::Tree:
        case Layer::Invisible:
        case Layer::Debris:
            // case ELayer::Terrain:
            continue;

        default:
            break;
        }

        auto classHash = HASH_RUNTIME(networkable->klass->_1.name);
        auto id        = networkable->net->fields.ID.fields.Value;

        switch (classHash)
        {
        case HASH_CTIME("BasePlayer"):
        case HASH_CTIME("ScientistNPC"):
        case HASH_CTIME("BanditGuard"):
        case HASH_CTIME("GingerbreadNPC"):
        case HASH_CTIME("TunnelDweller"):
        case HASH_CTIME("UnderwaterDweller"):
        case HASH_CTIME("ScarecrowNPC"):
        case HASH_CTIME("NPCShopKeeper"):
        {
            auto entity = (CBasePlayer*)networkable;

            auto playerName = ((CString*)entity->_displayName)->str();

            Player player{};
            if (memcpy_s(player.name, 129, playerName.c_str(), playerName.size()) == 0)
            {
                if (entity->playerModel->fields._IsNpc_k__BackingField)
                {
                    player.classHash = classHash;
                    DB::NPCCount++;
                }
                else
                {
                    DB::PlayerCount++;
                }

                player.entity = (CBaseEntity*)networkable;
                DB::players.insert_or_assign(id, player);
            }
            break;
        }
        case HASH_CTIME("Bear"):
        case HASH_CTIME("Boar"):
        case HASH_CTIME("Chicken"):
        case HASH_CTIME("Polarbear"):
        case HASH_CTIME("Stag"):
        case HASH_CTIME("Wolf"):
        case HASH_CTIME("Zombie"):
        {
            Animal animal{};

            animal.classHash = classHash;
            animal.entity    = (CBaseEntity*)networkable;
            animal.prefabId  = networkable->prefabID;

            DB::animals.insert_or_assign(id, animal);
            break;
        }
        case HASH_CTIME("OreResourceEntity"):
        {
            OreResource ore{};

            ore.entity    = (CBaseEntity*)networkable;
            ore.prefabId  = networkable->prefabID;
            ore.postition = ore.entity->GetOriginPosition();
            ore.distance  = currentLocalPosition.distance(ore.postition);
            DB::ores.insert_or_assign(id, ore);
            break;
        }
        }
    }

    return true;
}

void ESP::Draw()
{
    static auto main = (MainCamera_c*)il2cpp::InitClass(_("MainCamera"));

    if (g == nullptr)
        return;

    if (settings->visuals.general.Watermark)
    {
        RenderTextOutline(ImVec2{_flt(2.f), _flt(0.f)}, ImColor(255, 255, 255), ImColor(0, 0, 0),
                          _("getrekt.io private"));
    }

    camera   = (CCamera*)main->static_fields->mainCamera;
    fontSize = ImGui::GetFontSize();

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

    currentLocalPosition = localPlayer->GetOriginPosition();
    currentScreenSize    = camera->GetPixelRect();

    if (UpdateEntityList() == false)
        return;

    DrawAnimals();
    DrawOres();
    
    // TOPMOST
    Indicators();
}