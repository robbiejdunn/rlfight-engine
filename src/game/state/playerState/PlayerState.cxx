#include <iostream>

#include "SDL.h"

#include "game/state/playerState/PlayerState.h"

PlayerState::PlayerState(std::string name, bool isBlockingAction)
: name(name)
, isBlockingAction(isBlockingAction)
{
    SDL_Log("Player state created");
    SDL_Log(name.c_str());
}

PlayerState::~PlayerState()
{
    SDL_Log("Player state GC");
}
