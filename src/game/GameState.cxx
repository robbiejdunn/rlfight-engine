#include "game/GameState.h"

GameState::GameState(bool qr /*=false*/)
{
    playerLocation = 0;
    quitRequested = qr;
}

void GameState::setPlayerLocation(int newPlayerLocation)
{
    playerLocation = newPlayerLocation;
}

void GameState::setQuitRequested(bool newQuitRequested)
{
    quitRequested = newQuitRequested;
}
