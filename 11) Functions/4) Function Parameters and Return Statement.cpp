/************************************************************
 * Function Parameters and the Return Statement Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535502#overview
 * 
 * SUMMARY: How function parameters and the return statement work as well as
 *          what Pass-By-Value is.
*************************************************************/

#include <iostream>

using namespace std;

#pragma region Function Prototypes

int add_numbers(int a, int b);           //Prototype
void pass_by_value_formal(int formal);
void pass_by_value_actual();
int return_function();
void receiving_function();

#pragma endregion


int main()
{
    int results {0};
    cout << "Results\n--------------------------------------------------" << endl;
    results = add_numbers(100, 200);         //Call
    cout << results << endl << endl;
    pass_by_value_actual();
    receiving_function();
    return 0;
}


/*
Function Parameters
------------------------------------------------
-When we call a function we can pass in data to that function
-In the function call they are called arguments
-In the function definition they are called parameters
-They must match in number, order, and in type
*/

int add_numbers(int a, int b)              //Definition
{
    return a + b;
}


/*
Pass-by-value
-------------------------------------------------
-When you pass data into a function it is passed-by-value
-A COPY of the data is passed to the function
-Whatever changes you make to the parameter in the function does NOT
 affect the argument that was passed in.

 -Formal vs. Actual Parameters
    -Formal Parameters
        -The parameters defined in the function header
    -Actual Parameters
        -The parameter used in the function call, the arguments
*/



void pass_by_value_formal(int formal)  //formal is a copy of actual
{
    cout << "pass_by_value_formal(int formal)\n--------------------------------------------------" << endl;
    cout << formal << endl;            //50
    formal = 100;                      //Only changes the local copy
    cout << formal << endl << endl;    //100
}

void pass_by_value_actual()
{
    cout << "pass_by_value_actual()\n--------------------------------------------------" << endl;
    int actual {50};
    cout << actual << endl << endl;            //50
    pass_by_value_formal(actual);      //pass in 50 to pass_by_value_formal
    cout << "Back to pass_by_value_actual()\n--------------------------------------------------" << endl;
    cout << actual << endl << endl;    //50 - did not change
}



/*
Return Statement
---------------------------------------------
-The return statement allows the function to pass a value out of it
-When the return statement is reached the function ends
*/

int return_function()
{
    int number {300};
    return number;                                     //This sends number out of the function, ready to be used by another.
}

void receiving_function()
{
    cout << "receiving_function()\n--------------------------------------------------" << endl;
    cout << return_function() << endl << endl;         //Prints out 300
}