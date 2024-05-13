#include "pch.h"
#include "../Mymath/Mymath.hpp"


TEST(TestMath, TestName) {
	EXPECT_EQ(3, mySquera(9));
	EXPECT_TRUE(true);
}

TEST(TestMath, TestINput) {
	EXPECT_EQ(1, mySquera(1));
	EXPECT_TRUE(true);
}

TEST(FirstTestSuite, FirstTest)
{
	int a = 42;
	ASSERT_TRUE(a > 0);
}

TEST(TESTContruction, TESTConstructor)
{
	auto p = point3d(1, 2, 3);
	ASSERT_EQ(p.x(), 1);
	ASSERT_EQ(p.y(), 2);
	ASSERT_EQ(p.z(), 3);

}

TEST(TestConstruction, TestOrigin)
{
	auto p = point3d::origin();
	ASSERT_EQ(p.x(), 0);
	ASSERT_EQ(p.x(), 0);
	ASSERT_EQ(p.x(), 0);
}

TEST(TestConstruction, expect)
{
	//another assert
	EXPECT_TRUE(2 + 2 == 2 * 2);
	EXPECT_FALSE(1 == 2);
	ASSERT_TRUE(2 + 2 == 2 * 2);
	ASSERT_FALSE(1 == 2);
}

//Assert XX
TEST(AnotherASS, logic)
{
	auto a = 42, b = 10;
	EXPECT_EQ(a, 42);
	EXPECT_NE(a, b);
	EXPECT_LT(b, a);
	EXPECT_LE(b, 11);
	EXPECT_GT(a, b);
	EXPECT_GE(5, 10);
	ADD_FAILURE();
	ADD_FAILURE_AT(__FILE__, __LINE__);
}
//Assert float

TEST(AnotherASS, float)
{
	EXPECT_FLOAT_EQ(1.9999999f, 1.9999998f);
	ASSERT_FLOAT_EQ(1.9999999f, 1.9999998f);
}
//Assert String
TEST(AnotherASS, string)
{
	auto str = "sample";
	EXPECT_STREQ(str, "sample");
	EXPECT_STRNE(str, "simple");
	ASSERT_STRCASEEQ(str, "SAMPLE");
	ASSERT_STRCASENE(str, "SIMPLE");
}


void function_that_throws()
{
	throw std::runtime_error("error");
}
void function_no_throw()
{ }

TEST(TestAssertions, Exceptions)
{
	EXPECT_THROW(function_that_throws(),
		std::runtime_error);
	EXPECT_ANY_THROW(function_that_throws());
	EXPECT_NO_THROW(function_no_throw());
	ASSERT_THROW(function_that_throws(),
		std::runtime_error);
	ASSERT_ANY_THROW(function_that_throws());
	ASSERT_NO_THROW(function_no_throw());
}
/*OK get core of Google test 
* The rest is just for opimaztion
*/

/* "#include <iostream>
class TestFixture : public ::testing::Test
{
protected:
	TestFixture()
	{
		std::cout << "constructing fixture\n";
		data.resize(10);
	}
	~TestFixture()
	{
		std::cout << "destroying fixture\n";
	}

protected:
	std::vector<int> data;
};  */