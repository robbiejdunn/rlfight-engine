#include "InputHandler.h"
#include <iostream>

void InputHandler::bindButtonX(Command* command)
{
    std::cout << "Changing binding for button X" << std::endl;
    buttonX_ = command;
}

Command* InputHandler::handleInput()
{
    return buttonX_;
}
