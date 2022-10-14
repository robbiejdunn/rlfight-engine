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
    
    GameState state;
    Application app = Application();

    for (int i = 0; i < 600; i++) {
        app.beginFpsCount();
        std::cout << "Stepping game engine" << std::endl;
        state = game.step();
        std::cout << "Player location from engine test: " << state.getPlayerLocation() << std::endl;
        app.render(state.getPlayerLocation());
    }

    return 0;
}
