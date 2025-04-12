/****************************************************************************************************************
 * TITLE: Friends of a class - Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535610#questions/23238495
 * 
 * SUMMARY: 
*****************************************************************************************************************/

#include <iostream>
#include <string>

using namespace std;




/*
Friends of a class
----------------------------------------------------
-Friend
    -A function or class that has access to private class member
        -That function or class is NOT a member of the class it is accessing
    -Function
        -Can be regular non-member functions
        -Can be member methods of another class
    -Class
        -Another class have access to private class members

-Friendship must be granted NOT taken
    -Declare explicitly in the class that is granting friendship
    -Declared in the function prototype with the keyword 'friend'
-Friendship is not symmetric
    -Must be explicitly granted
        -If A is a friend of B
        -B is NOT a friend of A
-Friendship is not transitive
    -Must be explicitly granted
        -If A is a friend of B AND
        -B is a friend of C
        -Then A is NOT a friend of C
*/



class Player
{
    friend void display_player(Player &p);
    string name;
    int health;
    int xp;

    public:

};