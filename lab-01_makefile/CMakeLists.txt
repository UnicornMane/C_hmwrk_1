cmake_minimum_required(VERSION 3.23)
project(lab_01_makefile C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(lab_01_makefile
        src/algorithm.c
        src/io.c
        src/main.c
        src/util.c include/io.h include/util.h include/algorithm.h)
