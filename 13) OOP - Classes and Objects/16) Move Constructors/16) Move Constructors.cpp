/****************************************************************************************************************
 * TITLE: Move Constructor - Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535596#questions
 * 
 * SUMMARY: An understanding of how efficient move constructor are
*****************************************************************************************************************/



#include <iostream>
#include <string>
#include <vector>

using namespace std;




#pragma region Classes

    #include "Move.h"

#pragma endregion




#pragma region Prototype Functions

void r_value_references();
void move_constructor();

#pragma endregion



int main()
{
    move_constructor();
    return 0;
}




/*
Move Constructor
--------------------------------------------
-Sometimes when we execute code the compiler creates unnamed temporary values
    - int total {0};
      total = 100 + 200;
    -100 + 200 is evaluated as 300 stored in an unnamed temp value
    -the 300 is then stored in the variable total
    -then the temp value is discarded
-The same happens with objects as well



When is it useful?
--------------------------------------------
-Sometimes copy constuctors are called many times automatically due to the copy semantics of C++
-Copy constructors doing deep copying can have a significant performance bottleneck
-C++11 introduced move semantics and the move constructor
-Move constructor moves an object rather than copy it
-Optional but recommended when you have a raw pointer
-Copy elision - C++ may optimize copying away completely (RVO-Return Value Optimization)


r-Value References
--------------------------------------------
-Used in moving semantics and perfect forwarding
-Move semantics is all about r-value references
-Use by move constructor and move assignment operator to efficiently move an object rather than copy it
- R-value reference operator (&&)


What does the move constructor actually do?
--------------------------------------------
-Instead of making a deep copy of the move constructor
    -'moves' the resource
    -Simply copies the address of the resource from source to the current object
    -And, nulls out the pointer in the source pointer
-Very efficient


syntax - r-value reference
--------------------------------------------
- Type::Type (Type &&source)

*/


void r_value_references()
{
    int x {100};
    int &l_ref = x;             //l-value reference
    l_ref = 10;                 //change x to 10

    int &&r_ref = 200;          //r-value reference
    r_ref = 300;                //change r_ref to 300

    //int &&x_ref = x;            //Compiler error because an r-value reference cannot be bound to an l-value
}


void move_constructor()
{
    vector<Move> vec;

    vec.push_back(Move{10});
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});
    vec.push_back(Move{90});
}