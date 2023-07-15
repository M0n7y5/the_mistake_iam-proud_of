#pragma once
#include "../ui/imgui/imgui.h"
#include "enums.h"
#include "input_data.h"

struct ToggleColorOption
{
    ImColor Color;
    bool    Enable;

    ToggleColorOption(int r = 0, int g = 0, int b = 0, int a = 255, bool enabled = false)
    {
        Color  = ImColor(r, g, b, a);
        Enable = enabled;
    }
};

struct ToggleKeybindOption
{
    bool      Enabled;
    KeyButton key;

    ToggleKeybindOption(KeyButton _key, bool enabled = false) : Enabled(enabled), key(_key)
    {
    }
};