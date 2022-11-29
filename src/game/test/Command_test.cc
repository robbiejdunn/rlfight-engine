#include <gtest/gtest.h>

#include "game/input/InputHandler.h"
#include "game/input/commands/MoveRightCommand.h"
#include "game/GameActor.h"

// Demonstrate some basic assertions.
TEST(CommandTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

TEST(CommandTest, CommandExecute) {
    InputHandler ih;
    MoveRightCommand mrc;
    ih.bindButtonX(&mrc);

    GameActor actor;

    Command *command = ih.handleInput();
    command->execute(actor);

    // EXPECT_EQ(testFunctionRes, 3);
    // EXPECT_NE(testFunctionRes, 99);
    // ih.handleInput();
    EXPECT_STREQ("hi", "hi");
    // ih.handleInput();
}
