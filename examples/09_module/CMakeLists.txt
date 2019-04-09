add_library(temperature_library "temperature.cpp" "temperature.h"
								"temperature_data.cpp" "temperature_data.h")
add_executable(temperature_exe "main.cpp" "temperature.cpp" "temperature_data.cpp")