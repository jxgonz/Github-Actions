#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

TEST(areaSuite, regArea) {
   Rectangle rect = Rectangle(2, 3);
   EXPECT_EQ(6, rect.area());
}

TEST(areaSuite, zeroArea) {
   Rectangle rect = Rectangle(0, 10);
   EXPECT_EQ(0, rect.area());
}

TEST(areaSuite, oneArea) {
   Rectangle rect = Rectangle(1, 10);
   EXPECT_EQ(10, rect.area());
}

TEST(areaSuite, largeArea) {
   Rectangle rect = Rectangle(100, 200);
   EXPECT_EQ(20000, rect.area());
}

TEST(areaSuite, smallWidth) {
   Rectangle rect = Rectangle(2, 100);
   EXPECT_EQ(200, rect.area());
}

TEST(areaSuite, smallHeight) {
   Rectangle rect = Rectangle(100, 2);
   EXPECT_EQ(200, rect.area());
}





TEST(constructorSuite, regRect) {
   Rectangle rect = Rectangle(2, 3);
   EXPECT_EQ(2, rect.getWidth());
   EXPECT_EQ(3, rect.getHeight());  
}

TEST(constructorSuite, zeroRect) {
   Rectangle rect = Rectangle(0, 10);
   EXPECT_EQ(0, rect.getWidth());
   EXPECT_EQ(10, rect.getHeight());
}

TEST(constructorSuite, oneRect) {
   Rectangle rect = Rectangle(1, 10);
   EXPECT_EQ(1, rect.getWidth());
   EXPECT_EQ(10, rect.getHeight());
}

TEST(constructorSuite, largeRect) {
   Rectangle rect = Rectangle(100, 200);
   EXPECT_EQ(100, rect.getWidth());
   EXPECT_EQ(200, rect.getHeight());
}



int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

