add_library(tic_tac_toe_library "tic_tac_toe.cpp" "tic_tac_toe.h"
                                "tic_tac_toe_manager.cpp" "tic_tac_toe_manager.h" )
add_executable(tic_tac_toe_exe "main.cpp" "tic_tac_toe.cpp" "tic_tac_toe_manager.cpp")