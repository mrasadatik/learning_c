cmake_minimum_required(VERSION 3.31)
project(clang C)

set(CMAKE_C_STANDARD 23)

add_executable(clang main.c
        comment.c
        comment.h
        ascii.c)
