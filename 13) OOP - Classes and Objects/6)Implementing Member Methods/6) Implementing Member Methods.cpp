/****************************************************************************************************************
 * TITLE: Implementing Member Methods - Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535576#overview
 * 
 * SUMMARY: How to create and call getters and setters for a class as well as how to create a header file for the class
*****************************************************************************************************************/

#include <iostream>
#include <string>

//This is the file created to store the Account class
#include "Account.h"

using namespace std;

#pragma region Prototype Functions

void implementin_methods();

#pragma endregion




#pragma region Classes

//class Account is in Account.h

#pragma endregion



int main()
{
    implementin_methods();
    return 0;
}



/*
Implementing Member Methods
-----------------------------------------------------
-Very similar to how functions are implemented
-Member methods have access to member attributes
    -You don't need to pass them as arguments
-Can be implemented inside the class declaration
    -Implicitly inline
    -Tend to implement larger methods outside of class declaration 
-Can be implemented outside the class declaration
    -Need to use Class_Name::method_name
-Can separate specification from implementation
    - .h file for class declaration
    - .cpp file for class implementation


Separating Specification from Implementation
------------------------------------------------------------------

-Create file called
    - Account.h
-POTENTIAL PROBLEM: Will get error if more than one .cpp file #include this file
    -To fix this we can use an Include Guard
        -Ensures compiler processes file only once

        #ifndef _Account_H_
        #define _Account_H_
        class Account
        {
            private:
                double balance;

            public:
                void set_balance(double bal);
                double get_balance();
        };
        #endif
    
    -There is also "#pragma once"
        -Does the same thing but not all compilers use it

    -In the .cpp file you can call the file by using #include "file_name"
        - #include "Account.h"

*/

//Used to define the functions created in the Account class
void Account::set_name(string n)
{
    name = n;
}

string Account::get_name()
{
    return name;
}

bool Account::deposit(double amount)
{
    //if verify amount
    balance += amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if (balance - amount >= 0)
    {
        balance -= amount;
        return true;
    }
    else
    {
        return false;
    }
}

void implementin_methods()
{
    cout << "implementing methods()\n-------------------------------------------" << endl;

    Account eric_account;
    eric_account.set_name("Eric's Account");
    eric_account.set_balance(1000);

    if(eric_account.deposit(200))
        cout << "Deposit OK" << endl;
    else
    {
        cout << "Deposit not allowed" << endl;
    }

    if(eric_account.withdraw(500))
        cout << "Withdraw OK" << endl;
    else
    {
        cout << "Withdraw not allowed" << endl;
    }

    if(eric_account.withdraw(1500))
        cout << "Withdraw OK" << endl;
    else
    {
        cout << "Withdraw not allowed" << endl;
    }
    
    cout << endl << endl;
}