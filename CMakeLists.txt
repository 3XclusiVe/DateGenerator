cmake_minimum_required(VERSION 3.4)
project(DateGenerator)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp src/Date.cpp src/Date.h src/DateGenerator.cpp src/DateGenerator.h src/Random.cpp src/Random.h)
add_executable(DateGenerator ${SOURCE_FILES})