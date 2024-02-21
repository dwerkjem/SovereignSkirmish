cmake_minimum_required(VERSION 3.12)
project(SovereignSkirmish)

# Add src as a source directory
include_directories(src)

# Make sure the compiler is C++17 compliant
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# add warnings
if (MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Add the source files
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Add the executable
add_executable(SovereignSkirmish ${SOURCES})