#pragma once
#include <complex>

namespace miniTween
{
    class CubicBezierEase
    {
        static constexpr int   NEWTON_ITERATIONS          = 4;
        static constexpr float NEWTON_MIN_SLOPE           = 0.001f;
        static constexpr float SUBDIVISION_PRECISION      = 0.0000001f;
        static constexpr int   SUBDIVISION_MAX_ITERATIONS = 10;

        static constexpr int   kSplineTableSize = 11;
        static constexpr float kSampleStepSize  = 1.0f / (kSplineTableSize - 1.0f);

        float sampleValues[kSplineTableSize] {};

        float mX1, mY1, mX2, mY2;

        template <typename T>
        static bool AreEqual(T f1, T f2)
        {
            return (std::fabs(f1 - f2) <= std::numeric_limits<T>::epsilon() * std::fmax(std::fabs(f1), std::fabs(f2)));
        }

      public:
        explicit CubicBezierEase(const float pX1, const float pY1, const float pX2, const float pY2)
        {
            this->mX1 = pX1;
            this->mY1 = pY1;
            this->mX2 = pX2;
            this->mY2 = pY2;

            for (auto i = 0; i < kSplineTableSize; ++i)
            { // lookup table
                sampleValues[i] = calcBezier(i * kSampleStepSize, mX1, mX2);
            }
        }

        float Invoke(float percent)
        {
            if (AreEqual(mX1, mY1) && AreEqual(mX2, mY2))
            {
                return LinearEasing(percent);
            }

            if (AreEqual(percent, 0.f) || AreEqual(percent, 1.f))
            {
                return percent;
            }
            // Finish
            return calcBezier(getTForX(percent), mY1, mY2);
        }

      private:
        float A(float aA1, float aA2)
        {
            return 1.0f - 3.0f * aA2 + 3.0f * aA1;
        }

        float B(float aA1, float aA2)
        {
            return 3.0f * aA2 - 6.0f * aA1;
        }

        float C(float aA1)
        {
            return 3.0f * aA1;
        }

        // Returns x(t) given t, x1, and x2, or y(t) given t, y1, and y2.
        float calcBezier(float aT, float aA1, float aA2)
        {
            return ((A(aA1, aA2) * aT + B(aA1, aA2)) * aT + C(aA1)) * aT;
        }

        // Returns dx/dt given t, x1, and x2, or dy/dt given t, y1, and y2.
        float getSlope(float aT, float aA1, float aA2)
        {
            return 3.0f * A(aA1, aA2) * aT * aT + 2.0f * B(aA1, aA2) * aT + C(aA1);
        }

        float binarySubdivide(float aX, float aA, float aB, float mX1, float mX2)
        {
            float currentX, currentT, i = 0;
            do
            {
                currentT = aA + (aB - aA) / 2.0f;
                currentX = calcBezier(currentT, mX1, mX2) - aX;
                if (currentX > 0.0f)
                {
                    aB = currentT;
                }
                else
                {
                    aA = currentT;
                }
            }
            while (std::abs(currentX) > SUBDIVISION_PRECISION && ++i < SUBDIVISION_MAX_ITERATIONS);
            return currentT;
        }

        float newtonRaphsonIterate(float aX, float aGuessT, float mX1, float mX2)
        {
            for (auto i = 0; i < NEWTON_ITERATIONS; ++i)
            {
                const auto currentSlope = getSlope(aGuessT, mX1, mX2);
                if (currentSlope == 0.0f)
                {
                    return aGuessT;
                }
                const auto currentX = calcBezier(aGuessT, mX1, mX2) - aX;
                aGuessT             -= currentX / currentSlope;
            }
            return aGuessT;
        }

        static float LinearEasing(float x)
        {
            return x;
        }

        float getTForX(float aX)
        {
            float           intervalStart = 0.0f;
            int             currentSample = 1;
            constexpr float lastSample    = kSplineTableSize - 1;

            for (; currentSample != lastSample && sampleValues[currentSample] <= aX; ++currentSample)
            {
                intervalStart += kSampleStepSize;
            }
            --currentSample;

            // Interpolate to provide an initial guess for t
            const auto dist =
                (aX - sampleValues[currentSample]) / (sampleValues[currentSample + 1] - sampleValues[currentSample]);
            const auto guessForT = intervalStart + dist * kSampleStepSize;

            const auto initialSlope = getSlope(guessForT, mX1, mX2);
            if (initialSlope >= NEWTON_MIN_SLOPE)
            {
                return newtonRaphsonIterate(aX, guessForT, mX1, mX2);
            }
            if (initialSlope == 0.0f)
            {
                return guessForT;
            }

            return binarySubdivide(aX, intervalStart, intervalStart + kSampleStepSize, mX1, mX2);
        }
    };
} // namespace miniTween
