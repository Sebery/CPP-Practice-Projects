cmake_minimum_required(VERSION 3.17)
project(ExceptionsWithClasses)

set(CMAKE_CXX_STANDARD 17)

add_executable(ExceptionsWithClasses main.cpp Book.cpp Book.h BadBookException.cpp BadBookException.h)