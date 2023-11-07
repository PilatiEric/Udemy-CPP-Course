/************************************
 * Global Variables Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535362#questions
*************************************/

/*
What are Global Variables
----------------------------

-Variables that are declared outside of any function
-Global Variables are automatically initialized to 0


Issues
-----------------------------
-Can be found AND changed by any function

*/

#include <iostream>

using namespace std;

int age {18}; //This is a global variable

int main()
{
    int age {16};

    cout << age << endl; //Checks inside of main for "age" first then checks outside

    //In this case, it's going to use the "age" set to 16

    return 0;
}