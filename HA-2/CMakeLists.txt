cmake_minimum_required(VERSION 3.10)
project(LAB_1 C)

set(CMAKE_C_STANDARD 99)

add_executable(LAB_1 main.c headers/stack.h sources/stack.c headers/queue.h sources/queue.c headers/bscds.h sources/node.c headers/node.h headers/bds.h)