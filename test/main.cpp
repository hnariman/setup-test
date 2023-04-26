#include <gtest/gtest.h>
/* #include "add.hpp" */

/* TEST(Sample, check){ */
/*   int result = add(1,2); */
/*   EXPECT_EQ(result, 3 ); */
/*   EXPECT_EQ(add(1,4), 3 ); */
/* } */
int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

