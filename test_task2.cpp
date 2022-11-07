//
// Created by jdaehn on 11/7/2022.
//

#include "doctest.h"
#include "csc232.h"

TEST_CASE("testing task 2")
{
    CHECK(factorial(0) == 1);
    CHECK(factorial(1) == 1);
    CHECK(factorial(2) == 2);
    CHECK(factorial(3) == 6);
    CHECK(factorial(10) == 3628800);
}