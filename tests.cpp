#include <gtest/gtest.h>
#include "bit.hpp"

TEST(test_1, correct_number)
{
    ASSERT_TRUE(bit(10) == "00000000000000000000000000001010");
}
TEST(test_2, correct_number)
{
    ASSERT_TRUE(bit(1) == "00000000000000000000000000000001");
}
TEST(test_3, correct_number)
{
    ASSERT_TRUE(bit(99) == "00000000000000000000000001100011");
}
TEST(test_4, correct_number)
{
    ASSERT_TRUE(bit(12345) == "00000000000000000011000000111001");
}
TEST(test_5, correct_number)
{
    ASSERT_TRUE(bit(4294967295) == "11111111111111111111111111111111");
}
TEST(test_6, correct_number)
{
    ASSERT_TRUE(bit(3181346815) == "10111101100111110111111111111111");
}
TEST(test_7, correct_number)
{
    ASSERT_TRUE(bit(-1000) == "The number doesn`t satisfy the conditions.");
}
TEST(test_8, correct_number)
{
    ASSERT_TRUE(bit(-4294967296) == "The number doesn`t satisfy the conditions.");
}
TEST(test_9, correct_number)
{
    ASSERT_TRUE(bit(-1) == "The number doesn`t satisfy the conditions.");
}
TEST(test_10, correct_number)
{
    ASSERT_TRUE(bit(10000000000000000) == "The number doesn`t satisfy the conditions.");
}
TEST(test_11, correct_number)
{
    ASSERT_TRUE(bit(4294967296) == "The number doesn`t satisfy the conditions.");
}
TEST(test_12, correct_number)
{
    ASSERT_TRUE(bit(429496729774743837) == "The number doesn`t satisfy the conditions.");
}
TEST(test_13, correct_number)
{
    ASSERT_TRUE(bit(0) == "00000000000000000000000000000000");
}