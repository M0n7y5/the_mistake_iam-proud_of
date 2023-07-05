#pragma once
#include "../imgui/imgui.h" // IMGUI_IMPL_API

struct CCamera;

bool ImGui_Impl_Unity_Init();
void ImGui_Impl_Unity_NewFrame(ImGuiIO& io);
void ImGui_Impl_Unity_RenderDrawData(ImDrawData* draw_data);

namespace TextureManager
{
    inline void Initialize(ImGuiIO const& io);
    inline void BuildFontAtlas(ImGuiIO const& io);
} // namespace TextureManager
