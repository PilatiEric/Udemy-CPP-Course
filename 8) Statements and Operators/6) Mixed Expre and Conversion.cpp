/**************************************************
 * Mixed Expressions and Conversions Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535422#notes
***************************************************/


#include <iostream>
#include <vector>
using namespace std;

#pragma region Function Prototypes

int mixed_expressions();

#pragma endregion


int main()
{
    mixed_expressions();
    return 0;
}

/*
Mixed Type Expressions
----------------------------
-C++ operations occur on same type operands
    -If operands are of different types, C++ will convert one
        -!IMPORTANT! Since it could affect calculation results
    -C++ will attempt to automatically convert types (coercion).
        -If it can't a compiler error will occur.

-Conversions
    -Higher vs. Lower types are based on the size of the values the type can hold
        -Higher
            -long double, double, float, unsigned long, long, unsigned int, int
        -Lower
            -short and char types are always converted to int
    -Type Coercion
        -conversion of one operand to another data type
    -Promotion
        -Conversion to a higher type
        -Used in mathmatical expressions
        -lower op higher    The lower is promoted to a higher
            - 2 * 5.2
                -2 is promoted to 2.0
    -Demotion
        -Conversion to a lower type
        -Used with assignment to lower type
        -lower = higher;   The higher is demoted to a lower
            -int num {0};
             num = 100.2;
    -Explicit Type Casting - static_cast<type>
        -int total_amount {100};
         int total_number {8};
         double average {0.0};

         average = total_amount / total_number
         cout << average << endl;    // displays 12

         average = static_cast<double>(total_amount) / total_number;
         cout << average << endl;    // displays 12.5
*/


int mixed_expressions()
{
    int total {};
    int num1 {}, num2 {}, num3 {};
    const int count {3}; 
    cout << "Enter 3 integers seperated by spaces ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    double average {0.0};

    average = static_cast<double>(total) / count;

    cout << "The three number were: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "The sum of the numbers is: " << total << endl;
    cout << "The average is: " << average << endl << endl;

    return 0;
}

