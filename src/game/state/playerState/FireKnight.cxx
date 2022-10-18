#include "game/state/playerState/FireKnight.h"

FireKnightStates::FireKnightStates()
:idle(PlayerState::PlayerState(
    "idle",
    // Animation(
    //     ("1", "assets/fire-knight/idle/idle_1.png"),
    //     ("2", "assets/fire-knight/idle/idle_2.png"),
    //     ("3", "assets/fire-knight/idle/idle_3.png"),
    //     ("4", "assets/fire-knight/idle/idle_4.png"),
    //     ("5", "assets/fire-knight/idle/idle_5.png"),
    //     ("6", "assets/fire-knight/idle/idle_6.png"),
    //     ("7", "assets/fire-knight/idle/idle_7.png"),
    //     ("8", "assets/fire-knight/idle/idle_8.png")
    // ),
    false
)
{ }