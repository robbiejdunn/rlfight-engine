#include <iostream>

#include "game/Game.h"  

Game::Game()
{
    std::cout << "Game state initialised with initial player position: " << currentState.getPlayerLocation() << std::endl;
    currentFrame = 0;
    std::cout << "Initialised current frame to value: " << currentFrame << std::endl;
}

GameState Game::step()
{
    application.beginFpsCount();
    inputReceiver.getPlayerInput();

    if (inputReceiver.getQuitProgram()) {
        currentState.setQuitRequested(true);
    }

    currentFrame += 1;
    // std::cout << "Game simulation stepped, processing frame: " << currentFrame << std::endl;
    if (inputReceiver.getLeftKeyHeld()) {
        currentState.setPlayerLocation(currentState.getPlayerLocation() - 1);
    }
    else if (inputReceiver.getRightKeyHeld()) {
        currentState.setPlayerLocation(currentState.getPlayerLocation() + 1);
    }
    // std::cout << "Player location moved 1 unit to the right, new location: " << currentState.getPlayerLocation() << std::endl;
    application.render(currentState.getPlayerLocation());
    // std::cout << "Rendered" << std::endl;
    return currentState;
}
