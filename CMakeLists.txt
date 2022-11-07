cmake_minimum_required(VERSION 3.0)
project(doc_test_template VERSION 0.0.1 LANGUAGES CXX)

# Prepare doctest for other targets to use
#find_package(doctest REQUIRED)

# Make test executable
add_executable(test test_task1.cpp test_task2.cpp)
target_compile_features(test PRIVATE cxx_std_17)