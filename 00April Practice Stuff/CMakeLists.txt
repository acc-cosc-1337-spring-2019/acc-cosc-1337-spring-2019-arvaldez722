add_subdirectory(gui_practice)
add_library(AprilPractice_library "practice.h" "practice.cpp")
add_executable(practice_exe "main.cpp" "practice.cpp")