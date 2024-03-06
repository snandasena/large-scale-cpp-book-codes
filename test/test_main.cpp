#include <gtest/gtest.h>

TEST(MyLibraryTest, TestFunction)
{
// Test your library function here
    ASSERT_TRUE(true);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
