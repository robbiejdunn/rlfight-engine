#include <iostream>

#include "SDL.h"

#include "input/InputReceiver.h"

InputReceiver::InputReceiver()
{
    std::cout << "Input receiver constructed" << std::endl;
}

PlayerInput InputReceiver::getPlayerInput()
{
    std::cout << "Getting user input..." << std::endl;
    while (SDL_PollEvent(&inputEvent)) {
        std::cout << "Checking input type" << std::endl;
        switch(inputEvent.type) {
            case SDL_KEYDOWN:
                std::cout << "Received a keyboard event" << std::endl;
                break;
            default:
                std::cout << "Unhandled input type" << std::endl;
                break;
        }
    }
    std::cout << "User input event queue processed" << std::endl;
    return PlayerInput::DirRight;
}
