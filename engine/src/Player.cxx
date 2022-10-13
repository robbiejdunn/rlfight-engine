#include "Player.h"

Player::Player()
{
    health = 100;
    hurtbox = AABB(100, 100, 500);
}

void Player::setHealth(int newHealth)
{
    health = newHealth;
}

void Player::setHurtbox(AABB newHurtbox)
{
    hurtbox = newHurtbox;
}

bool Player::canAct()
{
    return true;
}
