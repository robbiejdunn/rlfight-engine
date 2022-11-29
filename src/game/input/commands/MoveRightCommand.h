// #include "game/input/Command.h"
#include <iostream>

class MoveRightCommand : public Command
{
    public:
        virtual void execute() {
            std::cout << "Executed move right command" << std::endl;
        }
};
