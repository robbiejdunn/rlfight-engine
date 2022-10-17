#include "SpriteLoader.h"
// #include "SDL2IMAGE.h"
#include "SDL_image.h"

SpriteLoader::SpriteLoader(SDL_Renderer *appRenderer)
{
    IMG_Init(IMG_INIT_PNG);
    renderer = appRenderer;
}

SDL_Texture* SpriteLoader::loadFileToTexture()
{
    SDL_Texture *texture;
    texture = IMG_LoadTexture(renderer, "assets/test.png");
    SDL_Log("Loaded successfully");
    return texture;
}

SpriteLoader::~SpriteLoader()
{
    IMG_Quit();
}