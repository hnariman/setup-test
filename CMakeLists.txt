cmake_minimum_required(VERSION 3.20)

project(test-setup)

enable_testing()

add_library(add 
  src/add/add.cpp
  src/add/add.hpp
)

add_subdirectory(src)
add_subdirectory(test)
