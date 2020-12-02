cmake_minimum_required(VERSION 3.17)
project(SmartPointers)

set(CMAKE_CXX_STANDARD 17)

add_executable(SmartPointers main.cpp I_Printable.cpp I_Printable.h Computer.cpp Computer.h Laptop.cpp Laptop.h)