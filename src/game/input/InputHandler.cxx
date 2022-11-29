#include "InputHandler.h"
#include <iostream>

InputHandler::InputHandler()
{
    std::cout << "Input Handler initialised" << std::endl;
}

void InputHandler::bindButtonX(Command* command)
{
    std::cout << "Changing binding for button X" << std::endl;
    buttonX_ = command;
}

Command* InputHandler::handleInput()
{
    return buttonX_;
}
