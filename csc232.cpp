//
// Created by jdaehn on 12/19/2022.
//

#include "csc232.h"

int factorial(int number)
{
    return number > 1 ? factorial(number - 1) * number : 1;
}

GradingAssistant::GradingAssistant(int earned, int possible) : earned_pts_(earned), possible_pts_(possible)
{
    // Intentionally empty
}

int GradingAssistant::EarnedPoints() const
{
    return earned_pts_;
}

void GradingAssistant::EarnedPoints(int points)
{
    earned_pts_ += points;
}

int GradingAssistant::PossiblePoints() const
{
    return possible_pts_;
}

void GradingAssistant::PossiblePoints(int points)
{
    possible_pts_ += points;
}

static const GradingAssistant GRADER;
