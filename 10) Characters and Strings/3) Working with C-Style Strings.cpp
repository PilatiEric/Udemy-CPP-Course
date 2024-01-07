/*********************************************
 * Working with C-Style Strings Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535478#overview
**********************************************/

#include <iostream>
#include <vector>
#include <cctype>
#include <cstring>

using namespace std;


#pragma region Function Prototypes

    int c_style_functions();

#pragma endregion


int main()
{
    c_style_functions();
    return 0;
}


int c_style_functions()
{
    char first_name[20] {};
    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};

    cout << first_name << endl;

    cout << "Please enter your first name: ";
    cin >> first_name;

    cout << "\nPlease enter your last name: ";
    cin >> last_name;
    cout << "\n------------------------------------------------" << endl << endl;

    cout << "Hello, " << first_name << ", your first name has " << strlen(first_name) << " characters" << endl;
    cout << "and your last name, " << last_name << ", has " << strlen(last_name) << " characters" << endl;

    strcpy(full_name, first_name);     //This is only to be used first the first item added to a string or to replace the string
    strcat(full_name, " ");
    strcat(full_name, last_name);

    cout << "Your full name is " << full_name << endl;

    cout << "\n------------------------------------------------" << endl << endl;

    cout << "Please enter your full name: ";
    cin >> full_name;

    cout << "Your full name is " << full_name << endl << endl;

    cout << "Enter your full name: ";
    cin.getline(full_name, 50);
    cout << "Your full name is " << full_name << endl << endl;

    cout << "---------------------------------------------------" << endl << endl;

    strcpy(temp, full_name);
    if(strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same" << endl;
    else
        cout << temp << " and " << full_name << " are different" << endl;

    cout << "\n------------------------------------------------" << endl << endl;

    for (size_t i{0}; i < strlen(full_name); ++i)
    {
        if (isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }

    cout << "Your full name is " << full_name << endl; 

    cout << "\n-------------------------------------------------" << endl << endl;

    if (strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same" << endl << endl;
    else
        cout << temp << " and " << full_name << " are different" << endl << endl;
    
    cout << "---------------------------------------------------" << endl << endl;

    cout << "Result of comparing " << temp << " and " << full_name << ": " << strcmp(temp, full_name) << endl; //returns 1
    cout << "Result of comparing " << full_name << " and " << temp << ": " << strcmp(full_name, temp) << endl; //returns -1
    return 0;
}