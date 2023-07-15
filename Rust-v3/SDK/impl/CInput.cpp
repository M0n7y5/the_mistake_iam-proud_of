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

bool CInput::GetKeyDown(KeyCode key)
{
    static auto addr = OFF(Offsets::UnityEngine_Input::StaticMethods::GetKeyDown_UnityEngine_KeyCode_key);
    return ((bool (*)(KeyCode))(addr))(key);
}

bool CInput::GetKey(KeyCode key)
{
    static auto addr = OFF(Offsets::UnityEngine_Input::StaticMethods::GetKey_UnityEngine_KeyCode_key);
    return ((bool (*)(KeyCode))(addr))(key);
}

// CString* CInput::GetBind(std::string name)
// {
//     static auto addr = OFF(Offsets::UnityEngine_Input::StaticMethods::GetKey_UnityEngine_KeyCode_key);
//     return ((bool (*)(KeyCode))(addr))(key);
// }
