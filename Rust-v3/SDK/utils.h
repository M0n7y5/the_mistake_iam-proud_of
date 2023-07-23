#pragma once
#include "structs.h"

namespace Utils
{
    struct FOVCalc
    {
        float fovInPixels{};
        int*  wantedFov{};
        int   prevWantedFov{};
        float lastFov{};

        CCamera* cam{};
        CRect*   screen{};

        FOVCalc(){};

        void Set(CCamera* camera, CRect* sc, int* wanted)
        {
            this->cam       = camera;
            this->screen    = sc;
            this->wantedFov = wanted;
        }

        float GetRadiusPx()
        {
            float currentFOV = cam->GetFov();
            if (currentFOV != lastFov || fovInPixels == _flt(0.f) || prevWantedFov != *wantedFov)
            {
                float stage1 =
                    static_cast<float>(std::abs(std::tan(DEG2RAD((float)*wantedFov) / 2.f)));
                float stage2  = static_cast<float>(std::abs(std::tan(DEG2RAD(currentFOV) / 2.f)));
                float final   = stage1 / stage2;
                lastFov       = currentFOV;
                prevWantedFov = *wantedFov;
                fovInPixels   = final / _flt(2.f) * (screen->m_Width / _flt(2.f));
            }

            return fovInPixels;
        }
    };

    // obsolete! Use FOVCalc instead!
    inline void GetFOVInPixels(CCamera* cam, CRect& screen, float& fovInPixels, float wantedFov,
                               float& lastFov, float& lastSettingFov)
    {
        float currentFOV = cam->GetFov();
        if (currentFOV != lastFov || fovInPixels == _flt(0.f) || lastSettingFov != wantedFov)
        {
            float stage1   = static_cast<float>(std::abs(std::tan(DEG2RAD(wantedFov) / 2.f)));
            float stage2   = static_cast<float>(std::abs(std::tan(DEG2RAD(currentFOV) / 2.f)));
            float final    = stage1 / stage2;
            fovInPixels    = final / _flt(2.f) * (screen.m_Width / _flt(2.f));
            lastFov        = currentFOV;
            lastSettingFov = wantedFov;
        }
    }
} // namespace Utils