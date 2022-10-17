#pragma once

#include "SDL.h"

#include "PlayerInput.h"

class InputReceiver
{
public:
    InputReceiver();
    void getPlayerInput();
    inline bool getLeftKeyHeld() const { return leftKeyHeld; }
    inline bool getRightKeyHeld() const { return rightKeyHeld; }
    inline bool getQuitProgram() const { return quitProgram; }

private:
    SDL_Event inputEvent;
    bool leftKeyHeld = false;
    bool rightKeyHeld = false;
    bool quitProgram = false;
};
