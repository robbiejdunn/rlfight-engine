#pragma once

#include "GameState.h"

class GameImpl;

class Game
{
public:
    GameImpl *gameImpl;
    Game();
    GameState step();
};
