/***********************************
 * C++ Built-in Primitive Types Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535368#questions
************************************/

#include <iostream>
using namespace std;

/*
Primitive Data Types
--------------------------

-Fundemental data types implemented directly by the C++ language
    -Character types
    -Integer types
        -signed and unsigned
    -Floating-point types
    -Boolean types

-Size and precision is often compiler-dependent
    -#include <climits>

-Type Sizes
    -Expressed in bits
    -The more bits the more values that can be represented
    -The more bits the more storage required

-Character Types
    -Used to represent single characters 'A', 'X', '@'
    -Wider types are used to represent wide character sets

-Integer Types
    -Used to represent whole numbers
    -Signed and unsigned numbers
        -ints are signed by default
        -Signed
            -Allows you to represent negative and positive numbers
        -Unsigned
            -Only allows zero and positive numbers
    -Types (from shortest to longest range)
        -short
        -int
        -long
        -long long

-Floating-point Types
    -Used to represent non-integer numbers
    -Types (from shortest to longest range)
        -float
        -double
        -long double

-Boolean Type
    -Used to represent true and false
        -Zero is false
        -Non-zero is true
*/

int main()
{
    //Character type
    char middle_initial {'P'};
    cout << "My middle initial is " << middle_initial << endl;

    //Interger types
    unsigned short int exam_score {55};
    cout << "My exam score was " << exam_score << endl;

    int countries_represented {65};
    cout << "There were " << countries_represented << " countries represented in my meeting." << endl;

    long people_in_florida {20'610'000};
    cout << "There are about " << people_in_florida << " people in Florida" << endl;

    long people_on_earth {7'600'000'000}; // The (') can be used to help read the numbers and won't affect output
                                          // This number normally wouldn't fit in a long
                                          // Works because of the {} initialization
                                          // It prevents overflow (going into the negatives)
    cout << "There are about " << people_on_earth << " people on Earth." << endl;

    long long distance_to_alpha_centauri {9'461'000'000'000};
    cout << "The distance to Alpha Centauri is " << distance_to_alpha_centauri << " kilometers." << endl;

    //Floating-point Types
    float car_payment {401.23};
    cout << "My car payment is " << car_payment << endl;

    double pi {3.14159};
    cout << "PI is " << pi << endl;

    long double large_amount {2.7e120}; //The e is used to put the number as scientific notation
    cout << large_amount << " is a very big number." << endl;

    //Boolean types
    bool game_over {false};
    cout << "The value of game_over is " << game_over << endl;

    //Overflow examples
    short value1 {30000};
    short value2 {1000};
    short sum {value1 + value2};
    cout << "The sum of " << value1 << " and " << value2 << " is " << sum << endl;
}