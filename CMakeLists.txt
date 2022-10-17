cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(RLFight VERSION 0.5)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file(RLFightConfig.h.in RLFightConfig.h)

# https://cliutils.gitlab.io/modern-cmake/chapters/projects/submodule.html
find_package(Git QUIET)
if(GIT_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")
# Update submodules as needed
    option(GIT_SUBMODULE "Check submodules during build" ON)
    if(GIT_SUBMODULE)
        message(STATUS "Submodule update")
        execute_process(COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive
                        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
                        RESULT_VARIABLE GIT_SUBMOD_RESULT)
        if(NOT GIT_SUBMOD_RESULT EQUAL "0")
            message(FATAL_ERROR "git submodule update --init --recursive failed with ${GIT_SUBMOD_RESULT}, please checkout submodules")
        endif()
    endif()
endif()

# add the game engine
# TODO: figure out how to avoid listing every file
add_library(
    engine
    src/game/Game.cxx
    src/game/GameState.cxx
    src/render/Application.cxx
    src/input/InputReceiver.cxx
    src/render/image_loader.cxx
    src/game/GameImpl.cxx
)

# SDL2
find_package(SDL2 REQUIRED)
target_link_libraries(
    engine
    PUBLIC
    ${SDL2_LIBRARIES}
)

# stb


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
    ${CMAKE_CURRENT_SOURCE_DIR}/extern/stb
)

list(APPEND EXTRA_LIBS engine)

add_custom_target(copy_assets
    COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_CURRENT_LIST_DIR}/assets ${CMAKE_CURRENT_BINARY_DIR}/assets
)
add_dependencies(engine copy_assets)


# add the executable
add_executable(RLFight bin/engine_test.cxx)

target_link_libraries(RLFight PUBLIC ${EXTRA_LIBS})

target_include_directories(
    RLFight
    PUBLIC
    "${PROJECT_BINARY_DIR}"
)
