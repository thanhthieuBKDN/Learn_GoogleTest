#include "math.h"

int32_t myMath::add(int32_t a, int32_t b) {
    return a + b;
}
int32_t myMath::add(PhanSo a, PhanSo b) {
    return a.getTu() * b.getMau() + b.getTu() * a.getMau();
}
int32_t myMath::subtract(int32_t a, int32_t b) {
    return a - b;
}