add_library(memory_leak_library "memory_leak.cpp" "memory_leak.h")
add_executable(memory_leak_exe "main.cpp" "memory_leak.cpp")

