/****************************************************************************************************************
 * TITLE: Public and Private - Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535574#overview
 * 
 * SUMMARY: 
*****************************************************************************************************************/

#include <iostream>
#include <string>

using namespace std;

#pragma region Prototype Functions

void Privacy();

#pragma endregion




#pragma region Classes

class Player
{
    private:
        //attributes
        string name {"Player"};
        int health;
        int xp;

    public:
        //methods
        void talk(string text_to_say)
        {
            cout << name << " say " << text_to_say << endl;
        }
        bool is_dead();
};

#pragma endregion



int main()
{
    return 0;
}


/*
Public and Private
---------------------------------------------------------------------
-Class Member Access Modifiers
    -Public
        -Accessable everywhere
    -Private
        -Accessible only by members or friends of the class
    -Protected
        -Used in inheritance

-How to use
    - class Class_Name
      {
          private:
              string name;
              int health;
              int xp;
          public:
              void talk(string text_to_say);
              bool is_dead();
      }
*/



void Privacy()
{
    cout << "Privacy()\n-------------------------------------------" << endl;

    Player Eric;

    //Eric.name = "Eric";           //Gives a compiler error because name is set to private
    //cout << Eric.health << endl;

    Eric.talk("Wassup?!");          //We can use this because it's public
}