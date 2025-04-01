/****************************************************************************************************************
 * TITLE: Deep Copying with the Copy Constructor - Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535594#questions
 * 
 * SUMMARY: Explains how to avoid errors with copying pointers by using deep copy
*****************************************************************************************************************/



#include <iostream>
#include <string>

using namespace std;




#pragma region Classes

    #include "Deep.h"       //More notes in class

#pragma endregion




#pragma region Prototype Functions

    void deep_copy();
    void display_deep(Deep d);

#pragma endregion



int main()
{
    deep_copy();
    return 0;
}




/*
Shallow Copying with the Copy Constructor
--------------------------------------------------------------------------
User-Provided Copy Constructor (Deep Copy)
    - Create a copy of the pointed-to data
    -Each copy will have a pointer to unique storage in the heap
    -Deep copy when you have a raw pointer as a class data member
*/


void deep_copy()
{
    cout << "deep_copy()\n--------------------------------------------" << endl;
    Deep obj1 {100};
    display_deep(obj1);

    Deep obj2 {obj1};
    obj2.set_data_value(1000);
    display_deep(obj1);
    display_deep(obj2);

}


void display_deep(Deep d)
{
    cout << d.get_data_value() << endl;
}