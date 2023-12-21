#include <iostream>
#include <vector>
using namespace std;

#pragma region Function Prototypes

int number_options();

#pragma endregion


int main()
{
    number_options();
    return 0;
}

/*
Display this list
-----------------------
P - Print Numbers
A - Add a number
M - Display mean of the numbers
S - Display the smallest number
L - Display the largest number
Q - Quit
*/

int number_options()
{
    cout << "P - Print numbers" <<
          "\nA - Add a number" <<
          "\nM - Display mean of the numbers" <<
          "\nS - Display the smallest number" <<
          "\nL - Display the largest number" << 
          "\nQ - Quit";
    return 0;
}