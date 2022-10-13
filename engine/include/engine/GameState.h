#pragma once

class GameState
{
public:
    GameState();
    void setPlayerLocation(int newPlayerLocation);
    inline int getPlayerLocation() const { return playerLocation; }

private:
    int playerLocation;
};
