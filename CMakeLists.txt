cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(EngineTest VERSION 0.1)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file(EngineTestConfig.h.in EngineTestConfig.h)

# add the engine library
add_subdirectory(engine)
list(APPEND EXTRA_LIBS engine)

# add the executable
add_executable(EngineTest engine_test.cxx)

target_link_libraries(EngineTest PUBLIC ${EXTRA_LIBS})

# add the binary tree to the search path for include files
# so that we will find EngineTestConfig.h
target_include_directories(EngineTest PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )
