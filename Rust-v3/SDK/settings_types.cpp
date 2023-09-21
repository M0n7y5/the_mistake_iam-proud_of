#include "settings_types.h"
#include "structs.h"

bool TKO::Active()
{
    switch (key.buttonData.type)
    {
    case TriggerType::ALWAYS_ON:
        return this->Enabled;
        break;
    case TriggerType::HOLD:
        if (this->Enabled)
            return CInput::GetKey(key.buttonData.key);
        break;
    case TriggerType::TOGGLE:
    {
        if (this->Enabled)
        {
            // did we checked this frame already
            // if so dont do anything
            if (this->thisFrameTime != CTime::GetTime())
            {
                this->thisFrameTime = CTime::GetTime();
                if (CInput::GetKeyDown(this->key.buttonData.key))
                {
                    this->key.buttonData.isToggled ^= true;
                }
            }

            return this->key.buttonData.isToggled;
        }
    }
    break;
    }

    return false;
}
