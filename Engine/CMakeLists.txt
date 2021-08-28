cmake_minimum_required(VERSION 3.20)
project(Bake_Engine)

set(CMAKE_CXX_STANDARD 20)

include_directories(vendor/spdlog/include)

file(GLOB SOURCES **/*.cpp Bake.h)

add_library(Bake_Engine SHARED ${SOURCES})
