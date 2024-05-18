/*************************************************************************************************
 * Section Challenge - Pointers and References
 * 
 * FROM:https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535556#overview
 * 
 * GOAL: Write a C++ function named "apply_all" that expects two arrays of intergers and their sizes
 *       and dynamically allocates a new array of integers whose size is the product of the 2 array sizes 
 *       (If 1 array is of size 3 and the other 5 it should create a new array of size 15)
 * 
 *       The function should loop through the second array and multiply each element across each
 *       element of array 1 and store the product in the newly created array 
 * 
 *       The function should return a pointer to the newly allocated array
 *
 *       You can also write a print function that expects a pointer to an array of integers and its
 *       its size and display the elements in the array
 * 
 * EXAMPLE: Below is the output from the following code which would be in main:
 *          
 *          int array1[] {1, 2, 3, 4, 5}
 *          int array2[] {10, 20, 30}:
 * 
 *          cout << "Array 1: ";
 *          print(array1, 5);
 * 
 *          cout << "Array2: ";
 *          print(array2, 3);
 * 
 *          int *results = apply_all(array1, 5, array2, 3);
 *          cout << "Result: ";
 *          print(results, 15);
**************************************************************************************************/