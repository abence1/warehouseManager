cmake_minimum_required(VERSION 3.15)

project(Warehouse_Manager)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(app ${SOURCES})

