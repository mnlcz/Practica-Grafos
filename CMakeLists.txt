cmake_minimum_required(VERSION 3.17)
project(Grafos)

set(CMAKE_CXX_STANDARD 20)

add_executable(Grafos main.cpp Grafo_Matriz.cpp Grafo_Matriz.h Grafo_Lista.cpp Grafo_Lista.h)