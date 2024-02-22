/****************************************************************
 * Inline Functions Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535516#questions/4821302
 * 
 * SUMMARY: Inline functions are like the difference between getting another company
 *          to provide a product (overhead) as opposed to having it made in house (inline)
****************************************************************/

#include <iostream>


using namespace std;


#pragma region Function Prototypes

inline int add_numbers(int a, int b);

#pragma endregion



int main()
{
    int result {0};
    result = add_numbers(100, 200);
    cout << result << endl << endl;
    return 0;
}


/*
Inline Functions
-----------------------------------------------------
-Function calls have a certain amount of overhead
-Saw what happens on call stack in previous notes
    -Refer to 10) How Do Function Calls Work.cpp
-Sometimes we have simple functions
-We can SUGGEST to the compiler to compile them 'inline'
    -Avoids function call overhead
    -Generate inline assembly code
    -Faster
    -Could cause code bloat
-Compilers optimization are very sophisticated
    -Will likely inline even without your suggestion
*/

inline int add_numbers(int a, int b)
{
    return a + b;
}

