/****************************************************************
 * Declaring Pointers Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535528#questions/4821302
 * 
 * SUMMARY: How to declare and initialize pointers
*****************************************************************/

#include <iostream>


using namespace std;


#pragma region Function Prototypes

void declaring_pointers();
void intialize_pointers();

#pragma endregion



int main()
{
    return 0;
}


/*
Declaring Pointers
----------------------------------------------
- variable_type *pointer_name;
    -Can also be written as this
        - variable_type* pointer_name
            -Asteriks next to the type instead of the name
    -Make sure you put that asteriks

*/

void declaring_pointers()
{
    //Read these right to left
    int *int_ptr;               //int_ptr is a pointer to an int
    double *double_ptr;         //double_ptr is a pointer to a double
    char *char_ptr;             //char_ptr is a pointer to a char
    string *string_ptr;         //string_ptr is a pointer to a string
}


/*
Initialize Pointer Variables
-----------------------------------------------
- variable_type *pointer_name {nullptr};
    -nullptr is initializing a pointer to 0 (they don't point anywhere)
-ALWAYS initialize a pointer variable
    -If you don't, it'll have garbage data
    -Since a pointer contains an address, 
     an uninitialized variable is like it's pointing everywhere
*/

void intialize_pointers()
{
    int *int_ptr {};
    double *double_ptr {nullptr};       //nullptr is initializing a pointer to 0 (they don't point anywhere)
    char *char_ptr {nullptr}; 
    string *string_ptr {nullptr};
}