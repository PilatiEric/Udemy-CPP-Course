/****************************************************************************************************************
 * TITLE: Copy Constructor - Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535590#questions
 * 
 * SUMMARY: 
*****************************************************************************************************************/


#include <iostream>
#include <string>

using namespace std;


#pragma region Classes

    #include "Player.h"     //More notes in class

#pragma endregion




#pragma region Prototype Functions

    void copy_construct();

#pragma endregion



int main()
{
    copy_construct();
    return 0;
}



/*
Copy Constructor
------------------------------------------------
-When objects are copied, C++ must create a new object from an existing object
-When is a copy of an object made?
    -Passing object value as a parameter 
    -Returning an object from a function by value
    -Constructing one object base on another of the same class
-C++ must have a way of accomplishing this so it provides a compiler-defined copy constructor if you don't
*/



void copy_construct()
{

}