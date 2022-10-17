#pragma once

#include "render/Application.h"
#include "input/InputReceiver.h"
#include "render/image_loader.h"
#include "game/GameState.h"

class GameImpl
{
public:
    GameImpl();
    GameState step();
private:
    GameState currentState;
    int currentFrame;
    Application application;
    InputReceiver inputReceiver;
};
