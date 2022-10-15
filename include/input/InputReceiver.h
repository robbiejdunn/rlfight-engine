#pragma once

#include "SDL.h"

#include "PlayerInput.h"

class InputReceiver
{
public:
    InputReceiver();
    PlayerInput getPlayerInput();

private:
    SDL_Event inputEvent;
};
