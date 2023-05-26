#pragma once
#include "../imgui/imgui.h" // IMGUI_IMPL_API

typedef struct CCamera;

bool ImGui_Impl_Unity_Init(CCamera* camera);
void ImGui_Impl_Unity_NewFrame();
void ImGui_Impl_Unity_RenderDrawData(ImDrawData* draw_data);

namespace TextureManager
{
    inline void Initialize();
}
