cmake_minimum_required(VERSION 3.2)

project(emscripten-sandbox)

enable_language(CXX)
set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS "-s MODULARIZE=1 -s EXPORT_ES6=1")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 --closure 1 -flto")

add_compile_options(-Wall -Wextra -pedantic-errors -Werror -Wno-dollar-in-identifier-extension)

include_directories(AFTER SYSTEM "$ENV{EMSCRIPTEN}/system/include")

add_executable(module module.cc)
