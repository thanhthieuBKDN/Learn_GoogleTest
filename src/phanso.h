#ifndef PHAN_SO_H
#define PHAN_SO_H
#include <iostream>

class BasePhanSo {
    public:
        BasePhanSo() = default;
        virtual ~BasePhanSo() = default;
        virtual void nhap(const int &a, const int &b) {};
        virtual int getTu()  {return 0;};
        virtual int getMau() {return 0;};
};

class PhanSo : public BasePhanSo {
    public:
        PhanSo() {m_mau = 1; m_tu = 0;};
        PhanSo(int tu, int mau): m_tu(tu), m_mau(mau) {
            if (m_mau == 0) {
                std::cout << "Mau phai khac 0" << std::endl;
                m_mau = 1;
            }
        };
        virtual ~PhanSo() = default;
        void nhap(const int &a, const int &b) override;
        virtual int getTu() override;
        virtual int getMau() override;
    private:
        int m_tu;
        int m_mau;
};

#endif