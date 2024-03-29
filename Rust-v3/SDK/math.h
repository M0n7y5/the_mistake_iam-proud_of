#pragma once
#include <intrin.h>
#include <algorithm>
#include <cmath>

// for now
#define _flt(x)       x
#define negate_flt(f) -f
#define negate_dbl(d) -d

#define M_PI       _flt(3.1415926535f)
#define RAD2DEG(x) (x * (_flt(180.f) / M_PI))
#define DEG2RAD(x) (x * (M_PI / _flt(180.f)))

// inline float f_sqrt(float in)
// { // thx can
//     __m128 reg = _mm_load_ss(&in);

//     float result[4];
//     _mm_store_ps(result, _mm_mul_ss(reg, _mm_rsqrt_ss(reg)));

//     return result[0];
// };

inline float normalize_angle(float angle)
{
    while (angle > 360)
        angle -= 360;
    while (angle < 0)
        angle += 360;
    return angle;
}

class Vector3;

class Vector2
{
  public:
    Vector2()
    {
        x = y = _flt(0.f);
    }

    Vector2(float fx, float fy)
    {
        x = fx;
        y = fy;
    }

    float x, y;

    Vector2 operator+(const Vector2& input) const;

    Vector2 operator-(const Vector2& input) const;

    Vector2 operator-(const Vector3& input) const;

    Vector2 operator+(const Vector3& input) const;

    Vector2 operator/(float input) const
    {
        return Vector2{x / input, y / input};
    }

    Vector2 operator*(float input) const
    {
        return Vector2{x * input, y * input};
    }

    Vector2& operator-=(const Vector2& v)
    {
        x -= v.x;
        y -= v.y;
        return *this;
    }

    Vector2& operator/=(float input)
    {
        x /= input;
        y /= input;
        return *this;
    }

    Vector2& operator*=(float input)
    {
        x *= input;
        y *= input;
        return *this;
    }

    bool operator==(const Vector2& input) const
    {
        return x == input.x && y == input.y;
    }

    bool operator!=(const Vector2& input) const
    {
        return !(*this == input);
    }

    float length() const
    {
        return std::sqrt((x * x) + (y * y));
    }

    Vector2 normalized() const
    {
        return {x / length(), y / length()};
    }

    float dot_product(Vector2 input) const
    {
        return (x * input.x) + (y * input.y);
    }

    float distance(Vector2 input) const
    {
        return (*this - input).length();
    }

    bool empty() const
    {
        return x == _flt(0.f) && y == _flt(0.f);
    }

    static Vector2 RotatePoint(Vector2 pointToRotate, Vector2 centerPoint, float angle, bool angleInRadians = false)
    {
        float rad = DEG2RAD(normalize_angle(angle));
        float s   = (float)-std::sin(rad);
        float c   = (float)std::cos(rad);
        pointToRotate.x -= centerPoint.x;
        pointToRotate.y -= centerPoint.y;
        float xnew      = pointToRotate.x * c - pointToRotate.y * s;
        float znew      = pointToRotate.x * s + pointToRotate.y * c;
        pointToRotate.x = xnew + centerPoint.x;
        pointToRotate.y = znew + centerPoint.y;
        return pointToRotate;
    }
};

class Vector3
{
  public:
    float x, y, z;
    constexpr Vector3()
    {
        x = y = z = _flt(0.f);
    }

    constexpr Vector3(float fx, float fy, float fz)
    {
        x = fx;
        y = fy;
        z = fz;
    }

    Vector3 operator+(const Vector3& input) const
    {
        return Vector3{x + input.x, y + input.y, z + input.z};
    }

    Vector3 operator+(const Vector2& input) const
    {
        return Vector3{x + input.x, y + input.y, z};
    }

    Vector3 operator-(const Vector3& input) const
    {
        return Vector3{x - input.x, y - input.y, z - input.z};
    }

    Vector3 operator-(const Vector2& input) const
    {
        return Vector3{x - input.x, y - input.y, z};
    }

    bool operator<(const Vector3& input) const
    {
        return x < input.x && y < input.y && input.z < z;
    }

    bool operator>(const Vector3& input) const
    {
        return x > input.x && y > input.y && input.z > z;
    }

    bool Invalid() const
    {
        return ((x > -_flt(1.f) && x < _flt(1.f)) && (y > -_flt(1.f) && y < _flt(1.f)) &&
                (z > -_flt(1.f) && z < _flt(1.f))) ||
               (x == _flt(0.f) && z == _flt(0.f));
    }

    Vector3 operator/(float input) const
    {
        return Vector3{x / input, y / input, z / input};
    }

    Vector3 operator*(float input) const
    {
        return Vector3{x * input, y * input, z * input};
    }

    Vector3& operator+=(const Vector3& v)
    {
        x += v.x;
        y += v.y;
        z += v.z;

        return *this;
    }

    Vector3 operator*(const Vector3& v)
    {
        return {
            x * v.x,
            y * v.y,
            z * v.z,
        };
    }

    Vector3& operator+=(const Vector2& v)
    {
        x += v.x;
        y += v.y;

        return *this;
    }

    Vector3& operator-=(const Vector3& v)
    {
        x -= v.x;
        y -= v.y;
        z -= v.z;

        return *this;
    }

    Vector3& operator-=(const Vector2& v)
    {
        x -= v.x;
        y -= v.y;

        return *this;
    }

    Vector3& operator/=(float input)
    {
        x /= input;
        y /= input;
        z /= input;
        return *this;
    }

    Vector3& operator*=(float input)
    {
        x *= input;
        y *= input;
        z *= input;
        return *this;
    }

    bool operator==(const Vector3& input) const
    {
        return x == input.x && y == input.y && z == input.z;
    }

    void make_absolute()
    {
        x = std::abs(x);
        y = std::abs(y);
        z = std::abs(z);
    }

    float Clamp01(float value)
    {
        float result;
        if (value < _flt(0.f))
        {
            result = _flt(0.f);
        }
        else if (value > _flt(1.f))
        {
            result = _flt(1.f);
        }
        else
        {
            result = value;
        }
        return result;
    }

    float Lerp()
    {
        return x + (y - x) * Clamp01(z);
    }

    float length_sqr() const
    {
        return (x * x) + (y * y) + (z * z);
    }

    float length() const
    {
        float lenSqr = length_sqr();
        if (lenSqr <= _flt(0.f))
            return _flt(0.f);

        return std::sqrt(lenSqr);
    }

    float length_2d() const
    {
        return std::sqrt((x * x) + (y * y));
    }

    float length_xz() const
    {
        return std::sqrt(x * x + z * z);
    }

    Vector3 normalize()
    {
        Vector3 out = *this;
        auto    l   = length();
        if (l == 0.f)
            return *this;

        out.x /= l;
        out.y /= l;
        out.z /= l;
        return out;
    }

    float unity_magnitude()
    {
        return std::sqrtf(x * x + y * y + z * z);
    }

    Vector3 Cross(Vector3 rhs)
    {
        return Vector3(y * rhs.z - z * rhs.y, z * rhs.x - x * rhs.z, x * rhs.y - y * rhs.x);
    }

    Vector3 unity_Normalize()
    {
        float num = unity_magnitude();
        if (num > _flt(1E-05f))
        {
            x /= num;
            y /= num;
            z /= num;
        }
        else
        {
            x = _flt(0.f);
            y = _flt(0.f);
            z = _flt(0.f);
        }

        return {x, y, z};
    }

    float Magnitude()
    {
        return std::sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
    }
    float MagnitudeXZ()
    {
        return std::sqrt(this->x * this->x + this->z * this->z);
    }

    Vector3 Normalized()
    {
        float num = this->Magnitude();
        if (num > _flt(FLT_EPSILON))
        {
            return {this->x / num, this->y / num, this->z / num};
        }
        return Vector3{};
    }

    Vector3 normalized() const
    {
        float len = length();
        return {x == _flt(0.f) ? _flt(0.f) : x / len, y == _flt(0.f) ? _flt(0.f) : y / len,
                z == _flt(0.f) ? _flt(0.f) : z / len};
    }

    float dot_product(Vector3 input) const
    {
        return (x * input.x) + (y * input.y) + (z * input.z);
    }

    float distance(Vector3 input) const
    {
        return (*this - input).length();
    }

    float distancesqr(Vector3 input) const
    {
        Vector3 dif = {x - input.x, y - input.y, z - input.z};
        return dif.x * dif.x + dif.y * dif.y + dif.z * dif.z;
    }

    float distance_2d(Vector3 input) const
    {
        return (*this - input).length_2d();
    }

    float distance_xz(Vector3 input) const
    {
        return (*this - input).length_xz();
    }

    void clamp()
    {
        x = std::clamp(x, negate_flt(_flt(89.f)), _flt(89.f));
        y = std::clamp(y, negate_flt(_flt(180.f)), _flt(180.f));

        z = _flt(0.f);
    }

    bool empty() const
    {
        return (x == _flt(0.f) && y == _flt(0.f) && z == _flt(0.f)) ||
               (x == negate_flt(_flt(1.f)) && y == negate_flt(_flt(1.f)) && z == negate_flt(_flt(1.f)));
    }

    static float Angle(Vector3 from, Vector3 to)
    {
        float num  = std::sqrtf((from.Magnitude() * to.Magnitude()));
        bool  flag = num < _flt(1E-15f);
        float result;
        if (flag)
            result = _flt(0.f);
        else
        {
            float num2 = std::clamp(from.dot_product(to) / num, negate_flt(_flt(1.f)), _flt(1.f));
            result     = std::acos(num2) * _flt(57.29578f);
        }
        return result;
    }

    static Vector3 Reflect(Vector3 inDirection, Vector3 inNormal)
    {
        float num = negate_flt(_flt(2.f)) * inNormal.dot_product(inDirection);
        return Vector3(num * inNormal.x + inDirection.x, num * inNormal.y + inDirection.y,
                       num * inNormal.z + inDirection.z);
    }

    Vector3 ToVec()
    {
        float sy = std::sin(DEG2RAD(y));
        float cy = std::cos(DEG2RAD(y));

        float sp = std::sin(DEG2RAD(x));
        float cp = std::cos(DEG2RAD(x));

        return Vector3(cp * cy, cp * sy, -sp);
    }

    Vector3 VecForward(float dist)
    {
        return ToVec() * dist;
    }

    Vector3 Angle(Vector3* m_vecUp = nullptr)
    {
        if (!x && !y)
            return {};

        float m_flRoll = _flt(0.f);

        if (m_vecUp)
        {
            Vector3 m_vecLeft = (*m_vecUp).Cross(*this);
            m_flRoll          = RAD2DEG(std::atan2f(m_vecLeft.y, (m_vecLeft.z * x) - (m_vecLeft.x * z)));
        }

        // return Vector3(RAD2DEG(atan2f(-z, sqrtf(x * x + y * y))), RAD2DEG(atan2f(y, x)),
        // m_dRoll);
        return Vector3(RAD2DEG(std::atan2f(-y, std::sqrt(x * x + z * z))), RAD2DEG(std::atan2f(z, x)), m_flRoll);
    }

    static float Clamp(float value, float min, float max)
    {
        bool flag = value < min;
        if (flag)
        {
            value = min;
        }
        else
        {
            bool flag2 = value > max;
            if (flag2)
            {
                value = max;
            }
        }
        return value;
    }
};

inline constexpr Vector3 vec3Right   = {_flt(1.f), _flt(0.f), _flt(0.f)};
inline constexpr Vector3 vec3Left    = {_flt(-1.f), _flt(0.f), _flt(0.f)};
inline constexpr Vector3 vec3Forward = {_flt(0.f), _flt(0.f), _flt(1.f)};
inline constexpr Vector3 vec3Back    = {_flt(0.f), _flt(0.f), _flt(-1.f)};
inline constexpr Vector3 vec3Up      = {_flt(0.f), _flt(1.f), _flt(0.f)};

class Vector4
{
  public:
    Vector4()
    {
        x = y = z = w = _flt(0.f);
    }

    Vector4(float fx, float fy, float fz, float fw)
    {
        x = fx;
        y = fy;
        z = fz;
        w = fw;
    }

    float x, y, z, w;

    Vector4 operator+(const Vector4& input) const
    {
        return Vector4{x + input.x, y + input.y, z + input.z, w + input.w};
    }

    Vector4 operator-(const Vector4& input) const
    {
        return Vector4{x - input.x, y - input.y, z - input.z, w - input.w};
    }

    Vector4 operator/(float input) const
    {
        return Vector4{x / input, y / input, z / input, w / input};
    }

    Vector4 operator*(float input) const
    {
        return Vector4{x * input, y * input, z * input, w * input};
    }

    static Vector4 QuatMult(Vector4 lhs, Vector4 rhs)
    {
        return Vector4{lhs.w * rhs.x + lhs.x * rhs.w + lhs.y * rhs.z - lhs.z * rhs.y,
                       lhs.w * rhs.y + lhs.y * rhs.w + lhs.z * rhs.x - lhs.x * rhs.z,
                       lhs.w * rhs.z + lhs.z * rhs.w + lhs.x * rhs.y - lhs.y * rhs.x,
                       lhs.w * rhs.w - lhs.x * rhs.x - lhs.y * rhs.y - lhs.z * rhs.z};
    }

    Vector4& operator-=(const Vector4& v)
    {
        x -= v.x;
        y -= v.y;
        z -= v.z;
        w -= v.w;

        return *this;
    }

    Vector4& operator/=(float input)
    {
        x /= input;
        y /= input;
        z /= input;
        w /= input;
        return *this;
    }

    Vector4& operator*=(float input)
    {
        x *= input;
        y *= input;
        z *= input;
        w *= input;
        return *this;
    }

    bool operator==(const Vector4& input) const
    {
        return x == input.x && y == input.y && z == input.z && w == input.w;
    }

    bool operator!=(const Vector4& input) const
    {
        return !(*this == input);
    }

    void make_absolute()
    {
        x = std::abs(x);
        y = std::abs(y);
        z = std::abs(z);
        w = std::abs(w);
    }

    float length_sqr() const
    {
        return (x * x) + (y * y) + (z * z) + (w * w);
    }

    float length() const
    {
        return std::sqrt(length_sqr());
    }

    float length_2d() const
    {
        return std::sqrt((x * x) + (y * y));
    }

    Vector4 normalized() const
    {
        return {x / length(), y / length(), z / length(), w / length()};
    }

    float dot_product(Vector4 input) const
    {
        return (x * input.x) + (y * input.y) + (z * input.z) + (w * input.w);
    }

    float distance(Vector4 input) const
    {
        return (*this - input).length();
    }

    float distance_2d(Vector4 input) const
    {
        return (*this - input).length_2d();
    }
    void clamp()
    {
        if (x > 89.f)
            x = 89.f;
        else if (x < -89.f)
            x = -89.f;

        if (y > 180.f)
            y = 180.f;
        else if (y < -180.f)
            y = -180.f;

        z = _flt(0.f);
        w = _flt(0.f);
    }

    bool empty() const
    {
        return x == _flt(0.f) && y == _flt(0.f) && z == _flt(0.f) && w == _flt(0.f);
    }

    static Vector4 QuaternionLookRotation(Vector3 forward, Vector3 up)
    {
        Vector3 vector  = forward.unity_Normalize();
        Vector3 vector2 = (up).Cross(vector).unity_Normalize();
        Vector3 vector3 = (vector).Cross(vector2);
        auto    m00     = vector2.x;
        auto    m01     = vector2.y;
        auto    m02     = vector2.z;
        auto    m10     = vector3.x;
        auto    m11     = vector3.y;
        auto    m12     = vector3.z;
        auto    m20     = vector.x;
        auto    m21     = vector.y;
        auto    m22     = vector.z;

        float num8       = (m00 + m11) + m22;
        auto  quaternion = Vector4();
        if (num8 > _flt(0.f))
        {
            auto num     = (float)std::sqrt(num8 + _flt(1.f));
            quaternion.w = num * _flt(0.5f);
            num          = _flt(0.5f) / num;
            quaternion.x = (m12 - m21) * num;
            quaternion.y = (m20 - m02) * num;
            quaternion.z = (m01 - m10) * num;
            return quaternion;
        }
        if ((m00 >= m11) && (m00 >= m22))
        {
            auto num7    = (float)std::sqrt(((_flt(1.f) + m00) - m11) - m22);
            auto num4    = _flt(0.5f) / num7;
            quaternion.x = _flt(0.5f) * num7;
            quaternion.y = (m01 + m10) * num4;
            quaternion.z = (m02 + m20) * num4;
            quaternion.w = (m12 - m21) * num4;
            return quaternion;
        }
        if (m11 > m22)
        {
            auto num6    = (float)std::sqrt(((_flt(1.f) + m11) - m00) - m22);
            auto num3    = _flt(0.5f) / num6;
            quaternion.x = (m10 + m01) * num3;
            quaternion.y = _flt(0.5f) * num6;
            quaternion.z = (m21 + m12) * num3;
            quaternion.w = (m20 - m02) * num3;
            return quaternion;
        }
        auto num5    = (float)std::sqrt(((_flt(1.f) + m22) - m00) - m11);
        auto num2    = _flt(0.5f) / num5;
        quaternion.x = (m20 + m02) * num2;
        quaternion.y = (m21 + m12) * num2;
        quaternion.z = _flt(0.5f) * num5;
        quaternion.w = (m01 - m10) * num2;
        return quaternion;
    }

    static Vector3 QuatMult(Vector4 rotation, Vector3 point)
    {
        float   num   = rotation.x * _flt(2.f);
        float   num2  = rotation.y * _flt(2.f);
        float   num3  = rotation.z * _flt(2.f);
        float   num4  = rotation.x * num;
        float   num5  = rotation.y * num2;
        float   num6  = rotation.z * num3;
        float   num7  = rotation.x * num2;
        float   num8  = rotation.x * num3;
        float   num9  = rotation.y * num3;
        float   num10 = rotation.w * num;
        float   num11 = rotation.w * num2;
        float   num12 = rotation.w * num3;
        Vector3 result;
        result.x = (_flt(1.f) - (num5 + num6)) * point.x + (num7 - num12) * point.y + (num8 + num11) * point.z;
        result.y = (num7 + num12) * point.x + (_flt(1.f) - (num4 + num6)) * point.y + (num9 - num10) * point.z;
        result.z = (num8 - num11) * point.x + (num9 + num10) * point.y + (_flt(1.f) - (num4 + num5)) * point.z;
        return result;
    }

    static Vector4 Scale(Vector4 a, Vector4 b)
    {
        return {a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w};
    }

    void Scale(Vector4 scale)
    {
        x *= scale.x;
        y *= scale.y;
        z *= scale.z;
        w *= scale.w;
    }
};

// typedef Vector4 Quaternion;

struct Quaternion
{
    float x, y, z, w;

    Vector3 operator*(const Vector3& point) const
    {
        float num   = x * 2.f;
        float num2  = y * 2.f;
        float num3  = z * 2.f;
        float num4  = x * num;
        float num5  = y * num2;
        float num6  = z * num3;
        float num7  = x * num2;
        float num8  = x * num3;
        float num9  = y * num3;
        float num10 = w * num;
        float num11 = w * num2;
        float num12 = w * num3;

        Vector3 result{};

        result.x = (1.f - (num5 + num6)) * point.x + (num7 - num12) * point.y + (num8 + num11) * point.z;
        result.y = (num7 + num12) * point.x + (1.f - (num4 + num6)) * point.y + (num9 - num10) * point.z;
        result.z = (num8 - num11) * point.x + (num9 + num10) * point.y + (1.f - (num4 + num5)) * point.z;
        return result;
    }

    static Vector3 Internal_MakePositive(Vector3 euler)
    {
        float num  = -0.005729578f;
        float num2 = 360.f + num;
        if (euler.x < num)
        {
            euler.x += 360.f;
        }
        else if (euler.x > num2)
        {
            euler.x -= 360.f;
        }

        if (euler.y < num)
        {
            euler.y += 360.f;
        }
        else if (euler.y > num2)
        {
            euler.y -= 360.f;
        }

        if (euler.z < num)
        {
            euler.z += 360.f;
        }
        else if (euler.z > num2)
        {
            euler.z -= 360.f;
        }

        return euler;
    }
};

class Matrix4x4
{
  public:
    inline float* operator[](int i)
    {
        return m[i];
    }

    inline const float* operator[](int i) const
    {
        return m[i];
    }

    inline float* Base()
    {
        return &m[0][0];
    }

    inline const float* Base() const
    {
        return &m[0][0];
    }

  public:
    inline Matrix4x4()
    {
        Init(_flt(0.f), _flt(0.f), _flt(0.f), _flt(0.f), _flt(0.f), _flt(0.f), _flt(0.f), _flt(0.f), _flt(0.f),
             _flt(0.f), _flt(0.f), _flt(0.f), _flt(0.f), _flt(0.f), _flt(0.f), _flt(0.f));
    }

    inline Matrix4x4(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20,
                     float m21, float m22, float m23, float m30, float m31, float m32, float m33)
    {
        Init(m00, m01, m02, m03, m10, m11, m12, m13, m20, m21, m22, m23, m30, m31, m32, m33);
    }

    inline void Init(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20,
                     float m21, float m22, float m23, float m30, float m31, float m32, float m33)
    {
        m[0][0] = m00;
        m[0][1] = m01;
        m[0][2] = m02;
        m[0][3] = m03;

        m[1][0] = m10;
        m[1][1] = m11;
        m[1][2] = m12;
        m[1][3] = m13;

        m[2][0] = m20;
        m[2][1] = m21;
        m[2][2] = m22;
        m[2][3] = m23;

        m[3][0] = m30;
        m[3][1] = m31;
        m[3][2] = m32;
        m[3][3] = m33;
    }

    Matrix4x4(Vector4 column0, Vector4 column1, Vector4 column2, Vector4 column3)
    {
        m00 = column0.x;
        m01 = column1.x;
        m02 = column2.x;
        m03 = column3.x;
        m10 = column0.y;
        m11 = column1.y;
        m12 = column2.y;
        m13 = column3.y;
        m20 = column0.z;
        m21 = column1.z;
        m22 = column2.z;
        m23 = column3.z;
        m30 = column0.w;
        m31 = column1.w;
        m32 = column2.w;
        m33 = column3.w;
    }

    Matrix4x4 transpose() const
    {
        return Matrix4x4(m[0][0], m[1][0], m[2][0], m[3][0], m[0][1], m[1][1], m[2][1], m[3][1], m[0][2], m[1][2],
                         m[2][2], m[3][2], m[0][3], m[1][3], m[2][3], m[3][3]);
    }

    static Matrix4x4 Translate(Vector3 vector)
    {
        Matrix4x4 result;
        result.m00 = 1.f;
        result.m01 = 0.f;
        result.m02 = 0.f;
        result.m03 = vector.x;
        result.m10 = 0.f;
        result.m11 = 1.f;
        result.m12 = 0.f;
        result.m13 = vector.y;
        result.m20 = 0.f;
        result.m21 = 0.f;
        result.m22 = 1.f;
        result.m23 = vector.z;
        result.m30 = 0.f;
        result.m31 = 0.f;
        result.m32 = 0.f;
        result.m33 = 1.f;

        return result;
    }

    // game specific
    // needs to be implemented outside
    static Matrix4x4 Ortho(float left, float right, float bottom, float top, float zNear, float zFar);

    union {
        float m[4][4];

        struct
        {
            float m00;
            float m10;
            float m20;
            float m30;
            float m01;
            float m11;
            float m21;
            float m31;
            float m02;
            float m12;
            float m22;
            float m32;
            float m03;
            float m13;
            float m23;
            float m33;
        };
    };
};

static const Matrix4x4 identityMatrix = {
    {1.f, 0.f, 0.f, 0.f},
    {0.f, 1.f, 0.f, 0.f},
    {0.f, 0.f, 1.f, 0.f},
    {0.f, 0.f, 0.f, 1.f},
};

inline Vector3 quatmult(const Vector3* point, Vector4* quat)
{
    float   num   = quat->x * _flt(2.f);
    float   num2  = quat->y * _flt(2.f);
    float   num3  = quat->z * _flt(2.f);
    float   num4  = quat->x * num;
    float   num5  = quat->y * num2;
    float   num6  = quat->z * num3;
    float   num7  = quat->x * num2;
    float   num8  = quat->x * num3;
    float   num9  = quat->y * num3;
    float   num10 = quat->w * num;
    float   num11 = quat->w * num2;
    float   num12 = quat->w * num3;
    Vector3 result;
    result.x = (_flt(1.f) - (num5 + num6)) * point->x + (num7 - num12) * point->y + (num8 + num11) * point->z;
    result.y = (num7 + num12) * point->x + (_flt(1.f) - (num4 + num6)) * point->y + (num9 - num10) * point->z;
    result.z = (num8 - num11) * point->x + (num9 + num10) * point->y + (_flt(1.f) - (num4 + num5)) * point->z;
    return result;
}

namespace math_additional
{
    inline float Clamp01(float value)
    {
        float result;
        if (value < _flt(0.f))
        {
            result = _flt(0.f);
        }
        else if (value > _flt(1.f))
        {
            result = _flt(1.f);
        }
        else
        {
            result = value;
        }
        return result;
    }

    inline float Lerp(Vector3 in)
    {
        return in.x + (in.y - in.x) * Clamp01(in.z);
    }

    inline Vector2 CalcAngle(const Vector3& src, const Vector3& dst)
    {
        Vector3 dir = src - dst;

        float hyp   = std::sqrt(dir.x * dir.x + dir.y * dir.y + dir.z * dir.z);
        float nigga = std::roundf(dir.y);

        if (hyp != hyp)
            hyp = std::sqrt(dir.x * dir.x + nigga * nigga);

        double x = RAD2DEG(std::asin(dir.y / hyp));
        double y = RAD2DEG(-std::atan2f(dir.x, -dir.z));

        return Vector2{static_cast<float>(x), static_cast<float>(y)};
    }
}; // namespace math_additional

inline float Remap(float value, float inputStart, float inputEnd, float outputStart, float outputEnd)
{
    float result = (value - inputStart) / (inputEnd - inputStart) * (outputEnd - outputStart) + outputStart;
    return result;
}

inline float RemapClamped(float value, float inputStart, float inputEnd, float outputStart, float outputEnd)
{
    float t = (value - inputStart) / (inputEnd - inputStart);
    if (t > 1.f)
        return outputEnd;
    if (t < 0.f)
        return outputStart;
    return outputStart + (outputEnd - outputStart) * t;
}

inline Vector2 Vector2::operator+(const Vector2& input) const
{
    return Vector2{x + input.x, y + input.y};
}

inline Vector2 Vector2::operator+(const Vector3& input) const
{
    return Vector2{x + input.x, y + input.y};
}

inline Vector2 Vector2::operator-(const Vector2& input) const
{
    return Vector2{x - input.x, y - input.y};
}

inline Vector2 Vector2::operator-(const Vector3& input) const
{
    return Vector2{x - input.x, y - input.y};
}

struct Line
{
    Vector3 p0;
    Vector3 p1;

    Vector3 ClosestPoint(Vector3 pos)
    {
        Vector3 ap = pos - p0;
        Vector3 ab = p1 - p0;

        return p0 + ab * (ap.dot_product(ab) / ab.dot_product(ab));
    }

    float Distance(Vector3 pos)
    {
        return pos.distance(ClosestPoint(pos));
    }

    Vector3 ClosestPointUnity(Vector3 pos)
    {
        Vector3 a         = p1 - p0;
        float   magnitude = a.Magnitude();
        if (magnitude < _flt(0.001f))
            return p0;
        Vector3 vector = a / magnitude;
        return p0 + vector * Vector3::Clamp((pos - p0).dot_product(vector), _flt(0.f), magnitude);
    }
};

struct LineSegment
{
    Vector3 a;
    Vector3 b;

    Vector3 ClosestPointOnLineToPos(Vector3 p)
    {
        Vector3 ab       = b - a;
        Vector3 ap       = p - a;
        float   lenSqrAB = ab.length_sqr();
        float   t        = ap.dot_product(ab) / lenSqrAB;
        if (t > 1.f)
            t = 1.f;
        else if (t < 0.f)
            t = 0.f;

        return a + ab * t;
    }

    float DistanceToPoint(Vector3 p)
    {
        return ClosestPointOnLineToPos(p).distance(p);
    }
};