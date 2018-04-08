cmake_minimum_required(VERSION 3.7)
project(C___primer_plus_6_codes)

set(CMAKE_CXX_STANDARD 11)
add_subdirectory(chapter13-Class-Inheritance)
set(SOURCE_FILES main.cpp)
add_executable(C___primer_plus_6_codes ${SOURCE_FILES})

add_subdirectory(chapter15-Friends-Exceptions)

add_subdirectory(chapter16-string-STL)

add_subdirectory(chapter17-input-output)

add_subdirectory(chpater14-reusing-code)

add_subdirectory(knowledge)

add_subdirectory(algorithms)

add_subdirectory(Inside_the_C++_Object_model)



