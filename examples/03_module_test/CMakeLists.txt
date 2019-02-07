add_executable(03_module_tests "03_module_test.cpp")
target_link_libraries(03_module_tests sample_auto_library sample_while_library sample_for_library 
                      sample_do_while_library sample_for_ranged_library sample_value_ref_library 
					  sample_vectors_library)
