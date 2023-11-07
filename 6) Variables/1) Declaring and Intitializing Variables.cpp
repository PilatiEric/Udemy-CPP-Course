/*************************************
 * Declaring and Initializing Variables Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535360#questions
**************************************/

#include <iostream>

using namespace std;

/*
Declaring the Variable
--------------------------
-Rules
    -Can contain letters, numbers, and underscores
    -Must begin with a letter or underscore (_)
        -Cannot begin with a nunmber
    -Cannot use C++ reserved keywords
    -Cannot redeclare a name in the same scope
        -Remember that C++ is case sensitive

-Best Practices
    -Be consistent with the naming conventions
        -myVariableName vs. my_variable_name
        -Nvoid beginning names with underscores
    -Use meaningful names
        -Not too long and not too short
    -Never use variables before initializing
    -Declare variables close to when you use them in the code


int age;

double rate;

string name;

*/

/*
Initializing the Variables
-------------------------------------

-When you assign a value to a variable
-If used before initialization ANY value could be assigned to the variable at use

int age = 21; //C-like initialization

int age (21); //Constructor initialization

int age {21}; // C++11 list initialization syntax 
              //USE THIS STYLE

*/

int main()
{

    int room_width {0};
    int room_length {0};

    cout << "Enter the width of the room: ";
    cin >> room_width;
    cout << endl;

    cout << "Enter the length of the room: ";
    cin >> room_length;
    cout << endl;

    cout << "The area of the room us " << room_width * room_length << " square feet" << endl;

    return 0;
}