/*******************************************************************
 * What is a Function Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535494#overview
 * 
 * SUMMARY:
 * You know what a function is, but this lists a number of pre-built functions that would be very helpful.
********************************************************************/

#include <iostream>
//Provides common math functions
#include <cmath>

#include <cstdlib>
#include <ctime>


using namespace std;

#pragma region Function Prototypes

int math();
int random();

#pragma endregion


int main()
{
    math();
    random();
    return 0;
}


/*
What is a Function?
--------------------------------------
-You know what a function is, dummy. This is just to record the stuff you don't already know
*/

int math()
{
    
    // cmath
    // -Used for common mathematical calculations
    //     -sqrt(number)
    //         -Gets the square root of number
    double square_root = sqrt(200.0);
    //     -cbrt(number)
    //         -Get the cube root of number
    double cube_root = cbrt(200.0);
    //     -pow(number, exponent)
    //         -Gets the results of number raised to the power of exponent
    double power = pow(2.0, 3.0);
    //     -ceil(number)
    //         -Rounds number up to the nearest integer
    double ceiling = ceil(12.4); //Returns 13
    //     -floor(number)
    //         -Rounds number down to the nearest integer
    double floor_number = floor(12.4);          //Return 12
    //     -round(number)
    //         -Rounds number up or down to the nearest integer
    double round_number = round(12.5); //Returns 13
    double round_number2 = round(12.49); //Returns 12
    
    return 0;
}


int random()
{
    int random_number{};
    size_t count {10};
    int min {1};
    int max {6};
    //<cstdlib>
    //-time()
    //    -Returns current time
    //-rand()
    //    -Generates a pseudo-random number
    //-srand()
    //    -Seeds a pseudo-random number (generates a different set of numbers every time)
    //        -It does create random numbers, it initalizes a random number generator in a different way so the numbers are as truly random as possible
    //-RAND_MAX
    //    -Returns a number between 1 and RAND_MAX ()
    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr));       //This is considered standard practice for initializing a random number generator

    for (size_t i {1}; i < count; ++i)
    {
        random_number = rand() % max + 1; //By getting the modulus of rand with 6, we will get back 0, 1, 2, 3, 4, or 5
                                          //Adding 1 to it allows us to get random numbers from 1-6
        cout << random_number << endl;
    }
    return 0;
}