/****************************************************************************************************************
 * TITLE: Constructors and Destructors - Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535578#overview
 * 
 * SUMMARY:
*****************************************************************************************************************/

#include <iostream>
#include <string>

using namespace std;


#pragma region Classes

    #include "Account.h"
    #include "Player.h"

#pragma endregion


#pragma region Prototype Functions

void player_con_and_de();

#pragma endregion




int main()
{
    player_con_and_de();
    return 0;
}




/*
Constructors and Destructors
--------------------------------------------------------
Constructors
    -Special member method
    -Invoked during object creation
    -Useful for initialization
    -Same name as the class
    -No return type
    -Can be overloaded

Destructors
    -Special member methods
    -Same name as the class proceeded with a tilde (~)
    -Invoked automatically when an object is destroyed
    -No return type and no parameters
    -Only 1 destructor is allowed per class
        -Cannot be overloaded
    -Useful to release memory and other resources
*/




void player_con_and_de()
{
    {
        Player slayer;
        slayer.set_name("Slayer");
    } //These {} were set to put them in their own scopes to show how the destructors are called


    {
        Player eric;
        eric.set_name("Eric");

        Player hero;
        hero.set_name("Hero");

        Player villain {"Villain", 100, 12};
        villain.set_name("Villain");
    } //Destructors will destroy them in reverse order that they were made


    Player *enemy = new Player;
    enemy -> set_name("Enemy");

    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss -> set_name("Level Boss");

    delete enemy;
    delete level_boss;
}