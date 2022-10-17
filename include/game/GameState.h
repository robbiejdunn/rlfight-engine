#pragma once

class GameState
{
public:
    GameState(bool qr = false);
    void setPlayerLocation(int newPlayerLocation);
    inline int getPlayerLocation() const { return playerLocation; }
    inline bool getQuitRequested() const { return quitRequested; }
    void setQuitRequested(bool newQuitRequested);

private:
    int playerLocation;
    bool quitRequested;
};
