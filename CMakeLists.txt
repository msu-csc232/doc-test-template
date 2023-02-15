cmake_minimum_required(VERSION 3.0)
project(doc_test_template VERSION 0.0.1 LANGUAGES CXX)

if (CMAKE_VERSION GREATER_EQUAL "3.24.0")
    cmake_policy(SET CMP0135 NEW)
endif()

set(CMAKE_CXX_STANDARD 14)
set(IS_LAB TRUE)

if( IS_LAB )
    message("Configuring lab assignment...")
else()
    message("Configuring homework assignment...")
endif()

# Source sets for targets
set(SRC_MAIN_TARGET_FILES main.cpp csc232.cpp)
set(SRC_DEMO_TARGET_FILES csc232.cpp demo.cpp)
set(SRC_TEST_TASK1_FILES
        csc232.cpp
        test_task1.cpp)
set(SRC_TEST_TASK2_FILES
        csc232.cpp
        test_task2.cpp)
set(SRC_TEST_TASK3_FILES
        csc232.cpp
        test_task3.cpp)
if(NOT IS_LAB)
set(SRC_TEST_TASK4_FILES
        csc232.cpp
        test_task4.cpp)
set(SRC_TEST_TASK5_FILES
        csc232.cpp
        test_task5.cpp)
endif()

# Build executable targets
add_executable(main ${SRC_MAIN_TARGET_FILES})
add_executable(demo ${SRC_DEMO_TARGET_FILES})
add_executable(test_task1 ${SRC_TEST_TASK1_FILES})
add_executable(test_task2 ${SRC_TEST_TASK2_FILES})
add_executable(test_task3 ${SRC_TEST_TASK3_FILES})

if(NOT IS_LAB)
    add_executable(test_task4 ${SRC_TEST_TASK4_FILES})
    add_executable(test_task5 ${SRC_TEST_TASK5_FILES})
endif()

# add custom commands that copy data input files to target working directories
add_custom_command(TARGET main PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_CURRENT_LIST_DIR}/main_data.txt ${CMAKE_CURRENT_BINARY_DIR})
add_custom_command(TARGET demo PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_CURRENT_LIST_DIR}/demo_data.txt ${CMAKE_CURRENT_BINARY_DIR})
add_custom_command(TARGET test_task1 PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_CURRENT_LIST_DIR}/csc232.h ${CMAKE_CURRENT_BINARY_DIR})
add_custom_command(TARGET test_task2 PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_CURRENT_LIST_DIR}/csc232.h ${CMAKE_CURRENT_BINARY_DIR})
add_custom_command(TARGET test_task3 PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_CURRENT_LIST_DIR}/csc232.h ${CMAKE_CURRENT_BINARY_DIR})

if(NOT IS_LAB)
    add_custom_command(TARGET test_task4 PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_CURRENT_LIST_DIR}/csc232.h ${CMAKE_CURRENT_BINARY_DIR})
    add_custom_command(TARGET test_task5 PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_CURRENT_LIST_DIR}/csc232.h ${CMAKE_CURRENT_BINARY_DIR})
endif()

add_custom_command(TARGET test_task1 PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_CURRENT_LIST_DIR}/csc232.cpp ${CMAKE_CURRENT_BINARY_DIR})
add_custom_command(TARGET test_task2 PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_CURRENT_LIST_DIR}/csc232.cpp ${CMAKE_CURRENT_BINARY_DIR})
add_custom_command(TARGET test_task3 PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_CURRENT_LIST_DIR}/csc232.cpp ${CMAKE_CURRENT_BINARY_DIR})

if(NOT IS_LAB)
    add_custom_command(TARGET test_task4 PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_CURRENT_LIST_DIR}/csc232.cpp ${CMAKE_CURRENT_BINARY_DIR})
    add_custom_command(TARGET test_task5 PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_CURRENT_LIST_DIR}/csc232.cpp ${CMAKE_CURRENT_BINARY_DIR})
endif()

enable_testing()

add_test(NAME TestTask1 COMMAND test_task1)
add_test(NAME TestTask2 COMMAND test_task2)
add_test(NAME TestTask3 COMMAND test_task3)

if(NOT IS_LAB)
    add_test(NAME TestTask4 COMMAND test_task4)
    add_test(NAME TestTask5 COMMAND test_task5)
endif()
