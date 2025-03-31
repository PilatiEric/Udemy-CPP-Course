/*******************************************************************************
 * Accessing the Pointer Address and Storing Address in a Pointer Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535530#questions/4821302
 * 
 * SUMMARY: How to access and store pointer addresses
********************************************************************************/

#include <iostream>
#include <vector>
#include <string>

using namespace std;


#pragma region Function Prototypes

void access_pointer_address();
void sizeof_pointer_variable();
void typed_pointers();
void store_pointer_address();

#pragma endregion


int main()
{
    access_pointer_address();
    sizeof_pointer_variable();
    typed_pointers();
    store_pointer_address();
    return 0;
}



/*
Accessing Pointer Address
-----------------------------------------------------------
- & The address operator

-Variables are stored in unique addresses
-Unary operator
-Evaluates to the address of its operand
    -Operand cannot be a constant or expression that evaluates to temp values
*/

void access_pointer_address()
{
    cout << "access_pointer_address()\n-------------------------------------------------" << endl;
    int num {10};

    cout << "Value of num is: " << num << endl;                 // 10
    cout << "sizeof num is " << sizeof num << endl;             // 4
    cout << "Address of num is: " << &num << endl << endl;      // 0x5ffe2c


    int *p;

    cout << "Value of p is: " << p << endl;                     // 0x7ff73d - garbage numbers
    cout << "Address of p is: " << &p << endl;                  // 0x5ffe20
    cout << "sizeof of p is: " << sizeof p << endl;             // 8

    p = nullptr;
    cout << "Value of p is: " << p << endl << endl;             // 0

    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<string> *p4 {nullptr};
    string *p5 {nullptr};

    cout << "sizeof of p1 is: " << sizeof p1 << endl;   
    cout << "sizeof of p2 is: " << sizeof p2 << endl;   
    cout << "sizeof of p3 is: " << sizeof p3 << endl;   
    cout << "sizeof of p4 is: " << sizeof p4 << endl;   
    cout << "sizeof of p5 is: " << sizeof p5 << endl << endl;   
}


/*
sizeof pointer variable

-Don't confuse the size of a pointer and the size if what it points to
-All pointers in a program have the same size
-They may be pointing to very large or very small types
*/
void sizeof_pointer_variable()
{
    //No matter the type, the sizeof of an address is always the same
    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<string> *p4 {nullptr};
    string *p5 {nullptr};
}


void typed_pointers()
{
    //The compiler will make sure that the address stored in a pointer is of the correct type
    int score {10};
    double hihg_temp {100.7};

    int *score_ptr {nullptr};

    score_ptr = &score;

    //score_ptr = &high_temp;     //This will throw an error
                                  //Type Conflict
}

/*
Storing an Address in Pointer Variable
-----------------------------------------------------------
- & the address operator
    -Pointers are variables so they can change
    -Pointers can be null
    -Pointers can be uninitialized
*/

void store_pointer_address()
{
    double high_temp {100.7};
    double low_temp {37.2};

    double *temp_ptr;

    temp_ptr = &high_temp;          //Points to high_temp
    temp_ptr = &low_temp;           //Now points to low_temp

    temp_ptr = nullptr;             //Uninitialized
}

