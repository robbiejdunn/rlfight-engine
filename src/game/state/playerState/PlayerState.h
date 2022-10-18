#pragma once

class PlayerState
{
public:
    PlayerState(std::string name, bool isBlockingAction);
    ~PlayerState();

private:
    std::string name;
    // Animation animation;
    bool isBlockingAction;
};
