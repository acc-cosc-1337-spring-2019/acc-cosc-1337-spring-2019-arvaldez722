add_library(shape_library "shape.cpp" "shape.h"
                                "circle.cpp" "circle.h"
								"line.cpp" "line.h")
add_executable(shape_exe "main.cpp" "shape.cpp" "circle.cpp" "line.cpp")