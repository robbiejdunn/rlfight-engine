#pragma once

#include "SDL.h"

class Sprite
{
public:
    Sprite(SDL_Renderer *renderer, const char* fileLoc);
    ~Sprite();
    void render(SDL_Renderer *renderer, int x, int y, double scale);
    // Sprite(const Sprite &);
    // Sprite(Sprite &&);

private:
    SDL_Texture *texture;
    int textureWidth;
    int textureHeight;
    SDL_Rect srcRect;
    SDL_Rect destRect;
    const char *originalName;
};
