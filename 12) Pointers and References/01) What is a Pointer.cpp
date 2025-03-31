/***************************************************************************
 * What is a Pointer Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535526#questions/4821302
 * 
 * SUMMARY: Pointers point to places in memory
****************************************************************************/


/*
What is a Pointer?
--------------------------------------------
-A variable
    -Whose value is an address
-What can be at that address?
    -Another variable
    -A function
-Pointers point to variables or functions?
-If x is an integer variable and its value is 10 then I can declare a pointer that points to it
-To use the data that the pointer is pointing to you must know its type

Why use Pointers?
    -Can't I use the variable or function itself?
        -Yes but now always
    -Inside functions, pointers can be used to access data that are defined outside the function.
     Those variable may not be in scope so you can't access them by their name.
    -Pointers can be used to operate on arrays very efficiently
    -We can allocate memory dynamically on the heap or free store
        -This memory doesn't even have a variabel name
        -The only way to get to it is via a pointer
    -With OO. pointers are how polymorphism works
    -Can access specific addresses in memory
        -Useful in embedded and systems applications
*/