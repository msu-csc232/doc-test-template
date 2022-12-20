/**
 *
 */

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "csc232.h"

TEST_SUITE("Bootstrap")
{
    TEST_CASE("Instructions Only - No points earned for this test case!")
    {
        std::cout << "Toggle the SKIP_TESTING_TASK_n to enable test suites "
                  << "for each respective task." << std::endl;
    }
}

TEST_SUITE("Task 1"
           * doctest::description("A suite of tests for Task 1")
           * doctest::skip(SKIP_TESTING_TASK_1))

{
    TEST_CASE("Testing some aspect of Task 1")
    {
        CHECK_EQ(factorial(1), 1);
    }

    TEST_CASE("Testing another aspect of Task 1")
    {
        CHECK_EQ(factorial(2), 2);
        CHECK_EQ(factorial(3), 6);
        CHECK_EQ(factorial(10), 3628800);
    }

    TEST_CASE("Testing negative assertions")
    {
        CHECK_NE(factorial(2), 3);
        CHECK_NE(factorial(3), 7);
        CHECK_NE(factorial(10), 13628800);
    }
}
