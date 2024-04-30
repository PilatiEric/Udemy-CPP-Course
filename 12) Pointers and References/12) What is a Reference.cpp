/*************************************************************************************************************
 * What is a Reference Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535548#questions
 * 
 * SUMMARY: References are the addresses of other variables allowing a direct connection and changing of source variables
**************************************************************************************************************/

#include <iostream>
#include <vector>
#include <string>

using namespace std;


#pragma region Function Prototypes

void what_is_reference();
void more_references();

#pragma endregion



int main()
{
    what_is_reference();
    more_references();
    return 0;
}


/*
What is a Reference?
--------------------------------------
-An alias for a variable meaning it is a direct connection to the variable
-Must be initialized to a variable when declared
-Cannot be null
-Once initialized cannot be made to refer to a different variable
-Very useful as function parameters
-Might be helpful to think of a reference as a constant pointer that is automatically dereferenced
*/

void what_is_reference()
{
    cout << "what_is_reference()\n------------------------------------------" << endl;
    
    vector<string> avatars {"Wan", "Aang", "Korra"};

    //Not using references in range-based for loop
    cout << "Without reference:\n"; 
    for (auto str: avatars)
        str = "Avatar";                 //This changes the copy as it loops through
                                        //str is just a copy, not the actual elements of the vector
    for (auto str: avatars)
        cout << str << endl;
    cout << endl;
    

    //Using references in range-based for loop
    cout << "With reference:\n";
    for (auto &str: avatars)            //This gives us the location of the value so we can change the source element rather than a copy
        str = "Avatar";
    
    for (auto str: avatars)
        cout << str << endl;
    cout << endl;

    //With const element
    // for (auto const &str: avatars)
    //     str = "Avatar"               This will throw an because we are trying to change the value

    avatars = {"Wan", "Aang", "Korra"};

    for (auto const &str: avatars)
        cout << str << endl;
    cout << endl;                       //Will work because we are not trying to change it
}


void more_references()
{
    cout << "more_references()\n------------------------------------------" << endl;
    int num {100};
    int &ref {num};

    cout << num << endl;
    cout << ref << endl;        //ref will always equal num because it is constantly referencing it, so it will change as num changes

    num = 200;
    cout << num << endl;
    cout << ref << endl;

    ref = 300;
    cout << num << endl;
    cout << ref << endl;
}