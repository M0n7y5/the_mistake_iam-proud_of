#include "mui.h"

void mui::Setup() {
    // setup styles
#pragma region draw_style
    ImGuiStyle& style             = ImGui::GetStyle();
    style.Alpha                   = 1.0f;
    style.WindowPadding           = ImVec2(8, 8);
    style.WindowRounding          = 10.0f;
    style.WindowBorderSize        = 1.0f;
    style.WindowMinSize           = ImVec2(300, 450);
    style.WindowTitleAlign        = ImVec2(0.5f, 0.5f);
    style.ChildRounding           = 10.0f;
    style.ChildBorderSize         = 1.0f;
    style.PopupRounding           = 7.0f;
    style.PopupBorderSize         = 1.0f;
    style.FramePadding            = ImVec2(5, 3);
    style.FrameRounding           = 7.0f;
    style.FrameBorderSize         = 1.0f;
    style.ItemSpacing             = ImVec2(8, 4);
    style.ItemInnerSpacing        = ImVec2(4, 4);
    style.IndentSpacing           = 6.0f;
    style.ColumnsMinSpacing       = 6.0f;
    style.ScrollbarSize           = 6.0f;
    style.ScrollbarRounding       = 9.0f;
    style.GrabMinSize             = 0.0f;
    style.GrabRounding            = 7.0f;
    style.TabRounding             = 7.0f;
    style.TabBorderSize           = 1.0f;
    style.ButtonTextAlign         = ImVec2(0.5f, 0.5f);
    style.SelectableTextAlign     = ImVec2(0.0f, 0.5f);
    style.MouseCursorScale        = 0.75f;
    style.WindowShadowOffsetAngle = 1.5f;
    style.WindowShadowOffsetDist  = 0.f;
    style.WindowShadowSize        = 50.f;

#pragma endregion

#pragma region draw_style_color
    /*
     * color navigation:
     * [definition N][purpose]	[color] [rgb]
     1 primitive:
     -	primtv 0 (text) - white: 255,255,255
     -	primtv 1 (background) - darkslategrey: 20,20,30
     -	primtv 2 (disabled) - silver: 192,192,192
     -	primtv 3 (control bg) - cadetblue: 30,35,50
     -	primtv 4 (border) - black: 0,0,0
     -	primtv 5 (hover) - matterhorn: 75,75,75
     *
     2 accents:
     -	accent 0 (main) - blueviolet: 140,40,225
     *	accent 1 (dark) - indigo: 55,0,100
     *	accent 3 (darker) - darkviolet: 75,50,105
     */

    style.Colors[ImGuiCol_Text]                 = ImColor(255, 255, 255, 255); // primtv 0
    style.Colors[ImGuiCol_TextDisabled]         = ImColor(220, 220, 220, 120); // primtv 2
    style.Colors[ImGuiCol_TextSelectedBg]       = colors::accent2;             // accent 1

    style.Colors[ImGuiCol_WindowShadow]         = ImColor(0, 0, 0, 255);
    style.Colors[ImGuiCol_WindowBg]             = ImColor(20, 25, 31, 235); // primtv 3
    style.Colors[ImGuiCol_ChildBg]              = ImColor(17, 21, 26, 255); // primtv 1
    style.Colors[ImGuiCol_PopupBg]              = ImColor(20, 25, 31, 240); // primtv 1

    style.Colors[ImGuiCol_Border]               = ImColor(25, 33, 42, 255);           // primtv 4
    style.Colors[ImGuiCol_BorderShadow]         = ImVec4(0.00f, 0.00f, 0.00f, 0.00f); // clear

    style.Colors[ImGuiCol_FrameBg]              = ImColor(17, 21, 26, 255); // primtv 3
    style.Colors[ImGuiCol_FrameBgHovered]       = ImColor(28, 35, 43);      // accent 1
    style.Colors[ImGuiCol_FrameBgActive]        = ImColor(28, 35, 43);          // accent 0

    // style.Colors[ImGuiCol_ControlBg] = ImVec4(0.11f, 0.14f, 0.20f, 1.00f);				// primtv 3
    // style.Colors[ImGuiCol_ControlBgHovered] = ImVec4(0.30f, 0.30f, 0.30f, 1.00f);		// primtv 5
    // style.Colors[ImGuiCol_ControlBgActive] = ImVec4(0.75f, 0.75f, 0.75f, 0.10f);		// primtv 2

    style.Colors[ImGuiCol_TitleBg]              = ImVec4(0.55f, 0.15f, 0.90f, 0.20f); // accent 0
    style.Colors[ImGuiCol_TitleBgActive]        = colors::accent1;                    // accent 1
    style.Colors[ImGuiCol_TitleBgCollapsed]     = ImVec4(0.22f, 0.00f, 0.40f, 0.20f); // accent 1

    style.Colors[ImGuiCol_MenuBarBg]            = ImColor(17, 21, 26, 255); // primtv 1

    style.Colors[ImGuiCol_ScrollbarBg]          = ImVec4(0.11f, 0.14f, 0.20f, 0.30f); // primtv 3
    style.Colors[ImGuiCol_ScrollbarGrab]        = colors::accent2;                    // accent 3
    style.Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.30f, 0.30f, 0.30f, 0.90f); // primtv 5
    style.Colors[ImGuiCol_ScrollbarGrabActive]  = colors::accent1;                    // primtv 2

    style.Colors[ImGuiCol_CheckMark]            = ImColor(255, 255, 255); // accent 0

    style.Colors[ImGuiCol_SliderGrab]           = colors::accent2; // accent 0
    style.Colors[ImGuiCol_SliderGrabActive]     = colors::accent1; // accent 1

    style.Colors[ImGuiCol_Button]               = ImColor(17, 21, 26); // primtv 3
    style.Colors[ImGuiCol_ButtonHovered]        = ImColor(28, 35, 43); // primtv 5
    style.Colors[ImGuiCol_ButtonActive]         = colors::accent2;     // accent 0

    style.Colors[ImGuiCol_Header]               = colors::accent2;                    // accent 0
    style.Colors[ImGuiCol_HeaderHovered]        = ImColor(28, 35, 43);                    // primtv 5
    style.Colors[ImGuiCol_HeaderActive]         = colors::accent1;                    // primtv 3

    style.Colors[ImGuiCol_Separator]            = colors::accent1;                    // primtv 3
    style.Colors[ImGuiCol_SeparatorHovered]     = ImVec4(0.30f, 0.30f, 0.30f, 1.00f); // primtv 5
    style.Colors[ImGuiCol_SeparatorActive]      = colors::accent1;                    // accent 0

    style.Colors[ImGuiCol_ResizeGrip]           = colors::accent1;                    // accent 0
    style.Colors[ImGuiCol_ResizeGripHovered]    = ImVec4(0.30f, 0.30f, 0.30f, 0.70f); // primtv 5
    style.Colors[ImGuiCol_ResizeGripActive]     = colors::accent2;                    // accent 1

    style.Colors[ImGuiCol_Tab]                  = ImColor(17, 21, 26, 255);           // primtv 1
    style.Colors[ImGuiCol_TabHovered]           = ImColor(28, 35, 43);                // primtv 5
    style.Colors[ImGuiCol_TabActive]            = colors::accent2;                    // accent 0
    style.Colors[ImGuiCol_TabUnfocused]         = ImVec4(0.30f, 0.30f, 0.30f, 0.70f); // primtv 5
    style.Colors[ImGuiCol_TabUnfocusedActive]   = ImVec4(0.55f, 0.15f, 0.90f, 0.60f); // accent 0

    style.Colors[ImGuiCol_PlotLines]            = colors::accent2; // accent 0
    style.Colors[ImGuiCol_PlotLinesHovered]     = colors::accent1; // accent 0
    style.Colors[ImGuiCol_PlotHistogram]        = colors::accent2; // accent 0
    style.Colors[ImGuiCol_PlotHistogramHovered] = colors::accent1; // accent 0

    style.Colors[ImGuiCol_DragDropTarget]       = colors::accent2; // accent 3
    // style.Colors[ImGuiCol_Triangle] = ImVec4(0.55f, 0.15f, 0.90f, 1.00f);				// accent 0

    style.Colors[ImGuiCol_ModalWindowDimBg]     = ImVec4(0.00f, 0.00f, 0.00f, 0.35f); // primtv 4
#pragma endregion
}
