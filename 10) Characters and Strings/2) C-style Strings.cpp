/*********************************************
 * C-Style Strings Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535478#overview
**********************************************/

#include <iostream>
#include <vector>
#include <cctype>
#include <cstring>

using namespace std;


#pragma region Function Prototypes

int c_string_functions();

#pragma endregion


int main()
{
    c_string_functions();
    return 0;
}


/*
C-Style Strings
-----------------------------------
-All strings are terminated with a null character (\0)
    -This is done behind the scenes
    -How a string would appear to the computer
        -char my_name[] {"Eric"}
            - E r i c \0
        -char my_name[7] {"Eric"}
            - E r i c \0 \0 \0
*/

int c_string_functions()
{
    //More C-Style String Functions

    char str[80];
    strcpy(str, "Hello "); //Copies the given string to the variable
    cout << str << endl;

    strcat(str, "there");  //Concatenates the string at the end of the previous string in the variable
    cout << str << endl;

    cout << strlen(str) << endl;   //Gives the number of characters in the variable

    cout << strcmp(str, "Another"); //Compares 2 strings
                                    //Like in C#, strings record the location of the string stored, not the value itself
                                    //Using == between two different strings that had the same characters would always return false
    return 0;
}