#pragma once
#include "imgui/imgui.h"
#include "../SDK/structs.h"

namespace ESP
{
    // drawlist
    inline CRect       currentScreenSize = {};
    inline ImDrawList* g                 = nullptr;
    void               Draw();
}; // namespace ESP
