add_library(render src/render.cxx)
set_target_properties(engine PROPERTIES VERSION ${PROJECT_VERSION})

# SDL2
find_package(SDL2 REQUIRED)
target_link_libraries(
    render
    PRIVATE
    ${SDL2_LIBRARIES}
)

target_include_directories(
    render
    PRIVATE
    ${SDL2_INCLUDE_DIRS}
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_include_directories(engine
    INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
