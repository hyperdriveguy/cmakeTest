cmake_minimum_required(VERSION 3.11)

project(
    CMake_Test
    VERSION 1.0
    DESCRIPTION "Test"
    LANGUAGES C
)

add_subdirectory(include)

add_subdirectory(apps)