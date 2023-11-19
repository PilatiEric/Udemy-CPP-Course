#include <iostream>
#include <vector>
using namespace std;

#pragma region 

int vectors();

#pragma endregion

int main()
{
    vectors();
    return 0;
}

int vectors()
{
    //Create 2 int vectors
    vector <int> vector1 {};
    vector <int> vector2 {};

    //Add and display values as well as vector size
    vector1.push_back(10);
    vector1.push_back(20);

    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "The size of vector1 is " << vector1.size() << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "The size of vector2 is " << vector2.size() << endl << endl;

    //Create 2D vector and add other vectors to it
    vector <vector<int>> vector_2d {};

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    //Display 2D vector values
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;

    //Change first element of vector1 to 1000
    vector1.at(0) = 1000;

    //Display 2D vector values again
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;

    //Display vector1 values again
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;

    return 0;
}