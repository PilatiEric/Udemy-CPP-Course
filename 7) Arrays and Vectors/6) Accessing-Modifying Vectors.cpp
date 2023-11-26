/*********************************************
 * Accessing and Modifying Vectors Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535400#notes
**********************************************/

#include <iostream>
#include <vector>
using namespace std;

#pragma region Function Prototypes

int vectors();
int vectors_testing();

#pragma endregion


int main()
{
    vectors();
    vectors_testing();
    return 0;
}


/*How to access vector elements
------------------------------------
-vector_name[element_index];
    -Exactly the same as with arrays
-vector_name.at(element_index)
    -The .at() method is the vector function allowing you to access the elements
*/

/*How to modify a vector
------------------------------------
-vector_name.push_back(element)
    -The .push_back() method add an element to the vector while also increasing its size
*/

/*Other Vector Notes
------------------------------------
-What if you are out of bounds?
    -Arrays never do bounds checking
    -Many vector methods privide bounds checking
        -An exception and error message is generated
*/

int vectors()
{
//  vector <int> test_scores {100, 95};
//  cin >> test_scores.at(5);

//  Will generate this exception:
//  terminate called after throwing an instance of 'std::out_of_range'
//  what():  vector::_M_range_check:__n (which is 5) >= this->size() (which is 2)
//  This application has requested the Runtime to terminate it in an unusual way.
//  Please contact the application's support team for more information.

    vector <int> test_scores {100, 95, 99, 87, 88};
    cout << "The first element: " << test_scores.at(0) << endl;
    cin >> test_scores.at(0);
    test_scores.push_back(80);

    return 0;
}


int vectors_testing()
{
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

    cout << vowels[0] << endl;
    cout << vowels[4] << endl;

    vector <int> test_scores {100, 98, 89};

    cout << "\nTest scores using array syntax:" << endl;
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;

    cout << "\nTest scores using vector syntax:" << endl;
    
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << "\nThere are " << test_scores.size() << " scores in the vector." << endl;

    cout << "Enter 3 test scores: ";
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);

    cout << "\nUpdated test scores: " << endl;

    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;

    cout << "\nEnter a test score to add to the vector: ";
    int score_to_add {0};    
    cin >> score_to_add;
    test_scores.push_back(score_to_add);

    cout << "\nEnter one more test score to add to the vector: ";
    cin >> score_to_add;
    test_scores.push_back(score_to_add);

    cout << "\nTest scores now: " << endl;
    
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;



    cout << "\nThere are now " << test_scores.size() << " scores in the vector." << endl;

    //cout << "This should cause an exception!!!" << test_scores.at(10);

    //Example of a 2D-vector

    vector <vector<int>> movie_ratings
    {
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 3, 4, 5}
    };

    cout << "\nHere are the movie rating for reviewer #1 using array syntax:" << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;


    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;
    

    return 0;
}
