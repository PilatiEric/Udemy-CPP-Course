/****************************************************************************************************************
 * TITLE: Delegating Constructors - Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535586#overview
 * 
 * SUMMARY: Explains how to automate constructor creation a bit
*****************************************************************************************************************/


#include <iostream>

using namespace std;


#pragma region Classes

#include "Player.h"

#pragma endregion




#pragma region Prototype Functions

void delegating_construct_player();

#pragma endregion



int main()
{
    delegating_construct_player();
    return 0;
}




/*
Delegating Constructors
--------------------------------------------------------
-Often the code for constructors is very similar
-Duplicated code can lead to errors
-C++ allow delegating constructors
    -Code for one constructor can call another in the initialization list
    -Avoids duplicating code


-Instead of doing this
    Player() 
        :name{"None"}, health{0}, xp{0} {}            

    Player(std::string name_val)
        :name{name_val}, health{0}, xp{0} {}

    Player(std::string name_val, int health_val, int xp_val)
        :name{name_val}, health{health_val}, xp{xp_val} {}

-Do this
    Player(std::string name_val, int health_val, int xp_val)
        : name{name_val}, health{health_val}, xp{xp_val} {}

    Player()
        : Player {"None", 0, 0} {}

    Player(std::string name_val)
        : Player {name_val, 0, 0} {}

-This calls the three args constructor first and fills in the parameters
*/



void delegating_construct_player()
{
    Player empty;
    Player eric {"Eric"};
    Player villain {"Villain", 100, 55};

    /*
    The output will be:

        Three-args constructor (It's calling the no-args constructor which calls the three-args constructor)
        No-args constructor
        Three-args constructor
        One-arg constructor
        Three-args constructor
    */
}