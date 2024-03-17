/****************************************************************************************************************
 * Const and Pointers Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535540#questions/7245890
 * 
 * SUMMARY: The use of const with pointers
*****************************************************************************************************************/

#include <iostream>

using namespace std;

#pragma region Function Prototypes

void pointers_to_constants();
void constant_pointers();
void constant_pointers_to_constants();

#pragma endregion


int main()
{
    return 0;
}



/*
Const and Pointers
------------------------------------
-There are several ways to qualify pointers using const
    -Pointers to constants
    -Constant pointers
    -Constant pointers to constants
*/


void pointers_to_constants()
{
    //The data pointed to by the pointers is constant and CANNOT be changed
    //The pointer itself can change and point somewhere else

    int high_score {100};
    int low_score {65};
    const int *score_ptr {&high_score}; //This is not making the pointer a constant, it's saying 
                                        //the ptr isn't allowed to change the value at the location

    //*score_ptr = 86;              //ERROR because it's trying to change the value at the location
    score_ptr = &low_score;         //OK because it's changing where the pointer is pointing to
    low_score = 54;
}


void constant_pointers()
{
    //The data pointed to by the pointers can be changed.
    //The pointer itself CANNOT change and point somewhere else
    int high_score {100};
    int low_score {65};
    int *const score_ptr {&high_score}; 

    *score_ptr = 86;            //OK
    //score_ptr = &low_score;   //ERROR

}


void constant_pointers_to_constants()
{
    //The data pointer to by the pointer is constant and CANNOT be changed.
    //The pointer itself CANNOT change and point somewhere else.

    int high_score {100};
    int low_score {65};
    const int *const score_ptr {&high_score}; 

    //*score_ptr = 86;          //ERROR
    //score_ptr = &low_score    //ERROR

    high_score = 32;            //Can still be changed at the variable and not through the pointer
}