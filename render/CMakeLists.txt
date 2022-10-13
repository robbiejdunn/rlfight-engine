add_library(render src/Application.cxx)
set_target_properties(render PROPERTIES VERSION ${PROJECT_VERSION})

# SDL2
find_package(SDL2 REQUIRED)
target_link_libraries(
    render
    PUBLIC
    ${SDL2_LIBRARIES}
)

target_include_directories(
    render
    PRIVATE
    ${SDL2_INCLUDE_DIRS}
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_include_directories(render
    INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${SDL2_INCLUDE_DIRS}
)
