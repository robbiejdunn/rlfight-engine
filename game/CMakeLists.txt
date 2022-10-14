add_library(game src/Game.cxx src/GameState.cxx)
set_target_properties(game PROPERTIES VERSION ${PROJECT_VERSION})

target_include_directories(game
    INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_include_directories(game
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
