#include <iostream>

#include "SDL.h"

#include "input/InputReceiver.h"

InputReceiver::InputReceiver()
{
    std::cout << "Input receiver constructed" << std::endl;
}

void InputReceiver::getPlayerInput()
{
    while (SDL_PollEvent(&inputEvent)) {
        switch(inputEvent.type) {
            case SDL_KEYDOWN:
                switch(inputEvent.key.keysym.sym) {
                    case SDLK_RIGHT:
                        // std::cout << "Right key pressed" << std::endl;
                        rightKeyHeld = true;
                        break;
                    case SDLK_LEFT:
                        // std::cout << "Left key pressed" << std::endl;
                        leftKeyHeld = true;
                        break;
                    default:
                        break;
                }
                break;
            case SDL_KEYUP:
                switch(inputEvent.key.keysym.sym) {
                    case SDLK_RIGHT:
                        // std::cout << "Right key released" << std::endl;
                        rightKeyHeld = false;
                        break;
                    case SDLK_LEFT:
                        // std::cout << "Left key released" << std::endl;
                        leftKeyHeld = false;
                        break;
                    default:
                        break;
                }
                break;
            case SDL_QUIT:
                std::cout << "Quit program pressed" << std::endl;
                quitProgram = true;
                break;
            default:
                break;
        }
    }
}
