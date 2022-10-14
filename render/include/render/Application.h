#pragma once

#include "SDL.h"

class Application
{
public:
    Application();
    void render(int xPosition);
    void beginFpsCount();
    int getUserInput();
    ~Application();

private:
    SDL_Window *window;
    SDL_Renderer *renderer;
    Uint32 frameStartTime;
    SDL_Event inputEvent;
};
