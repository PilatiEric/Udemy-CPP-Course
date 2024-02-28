/**********************************************************************************
 * Deferencing a Pointer Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535532#questions/7245890
 * 
 * SUMMARY: 
***********************************************************************************/

#include <iostream>
#include <vector>


using namespace std;


#pragma region Function Prototypes

void dereferencing_pointer();
void temp_pointer();
void name_pointer();
void vector_pointer();

#pragma endregion



int main()
{
    dereferencing_pointer();
    temp_pointer();
    name_pointer();
    vector_pointer();
    return 0;
}


/*
Dereferencing a Pointer
---------------------------------------------------
-Access the data we're pointing to - dereferencing a pointer
    -If score_ptr is a pointer and has a valid address
        -Then you can access the data at the address contained in the score_ptr using the dereferencing operator *
            -When used printed out, putting the * before the variable name makes it print not the address but what's at the address
*/

void dereferencing_pointer()
{
    cout << "dereferencing_pointer()\n-----------------------------------------------" << endl;
    int score {100};
    int *score_ptr {&score};

    cout << *score_ptr << endl;         //100

    *score_ptr = 200;
    cout << *score_ptr << endl;         //200
    cout << score << endl << endl;      //200
}

void temp_pointer()
{ 
    double high_temp {100.7};
    double low_temp {37.4};
    double *temp_ptr {&high_temp};

    cout << *temp_ptr << endl;          //100.7

    temp_ptr = &low_temp;

    cout << *temp_ptr << endl << endl;  //37.4
}


void name_pointer()
{
    string name {"Eric"};
    string *string_ptr {&name};

    cout << *string_ptr << endl;        //Eric

    name = "Pilati";
    cout << *string_ptr << endl << endl;//Pilati
}


void vector_pointer()
{
    vector<string> avatars {"Wan", "Aang", "Korra"};
    vector<string> *vector_ptr {nullptr};

    vector_ptr = &avatars;

                                                                    //THIS IS FOR CALLING SPECIFIC ELEMENTS IN A VECTOR USING THE POINTER!!!!!

    cout << "First avatar: " << (*vector_ptr).at(0) << endl;        //The parenthesis are to make the priority of the pointer high
                                                                    //The dot (.) in .at qould have higher priority otherwise
                                                                    //It will throw an error otherwise
    cout << "Avatars: ";
    for (auto avatar: *vector_ptr)
        cout << avatar << " ";
    cout << endl << endl;
}