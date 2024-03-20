cmake_minimum_required(VERSION 3.5)
project(HelloApp VERSION 1.0 DESCRIPTION "My project description" LANGUAGES CXX)

add_executable(HelloappBinary main.cpp)
target_compile_features(HelloappBinary PRIVATE cxx_std_17)
