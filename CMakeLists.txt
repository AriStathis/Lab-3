cmake_minimum_required(VERSION 3.26.3)

project(LAB-3)

set(SRC_FILES
    src/main.cpp
    src/OccupancyMapBase.cpp
    src/OccupancyMapSet.cpp
    src/OccupancyMapVector.cpp
    src/TestMap.cpp)

set(CMAKE_CXX_FLAGS "-std=c++11")

include_directories(
    include
    examples
)

add_executable(${PROJECT_NAME} ${SRC_FILES})