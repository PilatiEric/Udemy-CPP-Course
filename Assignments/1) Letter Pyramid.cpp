/*************************************************************************************************************************************
 * Letter Pyramid Assignment
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/practice/1047668/introduction#questions/5046040
 * 
 * Goal:
 * ------------------------------------------------
 * Create a program that takes in a string from the user.
 * A pyramid should be created using the letters of the message.
 * Each layer should add the next letter starting from the first.
 * Once all of the letters for that layer have been used, starting with the second to last, print the letters in reverse order.
 * Continue until all letters from the string have been used.
**************************************************************************************************************************************/

#include <iostream>
#include <vector>
#include <cstring>
#include <string>

using namespace std;


#pragma region Function Prototypes

int letter_pyramid();
string make_letter_pyramid(string message);

#pragma endregion


int main()
{
    letter_pyramid();
    return 0;
}

int letter_pyramid()
{
    string message;
    cout << "Please type a message using no spaces: ";
    getline(cin, message);
    cout << make_letter_pyramid(message);
    
    

    return 0;
}

string make_letter_pyramid(string message)
{
    string pyramid = "";

    for (size_t o = 0; o < message.length(); ++o)
    {
        string layer = "";

        // Print spaces before the letters
        layer.insert(0, message.length() - (o + 1), ' ');

        // Print letters in ascending order
        for (size_t m = 0; m <= o; ++m)
        {
            layer += message[m];
        }

        // Print letters in descending order (excluding the first one)
        for (int i = static_cast<int>(o) - 1; i >= 0; --i)
        {
            layer += message[i];
        }

        // Add a newline character at the end of each layer
        layer += "\n";

        // Concatenate the layer onto the pyramid
        pyramid += layer;
    }

    return pyramid;
}