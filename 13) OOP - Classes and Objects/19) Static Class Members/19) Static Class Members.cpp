/****************************************************************************************************************
 * TITLE: Static Class Members - Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535604#questions
 * 
 * SUMMARY: An explanation of Static members and class cpp files
*****************************************************************************************************************/



#include <iostream>
#include <string>


using namespace std;



#pragma region Classes

    #include "Player.h"
    #include "Player.cpp"

#pragma endregion




#pragma region Prototype Functions

    void static_members();
    void display_active_players();

#pragma endregion



int main()
{
    static_members();
    return 0;
}




/*
Static Class Members
----------------------------------------------
-Class data members can be declared as static
    -A single data member that belongs to the class not the objects
    -Useful to store class-wide information
-Class functions can be declared as static
    -Independent of any objects
    -Can be called using the class name
*/


void static_members()
{
    display_active_players();

    Player obj1 {"Eric"};

    display_active_players();

    {
        Player person {"Person"};
        display_active_players();
    }
    display_active_players();

    Player *enemy = new Player("Enemy", 100, 100);

    display_active_players();
    delete enemy;
    display_active_players();
}



void display_active_players()
{
    cout << "Active players: " << Player::get_num_players() << endl;
}