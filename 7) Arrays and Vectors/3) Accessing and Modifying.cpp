/*****************************************
 * Accessing and Modifying Array Elements Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535394#questions
******************************************/

#include <iostream>
using namespace std;

#pragma region Function Prototypes

int accessing_arrays();
int modifying_arrays();
int using_arrays();

#pragma endregion


int main()
{
    // accessing_arrays();
    // modifying_arrays();
    using_arrays();
    return 0;
}

/*Accessing and Modifying Arrays
--------------------------------
-Accessing array elements
    -array_name [element_index]
    -test_scores [1]
*/

int accessing_arrays()
{
    int test_scores [5] {100, 95, 99, 87, 88};

    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl << endl;
    return 0;
}

int modifying_arrays()
{
    int test_scores [5] {100, 95, 99, 87, 88};

    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];
    cout << endl << endl;
    return 0;
}

int using_arrays()
{
    char vowels[] {'a', 'e', 'i', 'o', 'u'};

    cout << "\nThe first vowel is: " << vowels[0];
    cout << "\nThe last vowel is: " << vowels[4] << endl << endl;

    //cin >> vowels[5]; out of bounds - don't do this

    double hi_temps[] {90.1, 89.8, 77.5, 81.6};

    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;

    hi_temps[0] = 100.7;    //set the first element in hi_temps to 100.7

    cout << "The first high temperature is now: " << hi_temps[0] << endl;

    //int test_scores [5]; //Because none of the indexes are initialized, this will get you random numbers

    //int test_scores[5] {}; //By putting the curly braces, this will initialize all of the values at 0

    int test_scores[5] {100}; //This will ONLY initialize only the first value with 100
                              //NOT ALL OF THEM

    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl << endl;

    cout << "\nEnter 5 test scores: ";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];
    cout << endl << endl;

    cout << "Notice what the value of the array name is: " << test_scores << endl << endl; //It will give you the memory location of the array
                                                                                           //The array name is the address
    return 0;
}