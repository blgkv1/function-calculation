cmake_minimum_required(VERSION 3.30)
project(funccalc)

set(CMAKE_CXX_STANDARD 20)

# Add your main program
add_executable(funccalc main.cpp calc.cpp)

# Fetch Google Test
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
# Prevent Google Test from overriding your compiler/linker options
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Add the test executable
add_executable(unit_tests test.cpp calc.cpp)

# Link Google Test to the test executable
target_link_libraries(unit_tests gtest gtest_main)