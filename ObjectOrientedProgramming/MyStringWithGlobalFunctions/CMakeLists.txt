cmake_minimum_required(VERSION 3.17)
project(MyStringWithGlobalFunctions)

set(CMAKE_CXX_STANDARD 17)

add_executable(MyStringWithGlobalFunctions main.cpp MyString.cpp MyString.h)