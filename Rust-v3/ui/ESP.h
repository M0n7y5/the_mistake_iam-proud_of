#pragma once
#include "imgui/imgui.h"

namespace ESP
{
    //drawlist
    inline ImDrawList* g    = nullptr;
    //ESP font
    inline ImFont*     font = nullptr;
    void               Draw();
}; // namespace ESP
