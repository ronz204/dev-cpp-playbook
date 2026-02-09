cmake_minimum_required(VERSION 3.15)

# Project name and version
project(isw421-cpp-playbook VERSION 1.0.0 LANGUAGES CXX)

# C++ Standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add subdirectories for each layer
add_subdirectory(source)
add_subdirectory(apps)
