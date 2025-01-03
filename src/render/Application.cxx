#include <iostream>

#include "SDL_image.h"

#include "render/Application.h"

Application::Application()
{
    SDL_Init(SDL_INIT_VIDEO);
    IMG_Init(IMG_INIT_PNG);

    window = SDL_CreateWindow(
        "FightRL",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        640,
        480,
        0
    );

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
    
    std::cout << "Leaving application initialiser" << std::endl;

    std::cout << "Creating sprite" << std::endl;
    Sprite sra(renderer, "assets/fire-knight/idle/idle_1.png");
    sprite = &sra;
    std::cout << "Sprite created" << std::endl;

    // Application::

    // SpriteLoader sl = SpriteLoader(renderer);
    // testSprite = sl.getSprite();
    // Sprite ssl = *testSprite;
    // ssl.render(renderer, 300, 300, 1.0);
    // SDL_Quit();
}

// used to measure time for each frame to be simulated and rendered to calculate FPS
void Application::beginFpsCount()
{
    frameStartTime = SDL_GetTicks();
}

void Application::render(int xPosition)
{
    SDL_Delay(16);
    SDL_RenderClear(renderer);

    SDL_Rect rect;
    rect.x = xPosition;
    rect.y = 150;
    rect.w = 200;
    rect.h = 200;

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
    SDL_RenderDrawRect(renderer, &rect);

    // testSprite->render(renderer, 300, 300, 1.0);

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
    // std::cout << "Starting render presenting" << std::endl;
    try {
        SDL_RenderPresent(renderer);
    }
    catch(std::exception& e) {
        std::cout << SDL_GetError() << std::endl;
    }
    // std::cout << "Render presenting" << std::endl;
}

// teardown for when object leaves scope
Application::~Application()
{
    SDL_Log("Application GC");
    // SDL_DestroyTexture(testTexture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    IMG_Quit();
    SDL_Quit();
}
