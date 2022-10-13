set_target_properties(engine PROPERTIES VERSION ${PROJECT_VERSION})

add_library(engine src/Game.cxx src/GameState.cxx)

target_include_directories(engine
    INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_include_directories(engine
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
