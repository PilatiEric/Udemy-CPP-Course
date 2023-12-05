/*******************************************
 * Section 8: Statements and Operators Section Challenge
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535434#notes
********************************************/

#include <iostream>
using namespace std;

#pragma region Function Prototypes

int cents_to_coins();

#pragma endregion


int main()
{
    cents_to_coins();
    return 0;
}

/*
Write a program that asks the user to enter the following:
An integer representing the number of cents

You may assume that the number of cents entered is greater than or equal to zero

The program should then display how to provide that change to the user.

In the US:
    1 dollar is 100 cents
    1 quarter is 25 cents
    1 dime is 10 cents
    1 nickel is 5 cents
    1 penny is 1 cent
*/



int cents_to_coins()
{
    int cents {};
    const int dollar {100};
    int total_dollars {};
    const int quarter {25};
    int total_quarters {};
    const int dime {10};
    int total_dimes {};
    const int nickel {5};
    int total_nickels {};
    const int penny {1};
    int total_pennies {};

    cout << "Please enter how many cents you have: ";
    cin >> cents;

    //Dollars
    total_dollars = cents / dollar;
    cents -= total_dollars * dollar;

    //Quarters
    total_quarters = cents / quarter;
    cents -= total_quarters * quarter;

    //Dimes
    total_dimes = cents / dime;
    cents -= total_dimes * dime;

    //Nickels
    total_nickels = cents / nickel;
    cents -= total_nickels * nickel;

    //Pennies
    total_pennies = cents;

    cout << "The following change is to be provided:" << endl;
    cout << "Dollars: " << total_dollars << endl;
    cout << "Quarters: " << total_quarters << endl;
    cout << "Dimes: " << total_dimes << endl;
    cout << "Nickels: " << total_nickels << endl;
    cout << "Pennies: " << total_pennies << endl;
    return 0;
}



