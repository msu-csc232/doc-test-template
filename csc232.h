/**
 *
 */

#ifndef CSC232
#define CSC232

#define FALSE 0
#define TRUE 1
#define SKIP_TESTING_TASK_1 FALSE // Set this macro to the value of FALSE to test Task 1
#define SKIP_TESTING_TASK_2 FALSE  // Set this macro to the value of FALSE to test Task 2
#define SKIP_TESTING_TASK_3 FALSE  // Set this macro to the value of FALSE to test Task 3

#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <memory>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <stdexcept>
#include <utility>
#include <vector>

/**
 * @brief Recursive implementation for finding the nth factorial number.
 * 
 * @param number the value whose factorial we seek
 * @return the factorial of the given number.
 */
int factorial(int number);

class GradingAssistant
{
public:
    GradingAssistant(int earned = 0, int possible = 0);
    int EarnedPoints() const;
    void EarnedPoints(int points);
    int PossiblePoints() const;
    void PossiblePoints(int points);
private:
    int earned_pts_;
    int possible_pts_;
};

#endif
