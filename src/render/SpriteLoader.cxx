#include "SpriteLoader.h"

#include "SDL_image.h"

SpriteLoader::SpriteLoader(SDL_Renderer *renderer)
    : sprite(renderer, "assets/test.png")
{
    IMG_Init(IMG_INIT_PNG);
}

SpriteLoader::~SpriteLoader()
{
    SDL_Log("Sprite loader GC");
    IMG_Quit();
}

Sprite *SpriteLoader::getSprite()
{
    return &sprite;
}
