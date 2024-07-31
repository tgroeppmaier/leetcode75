#include <gtest/gtest.h>
#include "greatest_common_divisor_of_Strings.cpp" // Include the file with the function

// Test case for testDivisor function
TEST(TestDivisorTest, HandlesValidDivisor) {
    string str1 = "abab";
    string divisorStr2 = "ab";
    EXPECT_TRUE(testDivisor(str1, divisorStr2));
}

TEST(TestDivisorTest, HandlesInvalidDivisor) {
    string str1 = "abab";
    string divisorStr2 = "abc";
    EXPECT_FALSE(testDivisor(str1, divisorStr2));
}

TEST(TestDivisorTest, HandlesEmptyString) {
    string str1 = "";
    string divisorStr2 = "";
    EXPECT_TRUE(testDivisor(str1, divisorStr2));
}

TEST(TestDivisorTest, HandlesNonDivisor) {
    string str1 = "ababab";
    string divisorStr2 = "ab";
    EXPECT_TRUE(testDivisor(str1, divisorStr2));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}