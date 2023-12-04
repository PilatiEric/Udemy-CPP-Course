/****************************************
 * The Assignment Operator Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535414#notes
*****************************************/

#include <iostream>
#include <vector>
using namespace std;

#pragma region Function Prototypes

int assignment_operator();

#pragma endregion


int main()
{
    assignment_operator();
    return 0;
}


/*
The Assignment Operator (=)
-----------------------------------------
- lhs = rhs
    -rhs is an expression that is evaluated to a value
    -The value of the rhs is stored to the lhs

    -The value of rhs must be type compatible with the lhs
    -The lhs must be assignable

    -Assignment expression is evaluated to what was just assigned
    -More than one variable can be assigned in a single statement
- l-value and r-value
    - r-value is the contents of a variable
    - l-value is the location of a variable //remember that the variable name is the location
*/


int assignment_operator()
{
    int num1 {10};
    int num2 {20};

    num1 = 100;           //num1 == 100
    num1 = num2;          //num1 == 20
    num1 = num2 = 1000;   //num1 == 1000 (Don't use it unless you have a reason to 
                          //              set all of them as being the same at initialization)
    //num1 = "Frank";     //Will throw an error as "Frank" is a string, not an int

    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl << endl;

    return 0;
}