#pragma once

#include "SDL.h"

class SpriteLoader
{
public:
    SpriteLoader(SDL_Renderer *appRenderer);
    ~SpriteLoader();
    SDL_Texture *loadFileToTexture();

private:
    SDL_Renderer *renderer;
};
