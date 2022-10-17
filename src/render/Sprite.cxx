#include "Sprite.h"
#include <iostream>

#include "SDL_image.h"

Sprite::Sprite(SDL_Renderer *renderer, const char* fileLoc)
{
    originalName = fileLoc;
    std::cout << "OG = " << originalName << std::endl;
    texture = IMG_LoadTexture(renderer, fileLoc);
    int textureWidth, textureHeight;
    SDL_QueryTexture(texture, NULL, NULL, &textureWidth, &textureHeight);

    srcRect.x = 0;
    srcRect.y = 0;
    srcRect.w = textureWidth;
    srcRect.h = textureHeight;
    std::cout << "Texture width = " << textureWidth << std::endl;
    std::cout << "SrcRect.w = " << srcRect.w << std::endl;
    std::cout << "Texture height = " << textureHeight << std::endl;
    SDL_Log("Loaded successfully");
    // SDL_Quit();
}

Sprite::~Sprite()
{
    SDL_Log("Garbage collecting Sprite");
    SDL_Log(originalName);
    SDL_DestroyTexture(texture);
}

void Sprite::render(SDL_Renderer *renderer, int x, int y, double scale = 1.0)
{
    SDL_Log("Rendering sprite");
    std::cout << originalName << std::endl;
    std::cout << "SrcRect.w = " << srcRect.w << std::endl;
    destRect.x = 200;
    std::cout << "X value = " << destRect.x << std::endl;
    destRect.y = 200;
    std::cout << "y value = " << destRect.y << std::endl;
    destRect.w = textureWidth;
    std::cout << "Width = " << textureWidth << std::endl;
    std::cout << "destRect w = " << destRect.w << std::endl;
    destRect.h = textureHeight;
    std::cout << "Height = " << textureHeight << std::endl;
    SDL_RenderCopy(renderer, texture, &srcRect, &destRect);
}
