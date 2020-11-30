cmake_minimum_required(VERSION 3.17)
project(ShapeClass)

set(CMAKE_CXX_STANDARD 17)

add_executable(ShapeClass main.cpp Shape.h Default.h Square.cpp Square.h Custom.h Pointers.cpp Pointers.h)