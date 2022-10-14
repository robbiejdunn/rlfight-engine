#pragma once

#include "geometry/AABB.h"

class Player
{
public:
    Player();
    inline int getHealth() const { return health; }
    void setHealth(int newHealth);
    inline AABB getHurtbox() const { return hurtbox; }
    void setHurtbox(AABB newHurtbox);
    bool canAct();

private:
    int health;
    AABB hurtbox;
    // Character character;

};
