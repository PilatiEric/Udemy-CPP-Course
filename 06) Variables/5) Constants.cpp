/*************************************
 * What is a Constant Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535370#questions
**************************************/

#include <iostream>
using namespace std;

/*
What is a constant?
-----------------------------

-Variables whose value cannot change once declared
-Types of Constants
    -Literal constants
    -Declared constants
        -const keyword
    -Constant expressions
        -constexpr keyword
    -Enumerated constants
        -enum keyword
    -Defined constants
        -#define

-Literal constants
    -Most obvious kind of constant
        -x = 12;
        -name = "Frank";
    -Integer Literal Constants
        -12   - an integer
        -12U  - an unsigned integer
        -12L  - a long integer
        -12LL - a long long integer   
    -Floating-point Literal Constants
        -12.1  - a double
        -12.1F - a float
    -Character Literal Constants (escape codes)
        -\n  - newline
        -\r  - return
        -\t  - tab
        -\b  - backspace
        -\'  - single quote
        -\"  - double quote
        -\\  - backslash
        -cout << "Hello\tthere\nmy friend\n";
        -Hello          there
         my friend

-Declared constants
    -Constants declared using the const keyword
        -const double pi {3.1415926};
        -pi = 2.5 will result in a compiler error

-Defined constants
    -Constants declared using #define
        -#define pi 3.1415926
    -DON'T USE DEFINED CONSTANTS IN MODERN C++
    -THIS IS OLD STYLE AND CAN RESULT IN SOME ERRORS THAT ARE HARD TO FIND

-

*/

int main()
{

}