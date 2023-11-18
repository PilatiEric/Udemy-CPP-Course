/****************************************************
 * Declaring and Initializing Arrays Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535392#questions
*****************************************************/

#include <iostream>
using namespace std;

#pragma region Function Prototypes

#pragma endregion

int main()
{
    return 0;
}

/*
Using Arrays
-----------------------------------
-Declaring Arrays
    -Element_Type array_name [constant number of elements];
*/


int arrays()
{
    //Declaring an Array
    //Element_Type array_name [constant number of elements];
    int test_scores [5] {100, 95, 99, 87, 88};        //Can be initialized at the same time

    int high_score_per_level [10] {3, 5};             //initialize to 3, 5 and the remaining to 0

    const int days_in_year {365};
    double hi_temperatures [days_in_year] {0};        //Initialize all to 0

    int another_array [] {1, 2, 3, 4, 5};             //Size is automatically calculated
    return 0;
}