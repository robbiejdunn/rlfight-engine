#pragma once

class PlayerState
{
public:
    virtual ~PlayerState() {}
    virtual void update(Player& player) {}
    virtual void handleInput(Player& player, Input input) {}
};
