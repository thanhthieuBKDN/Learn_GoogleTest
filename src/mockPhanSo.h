#include <gmock/gmock.h>
#include "phanso.h"

class MockPhanSo : public BasePhanSo {
public:
    MOCK_METHOD(void, nhap, (const int &a, const int &b), (override));
    MOCK_METHOD(int, getTu, (), (override));
    MOCK_METHOD(int, getMau, (), (override));
};

//you don’t need to define these mock methods somewhere else - 
//the MOCK_METHOD macro will generate the definitions for you. It’s that simple