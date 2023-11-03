/**************************************
 * Basic Input and Output (I/O) using cin and cout Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535348#questions
***************************************/

#include <iostream>
using namespace std;

int main()
{
    int A_Variable;
    cout << "Enter a number: " << endl;    //Cout prints stuff
    cin >> A_Variable;
    cout << endl << "Use entered the number " << A_Variable << "." << endl << endl;
}