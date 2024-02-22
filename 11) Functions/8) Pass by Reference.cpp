/*******************************************************************
 * Pass by Reference Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535510#questions/4821302
 * 
 * SUMMARY: Pass-by-Reference uses the ampersand (&) to pass the location
 *          of an argument and not a copy of it.
********************************************************************/

#include <iostream>
#include <vector>

using namespace std;



#pragma region Function Prototypes

void scale_number(int &num);                //The ampersand symbol (&) tells it to pass not a copy of the argument, but the location
void swap(int &a, int &b);
void print(vector<int> v);
void reference_print(vector<int> &v);
void const_reference_print(const vector<int> &v);

#pragma endregion



int main()
{
    int number {1000};
    vector<int> data {1, 2, 3, 4, 5};
    cout << "main() > scale_number()\n-----------------------------------------------------" << endl;
    scale_number(number);
    cout << number << endl << endl;
    print(data);
    reference_print(data);
    const_reference_print(data);
    return 0;
}



/*
Pass by Reference
------------------------------------------------------
-Sometime we want to be able to change the actual parameter from within the function body
-In order to achieve this we need the location or address of the actual parameter
-Saw how this is the effect with array, bur what about other variable types?
    -We can use reference parameters to tell the compiler to pass in a reference to the actual parameter
    -The formal parameter will now be an alias for the actual parameter

-Pass by refence is providing the location and not a copy of the argument
    -Using the ampersand symbol (&) directly before the parameter name in the declaration tell the function to pass
     the location and not a copy of the argument
*/


void scale_number(int &num)
{
    if (num > 100)
        num = 100;
}


void swap (int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void print(vector<int> v)
{
    cout << "print()\n-----------------------------------------------------" << endl;
    for (auto num: v)
        cout << num << endl;
    cout << endl;
}


void reference_print(vector<int> &v)                      //This lets us avoid storage and copy overhead of pass-by-value
                                                          //However, this leaves the function open to changing the values of the vector
{
    cout << "reference_print()\n-----------------------------------------------------" << endl;
    for (auto num: v)
        cout << num << endl;
    cout << endl;
}


void const_reference_print(const vector<int> &v)
{
    cout << "const_reference_print()\n-----------------------------------------------------" << endl;
    //v.at(0) = 200;                                      //Now any attempt to change the values will not be allowed
    for (auto num: v)
        cout << num << endl;
    cout << endl;
}