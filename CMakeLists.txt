cmake_minimum_required(VERSION 3.15)

# Project name and version
project(isw421-cpp-playbook VERSION 1.0.0 LANGUAGES CXX)

# C++ Standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Include header directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Main executable
add_executable(playbook
  source/main.cpp
)

# Compilation options (warnings, optimization)
if(MSVC)
  target_compile_options(playbook PRIVATE /W4)
else()
  target_compile_options(playbook PRIVATE -Wall -Wextra -Wpedantic)
endif()
