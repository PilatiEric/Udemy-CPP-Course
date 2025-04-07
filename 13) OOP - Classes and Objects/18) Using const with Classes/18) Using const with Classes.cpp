/****************************************************************************************************************
 * TITLE: Using const with Classes - Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535602#questions
 * 
 * SUMMARY: Explains how to be able to use const in your classes without getting errors
*****************************************************************************************************************/


#include <iostream>
#include <string>

using namespace std;



#pragma region Classes

#include "Player.h"

#pragma endregion






#pragma region Prototype Functions

void const_with_classes();
void display_player_name (const Player &p);

#pragma endregion



int main()
{
    const_with_classes();
    return 0;
}




/*
Using const with Classes
---------------------------------------------------------
-Pass arguments to class member methods as const
-We can also crea const objects
-What happens if we call member functions on const objects?
    -const-correctness



Creating a const Object
--------------------------------------------------------

-villain is a const object so its attribute cannot change
    - const Player villain {"Villain", 100, 55};

-What happens when we call member methods on a const object?
    - const Player villain {"Villain", 100, 55};
      villain.set_name("Nice guy");                             //ERROR
      std::cout << villain.get_name() << std::endl;             //ERROR

    -The compiler throws an error for the get_name() because it assumes that it COULD change the object

-How do we fix this so we can use getter methods on const objects?
    - class Player
      {
          private:
          ...

          public:
            std::string get_name() const;
      }

    -This will allow us to both call the getter for the object and it will throw a compiler error if we try to modify anything
*/



void const_with_classes()
{
    const Player villain {"Villain", 100, 55};
    //BEFORE FIXING THE CONST ISSUE
    //villain.set_name("Super Villain");            This throws an error because we are trying to modify a const
    //cout << villain.get_name() << endl;             This throws an error because it thinks it COULD be modifying a const

    display_player_name(villain);
    Player hero {"Hero", 100, 15};
}



void display_player_name (const Player &p)
{
    std::cout << p.get_name() << std::endl;
}