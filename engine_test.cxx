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
    int userInput;
    Application app = Application();

    for (int i = 0; i < 100; i++) {
        app.beginFpsCount();
        userInput = app.getUserInput();
        std::cout << "Stepping game engine" << std::endl;
        state = game.step();
        std::cout << "Player location from engine test: " << state.getPlayerLocation() << std::endl;
        app.render(state.getPlayerLocation());
    }

    return 0;
}
