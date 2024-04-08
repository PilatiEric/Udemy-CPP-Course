/***********************************************************************************************************
 * Potential Pointer Pitfalls Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535546#questions
 * 
 * SUMMARY: A list of things to keep in mind when using pointers
************************************************************************************************************/

#pragma region Function Protypes

void uninitialized_pointers();

#pragma endregion



/*
Potential Pointer Pitfalls
----------------------------------------------
-Uninitialized pointers

-Dangling pointers
    -Also called "wild" or "stray" pointers
    -Pointer that is pointing to released memory
        -For example, 2 pointers point to the same data
        -1 pointer releases the data with delete
        -The other pointer accesses the release data
    -Pointer that points to memory that is invalid
        -We saw this when we returned a pointer to a function local variable
        
-Not checking if *new* failed to allocate memory
    -If *new* fails an exception is thrown
    -We can use exception hangling to catch exceptions
    -Dereferencing a null pointer will cause your program to crash

-Leaking memory
    -Forgetting to release allocated memory with delete
    -If you lose your pointer to the storage allocated on the heap you have no way to get to that storage again
    -The memory is orphaned or leaked
    -One of the most common pointers problems
*/

void uninitialized_pointers()
{
    int *int_ptr;   //Pointing anywhere
                    //Might be pointing to very important place in memory and could wipe it out
    //...
    
    *int_ptr = 100; //Hopefully a crash
}
