/***********************************************************************************************
 * Pointer Arithmetic Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535538#questions/7245890
 * 
 * SUMMARY: 
************************************************************************************************/


#include <iostream>


using namespace std;


#pragma region Function Prototypes

void compare_pointers();
void comparing_values_at_pointer();

#pragma endregion


int main()
{
    cout << boolalpha;
    compare_pointers();
    comparing_values_at_pointer();
    return 0;
}


/*
Pointer Arithmetic
---------------------------------------------
-Pointers can be used in
    -Assignment expressions
    -Arithmetic expressions
    -Comparison expressions
-C++ allows pointer arithmetic
-Pointer arithmetic only makes sense with raw arrays

++ and --
- (++) incrments a pointer to point to the next array element
    -int_ptr++;
- (--) decrements a pointer to the previous array element
    -int_ptr--;


- (+) increment pointer by n * sizeof(type)
    -int_ptr += n; or int_ptr = int_ptr + n;
    -If we were to say int_ptr += 2 we'd being saying increment the pointer by 
     2 * sizeof(int)
- (-) decrement pointer by n * sizeof(type)
    -int_ptr -= n; or int_ptr = intr_ptr + n
*/

void compare_pointers()
{
    //Comparing two pointers, they are comparing the pointer itself, not the value it points to.
    cout << "compare_pointers()\n-----------------------------------------------" << endl;
    string s1 {"Frank"};
    string s2 {"Frank"};

    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};

    cout << (p1 == p2) << endl;        //false
    cout << (p1 == p3) << endl <<endl; //true
}


void comparing_values_at_pointer()
{
    //Comparing the values two pointers point to requires dereferencing them
    cout << "comparing_values_at_pointer()\n-----------------------------------------------" << endl;
    string s1 {"Frank"};
    string s2 {"Frank"};

    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};

    //Add the (*) to dereference though
    cout << (*p1 == *p2) << endl;        //true
    cout << (*p1 == *p3) << endl <<endl; //true
}


void pointer_arithmetic()
{
    cout << "pointer_arithmetic()\n-----------------------------------------------" << endl;
    int scores[] {100, 95, 89, 68, -1};
    int *score_ptr {scores};

    //EXAMPLE 1
    cout << "EXAMPLE 1\n-----------------------" << endl;
    while (*score_ptr != -1)
    {
        cout << *score_ptr << endl;
        score_ptr++;
    }
    cout << endl;

    //EXAMPLE 2
    cout << "EXAMPLE 2\n-----------------------" << endl;
    score_ptr = scores;
    while (*score_ptr != -1)
    {
        //This accomplishes the same thing as the two
        //lines in the while loop in EXAMPLE 1
        cout << *score_ptr++ << endl;
    }
    cout << endl;

    //EXAMPLE 3
    cout << "EXAMPLE 3\n-----------------------" << endl;
    

}