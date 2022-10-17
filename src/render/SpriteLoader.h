#pragma once

#include "SDL.h"

class SpriteLoader
{
public:
    SpriteLoader(SDL_Renderer *appRenderer);
    void loadFileToTexture();

private:
    SDL_Renderer *renderer;
};
