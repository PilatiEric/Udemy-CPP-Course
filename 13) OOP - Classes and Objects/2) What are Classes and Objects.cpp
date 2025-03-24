/************************************************************************************************************
 * TITLE: What are Classes and Objects? - Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535568#overview
 * 
 * SUMMARY:
*************************************************************************************************************/

#include <iostream>

using namespace std;

#pragma region Prototype Functions



#pragma endregion


int main ()
{
    return 0;
}


/*
What are Classes and Objects?
----------------------------------------------------
-Classes
    -Blueprint from which objects are created
    -A user-defined data-type
    -Has attributes (data)
    -Has methods (functions)
    -Can hide data and methods
    -Provides a public interface
    -Examples:
        -Account
        -Employee
        -Image
        -std::vector
        -std::string

-Objects
    -Created from a class
    -Represents a specific instance of a class
    -Can create many, many objects
    -Each has its own identity
    -Each can use the defined class methods
    -Example Account objects
        -Eric's account is an instance of an Account
        -Paul's account is an instance of an Account
        -Each has its own balance, can make deposits, withdrawals, etc.


int high_score;
int low_score;

Account Eric_account;
Account Paul_account;

vector<int> scores;
string name;
*/