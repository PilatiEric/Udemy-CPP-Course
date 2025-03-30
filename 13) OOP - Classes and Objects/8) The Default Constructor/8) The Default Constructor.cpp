/****************************************************************************************************************
 * TITLE: The Default Constructor - Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535580#overview
 * 
 * SUMMARY: Summary of what the compiler does in regard to no-args constructors
*****************************************************************************************************************/

#include <iostream>
#include <string>


using namespace std;


#pragma region Classes

    #include "Player.h" //More notes in the class

#pragma endregion



#pragma region Prototype Functions

    void no_construct_player();

#pragma endregion



int main()
{
    no_construct_player();
    return 0;
}



/*
The Default Constructor
-------------------------------------------------
-Doesn't expect any arguments
    -Also called the no-args constructor
-If you write no cosntructors at all for a class
    -C++ will generate a Default Constructor that does nothing
-Called when you instantiate a new object with no arguments
*/


void no_construct_player()
{
    Player hero;
    Player eric {"Eric", 100, 13};
    eric.set_name("Eric");
    cout << hero.get_name() << endl;
    cout << eric.get_name() << endl;
}