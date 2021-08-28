cmake_minimum_required(VERSION 3.20)
project(Sandbox)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(Engine)
include_directories(Engine)

add_executable(Sandbox SandboxApp.cpp)

target_link_libraries(Sandbox Bake_Engine)
