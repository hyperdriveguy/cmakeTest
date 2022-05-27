cmake_minimum_required(VERSION 3.22)

project(cmake_exp)

include_directories(lib)

add_subdirectory(harp)
add_subdirectory(lib)

add_compile_options(-Wall -Wextra -pedantic -Werror)

add_executable(perform main.c)

target_link_libraries(perform PRIVATE harplib mylib)
