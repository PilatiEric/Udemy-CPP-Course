/****************************************************************************************************************
 * TITLE: Constructor Parameters and Default Values - Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535588#overview
 * 
 * SUMMARY: Provides a way to reduce the number of constructors needed
*****************************************************************************************************************/


#include <iostream>
#include <string>

using namespace std;


#pragma region Classes

    #include "Player.h"     //More notes in class

#pragma endregion




#pragma region Prototype Functions

    void default_value_player();

#pragma endregion



int main()
{
    default_value_player();
    return 0;
}



/*
Constructor Parameters and Default Values
---------------------------------------------------------------------
-Can often simplify our code and reduce the number of overloaded constructors
-Same rules apply as we learned with nomn-member functions

-We can reduce the number of constructors needed by supplying default values
*/


void default_value_player()
{
    Player empty;
    Player eric {"Eric"};
    Player hero {"Hero", 100};
    Player villain {"Villain", 100, 55};
}