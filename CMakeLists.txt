cmake_minimum_required(VERSION 3.0)
project(doc_test_template VERSION 0.0.1 LANGUAGES CXX)

if (CMAKE_VERSION GREATER_EQUAL "3.24.0")
    cmake_policy(SET CMP0135 NEW)
endif()

set(CMAKE_CXX_STANDARD 17)

# Source sets for targets
set(SRC_MAIN_TARGET_FILES main.cpp csc232.cpp)
set(SRC_DEMO_TARGET_FILES csc232.cpp demo.cpp)
set(SRC_TEST_TARGET_FILES csc232.cpp test_task1.cpp test_task2.cpp test_task3.cpp)

# Build executable targets
add_executable(main ${SRC_MAIN_TARGET_FILES})
add_executable(demo ${SRC_DEMO_TARGET_FILES})
add_executable(test ${SRC_TEST_TARGET_FILES})

# add custom commands that copy data input files to target working directories
add_custom_command(TARGET main PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_CURRENT_LIST_DIR}/main_data.txt ${CMAKE_CURRENT_BINARY_DIR})
add_custom_command(TARGET demo PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_CURRENT_LIST_DIR}/demo_data.txt ${CMAKE_CURRENT_BINARY_DIR})
add_custom_command(TARGET test PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_CURRENT_LIST_DIR}/test_data.txt ${CMAKE_CURRENT_BINARY_DIR})
add_custom_command(TARGET test PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_CURRENT_LIST_DIR}/csc232.h ${CMAKE_CURRENT_BINARY_DIR})
