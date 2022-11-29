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

void InputHandler::handleInput()
{
    std::cout << "Test123" << std::endl;
    buttonX_->execute();
}
