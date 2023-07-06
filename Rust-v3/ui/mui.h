#pragma once
#include <string>

#include "imgui/imgui.h"
#include <functional>
#include <utility>
#include <vector>

#include "STween.h"
// #include "fsm.hpp"
#include "fonts/grlogofont.hpp"

#include "imgui/imgui_internal.h"
// #include "postprocessing/PostProccessing.h"
#include <iostream>

namespace mui
{
    namespace colors
    {
        inline auto accent1 = ImColor(0, 115, 255, 255);
        inline auto accent2 = ImColor(0, 80, 178, 255);
    } // namespace colors

    namespace fonts
    {
        inline ImFont* logo;
        inline ImFont* defaultFont;
        inline ImFont* boldFont;
        inline ImFont* categoryFont;

        inline float defaultFontSize {};

        inline void Init()
        {
            ImFontConfig cfg;
            // cfg.OversampleH = 1;
            // cfg.OversampleV = 1;

            // cfg.FontBuilderFlags = ImGuiFreeTypeBuilderFlags_ForceAutoHint;

            const auto& io = ImGui::GetIO();

            static ImVector<ImWchar> ranges;
            ImFontGlyphRangesBuilder builder;
            // builder.AddText((char*)u8"ěščřžýáíéůúó");                        // Add a string (here "Hello world"
            // contains 7 unique characters) builder.AddChar(0x7262);
            //  Add a specific character

            static const ImWchar rrr[] = {
                0x0020,
                0x00FF, // Basic Latin + Latin Supplement
                0x0100,
                0x024F, // Latin ex a b
                0,
            };

            builder.AddRanges(rrr);
            builder.AddRanges(io.Fonts->GetGlyphRangesJapanese());                // Add one of the default ranges
            builder.AddRanges(io.Fonts->GetGlyphRangesCyrillic());                // Add one of the default ranges
            builder.AddRanges(io.Fonts->GetGlyphRangesChineseSimplifiedCommon()); // Add one of the default ranges
            builder.BuildRanges(&ranges);

            fonts::defaultFont =
                ImGui::GetIO().Fonts->AddFontFromFileTTF("G:\\fonts\\NotoSans-Regular.ttf", 19.f, &cfg, ranges.Data);
            fonts::boldFont =
                ImGui::GetIO().Fonts->AddFontFromFileTTF("G:\\fonts\\NotoSans-Bold.ttf", 20.f, &cfg, ranges.Data);
            fonts::logo = ImGui::GetIO().Fonts->AddFontFromMemoryCompressedBase85TTF(GrLogoData_base85, 50.f, &cfg);
            fonts::categoryFont = ImGui::GetIO().Fonts->AddFontFromFileTTF("G:\\fonts\\fontello.ttf", 40.f, &cfg);

            io.Fonts->Build();
        }

    } // namespace fonts

    void Setup();

    static ImVector<ImRect> s_GroupPanelLabelStack;

    static ImFont* spacerfont;

    static bool KeyBindActivePopup = false;

    inline void BeginGroupPanel(const char* name, const ImVec2& size = ImVec2(0.0f, 0.0f))
    {
        ImGui::BeginGroup();

        auto cursorPos   = ImGui::GetCursorScreenPos();
        auto itemSpacing = ImGui::GetStyle().ItemSpacing;

        ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(0.0f, 0.0f));
        ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(0.0f, 0.0f));

        auto frameHeight = ImGui::GetFrameHeight();
        ImGui::BeginGroup();

        ImVec2 effectiveSize = size;
        if (size.x < 0.0f)
            effectiveSize.x = ImGui::GetContentRegionAvail().x;
        else
            effectiveSize.x = size.x;

        ImGui::Dummy(ImVec2(effectiveSize.x, 0.0f));

        ImGui::Dummy(ImVec2(frameHeight * 0.5f, 0.0f));
        ImGui::SameLine(0.0f, 0.0f);
        ImGui::BeginGroup();
        ImGui::Dummy(ImVec2(frameHeight * 0.5f, 0.0f));
        ImGui::SameLine(0.0f, 0.0f);
        ImGui::TextUnformatted(name);
        auto labelMin = ImGui::GetItemRectMin();
        auto labelMax = ImGui::GetItemRectMax();
        ImGui::SameLine(0.0f, 0.0f);
        ImGui::Dummy(ImVec2(0.0, frameHeight + itemSpacing.y));
        ImGui::BeginGroup();

        // ImGui::GetWindowDrawList()->AddRect(labelMin, labelMax, IM_COL32(255, 0, 255, 255));

        ImGui::PopStyleVar(2);

#if IMGUI_VERSION_NUM >= 17301
        ImGui::GetCurrentWindow()->ContentRegionRect.Max.x -= frameHeight * 0.5f;
        ImGui::GetCurrentWindow()->WorkRect.Max.x          -= frameHeight * 0.5f;
        ImGui::GetCurrentWindow()->InnerRect.Max.x         -= frameHeight * 0.5f;
#else
        ImGui::GetCurrentWindow()->ContentsRegionRect.Max.x -= frameHeight * 0.5f;
#endif
        ImGui::GetCurrentWindow()->Size.x -= frameHeight;

        auto itemWidth = ImGui::CalcItemWidth();
        ImGui::PushItemWidth(ImMax(0.0f, itemWidth - frameHeight));

        s_GroupPanelLabelStack.push_back(ImRect(labelMin, labelMax));
    }

    inline void EndGroupPanel()
    {
        ImGui::PopItemWidth();

        auto itemSpacing = ImGui::GetStyle().ItemSpacing;

        ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(0.0f, 0.0f));
        ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(0.0f, 0.0f));

        auto frameHeight = ImGui::GetFrameHeight();

        ImGui::EndGroup();

        ImGui::GetWindowDrawList()->AddRectFilled(
            ImGui::GetItemRectMin(), ImGui::GetItemRectMax(), IM_COL32(0, 255, 0, 64), 4.0f);

        ImGui::EndGroup();

        ImGui::SameLine(0.0f, 0.0f);
        ImGui::Dummy(ImVec2(frameHeight * 0.5f, 0.0f));
        ImGui::Dummy(ImVec2(0.0, frameHeight - frameHeight * 0.5f));

        ImGui::EndGroup();

        auto itemMin = ImGui::GetItemRectMin();
        auto itemMax = ImGui::GetItemRectMax();
        ImGui::GetWindowDrawList()->AddRectFilled(itemMin, itemMax, IM_COL32(255, 0, 0, 64), 4.0f);

        auto labelRect = s_GroupPanelLabelStack.back();
        s_GroupPanelLabelStack.pop_back();

        ImVec2 halfFrame  = ImVec2(frameHeight * 0.25f, frameHeight) * 0.5f;
        ImRect frameRect  = ImRect(itemMin + halfFrame, itemMax - ImVec2(halfFrame.x, 0.0f));
        labelRect.Min.x  -= itemSpacing.x;
        labelRect.Max.x  += itemSpacing.x;
        for (int i = 0; i < 4; ++i)
        {
            switch (i)
            {
                    // left half-plane
                case 0:
                    ImGui::PushClipRect(ImVec2(-FLT_MAX, -FLT_MAX), ImVec2(labelRect.Min.x, FLT_MAX), true);
                    break;
                    // right half-plane
                case 1:
                    ImGui::PushClipRect(ImVec2(labelRect.Max.x, -FLT_MAX), ImVec2(FLT_MAX, FLT_MAX), true);
                    break;
                    // top
                case 2:
                    ImGui::PushClipRect(
                        ImVec2(labelRect.Min.x, -FLT_MAX), ImVec2(labelRect.Max.x, labelRect.Min.y), true);
                    break;
                    // bottom
                case 3:
                    ImGui::PushClipRect(
                        ImVec2(labelRect.Min.x, labelRect.Max.y), ImVec2(labelRect.Max.x, FLT_MAX), true);
                    break;
            }

            auto& style = ImGui::GetStyle();

            ImGui::GetWindowDrawList()->AddRect(
                frameRect.Min, frameRect.Max, ImColor(ImGui::GetStyleColorVec4(ImGuiCol_Border)), style.ChildRounding);

            ImGui::PopClipRect();
        }

        ImGui::PopStyleVar(2);

#if IMGUI_VERSION_NUM >= 17301
        ImGui::GetCurrentWindow()->ContentRegionRect.Max.x += frameHeight * 0.5f;
        ImGui::GetCurrentWindow()->WorkRect.Max.x          += frameHeight * 0.5f;
        ImGui::GetCurrentWindow()->InnerRect.Max.x         += frameHeight * 0.5f;
#else
        ImGui::GetCurrentWindow()->ContentsRegionRect.Max.x += frameHeight * 0.5f;
#endif
        ImGui::GetCurrentWindow()->Size.x += frameHeight;

        ImGui::Dummy(ImVec2(0.0f, 0.0f));

        ImGui::EndGroup();
    }

    inline void ToggleButton(const char* str_id, bool* v)
    {
        ImVec2      p         = ImGui::GetCursorScreenPos();
        ImDrawList* draw_list = ImGui::GetWindowDrawList();

        float height = 22.f;
        float width  = height * 1.55f;
        float radius = height * 0.50f;

        ImGui::InvisibleButton(str_id, ImVec2(width, height));
        if (ImGui::IsItemClicked())
            *v = !*v;

        float t = *v ? 1.0f : 0.0f;

        ImGuiContext& g          = *GImGui;
        float         ANIM_SPEED = 0.20f;
        if (g.LastActiveId == g.CurrentWindow->GetID(str_id)) // && g.LastActiveIdTimer < ANIM_SPEED)
        {
            float t_anim = ImSaturate(g.LastActiveIdTimer / ANIM_SPEED);
            t            = *v ? (t_anim) : (1.0f - t_anim);
        }

        ImU32 col_bg;

        ImVec4* colors = ImGui::GetStyle().Colors;

        if (ImGui::IsItemHovered())
            col_bg = ImGui::GetColorU32(ImLerp(colors[ImGuiCol_FrameBg], colors[ImGuiCol_FrameBg], t));
        else
            col_bg = ImGui::GetColorU32(ImLerp(colors[ImGuiCol_FrameBg], colors[ImGuiCol_FrameBg], t));

        draw_list->AddRectFilled(p, ImVec2(p.x + width, p.y + height), col_bg, height * 0.5f);

        draw_list->AddRect(
            p, ImVec2(p.x + width, p.y + height), ImGui::GetColorU32(colors[ImGuiCol_Border]), height * 0.5f, 0, 1.f);

        col_bg = ImGui::GetColorU32(ImLerp(colors[ImGuiCol_TextDisabled], ImColor(0, 115, 255, 255), t));

        draw_list->AddCircleFilled(
            ImVec2(p.x + radius + t * (width - radius * 2.0f), p.y + radius), radius - 1.5f, col_bg);

        col_bg = ImGui::GetColorU32(ImLerp((ImVec4)ImColor(0, 115, 255, 0), ImColor(0, 115, 255, 120), t));

        draw_list->AddShadowCircle(ImVec2(p.x + radius + t * (width - radius * 2.0f), p.y + radius), radius - 1.5f,
            col_bg, 35, {}, ImDrawFlags_ShadowCutOutShapeBackground);
        // draw_list->AddShadowCircle(
        //     ImVec2(p.x + radius + t * (width - radius * 2.0f), p.y + radius), radius - 1.5f, col_bg, 35, {},
        //     ImDrawFlags_ShadowCutOutShapeBackground);
    }

    inline void ToggleFeature(const char* name, bool* v, float width)
    {
        const auto curX = ImGui::GetCursorPosX();
        ImGui::TextUnformatted(name, ImGui::FindRenderedTextEnd(name));
        ImGui::SameLine();
        ImGui::SetCursorPosX(width - 40.f + curX);
        ToggleButton(name, v);
    }

    inline void BeginFeatureSet(const char* title, float width = 0)
    {
        ImGui::BeginGroup();
        ImGui::Indent(7);
        ImGui::PushFont(fonts::boldFont);
        ImGui::TextUnformatted(title);
        ImGui::PopFont();
        ImGui::Unindent(7);
        ImGui::Dummy({width, 2});
        const auto itemMin = ImGui::GetItemRectMin();
        const auto itemMax = ImGui::GetItemRectMax();

        ImGui::GetWindowDrawList()->AddRectFilled(itemMin, itemMax, colors::accent1);
        ImGui::Dummy({0, 3});
        ImGui::Indent(7);
        ImGui::PushTextWrapPos(ImGui::GetCursorPos().x + width);
    }

    inline void EndFeatureSet()
    {
        ImGui::PopTextWrapPos();
        ImGui::Unindent(7);
        ImGui::Dummy({0, 3});
        ImGui::EndGroup();

        auto min = ImGui::GetItemRectMin();
        auto max = ImGui::GetItemRectMax();

        ImGui::GetWindowDrawList()->AddShadowRect(
            min, max, IM_COL32(0, 0, 0, 255), 35, {0, 0}, ImDrawFlags_ShadowCutOutShapeBackground, 7);
        ImGui::GetWindowDrawList()->AddShadowRect(
            min, max, IM_COL32(0, 0, 0, 50), 35, {0, 0}, ImDrawFlags_ShadowCutOutShapeBackground, 7);
        // ImGui::GetWindowDrawList()->AddShadowRect(min, max, IM_COL32(0, 0, 0, 255), 30, {0, 0},
        // ImDrawFlags_ShadowCutOutShapeBackground, 10);

        ImGui::GetWindowDrawList()->AddRect(min, max, IM_COL32(25, 33, 42, 255), 7);

        ImGui::Dummy({0, 5});
    }

    inline float Remap(float value, float inputStart, float inputEnd, float outputStart, float outputEnd)
    {
        float result = (value - inputStart) / (inputEnd - inputStart) * (outputEnd - outputStart) + outputStart;

        return result;
    }

    inline bool SliderScalar2(const char* label, ImGuiDataType data_type, void* p_data, const void* p_min,
        const void* p_max, const char* format, ImGuiSliderFlags flags = 0)
    {
        ImGuiWindow* window = ImGui::GetCurrentWindow();
        if (window->SkipItems)
            return false;

        ImGuiContext&     g     = *GImGui;
        const ImGuiStyle& style = g.Style;
        const ImGuiID     id    = window->GetID(label);
        const float       w     = ImGui::CalcItemWidth();

        // Display value using user-provided display format so user can add prefix/suffix/decorations to the value.

        // RenderTextClipped(frame_bb.Min, frame_bb.Max, value_buf, value_buf_end, NULL, ImVec2(0.5f, 0.5f));
        // const ImVec2 label_size = CalcTextSize( value_buf, value_buf_end, true);

        const ImRect frame_bb(window->DC.CursorPos, window->DC.CursorPos + ImVec2(w, 15 + style.FramePadding.y * 2.0f));
        // const ImRect total_bb(frame_bb.Min, frame_bb.Max);

        const bool temp_input_allowed = (flags & ImGuiSliderFlags_NoInput) == 0;
        ImGui::ItemSize(frame_bb, style.FramePadding.y);
        if (!ImGui::ItemAdd(frame_bb, id, &frame_bb, temp_input_allowed ? ImGuiItemFlags_Inputable : 0))
            return false;

        // Default format string when passing NULL
        if (format == NULL)
            format = ImGui::DataTypeGetInfo(data_type)->PrintFmt;

        // Tabbing or CTRL-clicking on Slider turns it into an input box
        const bool hovered = ImGui::ItemHoverable(frame_bb, id);
        const bool active  = ImGui::IsItemActive();

        const bool input_requested_by_tabbing =
            temp_input_allowed && (g.LastItemData.StatusFlags & ImGuiItemStatusFlags_FocusedByTabbing) != 0;
        const bool clicked = (hovered && g.IO.MouseClicked[0]);
        if (input_requested_by_tabbing || clicked || g.NavActivateId == id)
        {
            ImGui::SetActiveID(id, window);
            ImGui::SetFocusID(id, window);
            ImGui::FocusWindow(window);
            g.ActiveIdUsingNavDirMask |= (1 << ImGuiDir_Left) | (1 << ImGuiDir_Right);
        }

        // Draw frame
        // const ImU32 frame_col = GetColorU32(g.ActiveId == id ? ImGuiCol_FrameBgActive : hovered ?
        // ImGuiCol_FrameBgHovered : ImGuiCol_FrameBg);
        ImGui::RenderNavHighlight(frame_bb, id);
        // char value_buf[64];
        // const char* value_buf_end =
        //     value_buf + ImGui::DataTypeFormatString(value_buf, IM_ARRAYSIZE(value_buf), data_type, p_data, format);

        float t_anim = 0.0f;
        if (hovered)
        {
            t_anim = ImSaturate(g.HoveredIdTimer / 0.2);
            // ImGui::SetTooltip(value_buf, value_buf_end);
        }

        ImU32 col_bg;
        if (ImGui::IsItemHovered())
            col_bg = ImGui::GetColorU32(
                ImLerp(ImGui::GetStyleColorVec4(g.ActiveId == id ? ImGuiCol_FrameBgActive : ImGuiCol_FrameBg),
                    ImGui::GetStyleColorVec4(ImGuiCol_FrameBgHovered), t_anim));
        else
            col_bg = ImGui::GetColorU32(g.ActiveId == id ? ImGuiCol_FrameBgActive : ImGuiCol_FrameBg);

        // window->DrawList->AddLine(ImVec2(frame_bb.Min.x, frame_bb.GetCenter().y), ImVec2(frame_bb.Max.x,
        // frame_bb.GetCenter().y), GetColorU32(ImGuiCol_Border), 3.f); window->DrawList->AddLine(ImVec2(frame_bb.Min.x,
        // frame_bb.GetCenter().y), ImVec2(frame_bb.Max.x, frame_bb.GetCenter().y), col_bg, 2.f);
        window->DrawList->AddRectFilled(ImVec2(frame_bb.Min.x, frame_bb.Min.y + 6.f),
            ImVec2(frame_bb.Max.x, frame_bb.Max.y - 8.f), col_bg, style.FrameRounding);

        // Slider behavior
        ImRect     grab_bb;
        const bool value_changed =
            ImGui::SliderBehavior(frame_bb, id, data_type, p_data, p_min, p_max, format, flags, &grab_bb);
        if (value_changed)
            ImGui::MarkItemEdited(id);

        // Render grab
        if (grab_bb.Max.x > grab_bb.Min.x)
        {
            // window->DrawList->AddLine(ImVec2(frame_bb.Min.x, grab_bb.GetCenter().y), ImVec2(grab_bb.Max.x - 10,
            // grab_bb.GetCenter().y), GetColorU32(g.ActiveId == id ? ImGuiCol_SliderGrabActive :
            // ImGuiCol_SliderGrab), 2.f);

            /*window->DrawList->AddRectFilledMultiColor(ImVec2(frame_bb.Min.x, frame_bb.Min.y + 6.f),
                                                      ImVec2(grab_bb.Max.x, grab_bb.Max.y-6.f ),
                GetColorU32(g.ActiveId == id ? ImGuiCol_SliderGrabActive : ImGuiCol_SliderGrab),
                GetColorU32(g.ActiveId == id ? ImGuiCol_SliderGrabActive2 : ImGuiCol_SliderGrab2),
                GetColorU32(g.ActiveId == id ? ImGuiCol_SliderGrabActive2 : ImGuiCol_SliderGrab2),
                GetColorU32(g.ActiveId == id ? ImGuiCol_SliderGrabActive : ImGuiCol_SliderGrab));*/
            ImVec2 Min   = ImVec2(frame_bb.Min.x, frame_bb.Min.y + 6.f);
            ImVec2 Max   = ImVec2(grab_bb.Max.x, grab_bb.Max.y - 6.f);
            auto   col_1 = ImGui::GetColorU32(ImGuiCol_SliderGrab);
            // auto col_2 = GetColorU32(g.ActiveId == id ? ImGuiCol_SliderGrabActive2 : ImGuiCol_SliderGrab2);

            float h_increase = (active || hovered) ? 0.2f : 0.02f;
            float v_increase = (active || hovered) ? 0.40f : 0.2f;

            ImVec4 col_2_vec = ImGui::ColorConvertU32ToFloat4(col_1);
            ImGui::ColorConvertRGBtoHSV(col_2_vec.x, col_2_vec.y, col_2_vec.z, col_2_vec.x, col_2_vec.y, col_2_vec.z);
            col_2_vec.z = ImMin(col_2_vec.z + h_increase, 1.0f);
            col_2_vec.z = ImMin(col_2_vec.z + v_increase, 1.0f);
            ImGui::ColorConvertHSVtoRGB(col_2_vec.x, col_2_vec.y, col_2_vec.z, col_2_vec.x, col_2_vec.y, col_2_vec.z);
            auto col_2 = ImGui::GetColorU32(col_2_vec);

            int vert_start_idx = window->DrawList->VtxBuffer.Size;
            window->DrawList->AddRectFilled(Min, Max, col_1, style.FrameRounding);
            int vert_end_idx = window->DrawList->VtxBuffer.Size;
            ImGui::ShadeVertsLinearColorGradientKeepAlpha(
                window->DrawList, vert_start_idx, vert_end_idx, Min, ImVec2(Min.x, Max.y), col_2, col_1);

            // window->DrawList->AddCircleFilled(ImVec2((grab_bb.Min.x + grab_bb.Max.x) / 2,
            // grab_bb.GetCenter().y), 6.f, GetColorU32(ImGuiCol_Text, t_anim));
            auto centerGrab = ImVec2((grab_bb.Min.x + grab_bb.Max.x) / 2, grab_bb.GetCenter().y);

            auto grabCol =
                g.ActiveId == id ? IM_COL32(255, 255, 255, 255 * t_anim) : IM_COL32(200, 200, 200, 200 * t_anim);

            auto shadowColor = IM_COL32(0, 0, 0, 255 * t_anim);

            window->DrawList->AddShadowCircle(centerGrab, 6.f, shadowColor, 25, {0, 0});
            // window->DrawList->AddShadowCircle(centerGrab, 6.f, shadowColor, 25, {0, 0});

            window->DrawList->AddCircleFilled(
                ImVec2((grab_bb.Min.x + grab_bb.Max.x) / 2, grab_bb.GetCenter().y - 1), 7.f, grabCol);
            //  ImGui::RenderTextClipped(frame_bb.Min, grab_bb.Max, value_buf, value_buf_end, NULL, ImVec2(0.5f, 0.5f));
        }

        IMGUI_TEST_ENGINE_ITEM_INFO(id, label, g.LastItemData.StatusFlags);
        return value_changed;
    }

    inline bool SliderF(const char* label, float* v, float v_min, float v_max, const char* format, float min_width,
        ImGuiSliderFlags flags = 0)
    {
        ImGui::LabelText("##nolabel", "%s", label);
        ImGui::SameLine(min_width ? min_width : ImGui::CalcTextSize(label).x);
        ImGui::SetNextItemWidth(-1);
        return SliderScalar2(label, ImGuiDataType_Float, v, &v_min, &v_max, format, flags);
    }

    template <class T>
    class SimpleAnimation
    {
        T                 val;
        STween::STween<T> genAnim = STween::STween<T>();
        std::string       dbgName;

        T enterVal {}, leaveVal {};

        bool entered {}, left {};

      public:
        SimpleAnimation(T fromVal, T to, float timeSec, STween::EasingFunction easing, std::string testName = "")
        {
            val = fromVal;

            genAnim.From(fromVal)
                .To(to) // default closed
                .Easing(easing)
                .Time(timeSec)
                .OnStep(
                    [this](T step)
                    {
                        this->val = step;
                    });

            dbgName = std::move(testName);
        }

        SimpleAnimation<T>& SetEnterValue(T val)
        {
            this->enterVal = val;
            return *this;
        }

        SimpleAnimation<T>& SetLeaveValue(T val)
        {
            this->leaveVal = val;
            return *this;
        }

        void Update(float delta)
        {
            this->genAnim.Update(delta);
        }

        explicit operator T()
        {
            return this->val;
        }

        void Enter()
        {
            if (!this->entered)
            {
                this->genAnim.FromEx(this->val);
                this->genAnim.To(this->enterVal);
                this->genAnim.Reset();

                this->entered = true;
                this->left    = false;
            }
        }

        void Leave()
        {
            if (!this->left)
            {
                this->genAnim.FromEx(this->val);
                this->genAnim.To(this->leaveVal);
                this->genAnim.Reset();

                this->left    = true;
                this->entered = false;
            }
        }
    };

    class FeatureKeyBind
    {
        enum TriggerType
        {
            None,
            Hold,
            Toggle
        };

        ImGuiKey    _key     = ImGuiMod_None;
        TriggerType _trigger = None;

      public:
        bool IsActive()
        {
            if (_key == ImGuiMod_None)
                return false;

            switch (_trigger)
            {
                case None:
                    return false;
                case Hold:
                    return ImGui::IsKeyDown(_key);
                case Toggle:
                    return ImGui::IsKeyPressed(_key, false);
            }
        }
    };

    // this is really bad, make separate keybind manager and integrate it with MUI
    class RenderableFeature
    {
      public:
        virtual void Draw(ImVec2 size)
        { }
        virtual void Init()
        { }
    };

    template <typename T>
    class Feature : public RenderableFeature
    {
        static inline int UID = 37;

      public:
        std::string _name;
        T*          _data = nullptr;

        explicit Feature(std::string name, T* variable) : _name(std::move(name)), _data(variable)
        {
            _name.append("##");
            _name.append(std::to_string(UID));
            UID += 37;
        }
    };

    class BoolFeature : public Feature<bool>
    {
      public:
        explicit BoolFeature(std::string name, bool* var) : Feature(name, var)
        { }

        void Init() override
        { }

        void Draw(ImVec2 size) override
        {
            static bool opppen = false;
            ToggleFeature(_name.c_str(), static_cast<bool*>(_data), size.x);

            // if (!_keyBinds)
            //     return;

            if (ImGui::BeginPopupContextItem(0, ImGuiPopupFlags_MouseButtonRight)) // <-- This is using IsItemHovered()
            {
                // if (_keyBinds->empty()) {
                // } else {
                //     for (const auto bind : _keyBinds)
                // }

                ImGui::TextDisabled("No Binds");

                ImGui::Separator();
                // if (ImGui::Button("Disabled")) {}
                // if (ImGui::Selectable("Hold")) {}
                if (ImGui::Button("Add Bind"))
                {
                    KeyBindActivePopup = true;
                }

                ImGui::EndPopup();
            }
        }
    };

    class ColorFeature : public Feature<ImColor>
    {

        std::string colorButton;
        std::string colorButtonCurrent;
        std::string colorButtonPrev;
        std::string popupName;
        std::string popupPicker;
        std::string popupPalette;
        ImVec4      backup_color;

      public:
        explicit ColorFeature(std::string name, ImColor* var) : Feature(name, var)
        {
            colorButton        = _name + "_" + "colorButton";
            colorButtonCurrent = _name + "_" + "colorButton_current";
            colorButtonPrev    = _name + "_" + "colorButton_prev";
            popupName          = _name + "_" + "popup";
            popupPicker        = _name + "_" + "colorPicker";
            popupPalette       = _name + "_" + "pallete";
        }

        void Init() override
        { }

        void Draw(ImVec2 size) override
        {
            static bool   saved_palette_init = true;
            static ImVec4 saved_palette[88]  = {};
            if (saved_palette_init)
            {
                for (int n = 0; n < IM_ARRAYSIZE(saved_palette); n++)
                {
                    ImGui::ColorConvertHSVtoRGB(
                        n / 87.0f, 0.8f, 0.8f, saved_palette[n].x, saved_palette[n].y, saved_palette[n].z);
                    saved_palette[n].w = 1.0f; // Alpha
                }
                saved_palette_init = false;
            }

            const auto curX = ImGui::GetCursorPosX();
            ImGui::TextUnformatted(_name.c_str(), ImGui::FindRenderedTextEnd(_name.c_str()));
            ImGui::SameLine();
            ImGui::SetCursorPosX(size.x - 37.f + curX);

            auto& color = ((ImColor*)_data)->Value;

            auto hh = ImGui::GetTextLineHeight();

            bool open_popup =
                ImGui::ColorButton(colorButton.c_str(), color, ImGuiColorEditFlags_AlphaPreview, {30, hh});

            {
                auto   min  = ImGui::GetItemRectMin();
                auto   size = ImGui::GetItemRectSize();
                ImVec4 glow = color;
                glow.z      = 0.1f;
                ImGui::GetWindowDrawList()->AddShadowCircle(
                    {min.x + (size.x / 2), min.y + (size.y / 2)}, size.x / 2.5, ImGui::GetColorU32(glow), 25, {0, 0});
            }

            ImGui::Dummy({});

            if (open_popup)
            {
                ImGui::OpenPopup(popupName.c_str());
                backup_color = color;
            }
            if (ImGui::BeginPopup(popupName.c_str(), ImGuiWindowFlags_NoMove))
            {
                ImGui::TextUnformatted(_name.c_str(), ImGui::FindRenderedTextEnd(_name.c_str()));
                ImGui::Separator();

                ImGui::ColorPicker4(popupPicker.c_str(), (float*)&color,
                    ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_NoSmallPreview |
                        ImGuiColorEditFlags_AlphaBar | ImGuiColorEditFlags_NoLabel);
                ImGui::SameLine();

                ImGui::BeginGroup(); // Lock X position

                ImGui::BeginGroup();
                {
                    ImGui::Text("Current");
                    ImGui::ColorButton(colorButtonCurrent.c_str(), color,
                        ImGuiColorEditFlags_NoPicker | ImGuiColorEditFlags_AlphaPreviewHalf, ImVec2(90, 20));
                    ImGui::EndGroup();
                }

                ImGui::SameLine();
                ImGui::BeginGroup();
                {
                    ImGui::Text("Previous");
                    if (ImGui::ColorButton(colorButtonPrev.c_str(), backup_color,
                            ImGuiColorEditFlags_NoPicker | ImGuiColorEditFlags_AlphaPreviewHalf, ImVec2(90, 20)))
                        color = backup_color;
                    ImGui::EndGroup();
                }

                ImGui::Separator();
                ImGui::Text("Palette");
                for (int n = 0; n < IM_ARRAYSIZE(saved_palette); n++)
                {
                    ImGui::PushID(n);
                    if ((n % 8) != 0)
                        ImGui::SameLine(0.0f, ImGui::GetStyle().ItemSpacing.y);

                    ImGuiColorEditFlags palette_button_flags =
                        ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_NoPicker | ImGuiColorEditFlags_NoTooltip;
                    if (ImGui::ColorButton(
                            popupPalette.c_str(), saved_palette[n], palette_button_flags, ImVec2(20, 20)))
                        color = ImVec4(saved_palette[n].x, saved_palette[n].y, saved_palette[n].z, color.w);

                    // Allow user to drop colors into each palette entry. Note that ColorButton() is already a
                    // drag source by default, unless specifying the ImGuiColorEditFlags_NoDragDrop flag.
                    if (ImGui::BeginDragDropTarget())
                    {
                        if (const ImGuiPayload* payload = ImGui::AcceptDragDropPayload(IMGUI_PAYLOAD_TYPE_COLOR_3F))
                            memcpy((float*)&saved_palette[n], payload->Data, sizeof(float) * 3);
                        if (const ImGuiPayload* payload = ImGui::AcceptDragDropPayload(IMGUI_PAYLOAD_TYPE_COLOR_4F))
                            memcpy((float*)&saved_palette[n], payload->Data, sizeof(float) * 4);
                        ImGui::EndDragDropTarget();
                    }

                    ImGui::PopID();
                }
                ImGui::EndGroup();
                ImGui::EndPopup();
            }
        }
    };

    class IntFeature : public Feature<int>
    {

        int         min {}, max {};
        const char* format;

      public:
        explicit IntFeature(std::string name, int* var, int min, int max, const char* format)
            : Feature(name, var), min(min), max(max), format(format)
        { }

        void Init() override
        { }

        void Draw(ImVec2 size) override
        {
            // const auto curX = ImGui::GetCursorPosX();
            ImGui::TextUnformatted(_name.c_str(), ImGui::FindRenderedTextEnd(_name.c_str()));
            // ImGui::SameLine();
            // ImGui::SetCursorPosX(size.x - 37.f + curX);

            char buf[32] {};
            sprintf(buf, (const char*)format, *_data);

            auto txtSize = ImGui::CalcTextSize(buf);
            ImGui::SameLine(size.x - txtSize.x);

            ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, {5, 0});
            ImGui::TextUnformatted(buf);
            size.x -= 7;
            ImGui::SetNextItemWidth(size.x);
            SliderScalar2(_name.c_str(), ImGuiDataType_S32, _data, &min, &max, format);
            ImGui::PopStyleVar();
        }
    };

    template <typename T>
        requires std::is_integral_v<T> || std::is_floating_point_v<T>
    class NumberFeature : public Feature<T>
    {
        T           min {}, max {};
        const char* format;

      public:
        explicit NumberFeature(std::string name, T* var, T min, T max, const char* format)
            : Feature<T>(name, var), min(min), max(max), format(format)
        { }

        void Init() override
        { }

        void Draw(ImVec2 size) override
        {
            // const auto curX = ImGui::GetCursorPosX();
            ImGui::TextUnformatted(this->_name.c_str(), ImGui::FindRenderedTextEnd(this->_name.c_str()));
            // ImGui::SameLine();
            // ImGui::SetCursorPosX(size.x - 37.f + curX);

            char buf[32] {};
            sprintf(buf, (const char*)format, *this->_data);

            auto txtSize = ImGui::CalcTextSize(buf);
            ImGui::SameLine(size.x - txtSize.x);

            ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, {5, 0});
            ImGui::TextUnformatted(buf);
            size.x -= 7;
            ImGui::SetNextItemWidth(size.x);

            if constexpr (std::is_same_v<T, int>)
            {
                SliderScalar2(this->_name.c_str(), ImGuiDataType_S32, this->_data, &min, &max, format);
            }

            if constexpr (std::is_same_v<T, float>)
            {
                SliderScalar2(this->_name.c_str(), ImGuiDataType_Float, this->_data, &min, &max, format,
                    ImGuiSliderFlags_Logarithmic);
            }

            ImGui::PopStyleVar();
        }
    };

    // class FloatFeature : public Feature<float>
    // {
    //   public:
    //     explicit FloatFeature(std::string name, float* var) : Feature(name, var)
    //     { }

    //     void Init() override
    //     { }

    //     void Draw(ImVec2 size) override
    //     {
    //         ImGui::TextUnformatted(_name.c_str(), ImGui::FindRenderedTextEnd(_name.c_str()));
    //         // ImGui::SameLine();
    //         // ImGui::SetCursorPosX(size.x - 37.f + curX);

    //         char buf[32] {};
    //         sprintf(buf, (const char*)format, *_data);

    //         auto txtSize = ImGui::CalcTextSize(buf);
    //         ImGui::SameLine(size.x - txtSize.x);

    //         ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, {5, 0});
    //         ImGui::TextUnformatted(buf);
    //         size.x -= 7;
    //         ImGui::SetNextItemWidth(size.x);
    //         SliderScalar2(_name.c_str(), ImGuiDataType_S32, _data, &min, &max, format);
    //         ImGui::PopStyleVar();
    //     }
    // };

    class ConfigFeature final : public RenderableFeature
    {
      public:
        explicit ConfigFeature(std::string name)
        { }

        void Init() override
        { }

        void Draw(ImVec2 size) override
        { }
    };

    class FeatureSet
    {
        std::string                     _name;
        std::vector<RenderableFeature*> _features;

        ImVec2 min {}, max {};
        bool   gotSize = false;

      public:
        explicit FeatureSet(std::string name) : _name(std::move(name))
        { }

        FeatureSet& AddFeature(std::string name, ImColor* variable)
        {
            const auto f = new ColorFeature(name, variable);
            _features.emplace_back(f);
            return *this;
        }

        FeatureSet& AddFeature(std::string name, bool* variable)
        {
            const auto f = new BoolFeature(name, variable);
            _features.emplace_back(f);
            return *this;
        }

        template <typename T>
            requires std::is_integral_v<T> || std::is_floating_point_v<T>
        FeatureSet& AddFeature(std::string name, T* variable, T min, T max, const char* format)
        {
            const auto f = new NumberFeature<T>(name, variable, min, max, format);
            _features.emplace_back(f);
            return *this;
        }

        void Draw(ImVec2 s)
        {
            const auto style = ImGui::GetStyle();
            const auto color = style.Colors[ImGuiCol_WindowBg];

            ImGui::GetWindowDrawList()->AddShadowRect(min, max, IM_COL32(0, 0, 0, 255), 45, {0, 0}, 0, 7);
            ImGui::GetWindowDrawList()->AddRectFilled(min, max, ImGui::GetColorU32(color), 7);

            // border
            ImGui::GetWindowDrawList()->AddRect(min, max, IM_COL32(25, 33, 42, 255), 7);

            ImGui::BeginGroup();
            {
                ImGui::Indent(7);
                ImGui::PushFont(fonts::boldFont);
                ImGui::TextUnformatted(_name.c_str());
                ImGui::PopFont();
                ImGui::Unindent(7);
                ImGui::Dummy({s.x, 2});

                const auto itemMin = ImGui::GetItemRectMin();
                const auto itemMax = ImGui::GetItemRectMax();

                ImGui::GetWindowDrawList()->AddRectFilled(itemMin, itemMax, colors::accent1);
                ImGui::Dummy({0, 3});
                ImGui::Indent(7);
                ImGui::PushTextWrapPos(ImGui::GetCursorPos().x + s.x);

                {
                    s.x -= 7;
                    for (const auto feature : _features)
                    {

                        feature->Draw(s);
                    }
                }

                ImGui::PopTextWrapPos();
                ImGui::Unindent(7);
                ImGui::Dummy({0, 3});
                ImGui::EndGroup();
            }

            min = ImGui::GetItemRectMin();
            max = ImGui::GetItemRectMax();

            ImGui::Dummy({0, 5});
        }
    };

    class SubCategory
    {
        static inline int                  UID = 37;
        std::string                        _name;
        std::vector<FeatureSet*>           _featureSets;
        std::shared_ptr<RenderableFeature> singleFeature;
        bool                               singleMode = false;

        bool _isSelected = false;

      public:
        SubCategory(std::string name) : _name(std::move(name))
        {
            _name.append("##__SubCategory");
            _name.append(std::to_string(UID));
            UID += 37;
        }

        SubCategory& AddFeatureSet(std::string name, std::function<void(FeatureSet&)> cb)
        {
            const auto fs = new FeatureSet(std::move(name));
            _featureSets.emplace_back(fs);
            cb(*fs);
            return *this;
        }

        SubCategory& AddConfigSection()
        {
            singleFeature = std::make_shared<ConfigFeature>(_name);
            singleMode    = true;
            return *this;
        }

        const std::string& GetName()
        {
            return _name;
        }

        bool* GetIsSelected()
        {
            return &_isSelected;
        }

        const std::vector<FeatureSet*>& GetFeatureSets()
        {
            return _featureSets;
        }

        void Draw(ImVec2 s)
        { }
    };

    class Category
    {
        std::string _name;
        std::string _icon;
        std::string _uiName;
        std::string _invButtonName;

        bool                      isSelected {};
        bool                      isProfile {};
        std::vector<SubCategory*> _subcategories;

        SimpleAnimation<int>   selectedAnim {0, 255, 0.5f, STween::QuintOut};
        SimpleAnimation<float> hoverAnim {0, 5, 1.5f, STween::QuintOut};

        std::function<void()> _draw;

      public:
        Category(std::string name, std::string icon, bool profile = false)
            : _name(std::move(name)), _icon(std::move(icon))
        {
            this->_uiName = _name + "##__categoryMain";

            this->_invButtonName = _name + "##__InvBtn__categoryMain";

            this->hoverAnim.SetEnterValue(8).SetLeaveValue(0);

            this->selectedAnim.SetEnterValue(255).SetLeaveValue(0);

            this->isProfile = profile;
        }

        const std::vector<SubCategory*>& GetSubCategories()
        {
            return _subcategories;
        }

        [[nodiscard]] std::string GetUiName() const
        {
            return _uiName;
        }

        [[nodiscard]] std::string GetName() const
        {
            return _name;
        }

        [[nodiscard]] std::string GetUiIcon() const
        {
            return _icon;
        }

        [[nodiscard]] bool IsProfileTab() const
        {
            return isProfile;
        }

        [[nodiscard]] bool IsSelected() const
        {
            return isSelected;
        }

        void SetSelected(bool sel)
        {
            isSelected = sel;
        }

        Category& AddSubCategory(std::string name, std::function<void(SubCategory& sub)> cb)
        {
            const auto sub = new SubCategory(std::move(name));

            _subcategories.emplace_back(sub);

            cb(*sub);

            return *this;
        }

        void Draw(ImVec2 size, float minWidth, float maxWidth)
        {
            const auto io = ImGui::GetIO();
            this->hoverAnim.Update(io.DeltaTime);
            this->selectedAnim.Update(io.DeltaTime);

            auto g = ImGui::GetWindowDrawList();
            ImGui::InvisibleButton(_invButtonName.c_str(), {size.x, size.y});

            const auto bMin = ImGui::GetItemRectMin();
            const auto bMax = ImGui::GetItemRectMax();

            if (ImGui::IsItemHovered(ImGuiHoveredFlags_RectOnly))
                this->hoverAnim.Enter();
            else
                this->hoverAnim.Leave();

            const auto opacity = (int)(float)(this->hoverAnim);
            g->AddRectFilled(bMin, bMax, IM_COL32(255, 255, 255, opacity), this->isProfile ? 10.f : 0.f,
                ImDrawFlags_RoundCornersBottom);

            ImGui::PushFont(fonts::categoryFont);

            const auto iconSize = ImGui::CalcTextSize(this->_icon.c_str());

            auto centerIcon  = bMin;
            centerIcon.x    += minWidth / 2.f - iconSize.x / 2.f;
            centerIcon.y    += size.y / 2.f - iconSize.y / 2.f;

            if (this->isSelected)
                selectedAnim.Enter();
            else
                selectedAnim.Leave();

            auto col = IM_COL32(0, 115, 255, static_cast<int>(selectedAnim));

            g->AddShadowCircle(centerIcon + iconSize / 2.f, 7, col, 70.f, {});
            g->AddShadowCircle(centerIcon + iconSize / 2.f, 7, col, 70.f, {});

            g->AddText(centerIcon, colors::accent1, this->_icon.c_str());
            ImGui::PopFont();

            auto textPos  = bMin;
            textPos.x    += minWidth;
            textPos.y    += size.y / 2.f - fonts::defaultFontSize / 2.f;

            int txtOpacity = Remap(size.x, minWidth, maxWidth, 0, 255);

            g->AddText(textPos, ImColor(0, 115, 255, txtOpacity), this->_name.c_str());
        }
    };

    class Window
    {

        std::string searchText {};

        std::vector<Category*> categories;

        SimpleAnimation<float> categoryMenuWidthAnim {180.f, 70.f, 0.5f, STween::QuintOut};
        SimpleAnimation<int>   searchBarGlow {0, 0, 0.5f, STween::QuintOut};

        std::string currentSelectedCatName {};
        ImVec2      categoryShadowStart, categoryShadowEnd;

      public:
        bool IsOpen = true;

        Window()
        {
            searchText.reserve(129);
            categoryMenuWidthAnim.SetEnterValue(180.f).SetLeaveValue(70.f);
            searchBarGlow.SetEnterValue(100).SetLeaveValue(0);
        }

        Category& AddCategory(std::string name, std::string icon, bool profile = false)
        {
            auto cat = new Category(std::move(name), std::move(icon), profile);
            categories.emplace_back(cat);

            return *cat;
        }

        void SelectCategory(int index)
        {
            for (auto&& category : categories)
                category->SetSelected(false);

            const auto cat = categories.at(index);
            cat->SetSelected(true);

            currentSelectedCatName = cat->GetName();
        }

        void Draw()
        {
            const ImGuiIO& io            = ImGui::GetIO();
            const ImVec2   vecScreenSize = io.DisplaySize;

            ImGui::SetNextWindowPos(
                ImVec2(vecScreenSize.x * 0.5f, vecScreenSize.y * 0.5f), ImGuiCond_Once, ImVec2(0.5f, 0.5f));
            ImGui::SetNextWindowSize(ImVec2(750, 550), ImGuiCond_Once);

            ImVec2 searchBarGlowStart, searchBarGlowEnd;

            bool searchActive;

            ImGui::PushFont(fonts::defaultFont);

            static bool init = false;

            if (!init)
            {
                fonts::defaultFontSize = ImGui::CalcTextSize("A").y;
            }

            ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, {0, 0});
            ImGui::Begin("___MainWindows", &this->IsOpen,
                ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoCollapse);
            {
                // PostProcessing::performFullscreenBlur(ImGui::GetWindowDrawList(), 1.f);

                ImGui::PopStyleVar();

                auto startPos       = ImGui::GetCursorPos();
                auto startScreenPos = ImGui::GetCursorScreenPos();

                // reserved space for category pick
                ImGui::BeginGroup();
                {
                    ImGui::Dummy({70.f, 0});
                }
                ImGui::EndGroup();

                ImGui::SameLine();

                ImGui::BeginGroup();
                {
                    ImGui::Dummy({0, 1});

                    // topbar
                    ImGui::BeginGroup();
                    {
                        auto region = ImGui::GetContentRegionMax();

                        ImGui::AlignTextToFramePadding();
                        ImGui::PushFont(fonts::boldFont);
                        ImGui::TextUnformatted(currentSelectedCatName.c_str()); // category text
                        ImGui::PopFont();
                        ImGui::SameLine();

                        ImGui::SetCursorPosX(region.x - 205);

                        ImGui::SetNextItemWidth(200);
                        ImGui::InputTextWithHint("##MainSearch", "Search feature ...", this->searchText.data(), 128);
                        searchBarGlowStart = ImGui::GetItemRectMin();
                        searchBarGlowEnd   = ImGui::GetItemRectMax();
                        searchActive       = ImGui::IsItemActive();
                    }
                    ImGui::EndGroup();

                    ImGuiTabBarFlags tab_bar_flags = ImGuiTabBarFlags_None;
                    if (ImGui::BeginTabBar("__MyTabBar", tab_bar_flags))
                    {
                        for (const auto category : this->categories)
                        {
                            if (!category->IsSelected())
                                continue;

                            const auto subs = category->GetSubCategories();

                            auto rx  = ImGui::GetContentRegionAvail().x / subs.size();
                            rx      -= 4;

                            for (const auto sub : subs)
                            {
                                ImGui::SetNextItemWidth(rx);
                                if (ImGui::BeginTabItem(sub->GetName().c_str(), 0, ImGuiTabItemFlags_Trailing))
                                {
                                    ImGui::PushStyleColor(ImGuiCol_ChildBg, IM_COL32(0, 0, 0, 0));
                                    ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, {0, 0});

                                    ImGui::BeginChild("__SubScrollable##loooooooooool", {}, false);
                                    {
                                        ImGui::PopStyleVar();
                                        ImGui::PopStyleColor();

                                        auto s  = ImVec2(ImGui::GetContentRegionAvail().x * 0.5f - 7.f, 0);
                                        s.x    -= 11;

                                        ImGui::Dummy({0, 7});
                                        ImGui::Dummy({0, 0});
                                        ImGui::SameLine();
                                        ImGui::BeginGroup();
                                        {
                                            int i = 0;
                                            for (const auto sets : sub->GetFeatureSets())
                                            {
                                                const bool firstColumn = !(i++ % 2);

                                                if (!firstColumn)
                                                    continue;

                                                sets->Draw(s);
                                            }
                                        }
                                        ImGui::EndGroup();
                                        ImGui::SameLine();
                                        ImGui::Dummy({0, 0});
                                        ImGui::SameLine();
                                        ImGui::BeginGroup();
                                        {
                                            int i = 0;
                                            for (const auto sets : sub->GetFeatureSets())
                                            {
                                                const bool secondColumn = i++ % 2;

                                                if (!secondColumn)
                                                    continue;

                                                sets->Draw(s);
                                            }
                                        }
                                        ImGui::EndGroup();
                                    }

                                    ImGui::EndChild();
                                    ImGui::EndTabItem();
                                }
                            }
                        }

                        ImGui::EndTabBar();
                    }
                }
                ImGui::EndGroup();

                auto avail = ImGui::GetContentRegionMax();

                ImGui::SetCursorPos(startPos);

                ImGui::BeginGroup();
                {

                    auto shadowStart  = startScreenPos;
                    shadowStart.x    += 5.f;
                    shadowStart.y    += 5.f;

                    auto shadowEnd  = ImVec2 {};
                    shadowEnd.x    += startScreenPos.x + static_cast<float>(categoryMenuWidthAnim) - 2.f;
                    shadowEnd.y    += startScreenPos.y + avail.y - 10.f;

                    auto bgStart = startScreenPos;
                    auto bgEnd   = ImVec2 {};
                    bgEnd.x      = startScreenPos.x + static_cast<float>(categoryMenuWidthAnim);
                    bgEnd.y      = startScreenPos.y + avail.y;

                    categoryShadowStart = shadowStart;
                    categoryShadowEnd   = shadowEnd;

                    ImGui::PushStyleVar(ImGuiStyleVar_ChildBorderSize, 1.f);
                    ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2 {0, 0});
                    // ImGui::SetCursorPos({0, 0});

                    const auto& style = ImGui::GetStyle();

                    ImGui::PushStyleColor(ImGuiCol_ChildBg, {});
                    ImGui::PushStyleColor(ImGuiCol_Border, {});
                    // ImGui::PushStyleColor(ImGuiCol_Border, IM_COL32(255, 0, 0, 255));

                    ImGui::BeginChild("__categorySelectWindow", {static_cast<float>(categoryMenuWidthAnim) + 15, 0.f},
                        ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoBackground);
                    {
                        ImGui::PopStyleColor(2);
                        ImGui::PopStyleVar(2);

                        ImGui::GetWindowDrawList()->AddShadowRect(
                            categoryShadowStart, categoryShadowEnd, IM_COL32(0, 0, 0, 255), 25, {5.f, 0}, 0, 10);

                        ImGui::GetWindowDrawList()->AddRectFilled(
                            bgStart, bgEnd, ImGui::GetColorU32(style.Colors[ImGuiCol_ChildBg]), 10);

                        ImGui::GetWindowDrawList()->AddRect(
                            bgStart, bgEnd, ImGui::GetColorU32(style.Colors[ImGuiCol_Border]), 10);

                        ImGui::Dummy({0, 5});

                        auto availReg      = ImGui::GetContentRegionAvail();
                        auto availableRegX = ImGui::GetContentRegionAvail().x - 15;

                        auto txtOpacity = (int)Remap((float)categoryMenuWidthAnim, 70.f, 180.f, 0.f, 255.f);

                        auto __startPos = ImGui::GetCursorPosX();

                        { // LOGO
                            ImGui::PushFont(fonts::logo);

                            auto curX = __startPos;

                            auto txtSize = ImGui::CalcTextSize("A");

                            auto txtMidAnchor = (txtSize.x / 2.f);

                            curX += availableRegX / 2.f;
                            curX -= txtMidAnchor;

                            ImGui::SetCursorPosX(curX);

                            ImGui::TextColored(ImColor(0, 115, 255), "A");
                            ImGui::PopFont();

                            curX = ImGui::GetCursorPosX();

                            auto txt = "GETREKT.IO";

                            txtSize = ImGui::CalcTextSize(txt);

                            txtMidAnchor = (txtSize.x / 2.f);

                            curX += availableRegX / 2.f;
                            curX -= txtMidAnchor;

                            ImGui::SetCursorPosX(curX);

                            ImGui::TextColored(ImColor(0, 115, 255, txtOpacity), "%s", txt);
                        }

                        ImGui::Dummy({0, 3});

                        ///

                        auto g                = ImGui::GetWindowDrawList();
                        auto deafultFontSizeY = ImGui::CalcTextSize("A").y;

                        ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2 {});

                        int i = 0;
                        for (auto& category : this->categories)
                        {
                            auto index = i++;

                            if (category->IsProfileTab())
                            {
                                auto profilePos  = startPos;
                                profilePos.y    += availReg.y - 51.f;
                                ImGui::SetCursorPos(profilePos);
                            }

                            category->Draw({availableRegX, 60.f}, 70.f, 180.f);

                            if (ImGui::IsItemClicked(ImGuiMouseButton_Left))
                            {
                                SelectCategory(index);
                            }
                        }

                        ImGui::PopStyleVar();

                        // g->AddShadowCircle(bMin + (bSize / 2.f), 7, colors::accent1, 100.f, {});
                        // g->AddShadowCircle(bMin + (bSize / 2.f), 7, colors::accent1, 100.f, {});
                        ////ImGui::Button("Ragebot##__SubCat");
                    }
                    ImGui::EndChild();

                    categoryMenuWidthAnim.Update(io.DeltaTime);

                    if (ImGui::IsItemHovered(ImGuiHoveredFlags_RectOnly))
                    {
                        categoryMenuWidthAnim.Enter();
                        // categoryMenuWidthAnimUgly.Enter();
                    }
                    else
                    {
                        categoryMenuWidthAnim.Leave();
                        // categoryMenuWidthAnimUgly.Leave();
                    }

                    // categoryMenuWidthAnimUgly.Update(io.DeltaTime);
                }
                ImGui::EndGroup();

                ImGui::End();
            }

            static bool jjj    = true;
            ImVec2      center = ImGui::GetMainViewport()->GetCenter();
            ImGui::SetNextWindowPos(center, ImGuiCond_Appearing, ImVec2(0.5f, 0.5f));

            if (KeyBindActivePopup)
            {
                ImGui::OpenPopup("Delete?");
                KeyBindActivePopup = false;
            }

            // PostProcessing::performFullscreenBlur(ImGui::GetBackgroundDrawList(), 1.f);

            // ImGui::GetBackgroundDrawList()->AddText(ImVec2{100, 100}, IM_COL32(255, 255, 255, 255), "Ahoj Jak Se
            // máš!");

            if (ImGui::BeginPopupModal(
                    "Delete?", NULL, ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoTitleBar))
            {
                // PostProcessing::performFullscreenBlur(ImGui::GetBackgroundDrawList(), 1.f);

                ImGui::PushFont(fonts::boldFont);

                auto       w                   = ImGui::GetWindowContentRegionWidth();
                const auto txtWidth            = ImGui::CalcTextSize((char*)u8"Ahoj jak se máš?").x;
                const auto textCenterPosOffset = (w / 2) - (txtWidth / 2) + 7;

                ImGui::SetCursorPosX(textCenterPosOffset);
                ImGui::TextUnformatted((char*)u8"Ahoj jak se máš?");
                ImGui::PopFont();
                ImGui::Dummy({w, 2});

                auto min = ImGui::GetItemRectMin();
                auto max = ImGui::GetItemRectMax();

                ImGui::GetWindowDrawList()->AddRectFilled(min, max, colors::accent1);

                ImGui::Dummy({0, 2});

                ImGui::Text("All those beautiful files will be deleted.\nThis operation cannot be undone!\n\n");
                ImGui::Separator();

                // static int unused_i = 0;
                // ImGui::Combo("Combo", &unused_i, "Delete\0Delete harder\0");

                static bool dont_ask_me_next_time = false;
                ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(0, 0));
                ImGui::Checkbox("Don't ask me next time", &dont_ask_me_next_time);
                ImGui::PopStyleVar();

                if (ImGui::Button("OK", ImVec2(120, 0)))
                {
                    ImGui::CloseCurrentPopup();
                }
                ImGui::SetItemDefaultFocus();
                ImGui::SameLine();
                if (ImGui::Button("Cancel", ImVec2(120, 0)))
                {
                    ImGui::CloseCurrentPopup();
                }
                ImGui::EndPopup();
            }

            ImGui::PopFont();

            if (searchActive)
            {
                searchBarGlow.Enter();
            }
            else
                searchBarGlow.Leave();

            searchBarGlow.Update(io.DeltaTime);

            ImGui::GetForegroundDrawList()->AddShadowRect(searchBarGlowStart, searchBarGlowEnd,
                IM_COL32(0, 115, 255, static_cast<int>(searchBarGlow)), 50, {}, ImDrawFlags_ShadowCutOutShapeBackground,
                7);
            // ImGui::GetForegroundDrawList()->AddShadowRect(searchBarGlowStart, searchBarGlowEnd, IM_COL32(0, 115, 255,
            // static_cast<int>(searchBarGlow)), 100, {}, ImDrawFlags_ShadowCutOutShapeBackground, 10);
        }
    };

} // namespace mui
