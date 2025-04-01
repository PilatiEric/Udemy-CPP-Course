/****************************************************************************************************************
 * TITLE: Shallow Copying with the Copy Constructor - Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535592#questions
 * 
 * SUMMARY: Shows the problem with making a shallow copy of something with a pointer object
*****************************************************************************************************************/


#include <iostream>
#include <string>

using namespace std;


#pragma region Classes

    #include "Shallow.h"        //More notes in class

#pragma endregion




#pragma region Prototype Functions

void shallow_copy();
void display_shallow(Shallow s);

#pragma endregion



int main()
{
    shallow_copy();
    return 0;
}



/*
Shallow Copying with the Copy Constructor
--------------------------------------------------------------------------
-Consider a class that contains a pointer as a data member
-Constructor allocates storage dynamically and initializes th pointer
-Destructor releases the memory allocated by the constructor
-What happens in the default copy constructor?


Default Copy Constructor (Shallow Copy)
--------------------------------------------------------------------------
-Memberwise copy
-Each data member is copied from the source object
-The pointer is copied NOT what it points to (shallow copy)
-PROBLEM: When we release the storage in the destructor, the other object still refers to the released storage
    -Destructor releases memory allocated (As it should)
        -However, object is still pointing to this area and still thinks the area is valid
*/

void shallow_copy()
{
    cout << "shallow_copy\n----------------------------------------------------" << endl;
    Shallow obj1 {100};         //This has a pointer that points to a place in memory that stores 100
    display_shallow(obj1);      //By passing in obj1, we are creating a copy of the data which points to the same place in memory
                                //Once this function ends, the destructor is called making that space in memory invalid
                                //however, the original obj1 is still pointing there, causing the error.

    Shallow obj2 {obj1};        //If it gets to this point, you're calling the copy again, and now two objects are pointing to invalid data
    obj2.set_data_value(1000);  //Because of that, when this sets the value, it's also indirectly changing obj1's data value
    display_shallow(obj2);
}

//Once it exits the scope, the destructor is called
//This is where we get an error due to multiple objects pointing to the same place



void display_shallow(Shallow s)
{
    std::cout << s.get_data_value() << std::endl;
}