/**
 * CSC232 - Data Structures
 * Missouri State University
 *
 * @file    test_task5.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Test suite to validate task 5 of this assignment.
 * @version v2022.12.26
 * @date    Spring 2023
 */

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "csc232.h"

TEST_SUITE("Task 5"
           * doctest::description("A suite of tests for Task 5")
           * doctest::skip(SKIP_TESTING_TASK_5))
{
//#if !SKIP_TESTING_TASK_5
    SCENARIO("Some Task 5 Scenario")
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