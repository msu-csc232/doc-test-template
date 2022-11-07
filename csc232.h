/**
 *
 */

#ifndef CSC232
#define CSC232

/**
 * @brief Recursive implementation for finding the nth factorial number.
 * 
 * @param number the value whose factorial we seek
 * @return the factorial of the given number.
 */
int factorial(int number)
{
    return number > 1 ? factorial(number - 1) * number : 1;
}

#endif
