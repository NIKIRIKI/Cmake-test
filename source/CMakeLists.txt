cmake_minimum_required(VERSION 3.5)

project(
    HelloApp 
    VERSION 1.0.0
    DESCRIPTION "This app print Hello world"
    LANGUAGES CXX
)

#List source
add_executable(
    HelloBinary main.cpp
    src/dog
    src/oper.cpp
)

target_compile_features(HelloBinary PRIVATE cxx_std_20)

target_include_directories(HelloBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)