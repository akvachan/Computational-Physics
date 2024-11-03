# Set minimum CMake version
cmake_minimum_required(VERSION 3.22 FATAL_ERROR)

# Show all warnings
set(CXX_FLAGS "-Wall")

# Show all warnings for CMake
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

# Build with debug metadata
set(CMAKE_BUILD_TYPE Debug)

# Export compile commands for easier include manipulations
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Get project name from the env variable
set(PROJ $ENV{PROJ})

# Set project name and version
project(PROJ VERSION 1.0)

# Set C++20 version 
add_definitions(-std=c++20)

# Add src files
add_subdirectory(Source)
add_subdirectory(Utils)

# Add include directories
include_directories(${PROJECT_SOURCE_DIR}/Include)

# Add executable
add_executable(${PROJ} main.cpp ${SOURCES} ${UTILS})

