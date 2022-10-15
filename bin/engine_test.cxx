#include <cmath>
#include <iostream>
#include <string>

#include "RLFightConfig.h"
#include "engine.h"

int main(int argc, char* argv[])
{
    std::cout << argv[0] << " Version " << RLFight_VERSION_MAJOR << "."
            << RLFight_VERSION_MINOR << std::endl;
    std::cout << "Creating game object..." << std::endl;
    Game game;
    
    GameState state;

    for (int i = 0; i < 100; i++) {
        std::cout << "Stepping game engine" << std::endl;
        state = game.step();
        std::cout << "Player location from engine test: " << state.getPlayerLocation() << std::endl;
    }

    return 0;
}
