cmake_minimum_required(VERSION 3.17)
project(Interface)

set(CMAKE_CXX_STANDARD 17)

add_executable(Interface main.cpp Animal.cpp Animal.h IPrintable.cpp IPrintable.h Pig.cpp Pig.h Cow.cpp Cow.h)