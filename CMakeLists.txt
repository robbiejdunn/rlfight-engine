cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(RLFight VERSION 0.4)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file(RLFightConfig.h.in RLFightConfig.h)

# add the game engine
# TODO: figure out how to avoid listing every file
add_library(
    engine
    src/game/Game.cxx
    src/game/GameState.cxx
    src/render/Application.cxx
)

# SDL2
find_package(SDL2 REQUIRED)
target_link_libraries(
    engine
    PUBLIC
    ${SDL2_LIBRARIES}
)

target_include_directories(
    engine
    INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${SDL2_INCLUDE_DIRS}
)

target_include_directories(
    engine
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${SDL2_INCLUDE_DIRS}
)

list(APPEND EXTRA_LIBS engine)

# add the executable
add_executable(RLFight bin/engine_test.cxx)

target_link_libraries(RLFight PUBLIC ${EXTRA_LIBS})

target_include_directories(RLFight PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )
