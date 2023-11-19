/********************************************
 * Declaring and Initializing Vectors Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535398#notes
*********************************************/

#include <iostream>
#include <vector>
using namespace std;

#pragma region Function Prototypes

int vectors();

#pragma endregion


int main()
{
    vectors();
    return 0;
}


/*
What is a Vector?
-------------------------
-Characteristics
    -Dynamic size
    -Elements are all the same type
    -Stored contiguously in memory
    -Individually accessed by their position in the index
    
    -First element is at index 0
    -Last element is at index size-1
    
    -[] - no checking to see if you are out of bounds
    -Provide many useful functions that do bounds check

    -Elements initialized to 0
    -Very efficient
    -Iteration (looping is often used to process)

-Container in the C++ Standard Template Library
-An array that can grow and shrink in size at execution time
-Provides similar semantics and syntax as arrays
-Very efficient
-Can provide bounds checking
-Can use lots of functions
    -Sort
    -Reverse
    -Find

How to Declare a Vector
--------------------------------------
-#include <vector>
-using namespace std;

-vector <int> test_scores;
    -Has no size
    -No values entered

-vector <int> test_scores (10);
    -Initializes it with 10 ints, all set to 0

-vector <int> test_scores {100, 98, 89, 85, 93}

-vector <double> hi_temperatures (365, 80.0)
    -In the parenthesis
        -First value: Initial size of the vector
        -Second value: What all the values in the vector will be set to
*/

int vectors()
{
    vector <char> vowels (5);
    vector <int> test_scores {100, 98, 89, 85, 93};
    vector <double> hi_temperatures (365, 80.0);


    return 0;
}