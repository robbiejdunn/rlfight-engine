#include <iostream>

#include "game/Game.h"
#include "render/image_loader.h"
#include "render/Application.h"
#include "input/InputReceiver.h"


struct Game::Impl {
    Impl(std::string name)
        : name(std::move(name)){};

    ~Impl() = default;

    void welcomeMessage()
    {
        std::cout << "Welcome, " << name << std::endl;
        std::cout << "Game state initialised with initial player position: " << currentState.getPlayerLocation() << std::endl;
        currentFrame = 0;
        std::cout << "Initialised current frame to value: " << currentFrame << std::endl;
    }

    GameState step()
    {
        application.beginFpsCount();
        inputReceiver.getPlayerInput();

        if (inputReceiver.getQuitProgram()) {
            currentState.setQuitRequested(true);
        }

        currentFrame += 1;
        // std::cout << "Game simulation stepped, processing frame: " << currentFrame << std::endl;
        if (inputReceiver.getLeftKeyHeld()) {
            currentState.setPlayerLocation(currentState.getPlayerLocation() - 1);
        }
        else if (inputReceiver.getRightKeyHeld()) {
            currentState.setPlayerLocation(currentState.getPlayerLocation() + 1);
        }
        // std::cout << "Player location moved 1 unit to the right, new location: " << currentState.getPlayerLocation() << std::endl;
        application.render(currentState.getPlayerLocation());

        imageLoader::testFunction();
        // std::cout << "Rendered" << std::endl;
        return currentState;
    }
    
    std::string name;
    GameState currentState;
    int currentFrame;
    Application application;
    InputReceiver inputReceiver;
};

Game::Game(std::string name)
    : pimpl(new Impl(move(name)))
{
    pimpl->welcomeMessage();
}

Game::~Game() = default;

// Assignment operator and Copy constructor
Game::Game(const Game& other)
    : pimpl(new Impl(*other.pimpl))
{
}

Game& Game::operator=(Game rhs)
{
    std::swap(pimpl, rhs.pimpl);
    return *this;
}

GameState Game::step()
{
    return pimpl->step();
}
