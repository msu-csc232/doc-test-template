/**
 * CSC232 - Data Structures
 * Missouri State University
 *
 * @file    demo.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Entry-point of the demo target.
 * @version v2022.12.26
 * @date    Spring 2023
 */

#include "csc232.h"

int main( int argc, char* argv[] )
{
    // An input file to process
    std::string input_file;

    // Check to see if the user has supplied a specific input file for consumption
    if (argc > 1)
    {
        // It is expected as the first argument
        input_file = argv[1];
    }
    else
    {
        // Default input file
        input_file = "demo_data.txt";
    }

    bool success = read_data( input_file );
    return success ? EXIT_SUCCESS : EXIT_FAILURE;
}
