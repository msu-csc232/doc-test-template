cmake_minimum_required(VERSION 3.0)
project(doc_test_template VERSION 0.0.1 LANGUAGES CXX)

if (CMAKE_VERSION GREATER_EQUAL "3.24.0")
    cmake_policy(SET CMP0135 NEW)
endif()

set(CMAKE_CXX_STANDARD 17)

# Source sets for targets
set(SRC_MAIN_TARGET_FILES main.cpp)
set(SRC_DEMO_TARGET_FILES demo.cpp)
set(SRC_TEST_TARGET_FILES csc232.cpp test_task1.cpp test_task2.cpp test_task3.cpp)

# Make test executable
add_executable(main ${SRC_MAIN_TARGET_FILES})
add_executable(demo ${SRC_DEMO_TARGET_FILES})
add_executable(test ${SRC_TEST_TARGET_FILES})
target_compile_features(test PRIVATE cxx_std_17)