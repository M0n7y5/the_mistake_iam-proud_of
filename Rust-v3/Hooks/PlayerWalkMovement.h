#pragma once
#include <cstdint>
namespace Hooks
{
    namespace PlayerWalkMovement
    {
        inline uintptr_t DoFixedUpdate_o = 0;
        inline uintptr_t ClientInput_o   = 0;
        inline uintptr_t TeleportTo_o    = 0;

        void Init();
    } // namespace PlayerWalkMovement
} // namespace Hooks
