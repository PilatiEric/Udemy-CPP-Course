/*************************************
 * Testing for Equality Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535424#notes
**************************************/

#include <iostream>
#include <vector>
using namespace std;

#pragma region Function Prototypes

int equality_expressions();

#pragma endregion


int main()
{
    equality_expressions();
    return 0;
}


/*
Equality Operators
------------------------------
-The == and != operators
    -Compares the values of 2 expressions
    -Evaluates to a Boolean (true or false, 1 or 0)
    -Commonly used in control flow statements
    -expr1 == expr2
    -expr1 != expr2
    -100 == 200
    -num1 != num2
-boolalpha and noboolalpha
    -Part of std
    -boolalpha
        -Causes true or false expressions to display as "true or false"
    -noboolalpha
        -Reverses the change of boolalpha to display "1" or "0"
    -cout << (num1 == num2) << endl;   // 0 or 1
     cout << std::boolalpha;
     cout << (num1 == num2) << endl;   // true or false
     cout << std::noboolalpha;
-Storage Approximation
    -The computer stores floating point numbers as approximations
        - 12 == 11.99999999999999999999999999999
            -Computer will return true
*/


int equality_expressions()
{
    bool equal_result {false};
    bool not_equal_result {false};

    int num1 {}, num2 {};

    cout << boolalpha;

    cout << "Enter two integers seperated by a space: ";
    cin >> num1 >> num2;
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);
    cout << "Comparison result (equals): " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;
    return 0;
}