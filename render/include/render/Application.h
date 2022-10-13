#pragma once

#include "SDL.h"

class Application
{
public:
    Application();
    void render();
    ~Application();

private:
    SDL_Window *window;
    SDL_Renderer *renderer;

};
