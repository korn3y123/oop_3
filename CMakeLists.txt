cmake_minimum_required(VERSION 3.31.6)

project(lab_3 LANGUAGES CXX)

add_subdirectory(lib)

add_executable(lab_3 src/main.cpp)

target_link_libraries(lab_3 PRIVATE CoffeeLibrary)
