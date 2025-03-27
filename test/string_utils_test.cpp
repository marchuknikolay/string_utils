#include "string_utils.h"

#include <gtest/gtest.h>

TEST(StringUtilsTest, ToUpper) {
    EXPECT_EQ("HELLO", StringUtils::ToUpper("hello"));
    EXPECT_EQ("WORLD", StringUtils::ToUpper("WORLD"));
    EXPECT_EQ("BOOST", StringUtils::ToUpper("Boost"));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    
    return RUN_ALL_TESTS();
}