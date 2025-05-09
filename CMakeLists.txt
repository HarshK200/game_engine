cmake_minimum_required(VERSION 3.31)
project(game_engine)

set(CMAKE_CXX_STANDARD 20)

# The first engine dynamic library project comes from here
add_subdirectory(engine)
add_subdirectory(sandbox)