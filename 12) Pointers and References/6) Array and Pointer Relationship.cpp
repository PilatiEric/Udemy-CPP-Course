/********************************************************************
 * The Relationship Between Arrays and Pointers Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535536#questions/7245890
 * 
 * SUMMARY: This helps to show the relation between Pointers and Arrays to set
 *          up for the basis of pointer arithmetic
*********************************************************************/

#include <iostream>

using namespace std;

#pragma region Function Prototypes

void array_pointer();
void increase_pointer_size();
void basic_pointer_arithmetic();

#pragma endregion


int main()
{
    array_pointer();
    increase_pointer_size();
    basic_pointer_arithmetic();
    return 0;
}


/*
Relationship between Arrays and Pointers
----------------------------------------------------------------------
-The value of an array name is the address of the first element of the array
-The value of a pointer is an address
-If the pointer points to the same data type as the array element then the pointer and array name can be used interchangeably (almost)
*/

void array_pointer()
{
    cout << "array_pointer()\n----------------------------------------------------------------" << endl;
    //If a pointer is pointed to the first element in an array, you can then point to the individual elements
    int scores[] {100, 95, 89};
    int *score_ptr {scores};

    cout << score_ptr[0] << endl;                   //100
    cout << score_ptr[1] << endl;                   //95
    cout << score_ptr[2] << endl << endl;           //89
}


void increase_pointer_size()
{
    cout << "increase_pointer_size()\n----------------------------------------------------------------" << endl;
    int scores[] {100, 95, 89};
    int *score_ptr {scores};

    //When adding to a score pointer, it doesn't increase it by one, it increases it by the size of one integer
    cout << score_ptr << endl;                      //0x5ffe1c
    cout << (score_ptr + 1) << endl;                //0x5ffe20
    cout << (score_ptr + 2) << endl << endl;        //0x5ffe24
}

void basic_pointer_arithmetic()
{
    cout << "basic_pointer_arithmetic()\n----------------------------------------------------------------" << endl;
    int scores[] {100, 95, 89};
    int *score_ptr {scores};

    //When you dereference a pointer and add to it like below
    //it gets the index of the first value + however many number indexes indicated
    cout << *score_ptr << endl;                     //100 = *score_ptr[0]
    cout << *(score_ptr + 1) << endl;               //95 = *score_ptr[1] OR *score_ptr[0 + 1]
    cout << *(score_ptr + 2) << endl << endl;       //89 = *score_ptr[2] OR *score_ptr[0 + 2]
}

/*
SUSCRIPT NOTATION       |       OFFSET NOTATION
------------------------|------------------------------
array_name[index]       |    *(array_name + index)
pointer_name[index]     |   *(pointer_name + index)
*/