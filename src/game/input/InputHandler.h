#include "game/input/Command.h"

class InputHandler
{
public:
    InputHandler();
    void handleInput();
    void bindButtonX(Command *command);

private:
    Command* buttonX_;
};
