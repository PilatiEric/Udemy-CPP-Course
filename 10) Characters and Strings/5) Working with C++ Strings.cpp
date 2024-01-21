/******************************************************************************************************
 * Working with C++ Strings Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535484#questions
*******************************************************************************************************/

#include <iostream>
#include <iomanip>
#include <vector>
#include <cstring>
#include <string>

using namespace std;


#pragma region Function Prototypes

int initialize();
int comparison();
int concatenation();
int looping();
int substring();
int erase();
int getline();
int find();
int insert();
int swap();

#pragma endregion


int main()
{
    initialize();
    comparison();
    concatenation();
    looping();
    substring();
    erase();
    getline();
    find();
    insert();
    swap();

    return 0;
}



/*
Working with C++ Strings
---------------------------------------------
*/

    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};         //Apple
    string s6 {s1, 0, 3};   //App
    string s7 (10, 'X');    //XXXXXXXXXX

    

int initialize()
{ 
    cout << s0 << endl;
    cout << s0.length() << endl << endl;
    //Initialization
    cout << "Initialization" << "\n---------------------------" << endl;
    cout << "s1 is initialized to: " << s1 << endl;
    cout << "s2 is initialized to: " << s2 << endl;
    cout << "s3 is initialized to: " << s3 << endl;
    cout << "s4 is initialized to: " << s4 << endl;
    cout << "s5 is initialized to: " << s5 << endl;
    cout << "s6 is initialized to: " << s6 << endl;
    cout << "s7 is initialized to: " << s7 << endl << endl;

    return 0;
}

int comparison()
{
    cout << "Comparison" << "\n---------------------------" << endl;
    cout << boolalpha;
    cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;
    cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;
    cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;
    cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;
    cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;
    cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;
    cout << s1 << " == " << "Apple" << ": " << (s1 == "Apple") << endl << endl;

    cout << boolalpha;
    s1 = "Watermelon";
    cout << "s1 is " << s1 << endl;
    s2 = s1;
    cout << "s2 is initialized with the value of s1" << endl;
    s3 = "Frank";
    s3[0] = 'C';
    cout << "s3 change first letter to 'C': " << s3 << endl; //Crank
    s3.at(0) = 'P';
    cout << "s3 change first letter to 'P': " << s3 << endl << endl; 

    return 0;
}


int concatenation()
{
    //Concatenation
    cout << "Concatenation" << "\n---------------------------" << endl;
    s2 = "Banana";
    s3 = "Watermelon";
    s3 = s5 + " and " + s2 + " juice";
    cout << "s3 is now: " << s3 << endl << endl;

    //COMPILER ERROR EXAMPLE
    //s3 = "nice " + " cold " + s5 + " juice";      //This will give a compiler error.
                                                    //Remember, two C-style strings cannot be concatenated together using the plus sign (+)

    return 0;
}

int looping()
{
    cout << "Looping" << "\n---------------------------" << endl;
    //for loop
    s1 = "Apple";

    for (size_t i {0}; i < s1.length(); ++i)
        cout << s1.at(i);
    cout << endl << endl;

    //Range-based for loop
    for (char c: s1)
        cout << c;
    cout << endl << endl;

    return 0;
}


int substring()
{
    cout << "Substring" << "\n---------------------------" << endl;
    s1 = "This is a test";

    //First number is the index to start at, the second is the number of char to print from there
    cout << s1.substr(0, 4) << endl;    //This
    cout << s1.substr(5, 2) << endl;    //is
    cout << s1.substr(10, 4) << endl << endl;   //test

    return 0;
}


int erase()
{
    cout << "Erase" << "\n---------------------------" << endl;
    //Number correlate the same as in .substr but the function, of course, does the opposite.
    s1.erase(0, 5);
    cout << "s1 is now: " << s1 << endl << endl;

    return 0;
}


int getline()
{
    cout << "getline" << "\n---------------------------" << endl;
    string full_name {};
    cout << "Enter your full name: ";
    //Remember, cin ends at a space, getline continues to take in value even after spaces
    getline(cin, full_name);

    cout << "Your full name is: " << full_name << endl << endl;

    return 0;
}


int find()
{
    cout << "Find" << "\n---------------------------" << endl;
    s1 = "The secret word is Boo";
    string word{};

    cout << "Enter the word to find: ";
    cin >> word;

    //.find tells you the index the string given starts at
    size_t position = s1.find(word);
    //npos stands for "No position", in other words, it was not found.
    if (position != string::npos)
        cout << "Found " << word << " at position: " << position << endl;
    else
        cout << "Sorry, " << word << " not found" << endl << endl;

    return 0;
}


int insert()
{
    cout << "Insert" << "\n---------------------------" << endl;
    s1 = "This is LeeroyJenkins";
    //The first parameter is the index you want to insert the second parameter into
    s1.insert(14, " ");
    cout << s1 << endl << endl;
    return 0;
}


int swap()
{
    s1 = "this";
    s2 = "that";

    //.swap switches the values of both variables
    s1.swap(s2);

    cout << "s1 is now: " << s1 << endl;
    cout << "s2 is now: " << s2 << endl << endl;
    return 0;
}