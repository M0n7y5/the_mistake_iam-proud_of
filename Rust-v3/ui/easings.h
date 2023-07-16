#pragma once
#include "../SDK/math.h"

namespace easing
{
__forceinline double InSine(const double t)
{
    return std::sin(M_PI / 2 * t);
}

__forceinline double OutSine(double t)
{
    return 1 + std::sin(M_PI / 2 * (--t));
}

__forceinline double InOutSine(const double t)
{
    return 0.5 * (1 + std::sin(M_PI * (t - 0.5)));
}

__forceinline double InQuad(const double t)
{
    return t * t;
}

__forceinline double OutQuad(const double t)
{
    return t * (2 - t);
}

__forceinline double InOutQuad(const double t)
{
    return t < 0.5 ? 2 * t * t : t * (4 - 2 * t) - 1;
}

__forceinline double InCubic(const double t)
{
    return t * t * t;
}

__forceinline double OutCubic(double t)
{
    const double tt = (--t);
    return 1 + tt * t * t;
}

__forceinline double InOutCubic(double t)
{
    const double tt = (--t);
    return t < 0.5 ? 4 * t * t * t : 1 + tt * (2 * tt) * (2 * t);
}

__forceinline double InQuart(double t)
{
    t *= t;
    return t * t;
}

__forceinline double OutQuart(double t)
{
    const double tt = (--t);
    t               = tt * t;
    return 1 - t * t;
}

__forceinline double InOutQuart(double t)
{
    if (t < 0.5)
    {
        t *= t;
        return 8 * t * t;
    }
    else
    {
        const double tt = (--t);
        t               = tt * t;
        return 1 - 8 * t * t;
    }
}

__forceinline double InQuint(const double t)
{
    const double t2 = t * t;
    return t * t2 * t2;
}

__forceinline double OutQuint(double t)
{
    const double tt = (--t);
    const double t2 = tt * t;
    return 1 + t * t2 * t2;
}

__forceinline double InOutQuint(double t)
{
    double t2;
    if (t < 0.5)
    {
        t2 = t * t;
        return 16 * t * t2 * t2;
    }
    else
    {
        const double tt = (--t);
        t2              = tt * t;
        return 1 + 16 * t * t2 * t2;
    }
}

__forceinline double InExpo(const double t)
{
    return (std::pow(2, 8 * t) - 1) / 255;
}

__forceinline double OutExpo(const double t)
{
    return 1 - std::pow(2, -8 * t);
}

__forceinline double InOutExpo(const double t)
{
    if (t < 0.5)
    {
        return (std::pow(2, 16 * t) - 1) / 510;
    }
    else
    {
        return 1 - 0.5 * std::pow(2, -16 * (t - 0.5));
    }
}

__forceinline double InCirc(const double t)
{
    return 1 - std::sqrt(1 - t);
}

__forceinline double OutCirc(const double t)
{
    return std::sqrt(t);
}

__forceinline double InOutCirc(const double t)
{
    if (t < 0.5)
    {
        return (1 - std::sqrt(1 - 2 * t)) * 0.5;
    }
    else
    {
        return (1 + std::sqrt(2 * t - 1)) * 0.5;
    }
}

__forceinline double InBack(const double t)
{
    return t * t * (2.70158 * t - 1.70158);
}

__forceinline double OutBack(double t)
{
    const double tt = (--t);
    return 1 + tt * t * (2.70158 * t + 1.70158);
}

__forceinline double InOutBack(double t)
{
    if (t < 0.5)
    {
        return t * t * (7 * t - 2.5) * 2;
    }
    else
    {
        const double tt = (--t);
        return 1 + tt * t * 2 * (7 * t + 2.5);
    }
}

__forceinline double InElastic(const double t)
{
    const double t2 = t * t;
    return t2 * t2 * std::sin(t * M_PI * 4.5);
}

__forceinline double OutElastic(const double t)
{
    const double t2 = (t - 1) * (t - 1);
    return 1 - t2 * t2 * std::cos(t * M_PI * 4.5);
}

__forceinline double InOutElastic(const double t)
{
    double t2;
    if (t < 0.45)
    {
        t2 = t * t;
        return 8 * t2 * t2 * std::sin(t * M_PI * 9);
    }
    else if (t < 0.55)
    {
        return 0.5 + 0.75 * std::sin(t * M_PI * 4);
    }
    else
    {
        t2 = (t - 1) * (t - 1);
        return 1 - 8 * t2 * t2 * std::sin(t * M_PI * 9);
    }
}

__forceinline double InBounce(const double t)
{
    return std::pow(2, 6 * (t - 1)) * std::abs(std::sin(t * M_PI * 3.5));
}

__forceinline double OutBounce(const double t)
{
    return 1 - std::pow(2, -6 * t) * std::abs(std::cos(t * M_PI * 3.5));
}

__forceinline double InOutBounce(const double t)
{
    if (t < 0.5)
    {
        return 8 * std::pow(2, 8 * (t - 1)) * std::abs(std::sin(t * M_PI * 7));
    }
    else
    {
        return 1 - 8 * std::pow(2, -8 * t) * std::abs(std::sin(t * M_PI * 7));
    }
}
}; // namespace easing