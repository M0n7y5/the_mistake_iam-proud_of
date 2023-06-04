#pragma once

#if defined(_M_X64) || defined(__amd64__)
inline constexpr unsigned long long _FNV_offset_basis = 14695981039346656037ULL;
inline constexpr unsigned long long _FNV_prime        = 1099511628211ULL;
#else  // defined(_WIN64)
inline constexpr unsigned long _FNV_offset_basis = 2166136261U;
inline constexpr unsigned long _FNV_prime        = 16777619U;
#endif // defined(_WIN64)

template <size_t in>
struct Ryb
{
    constexpr static size_t value = in;
};

constexpr size_t CompileTimeFnv1aHash(const char* m_szString, size_t m_nValue = ::_FNV_offset_basis)
{
    return (*m_szString ? CompileTimeFnv1aHash(m_szString + 1, (m_nValue ^= *m_szString) * ::_FNV_prime) : m_nValue);
}
constexpr size_t CompileTimeFnv1aHash(const wchar_t* m_szString, size_t m_nValue = ::_FNV_offset_basis)
{
    return (*m_szString ? CompileTimeFnv1aHash(m_szString + 1, (m_nValue ^= *m_szString) * ::_FNV_prime) : m_nValue);
}
static inline size_t RunTimeFnv1aHash(const char* m_szString, size_t m_nValue = ::_FNV_offset_basis)
{
    return (*m_szString ? RunTimeFnv1aHash(m_szString + 1, (m_nValue ^= *m_szString) * ::_FNV_prime) : m_nValue);
}
static inline size_t RunTimeFnv1aHash(const wchar_t* m_szString, size_t m_nValue = ::_FNV_offset_basis)
{
    return (*m_szString ? RunTimeFnv1aHash(m_szString + 1, (m_nValue ^= *m_szString) * ::_FNV_prime) : m_nValue);
}

#define HASH_CTIME(x)    Ryb<CompileTimeFnv1aHash(x)>::value
#define HASH_RUNTIME(x)  RunTimeFnv1aHash(x)
#define HASH_EQUAL(x, y) (x == y)