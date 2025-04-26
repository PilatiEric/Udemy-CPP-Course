/****************************************************************************************************************
 * TITLE: Constructor Initialization Lists - Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535584#overview
 * 
 * SUMMARY: Explains a more efficient way of initializing values in an object
*****************************************************************************************************************/


#include <iostream>

using namespace std;


#pragma region Classes

void construct_list_player();

#pragma endregion





#pragma region Prototype Functions

    #include "Player.h"     //More notes in class

#pragma endregion




int main()
{
    construct_list_player();
    return 0;
}




/*
Constructor Initialization Lists
----------------------------------------------------------
-So far, all data member values have been set in the constructor body
-Constructor initialization lists
    -Are more efficient
    -Initializations List immediately follows the parameter list
    -Initializes the data member as the object is created
    -Order of initialization is the oreder of declaration in the class
*/

void construct_list_player()
{
    Player empty;
    Player eric {"Eric"};
    Player villain {"Eric", 100, 55};
}