cmake_minimum_required(VERSION 3.19)
project(1-1-ball C)

set(CMAKE_C_STANDARD 11)

add_executable(motion motion.c)
add_executable(instant-motion instant-motion.c)