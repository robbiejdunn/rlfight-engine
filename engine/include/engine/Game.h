#pragma once

#include "GameState.h"

class Game
{
public:
    Game();
    GameState step();

private:
    GameState currentState;
    int currentFrame;
};
