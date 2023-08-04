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

        Vector2 screenCenter{};

        CCamera* cam{};
        CRect*   screen{};

        FOVCalc(){};

        void Set(CCamera* camera, CRect* sc, int* wanted)
        {
            this->cam       = camera;
            this->screen    = sc;
            this->wantedFov = wanted;

            screenCenter = {screen->m_Width / _flt(2.f), screen->m_Height / _flt(2.f)};
        }

        float GetRadiusPx()
        {
            if (cam == nullptr || cam->m_CachedPtr == 0)
                return fovInPixels;

            float currentFOV = cam->GetFov();
            if (currentFOV != lastFov || fovInPixels == _flt(0.f) || prevWantedFov != *wantedFov)
            {
                float stage1  = static_cast<float>(std::abs(std::tan(DEG2RAD((float)*wantedFov) / 2.f)));
                float stage2  = static_cast<float>(std::abs(std::tan(DEG2RAD(currentFOV) / 2.f)));
                float final   = stage1 / stage2;
                lastFov       = currentFOV;
                prevWantedFov = *wantedFov;
                fovInPixels   = final / _flt(2.f) * (screen->m_Width / _flt(2.f));
            }

            return fovInPixels;
        }

        int DistanceFromCenter(Vector3 vec3)
        {
            Vector2 scPos{};
            if (cam->WorldToScreen(vec3, scPos, *screen))
            {
                auto dist = screenCenter.distance(scPos);

                return dist;
            }
            return 999999;
        }
        int DistanceFromCenterEx(Vector3 vec3)
        {
            Vector2 scPos{};
            if (cam->WorldToScreen(vec3, scPos, *screen))
            {
                auto dist = screenCenter.distance(scPos);
                if (dist > fovInPixels)
                    return INT_MAX;

                return dist;
            }
            return INT_MAX;
        }
    };

    // obsolete! Use FOVCalc instead!
    inline void GetFOVInPixels(CCamera* cam, CRect& screen, float& fovInPixels, float wantedFov, float& lastFov, float& lastSettingFov)
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