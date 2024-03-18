/*****************************************************************************************
 * Passing Pointers to Functions Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535542#overview
 *
 * SUMMARY: 
******************************************************************************************/

#include <iostream>

using namespace std;


#pragma region Function Prototypes

void double_data(int *int_ptr);

#pragma endregion



int main()
{
    int value {10};

    cout << value << endl << endl;

    double_data(&value);

    cout << value << endl << endl;
    return 0;
}


/*
Passing pointers to a function
-------------------------------------------------
-Pass-by-reference with pointer parameters
    -We can use pointers and the dereference operator to achieve pass-by-reference
    -The function parameter is a pointer
    -The actual parameter can be a pointer or address of a variable

*/

void double_data(int *int_ptr)
{
    cout << "double_data() was used\n----------------------------------------" << endl;
    *int_ptr *= 2;
}