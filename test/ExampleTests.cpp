#include <gtest/gtest.h>
#include "../Example.hpp"

struct ExampleTests : public ::testing::Test
{

    int *x;
    int GetX()
    {
        return *x;
    }
    virtual void SetUp() override
    {
        printf("SetUp\n");
        x = new int(5);
    }
    virtual void TearDown() override
    {
        printf("TearDown\n");
        delete (x);
    }
};

TEST_F(ExampleTests, SUM)
{
    int y = 20;
    int sum = 25;
    int expectedSum = GetX() + y;
    EXPECT_EQ(sum, MAC(GetX(), y));
    EXPECT_EQ(expectedSum, sum);
}

TEST_F(ExampleTests, SQ)
{
    int x = GetX();
    int sqNumber = 5;
    int expectedSquare = x * x;
    EXPECT_EQ(sqNumber, square(x));
    EXPECT_EQ(expectedSquare, sqNumber);
}