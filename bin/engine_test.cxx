#include <cmath>
#include <iostream>
#include <string>

#include "FightRLConfig.h"
#include "engine.h"

int main(int argc, char* argv[])
{
    std::cout << argv[0] << " Version " << FightRL_VERSION_MAJOR << "."
            << FightRL_VERSION_MINOR << std::endl;
    std::cout << "Creating game object..." << std::endl;
    Game game("test");
    
    GameState state;

    while (true) {
    // // for (int i = 0; i < 500; i++) {
    //     // std::cout << "Stepping game engine" << std::endl;
        state = game.step();
        if (state.getQuitRequested()) {
            break;
        }
        // std::cout << "Player location from engine test: " << state.getPlayerLocation() << std::endl;
    }

    return 0;
}
