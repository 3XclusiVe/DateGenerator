cmake_minimum_required(VERSION 3.4)
project(DateGenerator)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Date.cpp Date.h IDateGenerator.h DateGenerator.cpp DateGenerator.h Random.cpp Random.h)
add_executable(DateGenerator ${SOURCE_FILES})