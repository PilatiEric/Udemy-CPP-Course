/**********************************************************************************
 * Dynamic Memory Allocation
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535534#questions/7245890
 * 
 * SUMMARY:
***********************************************************************************/

#include <iostream>


using namespace std;


#pragma region Function Prototypes

void new_storage_allocation();
void delete_deallocate_storage();
void allocate_array_storage();
void more_allocation();

#pragma endregion




int main()
{
    new_storage_allocation();
    allocate_array_storage();
    more_allocation();
    return 0;
}



/*
Dynamic Memory Allocation
--------------------------------------------------------
-Allocating storage from the heap at runtime
    -We often don't know how much storage we need until we need it
    -We can allocate storage for a variable at run time
    -Recall C++ Arrays
        -We had to explicitly provide the size and it was fixed
        -But vectors grow and shrink dynamically
            -This specifically is why this is important
    -We can use pointers to access the newly allocated heap storage
*/

void new_storage_allocation()
{
    cout << "new_storage_allocation()\n--------------------------------------------------" << endl;
    int *int_ptr {nullptr};

    int_ptr = new int;                      //This allocates an integer on the heap

    cout << int_ptr << endl;                //Gives the address of the ptr
    cout << *int_ptr << endl;               //Will give garbage data since no value was assigned

    *int_ptr = 100;

    cout << *int_ptr << endl << endl;
}

/*
Deallocatint Storage
----------------------------------------
-Once done with it, allocated storage needs to be deallocated to allow the rest of the program to use it
-Always deallocate memory to avoid memory leaks
    -Memory that can no longer be accessed by the program
*/

void delete_deallocate_storage()
{
    int *int_ptr {nullptr};
    int_ptr = new int;              //Allocate an integer on the heap

    delete int_ptr;                 //Frees the allocated storage
}


void allocate_array_storage()
{
    cout << "allocate_array_storage()\n--------------------------------------------------" << endl;

    int *array_ptr {nullptr};
    int size {};

    cout << "How big do you want the array? ";
    cin >> size;

    array_ptr = new int[size];              //Allocate array on the heap
                                            //Notice the size of the array needs to be declared when allocating storage

    delete [] array_ptr;                    //Free allocated storage
                                            //Do not include anything in the brackets
}


/*
Memory Stack and where manually allocated space is put
________________________________________________
|                                               |   
|                    Heap                       |
|                 Free Stack                    |
|                                               |
|           This is where manually              |
|         allocated memory is stored            |
|                                               |
|                                               |
|___________________Stack_______________________|  
|                                               |  
|______________Static Variables_________________|  
|                                               |                
|_________________Code Area_____________________|                
|                                               |                
|_______________________________________________|
*/

void more_allocation()
{
    cout << "more_allocation()\n--------------------------------------------------" << endl;

    size_t size {0};
    double *temp_ptr {nullptr};

    
    cout << "How many temps? ";
    cin >> size;

    while (true)                            //This will cause an error to be thrown if too high 
                                            //of high enough number is entered when it reaches this part of the code
                                            //because it is using up too much memory
        temp_ptr = new double[size];

    cout << temp_ptr << endl;
}