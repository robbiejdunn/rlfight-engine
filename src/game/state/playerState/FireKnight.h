#pragma once

#include "game/state/playerState/PlayerState.h"

enum struct FireKnightStates
{
    Idle
};

struct FireKnightStatesFinal
{
    PlayerState idle;
};

class FireKnightStates
{
public:
    FireKnightStates();
    ~FireKnightStates();

    PlayerState *getIdleState();

private:
    PlayerState idle;
};
