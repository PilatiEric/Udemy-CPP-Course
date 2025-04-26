/****************************************
 * Multidimensional Arrays Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535396#notes
*****************************************/

#include <iostream>
using namespace std;

#pragma region Function Prototypes

int multidimen_arrays();

#pragma endregion

int main()
{
    multidimen_arrays();
    return 0;
}

/*Multidimensional Arrays
--------------------------------------
-Declaring
    -Element_Type array_name [number_of_rows] [number_of_columns]
        -Ex. int movie_rating [3] [4];

-Intitializing
    -cin >> movie_rating [1] [2]
    -cout << movie_rating [1] [2]

-Uses
    -When you don't just want a list, but a table too
        -Ex. A table of movie reviewers and their rating for multiple movies

-Calling
    -array_name [row_index][column_index]
*/

int multidimen_arrays()
{
    int movie_rating [3] [4]
    {
        {0, 4, 3, 5},
        {2, 3, 3, 5},
        {1, 4, 4, 5}
    };

    cout << "The first reviewer's rating for the last movie: " << movie_rating[0][3] << endl;
    cout << "The second reviewer's rating for the third movie: " << movie_rating[1][2] << endl << endl;
    return 0;
}
