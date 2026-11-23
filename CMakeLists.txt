cmake_minimum_required(VERSION 4.2)
project(horde_survivor)

set(CMAKE_CXX_STANDARD 20)

find_package(raylib CONFIG REQUIRED)
find_package(glfw3 CONFIG REQUIRED)

target_link_libraries(client PRIVATE
        raylib
        glfw
)

add_executable(horde_survivor main.cpp)
