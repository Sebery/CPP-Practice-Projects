cmake_minimum_required(VERSION 3.17)
project(PlayerClassInheritance)

set(CMAKE_CXX_STANDARD 17)

add_executable(PlayerClassInheritance main.cpp Player.cpp Player.h Enemy.cpp Enemy.h)