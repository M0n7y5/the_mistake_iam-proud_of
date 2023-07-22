#pragma once
#include "../ui/imgui/imgui.h"
#include "enums.h"
#include "input_data.h"

struct TCO
{
    ImColor Color;
    bool    Enable;

    TCO(int r = 0, int g = 0, int b = 0, int a = 255, bool enabled = false)
    {
        Color  = ImColor(r, g, b, a);
        Enable = enabled;
    }
};

struct TKO
{
    bool      Enabled;
    KeyButton key;

    TKO(KeyButton _key, bool enabled = false) : Enabled(enabled), key(_key) {}
};