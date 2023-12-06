/*******************************************
 * switch-case Statement Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535448#notes
********************************************/

#include <iostream>
using namespace std;

#pragma region Function Prototypes

int switch_case();

#pragma endregion


int main()
{
    switch_case();
    return 0;
}



/*
Switch-Case Statements
-------------------------------
-Control expression must evaluate to an integral type
    -Reminder of what integrals are
        -Integer values
        -Floating-point values
        -Boolean values
        -Character values (string, char)
        -Members of an enumerated type
            -These are interpreted as an integer by the compiler
        -Bit fields

-Case expressions must be constant expressions that evaluate to integer or integer literals
-Once a match occurs all following case sections are executed until a break is reached
-Best practice
    -Provide break statement for each case
    -default is optional, but should be handled
*/


int switch_case()
{
    char letter_grade {};

    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;

    switch (letter_grade)
    {
        //In instances like this (upper and lowercase letter cases),
        //both can be placed to account for the user entering either
        case 'a':
        case 'A':
            cout << "You need a 90 or above."; 
            break;
        case 'b':
        case 'B':
            cout << "You need 80-89 for a B.";
            break;
        case 'c':
        case 'C':
            cout << "You need 70-79 for a C.";
            break;
        case 'd':
        case 'D':
            cout << "You need 60-69 for a D.";
            break;
        
        default:
            cout << "Invalid entry";
            break;
    }
    return 0;
}