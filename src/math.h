#ifndef MATH_H
#define MATH_H
#include <cstdint>

class myMath {
    public:
        myMath() {m_a = 0; m_b = 0;};
        myMath(int a, int b): m_a(a), m_b(b) {};
        ~myMath(){};
        int32_t add(int32_t a, int32_t b);
        int32_t subtract(int32_t a, int32_t b);
    private:
        int32_t m_a;
        int32_t m_b;
};


#endif // MATH_H