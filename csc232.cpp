//
// Created by jdaehn on 12/19/2022.
//

#include "csc232.h"

int factorial(int number)
{
    return number > 1 ? factorial(number - 1) * number : 1;
}
