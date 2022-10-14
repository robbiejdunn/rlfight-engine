add_library(game src/Game.cxx src/GameState.cxx src/Application.cxx)
set_target_properties(game PROPERTIES VERSION ${PROJECT_VERSION})

# SDL2
find_package(SDL2 REQUIRED)
target_link_libraries(
    game
    PUBLIC
    ${SDL2_LIBRARIES}
)

target_include_directories(
    game
    INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${SDL2_INCLUDE_DIRS}
)

target_include_directories(
    game
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${SDL2_INCLUDE_DIRS}
)
