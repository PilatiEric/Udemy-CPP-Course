/**************************************************************************************************
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
 *          int array1[] {1, 2, 3, 4, 5};
 *          int array2[] {10, 20, 30};
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
***************************************************************************************************/

#include <iostream>

using namespace std;

#pragma region Function Prototypes

int *apply_all(int arr1 [], size_t size1, int arr2 [], size_t size2);
void print(const int array[], int array_size);

#pragma endregion








int main()
{
    int array1[] {1, 2, 3, 4, 5};
    int array2[] {10, 20, 30};

    cout << array1 << endl;
    cout << "Print" << endl;
    // This determines the size of the array (the number of element).
    size_t array1_size = sizeof(array1) / sizeof(array1[0]);
    size_t array2_size = sizeof(array2) / sizeof(array2[0]);

    // Call apply_all and store the result
    int *results = apply_all(array1, array1_size, array2, array2_size);

    // Print the result array
    print(results, array1_size * array2_size);

    // Free the allocated memory
    delete[] results;

    return 0;
}







int *apply_all(int arr1[], size_t size1, int arr2[], size_t size2)
{
    size_t const array_size {size1 * size2};
    int *array_results = new int[array_size];
    int new_array_index {0};

    for (size_t i {0}; i < size1; ++i)
    {
        for (size_t j {0}; j < size2; ++j)
        {
            array_results[new_array_index] = arr1[i] * arr2[j];
            cout << arr1[i] * arr2[j] << endl;
            ++new_array_index;
        }
    }
    return array_results;
}







void print(const int array[], int array_size)
{
    for (int i {0}; i < array_size; ++i)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
