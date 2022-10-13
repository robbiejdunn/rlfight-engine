// A simple program that computes the square root of a number
#include <cmath>
#include <iostream>
#include <string>

#include "EngineTestConfig.h"
#include "game.h"
#include "render.h"

int main(int argc, char* argv[])
{
    std::cout << argv[0] << " Version " << EngineTest_VERSION_MAJOR << "."
            << EngineTest_VERSION_MINOR << std::endl;
    std::cout << "Creating game object..." << std::endl;
    Game game;
    game = Game();
    std::cout << "Stepping game engine" << std::endl;
    GameState state;
    state = game.step();
    std::cout << "Player location from engine test: " << state.getPlayerLocation() << std::endl;

    Application();

    return 0;
}
