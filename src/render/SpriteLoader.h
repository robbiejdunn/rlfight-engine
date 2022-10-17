#pragma once

#include "SDL.h"
#include "render/Sprite.h"

class SpriteLoader
{
public:
    SpriteLoader(SDL_Renderer *renderer);
    ~SpriteLoader();
    Sprite *getSprite();

private:
    Sprite sprite;
};
