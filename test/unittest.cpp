#include "math.h"
#include <gtest/gtest.h>
#include "mockPhanSo.h"
using ::testing::Return;
using ::testing::AtLeast; 
class MyMathTest : public ::testing::Test {
    protected:
        myMath math;
    
        void SetUp() override {
            // Code to set up test resources (if needed)
            std::cout << "Setting up test resources..." << std::endl;
        }
    
        void TearDown() override {
            // Code to clean up test resources (if needed)
            std::cout << "Code to clean up test resources" << std::endl;
        }
};
    
    TEST_F(MyMathTest, SubtractPositiveNumbers) {
        EXPECT_EQ(math.subtract(10, 5), 5);
    }
    
    TEST_F(MyMathTest, SubtractNegativeNumbers) {
        EXPECT_EQ(math.subtract(-10, -5), -5);
    }
    
    TEST_F(MyMathTest, SubtractMixedNumbers) {
        EXPECT_EQ(math.subtract(10, -5), 15);
        EXPECT_EQ(math.subtract(-10, 5), -15);
    }
    
    TEST_F(MyMathTest, SubtractZero) {
        EXPECT_EQ(math.subtract(0, 0), 0);
        EXPECT_EQ(math.subtract(10, 0), 10);
        EXPECT_EQ(math.subtract(0, 10), -10);
    }
    TEST_F(MyMathTest, AddPositiveNumbers) {
        EXPECT_EQ(math.add(1,2), 3);
        EXPECT_EQ(math.add(10, 5), 15);
    }


    TEST_F(MyMathTest, AddPhanSo) {
        MockPhanSo mock_a;
        MockPhanSo mock_b;
    
        // Set up expectations for mock_a
        EXPECT_CALL(mock_a, getTu())
            .WillOnce(Return(1));
        EXPECT_CALL(mock_a, getMau())
            .WillOnce(Return(2));
    
        // Set up expectations for mock_b
        EXPECT_CALL(mock_b, getTu())
            .WillOnce(Return(1));
        EXPECT_CALL(mock_b, getMau())
            .WillOnce(Return(2));
    
        myMath math_obj;
        int32_t result = math_obj.add(mock_a, mock_b);
        EXPECT_EQ(result, 1); // Corrected expected result
    }

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}