#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

#include "SpriteLoader.h"
// #include "SDL2IMAGE.h"
#include "SDL_image.h"

SpriteLoader::SpriteLoader(SDL_Renderer *appRenderer)
{
    // SDL_IMG_Init(IMG_INIT_PNG);
    renderer = appRenderer;
}

void SpriteLoader::loadFileToTexture()
{
    SDL_Texture *texture;
    texture = IMG_LoadTexture(renderer, "assets/test.png");
    SDL_Log("Loaded successfully");
}