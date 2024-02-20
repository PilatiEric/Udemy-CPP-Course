/***********************************************************************
 * Passing Arrays to Functions Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535508#overview
 * 
 * SUMMARY: VERY IMPORTANT CHAPTER!!!
 *          This shows how to handle passing arrays into functions
 *          and the extra steps needed to use it.
************************************************************************/

#include <iostream>


using namespace std;


#pragma region Function Prototypes

void print_array(int arr [], size_t size);      //MAKE SURE TO PASS IN THE SIZE OF THE ARRAY!!!!!!!!
                                                    //The array name only passes in the location of the array, not the size.
void zero_array(int arr [], size_t size);
void const_zero_array(const int arr [], size_t size);
void set_array(int arr [], size_t size, int value);

#pragma endregion

int main()
{
    int my_array[] { 1, 2, 3, 4, 5};
    int my_scores[] {100, 98, 90, 86, 84};
    print_array(my_array, 5);                       //MAKE SURE TO PASS IN THE SIZE OF THE ARRAY!!!!!!!!
                                                    //The array name only passes in the location of the array, not the size.
    zero_array(my_array, 5);
    const_zero_array(my_array, 5);
    print_array(my_scores, 5);
    set_array(my_scores, 5, 100);
    print_array(my_scores, 5);

    return 0;
}



/*
Passing Arrays to Functions
------------------------------------------------------------
-Can pass an array to a function by providing square brackets in the formal parameter description
    - void print_array(int numbers [], size_t size)
-The array elements are NOT copied
    -Remember, the array name is just a reference to the location
-The address of the array is what's copied
-The function doesn't know how many elements are in the array since all it knows is the location of the first element (the name of the array)


*/

void print_array(int arr [], size_t size)       //MAKE SURE TO PASS IN THE SIZE OF THE ARRAY!!!!!!!!
{                                                   //The array name only passes in the location of the array, not the size.
    cout << "print_array()\n-------------------------------------------------" << endl;
    for (size_t i{0}; i < size; ++i)
        cout << arr[i] << " ";                 //KEEP INT MIND!!!!!
    cout << endl << endl;                                   //The location of the array is being passed.
                                                    //This means the function can modify the contents of the array.
}

void zero_array(int arr [], size_t size)        //This will cause the contents of the actual array to be changed
{
    cout << "zero_array()\n-------------------------------------------------" << endl;
    for (size_t i {0}; i < size; ++i)
    {
        arr[i] = 0;                             //All elements in the array will change to 0
        cout << arr[i] << endl;
    }
    cout << endl;   
}


/*
const parameters
----------------------------------------------
-We can tell the compiler that function parameters are const (read-only)
-This could be useful in the print_array function since it should NOT modify the array
*/

void const_zero_array(const int arr [], size_t size)        //Making the array a constant will prevent the contents from being changed
{
    cout << "const_zero_array()\n-------------------------------------------------" << endl;
    for (size_t i {0}; i < size; ++i)
    {
        //arr[i] = 0;                             //This will throw an error since it's trying to change a constant
        cout << arr[i] << endl;
    }
    cout << endl;   
}



void set_array(int arr [], size_t size, int value)
{
    for (size_t i{0}; i < size; ++i)
        arr[i] = value;
}