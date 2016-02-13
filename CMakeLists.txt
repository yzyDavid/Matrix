cmake_minimum_required(VERSION 3.3)
project(Matrix)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -g")

set(SOURCE_FILES main.cpp)
set(MATRIX Matrix.h)

add_executable(Matrix ${SOURCE_FILES})
add_library(Matrix_lib ${MATRIX})