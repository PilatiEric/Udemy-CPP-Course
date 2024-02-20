/**************************************************************
 * Scope Rules Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535512#questions/4821302
 *
 *  SUMMARY:
***************************************************************/


#include <iostream>

using namespace std;


#pragma region Function Prototypes

void local_example(int x);
void global_example();
void static_local_example();

#pragma endregion

//GLOBAL VARIABLES
int num {300};

int main()
{
    int num {100};
    int num1 {500};

    {   // Creates a new level of scope
        int num {200};      //Because this is not static, num is initialized to 200 each time the program runs
        cout << "Local num is: " << num << " in inner block in main" << endl;
        cout << "Inner block in main can see out - num 1 is: " << num1 << endl;
    }

    cout << "Local num is: " << num << " in main" << endl;

    local_example(10);
    local_example(20);

    global_example();   //set global num to 300 - return 300, then 600
    global_example();   //set global num to 600 - return 600, then 1200

    static_local_example();     //Returns 5000, then 6000
    static_local_example();     //Returns 6000, then 7000
    static_local_example();     //Returns 7000, then 8000
    static_local_example();     //Returns 8000, then 9000

    return 0;
}



/*
Scope Rules
---------------------------------------------
-C++ uses scope rules to determine where an identifier can be used
-C++ uses static or lexical scoping
    -The scope is determined the same way you read a program
-Two main scopes
    -Local (or Block) Scope
    -Global Scope

Local (or Block) Scope  (local variables)
    -Indentifiers declared in a block {}
    -Function pararameters have block scope
    -Only visible within block {} where declared
    -Function local variable are only active while the function is executing
    -Local variables are NOT preserved between function calls
    -With nested blocks, inner blocks can 'see' out, but outer blocks cannot see in
    -Static local variables                                                         << IMPORTANT!
        -Declared with static qualifiers
            - static int value {10};
        -THE VALUE IS PRESERVERED BETWEEN FUNCTION CALLS!!!!!!                      << IMPORTANT!
        -Only initialized the first time the function is called

Global Scope
-Identifier declared outside any function or class
-Visible to all parts of the program after the global identifier has been declared
-Global Constants are OK
-Best practice - DON'T use global variables
-
*/

void local_example(int x)
{
    cout << "local_example()\n-------------------------------------------------------";
    int num {1000};         //local to local_example
    cout << "\nLocal Num is: " << num << " in local_example - start" << endl;
    num = x;
    cout << "Local num is: " << num << " in local_example - end" << endl << endl;
    //num1 in main is not within scope - so it can't be used here
}

void global_example()
{
    cout << "global_example()\n-------------------------------------------------------";
    cout << "\nGlobal num is: " << num << " in global_example - start" << endl;         //There is no num in the local scope because of that, it uses the global num, 300
    num *= 2;                                                                           //For the same reason as above, this multiplies the global num by 2
    cout << "Global num is: " << num << " in global_example - end" << endl << endl;
}


void static_local_example()
{
    cout << "static_local_example()\n-------------------------------------------------------";
    static int num {5000};          //Because this is static, it will only be initialized to 5000 the first time the function is run in the program
    cout << "\nLocal static num is: " << num << " in static_local_example - start" << endl;
    num += 1000;
    cout << "Local static num is: " << num << " in static_local_example - end" << endl << endl;
}