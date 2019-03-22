cmake_minimum_required(VERSION 3.7)
project(ArbolBProyecto)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp arbolB.cpp arbolB.h Nodo.cpp Nodo.h)
add_executable(ArbolBProyecto ${SOURCE_FILES})