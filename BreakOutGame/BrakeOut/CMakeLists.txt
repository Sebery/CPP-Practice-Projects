cmake_minimum_required(VERSION 3.17)
project(BrakeOut)

set(CMAKE_CXX_STANDARD 17)

add_executable(BrakeOut main.cpp)

target_link_libraries(BrakeOut PRIVATE user32 gdi32 opengl32 gdiplus Shlwapi dwmapi stdc++fs)