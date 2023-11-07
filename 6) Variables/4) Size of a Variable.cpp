/****************************************
 * What is the Size of a Variable Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535382#questions
*****************************************/

#include <iostream>
#include <climits>
#include <cfloat>
using namespace std;

/*
Size of Variables
----------------------------------

-sizeof Operator
    -Determines the size in bytes of a type or variable
        -sizeof(int)
        -sizeof(double)
        -sizeof(some_variable)
        -sizeof some_variable   //The parenthesis is optional for variables
    -<climits> and <cfloat>
        -Include files that provide functions relating to the size of different data types
            -INT_MAX
            -INT_MIN
            -LONG_MIN
            -LONG_MAX
            -FLT_MIN
            -FLT_MAX
    
    
*/

int main()
{
    cout << "sizeof information" << endl;
    cout << "============================" << endl;

    //sizeof Operator int use
    cout << "char: " << sizeof(char) << " bytes." << endl;
    cout << "int: " << sizeof(int) << " bytes." << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << endl;
    cout << "short: " << sizeof(short) << " bytes." << endl;
    cout << "long: " << sizeof(long) << " bytes." << endl;
    cout << "long long: " << sizeof(long long) << " bytes." << endl;

    cout << "============================" << endl;

    //sizeof operator floating-point use
    cout << "float: " << sizeof(float) << " bytes." << endl;
    cout << "double: " << sizeof(double) << " bytes." << endl;
    cout << "long double: " << sizeof(long double) << " bytes." << endl;

    cout << "============================" << endl;

    //VARIABLE_MIN use
    cout << "char: " << CHAR_MIN << endl;
    cout << "int: " << INT16_MIN << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "long: " << LONG_MIN << endl;
    cout << "long long: " << LLONG_MIN << endl;

    cout << "============================" << endl;

    //VARIABLE_MAX use
    cout << "char: " << CHAR_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "short: " << SHRT_MAX << endl;
    cout << "long: " << LONG_MAX << endl;
    cout << "long long: " << LLONG_MAX << endl;

    cout << "============================" << endl;

    //sizeof Operator variable use
    cout << "sizeof using variable names" << endl;
    int age {21};
    cout << "age is " << sizeof(age) << " bytes." << endl;
    //or
    cout << "age is " << sizeof age << " bytes." << endl;

    double wage {22.24};
    cout << "wage is " << sizeof(wage) << " bytes." << endl;
    //or
    cout << "wage is " << sizeof wage << " bytes." << endl;
}