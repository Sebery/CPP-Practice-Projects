cmake_minimum_required(VERSION 3.17)
project(MovieFanatics)

set(CMAKE_CXX_STANDARD 17)

add_executable(MovieFanatics main.cpp Movies.cpp Movies.h Movie.cpp Movie.h)