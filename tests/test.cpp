#include "../header/rectangle.hpp"

#include "gtest/gtest.h"

TEST(Perimeter, zeroWidth) {
    Rectangle R;
    R.set_width(0);
    R.set_height(5);
    EXPECT_TRUE(R.perimeter() == 10);
}

TEST(Perimeter, small) {
    Rectangle R;
    R.set_width(1);
    R.set_height(1);
    EXPECT_TRUE(R.perimeter() == 4);
}

TEST(Perimeter, doubledig) {
    Rectangle R;
    R.set_width(10);
    R.set_height(11);
    EXPECT_TRUE(R.perimeter() == 42);
}

TEST(Perimeter, zeroHeight) {
    Rectangle R;
    R.set_width(7);
    R.set_height(0);
    EXPECT_TRUE(R.perimeter() == 14);
}

TEST(Perimeter, largeNumber) {
    Rectangle R;
    R.set_width(100);
    R.set_height(100);
    EXPECT_TRUE(R.perimeter() == 400);
} 

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
