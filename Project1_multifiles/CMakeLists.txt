cmake_minimum_required(VERSION 3.5)
project(HelloApp VERSION 1.0 DESCRIPTION "My project description" LANGUAGES CXX)

file(GLOB_RECURSE SRC_FILE SourceProject/*.cpp)
add_executable(HelloappBinary main.cpp ${SRC_FILE})
target_compile_features(HelloappBinary PRIVATE cxx_std_17)
target_include_directories(HelloappBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Include)
