/***********************************************************************************************************
 * Returning a Pointer from a Function Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535544#questions
 * 
 * SUMMARY: How returning a pointer from a function works
************************************************************************************************************/

#include <iostream>
#include <vector>

using namespace std;


#pragma region Function Prototypes

int *largest_int(int *int_ptr1, int *int_ptr2);
int *create_array(size_t size, int init_value = 0);
int *dont_do_this();
int *or_this();
void display(const int *const array, size_t size);

#pragma endregion


int main()
{
    int a {100};
    int b {200};

    int *largest_ptr {nullptr};
    largest_ptr = largest_int(&a, &b);
    cout << *largest_ptr << endl << endl;       //200
    //------------------------------------------

    int *my_array;                          //Will be allocated by the function

    my_array = create_array(100, 20);       //Create the array
                  
    delete [] my_array;
    //------------------------------------------
  
    size_t size;
    int init_value {};

    cout << "How many integer would you like to allocate? ";
    cin >> size;
    cout << "What value would you like them intialized to? ";
    cin >> init_value;
    cout << endl;

    my_array = create_array(size, init_value);          //You don't need to declare the pointer again
                                                        //Just the address the pointer was pointing to is deleted

    display(my_array, size);
    delete [] my_array;                     //Be sure to free the storage

    return 0;
}



/*
Returning a pointe from a function
--------------------------------------------------
-Functions can also return pointers
    - type *function_name();
        -Adding the * to the function name states that it is returning a pointer
-Should return pointers to
    -Memory dynamically allocated in function
    -To data that was passed in
-NEVER return a pointer to a local function variable!
    -Go to *dont_do_this() and *or_this() to see why
*/

int *largest_int(int *int_ptr1, int *int_ptr2)
{
    cout << "*largest_int()\n-------------------------------------------" << endl;
    if (*int_ptr1 > *int_ptr2)
        return int_ptr1;
    else
        return int_ptr2;
}



int *create_array(size_t size, int init_value)
{
    cout << "*create_array()" << endl;
    int *new_storage {nullptr};
    new_storage = new int[size];

    for (size_t i{0}; i < size; ++i)
        *(new_storage + i) = init_value;
    cout << endl;
        
    return new_storage;
}


int *dont_do_this()
{
    int size{};

    return &size;           //THIS IS RETURNING THE ADDRESS OF A LOCAL VARIABLE
                            //The problem is that once the function is done, size no longer holds it's value
                            //The function is passed its lifetime
                            //There will be nothing to point to
}


int *or_this()
{
    int size{};
    int *int_ptr {&size};   //THIS IS RETURNING A POINTER POINTING TO A LOCAL VARIABLE
                            //The problem is that once the function is done, size no longer holds it's value
                            //The function is passed its lifetime
                            //There will be nothing to point to

    return int_ptr;
}


void display(const int *const array, size_t size)
{
    cout << "display()\n-------------------------------------------" << endl;
    for (size_t i{0}; i < size; ++i)
        cout << array[i] << " ";
    cout << endl << endl;
}