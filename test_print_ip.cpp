/// @file test_print_ip.cpp
/// @brief Тестирование функции print_ip(const T& value)

// Local
#include "print_ip.h"

// Google
#include <gtest/gtest.h>

TEST(PrintIpAddress, int8_t_type)
{
    ::testing::internal::CaptureStdout();
    print_ip(int8_t{-1});
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "255\n");
}

TEST(PrintIpAddress, int16_t_type)
{
    testing::internal::CaptureStdout();
    print_ip(int16_t{0});
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "0.0\n");
}

TEST(PrintIpAddress, int32_t_type)
{
    testing::internal::CaptureStdout();
    print_ip(int32_t{2130706433});
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "127.0.0.1\n");
}

TEST(PrintIpAddress, int64_t_type)
{
    testing::internal::CaptureStdout();
    print_ip(int64_t{8875824491850138409});
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "123.45.67.89.101.112.131.41\n");
}

TEST(PrintIpAddress, string_type)
{
    testing::internal::CaptureStdout();
    print_ip(std::string{"Hello, World!"});
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "Hello, World!\n");
}

TEST(PrintIpAddress, vector_type)
{
    testing::internal::CaptureStdout();
    print_ip(std::vector<int>{100, 200, 300, 400});
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "100.200.300.400\n");
}

TEST(PrintIpAddress, list_type)
{
    testing::internal::CaptureStdout();
    print_ip(std::list<short>{400, 300, 200, 100});
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "400.300.200.100\n");
}