#include <iostream>

#include "engine/Game.h"

Game::Game()
{
    currentState = GameState();
    std::cout << "Game state initialised with initial player position: " << currentState.getPlayerLocation() << std::endl;
    currentFrame = 0;
    std::cout << "Initialised current frame to value: " << currentFrame << std::endl;
}

GameState Game::step()
{
    currentFrame += 1;
    std::cout << "Game simulation stepped, processing frame: " << currentFrame << std::endl;
    currentState.setPlayerLocation(currentState.getPlayerLocation() + 1);
    std::cout << "Player location moved 1 unit to the right, new location: " << currentState.getPlayerLocation() << std::endl;
    return currentState;
}
