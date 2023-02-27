cmake_minimum_required(VERSION 3.24)
project(clion_snippet C)

set(CMAKE_C_STANDARD 11)

#add_library(clion_snippet library.c 01-tutorial/01-hello-world/hello01.c)
add_executable(clion_snippet 01-tutorial/tutorial-01-hello.c library.c)
