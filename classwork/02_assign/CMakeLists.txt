cmake_minimum_required (VERSION 3.8)
project(02_assign_library)

add_library(02_assign_library "assign02.cpp" "assign02.h")
add_executable(02_assign_exe "main.cpp" "assign02.cpp")




