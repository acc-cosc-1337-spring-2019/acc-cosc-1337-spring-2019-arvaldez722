cmake_minimum_required(VERSION 3.8)

project("cosc1337")

include_directories(inc)
include_directories(01-basics)
include_directories("classwork/02_assign")
include_directories("classwork/03_assign")
include_directories("classwork/04_assign")
include_directories("classwork/05_assign")
include_directories(examples/01_module/01_output)
include_directories(examples/01_module/02_variables)
include_directories(examples/01_module/03_input)
include_directories(examples/01_module/04_expressions)
include_directories(examples/01_module/05_if)
include_directories(examples/01_module/06_if_else)
include_directories(examples/01_module/07_switch)
include_directories(examples/01_module_test)
include_directories(examples/03_module/01_auto)
include_directories(examples/03_module/02_while)
include_directories(examples/03_module/03_for)
include_directories(examples/03_module/04_do_while)
include_directories(examples/03_module/05_for_ranged)
include_directories(examples/03_module/06_value_and_reference_params)
include_directories(examples/03_module/07_vectors_intro)
include_directories(examples/04_module/01_bank)
include_directories(examples/07_module)

include_directories(homework/02_decisions)
include_directories(homework/03_iteration)
include_directories(homework/04_vectors)
include_directories(homework/tic_tac_toe)

add_subdirectory(01-basics)
add_subdirectory(01-basics_test)
add_subdirectory(classwork)
add_subdirectory(examples)
add_subdirectory(homework)




