cmake_minimum_required(VERSION 3.20)
project(Bake_Engine)

set(CMAKE_CXX_STANDARD 20)

add_library(Bake_Engine SHARED Entrypoint.cpp Bake.h)
