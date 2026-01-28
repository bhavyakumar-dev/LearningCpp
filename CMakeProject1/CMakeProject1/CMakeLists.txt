cmake_minimum_required (VERSION 3.14)
project ("ZCO_Template")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(MSVC)
    add_compile_options(/W4 /permissive-)
else()
    add_compile_options(-O3 -Wall -Wextra -Wshadow -pedantic-errors -fsanitize=address,undefined)
endif()

add_executable (Solution "main.cpp")