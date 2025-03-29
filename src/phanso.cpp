#include "phanso.h"

int PhanSo::getTu() {
    return m_tu;
}
int PhanSo::getMau() {
    return m_mau;
}
void PhanSo::nhap(const int &a, const int &b) {
    m_tu = a;
    m_mau = b;
    if (m_mau == 0) {
        std::cout << "Mau phai khac 0" << std::endl;
        m_mau = 1;
    }
}