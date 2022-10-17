#include "Sprite.h"

#include "SDL_image.h"

Sprite::Sprite(SDL_Renderer *renderer, const char* fileLoc)
{
    texture = IMG_LoadTexture(renderer, fileLoc);
    int textureWidth, textureHeight;
    SDL_QueryTexture(texture, NULL, NULL, &textureWidth, &textureHeight);

    srcRect.x = 0;
    srcRect.y = 0;
    srcRect.w = textureWidth;
    srcRect.h = textureHeight;

    SDL_Log("Loaded successfully");
}

Sprite::~Sprite()
{
    SDL_DestroyTexture(texture);
}

void Sprite::render(SDL_Renderer *renderer, int x, int y, double scale = 1.0)
{
    SDL_Log("Rendering sprite");
    destRect.x = x;
    SDL_Log("X", destRect.x);
    destRect.y = y;
    destRect.w = textureWidth * scale;
    destRect.h = textureHeight * scale;
    SDL_RenderCopy(renderer, texture, &srcRect, &destRect);
}
