#include "SpriteLoader.h"

#include "SDL_image.h"

SpriteLoader::SpriteLoader(SDL_Renderer *renderer)
{
    IMG_Init(IMG_INIT_PNG);
    Sprite s(renderer, "assets/test.png");
    sprite = &s;
}

SpriteLoader::~SpriteLoader()
{
    IMG_Quit();
}

Sprite *SpriteLoader::getSprite()
{
    return sprite;
}
