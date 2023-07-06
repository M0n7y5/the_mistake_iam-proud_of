#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"
#include "../il2cpp_api.h"
#include "../../mrt/xorstr.hpp"

Vector3 CInput::GetMousePosition()
{
    static auto addr = OFF(Offsets::UnityEngine_Input::StaticMethods::get_mousePosition);
    return ((Vector3(*)())(addr))();
}

Vector2 CInput::GetMouseScrollDelta()
{
    static auto addr =
        OFF(Offsets::UnityEngine_Input::StaticMethods::get_mouseScrollDelta_Injected_out_UnityEngine_Vector2_ret);
    Vector2 vec {};
    ((void(*)(Vector2*))(addr))(&vec);
    return vec;
}

bool CInput::GetMouseButton(int32_t button)
{
    static auto addr = OFF(Offsets::UnityEngine_Input::StaticMethods::GetMouseButton_System_Int32_button);
    return ((bool (*)(int32_t))(addr))(button);
}
