/**
 * CSC232 - Data Structures
 * Missouri State University
 *
 * @file    test_task2.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Test suite to validate task 2 of this assignment.
 * @version v2022.12.26
 * @date    Spring 2023
 */

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "csc232.h"

TEST_SUITE("Task 2"
           * doctest::description("A suite of tests for Task 2")
           * doctest::skip(SKIP_TESTING_TASK_2))
{
//#if !SKIP_TESTING_TASK_2
    SCENARIO("Some Task 2 Scenario")
    {
        GIVEN("Some pre-conditions") {
            WHEN("some stimulus occurs") {
                THEN("some outcome is expected") {
                    REQUIRE(true);
                }
            }
        }
    }
//#endif
}