#include <iostream>

#include "SDL.h"

#include "render/Application.h"

Application::Application()
{
    SDL_Init(SDL_INIT_VIDEO);

    window = SDL_CreateWindow(
        "SDL2Test",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        640,
        480,
        0
    );

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
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

    auto frameTime = SDL_GetTicks() - frameStartTime;
    float fps = (frameTime > 0) ? 1000.0f / frameTime : 0.0f;
    std::cout << "FPS calculated based on frame time: " << fps << std::endl;

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
    SDL_RenderPresent(renderer);
}

// teardown for when object leaves scope
Application::~Application()
{
    SDL_DestroyWindow(window);
    SDL_Quit();
}
