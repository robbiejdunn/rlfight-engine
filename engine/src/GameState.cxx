#include "engine/GameState.h"

GameState::GameState()
{
    playerLocation = 0;
}

void GameState::setPlayerLocation(int newPlayerLocation)
{
    playerLocation = newPlayerLocation;
}
