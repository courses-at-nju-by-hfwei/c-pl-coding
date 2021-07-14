cmake_minimum_required(VERSION 3.19)
project(basics C)

set(CMAKE_C_STANDARD 11)

add_executable(hello-world hello-world.c)
add_executable(init init.c)
add_executable(printw printw.c)
add_executable(scanw scanw.c)