/*****************************************************************************************
 * Passing Pointers to Functions Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535542#overview
 *
 * SUMMARY: 
******************************************************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;


#pragma region Function Prototypes

void double_data(int *int_ptr);
void pass_ptr_in(int *int_ptr, int &value);
void swap(int *a, int *b);

#pragma endregion



int main()
{
    int value {10};
    int x {100};
    int y {200};
    int *int_ptr {nullptr};

    cout << "value: " << value << endl << endl;

    double_data(&value);
    cout << "value: " << value << endl << endl;

    pass_ptr_in(int_ptr, value);
    cout << "value: " << value << endl << endl;

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    swap(&x, &y);
    cout << "x: " << x << endl;
    cout << "y: " << y << endl << endl;

    return 0;
}


/*Passing pointers to a function
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


void pass_ptr_in(int *int_ptr, int &value)
{
    cout << "pass_ptr_in() was used\n----------------------------------------" << endl;
    int_ptr = &value;
    *int_ptr *= 2;
}

void swap(int *a, int *b)
{
    cout << "swap() was used\n----------------------------------------" << endl;
    int temp {*a};
    *a = *b;
    *b = temp;
}