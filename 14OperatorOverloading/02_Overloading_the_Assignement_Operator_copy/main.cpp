/*********************************************************************************************************************
 * TITLE: Overloading the Assignment Operator (copy) - Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535624#questions/23270813
 * 
 * SUMMARY: How to overload the assignment operator to be able to copy Class type objects
 *********************************************************************************************************************/


#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

#pragma region Classes

    #include "Mystring.h"

#pragma endregion






#pragma region Prototype Functions

    void overload_operator_copy();

#pragma endregion



int main()
{
    overload_operator_copy();
    return 0;
}



/*
Copy Assignment Operator (=)
------------------------------------------------------
-C++ provides a default assignment operator used for assigning one object to another
    - Mystring s1 {"Eric"}
      Mystring s2 = s1;         //This is initialization NOT assignment
                                //It was only just created and given a value

      s2 = s1;                  //THIS is assignment

-Default is memberwise assignment (shallow copy)
    -If we have a raw pointer data member we must deep copy





Overloading the copy assignment operator (deep copy)
----------------------------------------------------------------------
Type &Type::operator= (const Type &rhs);    //rhs mean right hand side

-specify the type being assigned a value
-say what data type will be returned
-follow it with ::operator{the operator you want to override}
-end with (the type of parameter being passed in)

Mystring &Mystring::operator=(const Mystring &rhs);

s2 = s1;            //We write this
s2.operator=(s1);   //It converts what we wrote to this behind the scenes



Overloading the copy assignment operator - steps for deep copy
-----------------------------------------------------------------------------------------

Mystring &Mystring::operator=(const Mystring &rhs)
{
    1) Check for self assignment
    if (this == &rhs)                               // p1 = p1
    return *this;                                   //return current object

    2) Deallocate storage for (this -> str) since we are overwriting it
    delete[] str;

    3) Allocate storage for the deep copy
    str = new char[std::strlen(rhs.str) + 1];

    4)Perform the copy
    std::strcpy(str, rhs.str);

    5) Return the current by reference to allow chain assignment
    return *this;                                   // s1 = s2 = s3;
}
*/

void overload_operator_copy()
{
    Mystring a {"Hello"};       //Overloaded constructor
    Mystring b;                 //No-args constructor
    b = a;                      //Copy assignment
                                //b.operator=(a);
    b = "This is a test";       //b.operator=("This is a test");

    Mystring empty;
    Mystring eric {"Eric"};
    Mystring guy {eric};
    Mystring persons;

    empty = guy;                //Copy assignment operator

    empty.display();
    eric.display();
    guy.display();
    empty.display();


    persons = "Me, you, and us";
    persons.display();
    
    vector<Mystring> persons_vec;
    persons_vec.push_back("Eric");
    persons_vec.push_back("Guys");
    persons_vec.push_back("Other Guy");


    cout << "========Loop 1==========" << endl;

    for (const Mystring &p: persons_vec)
    {
        p.display();
    }
    cout << endl;
    
    cout << "========Loop 2==========" << endl;

    for (Mystring &p: persons_vec)
    {
        p = "Changed";
    }

    cout << endl;

    
    cout << "========Loop 3==========" << endl;

    for (const Mystring &p: persons_vec)
    {
        p.display();
    }
}