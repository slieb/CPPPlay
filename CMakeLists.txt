cmake_minimum_required(VERSION 3.5)
project(cppPlay)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# playing around with CMake
set (MY_VAR "Hello")
set (OTHER_VAR "${MY_VAR} dookey!")
message (WARNING ${OTHER_VAR})

set(SOURCE_FILES main.cpp)
add_executable(cppPlay ${SOURCE_FILES})