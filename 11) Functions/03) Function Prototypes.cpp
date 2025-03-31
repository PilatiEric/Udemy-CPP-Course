/*************************************************************
 * Function Prototypes Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535500#overview
 * 
 * SUMMARY: Function Prototypes allow for cleaner code and the ability to define
 *          functions after the main() method
**************************************************************/

#include <iostream>
#include <cmath>

using namespace std;


#pragma region Function Prototypes

//This is where your prototypes go
//I use the #pragma region because it allows long lists of functions to be minimized

#pragma endregion


int main()
{
    return 0;
}


/*
Function Protypes
-------------------------------------------------
-The compiler must 'know' about a function before it is used
    -Define functions before calling them
        -Okay for small programs
        -Not a practical solution for larger programs
    -Use function prototypes
        -Tells the compiler what it needs to know without a full function definition
        -Also called "Forward Declaration"
        -Placed at the beginning of the program
        -Also used in our own header files (.h)
    -Declaring the function prototype
        - int function_name(int)
                            or
        - int function_name(int a)   //This one is best practice for documentation purposes


FOR EXAMPLES LOOK AT ALL PAST NOTES THAT FEATURE CODE!
THEY ARE ALWAYS USED!
*/