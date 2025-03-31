/******************************************************
 * Overloading Functions Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535506#overview
 * 
 * SUMMARY: Function overloads allow for the same function name
 *          to be used while taking in different data types
 *          to perform similar functions
*******************************************************/

#include <iostream>

using namespace std;


#pragma region Function Prototypes

int add_numbers(int a, int b);
double add_numbers(double a, double b);

/*
The return type is not considered when the compiler is determining which function to call
The below code will throw an error

int get_value();
double get_value();

The compiler cannot choose a function when there are multiple with all default
parameters and when calling the function, no arguments are entered.
The below code will throw and error

int get_value(int a = 100);
int get value(double b = 100.0)
*/

#pragma endregion


int main()
{
    add_numbers(2, 2);          //Will print out "add_numbers(int a, int b)"
    add_numbers(2.0, 2.0);      //Will print out "add_numbers(double a, double b)"
    return 0;
}



/*
Overloading Functions
-----------------------------------------------------
-We can have functions that have different parameter lists that have the same name
-Abstraction mechanism since we can't just think 'print' example
-A type of polymorphism
    -We can have the same name work with different data types to execute similar behavior
-The compiler must be able to tell the functions apart based on the parameter lists and argument supplied
*/

int add_numbers(int a, int b)
{
    cout << "add_numbers(int a, int b)" << endl << endl;
    return a + b;
}
double add_numbers(double a, double b)
{
    cout << "add_numbers(double a, double b)" << endl << endl;
    return a + b;
}

