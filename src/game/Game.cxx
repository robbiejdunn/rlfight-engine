#include <iostream>

#include "game/Game.h"
#include "render/image_loader.h"
#include "game/GameImpl.h"

Game::Game()
{
    GameImpl gi = GameImpl();
    gameImpl = &gi;
}

GameState Game::step()
{
    return gameImpl::step();
}
