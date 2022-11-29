#pragma once
#include <iostream>

class MoveRightCommand : public Command
{
    public:
        virtual void execute(GameActor& actor) {
            actor.moveRight();
            std::cout << "Executed move right command" << std::endl;
        }
};
