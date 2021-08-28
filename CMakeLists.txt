cmake_minimum_required(VERSION 3.20)
project(Sandbox)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(Engine)
include_directories(Engine)

add_executable(Bake_Engine_Sandbox SandboxApp.cpp)
target_link_libraries(Bake_Engine_Sandbox Bake_Engine)
