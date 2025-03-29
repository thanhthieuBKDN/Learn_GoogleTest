#include "math.h"
#include <gtest/gtest.h>

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


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}