//
// Created by jdaehn on 11/7/2022.
//

#include "doctest.h"
#include "csc232.h"

TEST_SUITE("Task 2"
           * doctest::description("A suite of tests for Task 2")
           * doctest::skip(SKIP_TESTING_TASK_2))
{
    TEST_CASE("Testing some aspect of Task 2")
    {
        CHECK_EQ(factorial(1), 1);
    }

    TEST_CASE("Testing another aspect of Task 2")
    {
        CHECK_EQ(factorial(2), 2);
        CHECK_EQ(factorial(3), 6);
        CHECK_EQ(factorial(10), 3628800);
    }
}