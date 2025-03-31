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
    void display_player(Player p);

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

-If you don't provide your own way of copying objects by value then the compiler provides a default way of copying objects
-Copies the values of each data member to the new objects
    -Default memberwise copy
-Perfectly fine in many cases
-Beware if you have a pointer data member
    -Pointer will be copied
    -Not what it is pointing to
    -Shallow vs. Deep copy

-Best Practices
    -Provide a copy constructor when your class has raw pointer members
    -Provide the copy constructor with a const reference parameter
        -This prevents any modification to the source
    -Use STL classes as they already provide copy constructors
    -Avoid using raw pointer data members if possible


Declaring the Copy Constructor
------------------------------------------------------

Type::Type (const Type &source);

Player::Player (const Player &source);
Account::Account (const Account &source);



Implementing the Copy Constructor
------------------------------------------------------

Player

Player::Player (const Player &source)
    : name {source.name},
      health {source.health},
      xp {source.xp} {}



Account

Account::Account (const Account &source)
    : name {source.name},
      balance {source.balance} {}
*/



void copy_construct()
{
    Player empty {"XXXXXXX", 100, 50};
    Player my_new_object {empty};
    display_player(empty);

    Player eric {"Eric"};
    display_player(eric);

    Player hero {"Hero", 100};
    display_player(hero);

    Player villain {"Villain", 100, 55};
    display_player(villain);
}


void display_player(Player p)
{
    cout << "display_player() \n--------------------------------------------------------" << endl;
    cout << "Name: " << p.get_name() << endl;
    cout << "Health: " << p.get_health() << endl;
    cout << "XP: " << p.get_xp() << endl;
    cout << endl;
}