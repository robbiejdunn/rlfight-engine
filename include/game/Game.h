#pragma once
#include <memory> // PImpl
#include "GameState.h"

class GameImpl;

class Game
{
public:
    // Constructor and destructor
    ~Game();
    Game(std::string name);
    

    // Assignment operator and copy constructor
    Game(const Game &other);
    Game &operator=(Game rhs);

    GameState step();

private:
    class Impl;
    std::unique_ptr<Impl> pimpl;
};
