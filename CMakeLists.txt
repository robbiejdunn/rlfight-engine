cmake_minimum_required(VERSION 3.10)

project(Rlfight VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(MathFunctions)

# add the executable
add_executable(Rlfight rlfight.cxx)

target_link_libraries(Rlfight PUBLIC MathFunctions)

target_include_directories(Rlfight PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           "${PROJECT_SOURCE_DIR}/MathFunctions"
                           )

configure_file(RlfightConfig.h.in RlfightConfig.h)
