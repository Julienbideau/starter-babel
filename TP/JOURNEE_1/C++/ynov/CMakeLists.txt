cmake_minimum_required(VERSION 3.10)
project(HelloWorld VERSION 1.0 LANGUAGES CXX)

set(SOURCES src/HelloWorld.cpp src/Student.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin) 
add_executable(HelloWorld ${SOURCES})