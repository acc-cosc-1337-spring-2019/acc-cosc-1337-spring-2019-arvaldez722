cmake_minimum_required(VERSION 3.8)

project("cosc1337")

include_directories(inc)
include_directories(01-basics)
include_directories("classwork/02_assign")
include_directories(examples/01_module/01_output)
include_directories(examples/01_module/02_variables)
include_directories(examples/01_module/03_input)
include_directories(examples/01_module/04_expressions)
include_directories(examples/01_module/05_if)
include_directories(examples/01_module/06_if_else)
include_directories(examples/01_module/07_switch)
include_directories(examples/01_module_test)
include_directories(homework/02_decisions)

add_subdirectory(01-basics)
add_subdirectory(01-basics_test)
add_subdirectory(classwork)
add_subdirectory(examples)
add_subdirectory(homework)


