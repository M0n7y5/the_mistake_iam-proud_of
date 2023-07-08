#include "ESP.h"
#include "../SDK/math.h"

using namespace ESP;

// Utils
ImVec2 GetTextSize(const char* text)
{
    return ImGui::GetFont()->CalcTextSizeA(_flt(13.f), FLT_MAX, 0, text);
}

// Draw helpers

void RenderTextOutline(ImVec2 pos, ImColor color, ImColor outlineColor, const char* text)
{
    outlineColor.Value.w = color.Value.w;

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

void RenderTextCenter(
    Vector2 centerPos, const char* str, ImColor color = ImColor(255, 255, 255), ImColor outlineColor = ImColor(0, 0, 0))
{
    if (!str)
        return;

    ImVec2 textSize  = GetTextSize(str);
    ImVec2 screenPos = ImVec2(centerPos.x - textSize.x / _flt(2.f), centerPos.y);
    RenderTextOutline(screenPos, color, outlineColor, str);
}

void RenderTextCenterVH(
    Vector2 centerPos, const char* str, ImColor color = ImColor(255, 255, 255), ImColor outlineColor = ImColor(0, 0, 0))
{
    if (!str)
        return;

    const ImVec2 textSize  = GetTextSize(str);
    const ImVec2 screenPos = ImVec2(centerPos.x - textSize.x / 2.f, centerPos.y - textSize.y / 2.f);
    RenderTextOutline(screenPos, color, outlineColor, str);
}

void Indicators()
{
    
}



void ESP::Draw()
{
    if (g == nullptr)
        return;
}