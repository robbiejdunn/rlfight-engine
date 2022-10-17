# RLFight Game Engine

## Requirements

Only tested on linux (Ubuntu). Depends on:
- cmake
- libsdl2-dev
- libsdl2-image-dev
- g++

## Usage

Create a build directory in the project root if it does not already exist.
```
mkdir build
```

Navigate to the build directory and run CMake to generate a native build system.
```
cd build
cmake ../
```

Then call that build system to compile & link the project.
```
cmake --build .
```

Use the built `RLFight` as needed.
```
./RLFight
```

## Components

The following components are provided:
- Deterministic gameplay engine
- Deterministic 2D physics engine
- Input reading from keyboard using SDL2
- 2D rendering for all common OS (windows, mac, linux, android, & iOS) using SDL2
- Audio playback using SDL2

## Links

https://www.reddit.com/r/gamedev/comments/cbqpe6/fighting_game_state_machine/

https://www.aleksandrhovhannisyan.com/blog/implementing-a-finite-state-machine-in-cpp/

https://eliasdaler.github.io/using-cmake/#managing-dependencies

https://stackoverflow.com/questions/65586352/is-it-possible-to-use-fetchcontent-or-an-equivalent-to-add-a-library-that-has-no

https://trenki2.github.io/blog/2017/06/02/using-sdl2-with-cmake/
