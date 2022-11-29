#pragma once
#include "game/input/Command.h"

class InputHandler
{
public:
    InputHandler();
    Command* handleInput();
    void bindButtonX(Command *command);

private:
    Command* buttonX_;
};
