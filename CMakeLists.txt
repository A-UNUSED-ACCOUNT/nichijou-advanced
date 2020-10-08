
cmake_minimum_required(VERSION 3.7)

project(nichijou_advanced)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})
include_directories(./include/)

add_executable(nichijou_advanced ./src/main.cpp)
target_link_libraries(nichijou_advanced ${SDL2_LIBRARIES})

