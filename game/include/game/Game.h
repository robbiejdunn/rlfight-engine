#pragma once

#include "GameState.h"
#include "Application.h"

class Game
{
public:
    Game();
    GameState step();

private:
    GameState currentState;
    int currentFrame;
    Application application;
};
