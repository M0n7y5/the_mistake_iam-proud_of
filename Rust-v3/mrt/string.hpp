#pragma once
#include <cctype>
#include <climits>

namespace crt {
    template <class T>
    __forceinline T* tcscat_s(T* dest, unsigned int len, const T* src) {
        unsigned int i, j;
        for (i = 0; dest[i] != '\0' && i < len; i++)
            ;
        for (j = 0; src[j] != '\0' && i < len - 1;) {
            dest[i++] = src[j++];
        }
        dest[i++] = '\0';
        return dest;
    }

    template <class T>
    __forceinline T* tcsncat(T* dest, const T* src, unsigned int len) {
        unsigned int i, j;
        for (i = 0; dest[i] != '\0'; i++)
            ;
        for (j = 0; src[j] != '\0' && j < len;) {
            dest[i++] = src[j++];
        }
        dest[i++] = '\0';
        return dest;
    }

    template <class T>
    __forceinline T* tcschr(const T* str, T ch) {
        const T* ptr = str;
        while (*ptr != '\0' && *ptr != ch)
            ptr++;
        if (*ptr == ch)
            return (T*)ptr;
        return 0;
    }

    template <class T>
    __forceinline T* tcsrchr(const T* str, T ch) {
        const T* ptr = str;
        while (*ptr != '\0')
            ptr++;
        while (*ptr != ch && ptr > str)
            ptr--;
        if (*ptr == ch)
            return (T*)ptr;
        return 0;
    }

    template <class T>
    __forceinline T* tcsstr(const T* str, const T* search) {
        const T* ptr = str;
        int i;
        while (*ptr != '\0') {
            for (i = 0; ptr[i] == search[i] && search[i] != '\0' && ptr[i] != '\0'; i++)
                ;
            if (search[i] == '\0')
                return (T*)ptr;
            ptr++;
        }
        return 0;
    }

    template <class T>
    __forceinline T* tcsupr(T* str) {
        T* ptr = str;

        while (*ptr != '\0') {
            if (*ptr >= 'a' && *ptr <= 'z') {
                *ptr = *ptr - 'a' + 'A';
            }
            ptr++;
        }
        return str;
    }

    template <class T>
    __forceinline T* tcslwr(T* str) {
        T* ptr = str;

        while (*ptr != '\0') {
            if (*ptr >= 'A' && *ptr <= 'Z') {
                *ptr = *ptr - 'A' + 'a';
            }
            ptr++;
        }
        return str;
    }

    template <class T>
    __forceinline T* tcstok_s(T* str, T* match, T** context) {
        T* next;
        if (str != 0) {
            *context = str;
        }

        next = *context;
        if (next == 0) {
            return 0;
        }

        while (*next != match[0] && *next != '\0')
            next++;

        if (*next == match[0]) {
            T* ret = *context;
            *next = '\0';
            *context = ++next;
            return ret;
        } else {
            T* ret = *context;
            *context = 0;
            return ret;
        }
    }

    template <class T>
    __forceinline int tcsspn(T* str, T* chars) {
        unsigned int len = 0;
        unsigned int i;

        for (len = 0; str[len] != '\0'; len++) {
            for (i = 0; chars[i] != '\0'; i++) {
                if (str[len] == chars[i]) {
                    break;
                }
            }
            if (chars[i] == '\0') {
                return len;
            }
        }

        return len;
    }

    template <class T>
    __forceinline int tcscspn(T* str, T* match) {
        unsigned int len = 0;
        unsigned int i;

        for (len = 0; str[len] != '\0'; len++) {
            for (i = 0; match[i] != '\0'; i++) {
                if (str[len] == match[i]) {
                    return len;
                }
            }
        }

        return len;
    }

    template <class T>
    __forceinline T* tcsncpy(T* dst, const T* src, size_t n) {
        if (n != 0) {
            T* d = dst;
            const T* s = src;

            do {
                if ((*d++ = *s++) == 0) {
                    while (--n != 0)
                        *d++ = 0;
                    break;
                }
            } while (--n != 0);
        }
        return (dst);
    }

    template <class T>
    __forceinline int tcsncmp(const T* s1, const T* s2, size_t n) {
        while (n != 0 && *s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
            s1++;
            s2++;
            n--;
        }
        return n == 0 ? 0 : (*s1 - *s2);
    }

    template <class T>
    __forceinline int tcscmp(const T* s1, const T* s2) {
        while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
            s1++;
            s2++;
        }
        return *s1 - *s2;
    }

    template <class T>
    __forceinline size_t tcslen(const T* string) {
        int counter = 0;
        if (!string)
            return 0;
        for (; *string != '\0'; ++string)
            ++counter;
        return counter;
    }

    template <class T>
    __forceinline bool tcisalpha(T ch) {
        return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
    }

    template <class T>
    __forceinline bool tcisdigit(T ch) {
        return (ch - '0') < 10;
    }

    template <class T>
    __forceinline bool tcisalnum(T ch) {
        return tcisalpha<T>(ch) || tcisdigit<T>(ch);
    }

    template <class T>
    __forceinline bool tcisgraph(T ch) {
        return 0x20 < ch && ch < 0x7f;
    }

    template <class T>
    __forceinline bool tcislower(T ch) {
        return 'a' <= ch && ch <= 'z';
    }

    template <class T>
    __forceinline bool tcisupper(T ch) {
        return 'A' <= ch && ch <= 'Z';
    }

    template <class T>
    __forceinline bool tcisspace(T ch) {
        return (ch == ' ') || (ch == '\n') || (ch == '\t') || (ch == '\f') || (ch == '\r') || (ch == '\v');
    }

    template <class T>
    T tctoupper(T value) {
        return tcislower(value) ? ((value - 'a') + 'A') : value;
    }

    template <class T>
    T tctolower(T value) {
        return tcisupper(value) ? ((value - 'A') + 'a') : value;
    }

    template <class T>
    __forceinline double tctof(const T* str) {
        double a = 0.0;
        int e = 0;
        int c;
        while ((c = *str++) != '\0' && (c >= '0' && c <= '9')) {
            a = a * 10.0 + (c - '0');
        }
        if (c == '.') {
            while ((c = *str++) != '\0' && (c >= '0' && c <= '9')) {
                a = a * 10.0 + (c - '0');
                e = e - 1;
            }
        }
        if (c == 'e' || c == 'E') {
            int sign = 1;
            int i = 0;
            c = *str++;
            if (c == '+')
                c = *str++;
            else if (c == '-') {
                c = *str++;
                sign = -1;
            }
            while ((c >= '0' && c <= '9')) {
                i = i * 10 + (c - '0');
                c = *str++;
            }
            e += i * sign;
        }
        while (e > 0) {
            a *= 10.0;
            e--;
        }
        while (e < 0) {
            a *= 0.1;
            e++;
        }
        return a;
    }

    inline unsigned long strtoul(const char* str, char** endptr, int base) {
        volatile const char* s = str;
        volatile unsigned long acc;
        volatile int c;
        volatile unsigned long cutoff;
        volatile int neg = 0, any, cutlim;

        do {
            c = *s++;
        } while (isspace(c));
        if (c == '-') {
            neg = 1;
            c = *s++;
        } else if (c == '+')
            c = *s++;
        if ((base == 0 || base == 16) && c == '0' && (*s == 'x' || *s == 'X')) {
            c = s[1];
            s += 2;
            base = 16;
        }
        if (base == 0)
            base = c == '0' ? 8 : 10;
        cutoff = (unsigned long)ULONG_MAX / (unsigned long)base;
        cutlim = (unsigned long)ULONG_MAX % (unsigned long)base;
        for (acc = 0, any = 0;; c = *s++) {
            if (isdigit(c))
                c -= '0';
            else if (isalpha(c))
                c -= isupper(c) ? 'A' - 10 : 'a' - 10;
            else
                break;
            if (c >= base)
                break;
            if (any < 0 || acc > cutoff || (acc == cutoff && c > cutlim))
                any = -1;
            else {
                any = 1;
                acc *= base;
                acc += c;
            }
        }
        if (any < 0) {
            acc = ULONG_MAX;
        } else if (neg)
            acc = -(long)acc;
        if (endptr != 0)
            *endptr = (char*)(any ? s - 1 : str);
        return (acc);
    }

    inline long strtol(const char* str, char** endptr, int base) {
        volatile const char* s = str;
        volatile unsigned long acc;
        volatile int c;
        volatile unsigned long cutoff;
        volatile int neg = 0, any, cutlim;

        do {
            c = *s++;
        } while (isspace(c));
        if (c == '-') {
            neg = 1;
            c = *s++;
        } else if (c == '+')
            c = *s++;
        if ((base == 0 || base == 16) && c == '0' && (*s == 'x' || *s == 'X')) {
            c = s[1];
            s += 2;
            base = 16;
        }
        if (base == 0)
            base = c == '0' ? 8 : 10;

        cutoff = neg ? -(long)LONG_MIN : LONG_MAX;
        cutlim = cutoff % (unsigned long)base;
        cutoff /= (unsigned long)base;
        for (acc = 0, any = 0;; c = *s++) {
            if (isdigit(c))
                c -= '0';
            else if (isalpha(c))
                c -= isupper(c) ? 'A' - 10 : 'a' - 10;
            else
                break;
            if (c >= base)
                break;
            if (any < 0 || acc > cutoff || (acc == cutoff && c > cutlim))
                any = -1;
            else {
                any = 1;
                acc *= base;
                acc += c;
            }
        }
        if (any < 0) {
            acc = neg ? LONG_MIN : LONG_MAX;
        } else if (neg)
            acc = -(long)acc;
        if (endptr != 0)
            *endptr = (char*)(any ? s - 1 : str);
        return (acc);
    }

    inline unsigned long long strtoull(const char* str, char** endptr, int base) {
        typedef unsigned long long ullong_type;

        volatile const char* s = str;
        volatile ullong_type acc;
        volatile int c;
        volatile ullong_type cutoff;
        volatile int neg = 0, any, cutlim;

        do {
            c = *s++;
        } while (isspace(c));
        if (c == '-') {
            neg = 1;
            c = *s++;
        } else if (c == '+')
            c = *s++;
        if ((base == 0 || base == 16) && c == '0' && (*s == 'x' || *s == 'X')) {
            c = s[1];
            s += 2;
            base = 16;
        }
        if (base == 0)
            base = c == '0' ? 8 : 10;
        cutoff = (ullong_type)ULLONG_MAX / (ullong_type)base;
        cutlim = (ullong_type)ULLONG_MAX % (ullong_type)base;
        for (acc = 0, any = 0;; c = *s++) {
            if (isdigit(c))
                c -= '0';
            else if (isalpha(c))
                c -= isupper(c) ? 'A' - 10 : 'a' - 10;
            else
                break;
            if (c >= base)
                break;
            if (any < 0 || acc > cutoff || (acc == cutoff && c > cutlim))
                any = -1;
            else {
                any = 1;
                acc *= base;
                acc += c;
            }
        }
        if (any < 0) {
            acc = ULLONG_MAX;
        } else if (neg)
            acc = -(long long)acc;
        if (endptr != 0)
            *endptr = (char*)(any ? s - 1 : str);
        return (acc);
    }

    inline long long strtoll(const char* str, char** endptr, int base) {
        typedef unsigned long long ullong_type;

        volatile const char* s = str;
        volatile ullong_type acc;
        volatile int c;
        volatile ullong_type cutoff;
        volatile int neg = 0, any, cutlim;

        do {
            c = *s++;
        } while (isspace(c));
        if (c == '-') {
            neg = 1;
            c = *s++;
        } else if (c == '+')
            c = *s++;
        if ((base == 0 || base == 16) && c == '0' && (*s == 'x' || *s == 'X')) {
            c = s[1];
            s += 2;
            base = 16;
        }
        if (base == 0)
            base = c == '0' ? 8 : 10;

        cutoff = neg ? -(long long)LLONG_MIN : LLONG_MAX;
        cutlim = cutoff % (ullong_type)base;
        cutoff /= (ullong_type)base;
        for (acc = 0, any = 0;; c = *s++) {
            if (isdigit(c))
                c -= '0';
            else if (isalpha(c))
                c -= isupper(c) ? 'A' - 10 : 'a' - 10;
            else
                break;
            if (c >= base)
                break;
            if (any < 0 || acc > cutoff || (acc == cutoff && c > cutlim))
                any = -1;
            else {
                any = 1;
                acc *= base;
                acc += c;
            }
        }
        if (any < 0) {
            acc = neg ? LLONG_MIN : LLONG_MAX;
        } else if (neg)
            acc = -(long long)acc;
        if (endptr != 0)
            *endptr = (char*)(any ? s - 1 : str);
        return (acc);
    }

    __forceinline double strtod(const char* str, char** endptr) {
        while (isspace(*str)) {
            str++;
        }

        bool negative = false;
        if (*str == '-') {
            negative = true;
            str++;
        } else if (*str == '+') {
            str++;
        }

        double result = 0;

        while (isdigit(*str)) {
            result = result * 10 + (*str - '0');
            str++;
        }

        if (*str == '.') {
            str++;

            double fraction = 0;
            double factor = 0.1;
            while (isdigit(*str)) {
                fraction += (*str - '0') * factor;
                factor *= 0.1;
                str++;
            }

            result += fraction;
        }

        if (tolower(*str) == 'e') {
            str++;

            bool exp_negative = false;
            if (*str == '-') {
                exp_negative = true;
                str++;
            } else if (*str == '+') {
                str++;
            }

            int exponent = 0;
            while (isdigit(*str)) {
                exponent = exponent * 10 + (*str - '0');
                str++;
            }

            if (exp_negative) {
                exponent = -exponent;
            }
            while (exponent > 0) {
                result *= 10;
                exponent--;
            }
            while (exponent < 0) {
                result *= 0.1;
                exponent++;
            }
        }

        if (endptr) {
            *endptr = (char*)str;
        }

        return negative ? -result : result;
    }

    inline int atoi(const char* str) {
        return crt::strtol(str, 0, 10);
    }
} // namespace crt