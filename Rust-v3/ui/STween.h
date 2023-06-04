// Simple Tween
// A simple, template, cross-platform, header-only tweening library
/*
MIT License

Copyright (c) 2018 Rivero Sato

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef _S_TWEEN_H_
#define _S_TWEEN_H_
#pragma once

// These can easily be replaced with custom libraries instead of STL
#include <vector>     //std::vector
#include <functional> //std::function

namespace STween
{
    // Available Easing functions built-in
    // *Custom easing function not supported yet
    // Function format for custom easing:
    // template<typename T>
    // T YourEasingFunction(float position, T start, T end)
    enum EasingFunction
    {
        Linear,
        QuadranticIn,
        QuadranticOut,
        QuadranticInOut,
        CubicIn,
        CubicOut,
        CubicInOut,
        QuintIn,
        QuintOut,
        QuintInOut,
        BackIn,
        BackOut,
        BackInOut
    };

    // Stores tweening data
    // *Mostly used internally
    // Can be created individually to later be added into STween if needed
    template <class T>
    class TweenData
    {
      public:
        TweenData(int tID)
            : tweenID(tID),
              fromReady(false),
              byPointer(false),
              reversed(false),
              initialValue(nullptr),
              duration(0),
              easing(Linear),
              timeCounter(0)
        { }

        inline bool operator==(const TweenData& td)
        {
            return this->tweenID == td.tweenID && this->initialValue == td.initialValue &&
                   this->finalValue == td.finalValue && this->timeCounter == td.timeCounter &&
                   this->reversed == td.reversed && this->easing == td.easing;
        }

        int                       tweenID;
        bool                      fromReady;
        bool                      byPointer;
        bool                      reversed;
        T*                        initialValue;
        T                         initialCpy;
        T                         finalValue;
        float                     duration;
        EasingFunction            easing;
        float                     timeCounter;
        std::function<void()>     finishCallback;
        std::function<void(T&)>   stepCallback;
        std::vector<TweenData<T>> endTween;
    };

    // Main class
    // Creates and processes TweenData
    // Can be used as many times for a specific type 'T'
    // *Must-to-call functions to create a tween: From, To, Time
    template <class T>
    class STween
    {
        TweenData<T> data;

      public:
        STween() : data({})
        { }
        // Creates a Tween starting from the initial value given
        // Also sets the value each frame to the variable it points to
        // *Only use when the object pointing to is guaranteed to be alive
        // *Must-to-call
        STween& From(T* initVal);
        // Creates a Tween starting from the initial value given
        // A setter callback for the value needs to be set with OnStep()
        // *Must-to-call
        STween& From(T initVal);

        STween& FromEx(T initVal);

        // Sets the desired final value
        // *Must-to-call
        STween& To(T finalVal);
        // Sets the duration of the tween
        // *Must-to-call
        STween& Time(float sec);
        // Sets a callback once the tween is finished
        // *Optional
        STween& OnFinish(std::function<void()> endCallback);
        // Sets a callback for each frame the value is changing
        // Use this method as a setter if From() argument is const
        // *Optional
        STween& OnStep(std::function<void(T&)> callabck);
        // Sets the easing function
        // Linear is set by default
        // *Optional
        STween& Easing(EasingFunction easingType);

        // Processes every running tween
        // deltaTime used for frame-rate independent tweening
        void Update(float deltaTime);

        void Reset();

      private:
        T Linear(float position, T start, T end);
        T QuadIn(float position, T start, T end);
        T QuadOut(float position, T start, T end);
        T QuadInOut(float position, T start, T end);
        T CubicIn(float position, T start, T end);
        T CubicOut(float position, T start, T end);
        T CubicInOut(float position, T start, T end);
        T QuintIn(float position, T start, T end);
        T QuintOut(float position, T start, T end);
        T QuintInOut(float position, T start, T end);
        T BackIn(float position, T start, T end);
        T BackOut(float position, T start, T end);
        T BackInOut(float position, T start, T end);
    };

    // template<class T>STween<T>::STween() {}

    template <class T>
    STween<T>& STween<T>::From(T* initVal)
    {
        data.fromReady    = true;
        data.byPointer    = true;
        data.initialValue = initVal;
        data.initialCpy   = *initVal;
        data.duration     = 0;
        data.timeCounter  = 0;
        data.endTween     = std::vector<TweenData<T>>();

        return *this;
    }

    template <class T>
    STween<T>& STween<T>::From(T initVal)
    {
        data.fromReady    = true;
        data.byPointer    = false;
        data.initialValue = nullptr;
        data.initialCpy   = initVal;
        data.duration     = 0;
        data.timeCounter  = 0;
        data.endTween     = std::vector<TweenData<T>>();

        return *this;
    }

    template <class T>
    STween<T>& STween<T>::FromEx(T initVal)
    {
        data.initialCpy = initVal;

        return *this;
    }

    template <class T>
    STween<T>& STween<T>::To(T finalVal)
    {
        data.finalValue = finalVal;

        return *this;
    }

    template <class T>
    STween<T>& STween<T>::Time(float sec)
    {
        data.duration = sec;

        return *this;
    }

    template <class T>
    void STween<T>::Update(float deltaTime)
    {
        auto& tween = data;
        if (tween.fromReady)
        {
            const float timePos = tween.timeCounter / tween.duration;

            T value, start, end;

            if (tween.reversed)
            {
                start = tween.finalValue;
                end   = tween.initialCpy;
            }
            else
            {
                start = tween.initialCpy;
                end   = tween.finalValue;
            }

            switch (tween.easing)
            {
                case EasingFunction::Linear:
                    value = Linear(timePos, start, end);
                    break;
                case EasingFunction::QuadranticIn:
                    value = QuadIn(timePos, start, end);
                    break;

                case EasingFunction::QuadranticOut:
                    value = QuadOut(timePos, start, end);
                    break;

                case EasingFunction::QuadranticInOut:
                    value = QuadInOut(timePos, start, end);
                    break;

                case EasingFunction::CubicIn:
                    value = CubicIn(timePos, start, end);
                    break;

                case EasingFunction::CubicOut:
                    value = CubicOut(timePos, start, end);
                    break;

                case EasingFunction::CubicInOut:
                    value = CubicInOut(timePos, start, end);
                    break;

                case EasingFunction::QuintIn:
                    value = QuintIn(timePos, start, end);
                    break;

                case EasingFunction::QuintOut:
                    value = QuintOut(timePos, start, end);
                    break;

                case EasingFunction::QuintInOut:
                    value = QuintInOut(timePos, start, end);
                    break;

                case EasingFunction::BackIn:
                    value = BackIn(timePos, start, end);
                    break;

                case EasingFunction::BackOut:
                    value = BackOut(timePos, start, end);
                    break;

                case EasingFunction::BackInOut:
                    value = BackInOut(timePos, start, end);
                    break;

                default:
                    value = Linear(timePos, start, end);
                    break;
            }

            if (tween.byPointer)
            {
                *tween.initialValue = value;
            }

            if (tween.stepCallback)
            {
                tween.stepCallback(value);
            }

            if (tween.timeCounter >= tween.duration)
            {
                if (tween.byPointer)
                {
                    *tween.initialValue = tween.reversed ? tween.initialCpy : tween.finalValue;
                }

                tween.fromReady = false;

                // tweensToDelete.push_back(counter);

                // if (tween.finishCallback)
                //{
                //	tween.finishCallback();
                // }

                // for (auto &callbackTw : tween.endTween)
                //{
                //	auto endTween = callbackTw;
                //	tweensToAdd.push_back(endTween);
                // }
            }

            tween.timeCounter += deltaTime;
        }
        // fromReady == false (left overs)
    }

    template <class T>
    void STween<T>::Reset()
    {
        data.timeCounter = 0.f;
        data.fromReady   = true;
        if (data.byPointer)
            data.initialCpy = *data.initialValue;
        // return *this;
    }

    template <class T>
    STween<T>& STween<T>::OnFinish(std::function<void()> endCallback)
    {
        data.finishCallback = endCallback;

        return *this;
    }

    template <class T>
    STween<T>& STween<T>::OnStep(std::function<void(T&)> callback)
    {
        data.stepCallback = callback;

        return *this;
    }

    template <class T>
    STween<T>& STween<T>::Easing(EasingFunction easingType)
    {
        data.easing = easingType;

        return *this;
    }

    template <class T>
    T STween<T>::Linear(float position, T start, T end)
    {
        return static_cast<T>((end - start) * position + start);
    }

    template <class T>
    T STween<T>::QuadIn(float position, T start, T end)
    {
        return static_cast<T>((end - start) * position * position + start);
    }

    template <class T>
    T STween<T>::QuadOut(float position, T start, T end)
    {
        return static_cast<T>(((end - start) * -1) * position * (position - 2) + start);
    }

    template <class T>
    T STween<T>::QuadInOut(float position, T start, T end)
    {
        position *= 2;
        if (position < 1)
            return static_cast<T>(((end - start) / 2) * position * position + start);

        --position;
        return static_cast<T>((((end - start) * 1) / 2) * (position * (position - 2) - 1) + start);
    }

    template <class T>
    T STween<T>::CubicIn(float position, T start, T end)
    {
        return static_cast<T>((end - start) * position * position * position + start);
    }

    template <class T>
    T STween<T>::CubicOut(float position, T start, T end)
    {
        --position;
        return static_cast<T>((end - start) * (position * position * position + 1) + start);
    }

    template <class T>
    T STween<T>::CubicInOut(float position, T start, T end)
    {
        position *= 2;
        if (position < 1)
            return static_cast<T>(((end - start) / 2) * position * position * position + start);

        position -= 2;
        return static_cast<T>(((end - start) / 2) * (position * position * position + 2) + start);
    }

    template <class T>
    T STween<T>::QuintIn(float position, T start, T end)
    {
        return static_cast<T>((end - start) * position * position * position * position * position + start);
    }

    template <class T>
    T STween<T>::QuintOut(float position, T start, T end)
    {
        --position;
        return static_cast<T>((end - start) * (position * position * position * position * position + 1) + start);
    }

    template <class T>
    T STween<T>::QuintInOut(float position, T start, T end)
    {
        position *= 2;
        if (position < 1)
            return static_cast<T>(((end - start) / 2) * (position * position * position * position * position) + start);

        position -= 2;
        return static_cast<T>(((end - start) / 2) * (position * position * position * position * position + 2) + start);
    }

    template <class T>
    T STween<T>::BackIn(float position, T start, T end)
    {
        float s       = 1.70158f;
        float postFix = position;
        return static_cast<T>((end - start) * postFix * position * ((s + 1) * position - s) + start);
    }

    template <class T>
    T STween<T>::BackOut(float position, T start, T end)
    {
        float s = 1.70158f;
        position--;
        return static_cast<T>((end - start) * (position * position * ((s + 1) * position + s) + 1) + start);
    }

    template <class T>
    T STween<T>::BackInOut(float position, T start, T end)
    {
        float s = 1.70158f;
        float t = position;
        T     b = start;
        T     c = end - start;
        float d = 1;
        s       *= 1.525f;
        if ((t /= d / 2) < 1)
            return static_cast<T>(c / 2 * (t * t * ((s + 1) * t - s)) + b);

        float postFix = t -= 2;
        return static_cast<T>(c / 2 * (postFix * t * ((s + 1) * t + s) + 2) + b);
    }
} // namespace STween

#endif //_S_TWEEN_H_
