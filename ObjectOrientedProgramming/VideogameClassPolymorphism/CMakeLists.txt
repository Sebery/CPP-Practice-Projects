cmake_minimum_required(VERSION 3.17)
project(VideogameClassPolymorphism)

set(CMAKE_CXX_STANDARD 17)

add_executable(VideogameClassPolymorphism main.cpp Videogame.cpp Videogame.h Adventure.cpp Adventure.h Survival.cpp Survival.h)