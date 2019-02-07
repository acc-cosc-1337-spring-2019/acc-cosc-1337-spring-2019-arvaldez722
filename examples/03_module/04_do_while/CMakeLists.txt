add_library(sample_do_while_library "sample_do_while.cpp" "sample_do_while.h")
add_executable(sample_do_while_exe "main.cpp" "sample_do_while.cpp")
target_link_libraries(sample_do_while_exe switch_library)