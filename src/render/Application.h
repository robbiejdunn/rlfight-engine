#pragma once

#include "SDL.h"
#include "SpriteLoader.h"

class Application
{
public:
    Application();
    void render(int xPosition);
    void beginFpsCount();
    int getUserInput();
    SDL_Texture *loadSprites();
    ~Application();

private:
    SDL_Window *window;
    SDL_Renderer *renderer;
    Uint32 frameStartTime;
    SpriteLoader *spriteLoader;
    SDL_Texture *testTexture;
};
