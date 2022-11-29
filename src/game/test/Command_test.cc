#include <gtest/gtest.h>

#include "src/game/input/InputHandler.h"

// Demonstrate some basic assertions.
TEST(CommandTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

TEST(CommandTest, CommandExecute) {
    InputHandler ih = InputHandler();
    // ih.handleInput();
    EXPECT_STREQ("hi", "hi");
    // ih.handleInput();
}
