#include <gtest/gtest.h>
#include "calc.h"

// Test for calculate_case1
TEST(CalculateCase1, PositiveInputs) {
    EXPECT_DOUBLE_EQ(calculate_case1(2.0, 5), 60.0);  // Replace with correct expected value
}

TEST(CalculateCase1, NegativeInputs) {
    EXPECT_DOUBLE_EQ(calculate_case1(-1.0, 5), 0.0); // Replace with correct expected value
}

// Test for calculate_case2
TEST(CalculateCase2, BasicTest) {
    EXPECT_GT(calculate_case2(3.0, 2), 0.0); // Test that result is positive
}

// Test for y
TEST(FunctionY, Case1) {
    EXPECT_EQ(y(2.0, 4), calculate_case1(2.0, 4));
}

TEST(FunctionY, Case2) {
    EXPECT_EQ(y(4.0, 4), calculate_case2(4.0, 4));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}