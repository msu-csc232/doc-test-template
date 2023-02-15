/**
 * CSC232 - Data Structures
 * Missouri State University
 *
 * @file    test_task1.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Test suite to validate task 1 of this assignment.
 * @version v2022.12.26
 * @date    Spring 2023
 */

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "csc232.h"

TEST_SUITE("Task 1" * doctest::description("A suite of tests for Task 1") * doctest::skip(SKIP_TESTING_TASK_1))
{

//    TEST_CASE("Task is ready for evaluation")
//    {
//        const char* search_string = "SKIP_TESTING_TASK_1 TRUE";
//        const char* filename   = "csc232.h";
//        std::ifstream input_stream{ filename, std::ios::in };
//        if (!input_stream)
//        {
//            FAIL_CHECK("Test source file could not be opened!");
//            exit(EXIT_FAILURE);
//        }
//
//        // Read the entire file into memory
//        std::string file_contents;
//        std::string current_line;
//        while (getline(input_stream, current_line ))
//            file_contents += current_line + '\n';
//        input_stream.close();
//
//        size_t pos = file_contents.find(search_string);
//        REQUIRE_MESSAGE((static_cast<int>(pos) > 0), "It appears you have not toggled TEST_TASK_1 from FALSE to TRUE. Please do this before attempt to validate this task.");
//    }

    SCENARIO("Some Task 1 Scenario")
    {
        GIVEN("Some pre-conditions") {
            WHEN("some stimulus occurs") {
                THEN("some outcome is expected") {
                    REQUIRE(true);
                }
            }
        }
    }
}
