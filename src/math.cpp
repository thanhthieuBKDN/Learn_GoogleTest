#include "math.h"

int32_t myMath::add(int32_t a, int32_t b) {
    return a + b;
}
int32_t myMath::add(BasePhanSo& a, BasePhanSo& b) {
    int tu1 = a.getTu();
    int mau1 = a.getMau();
    int tu2 = b.getTu();
    int mau2 = b.getMau();

    int tuResult = (tu1 * mau2) + (tu2 * mau1);
    int mauResult = mau1 * mau2;

    // Simplify the fraction here if needed
    // For example, find the greatest common divisor and divide both tuResult and mauResult by it.

    // Since the return type is int32_t, the result is the integer division of the fraction.
    return tuResult / mauResult;
}
int32_t myMath::subtract(int32_t a, int32_t b) {
    return a - b;
}