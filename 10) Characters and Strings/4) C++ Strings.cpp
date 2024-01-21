/**********************************************
 * C++ Strings Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535482#overview
***********************************************/

#include <iostream>
#include <vector>
#include <cstring>
#include <string>

using namespace std;

#pragma region Function Prototypes

int ways_to_declare_strings();
int concatenation();
int accessing_characters();
int comparing();
int substrings();
int searching();
int removing();
int other_functions();
int cin_functions();

#pragma endregion

int main()
{
    ways_to_declare_strings();
    concatenation();
    accessing_characters();
    comparing();
    substrings();
    searching();
    removing();
    other_functions();
    cin_functions();
    return 0;
}


/*
C++ Strings
-----------------------------------
*/
int ways_to_declare_strings()
{
    string s1;                //Empty
    string s2 {"Frank"};      //Frank
    string s3 {s2};           //Frank
    string s4 {"Frank", 3};   //Fra     Only includes the first 3 char
    string s5 {s3, 0, 2};     //Fr      Only includes indexes from 0 to 2 not including 2
    string s6 (3, 'X');       //XXX     Repeats the given string the number of times specified
    return 0;
}


int concatenation()
{
    string part1 {"C++"};
    string part2 {"is a powerful"};
    string sentence;

    sentence = part1 + " " + part2 + " language"; // C++ is a powerful language
    //sentence = "C++" + " is powerful";          // This will not compile because you cannot concatenate two C-Style string literals
                                                  // However, seperating the two with a variable will make it work.
    string part3 {"is"};
    sentence = "C++ " + part3 + "powerful";       // C++ is powerful
    return 0;
}

int accessing_characters()
{
    cout << "accessing_characters()" << endl;
    cout << "-------------------------------------" << endl;
    string s1;
    string s2 {"Frank"};
    
    cout << s2[0] << endl << endl;     //F

    //The .at() is prefered because it does a bounds check
    //It will give an exception if you go out of bounds
    cout << s2.at(0) << endl << endl;  //F

    s2[0] = 'f';

    //This will replace the char at the given index
    s2.at(0) = 'p';

    for (char c: s2)
        cout << c << endl;
        /*
        Will print out this:
        p
        r
        a
        n
        k
        */
    cout << endl;
    
    //If we change the data type to int it will convert the letters to numbers
    for (int c : s2)
        cout << c << endl;
        /*
        Will print out this:
        70  //F
        114 //r
        97  //a
        110 //n
        107 //k
        0   //null character    This won't print but it's there
            //Remember how strings have null characters on the end to terminate it
        */
    cout << endl;
    return 0;
}


int comparing()
{
    cout << "comparing()" << endl;
    cout << "-------------------------------------" << endl;
    /*
    ==  !=  >  >=  <  <=

    The objects are compared character by character lexically (alphabetically)

    Can compare:
        -two std::string objects
        -std::string object and C-style string literal
        -std::string object and C-style string variable
    */

    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};
    
    //boolalpha makes boolean expressions print "true" or "false" instead of "1" or "0"
    cout << boolalpha;    //boolalpha only needs to bee called once before all the other expressions to invoke it
    cout << (s1 == s5) << endl;        //True
    cout << (s1 == s2) << endl;        //False
    cout << (s1 != s2) << endl;        //True
    cout << (s1 < s2) << endl;         //True
    cout << (s2 > s1) << endl;         //True
    cout << (s4 < s5) << endl;         //False
    cout << (s4 == s5) << endl;        //False
    cout << (s1 == "Apple") << endl << endl;   //True
    return 0;
}


int substrings()
{
    cout << "substrings()" << endl;
    cout << "-------------------------------------" << endl;
    //If you need to grab a certain number of char and not certain indexes in particular
    //object.substr(start_index, length)

    string s1 {"This is a test"};

    cout << s1.substr(0, 4) << endl;            //This
    cout << s1.substr(5, 2) << endl;            //is
    cout << s1.substr(10, 4) << endl << endl;   //test
    return 0;
}


int searching()
{
    cout << "searching()" << endl;
    cout << "-------------------------------------" << endl;
    string s1 {"This is a test"}; 
    //object.find(search_string) returns the index the strings starts at
    cout << s1.find("This") << endl;        // 0

    //The function looks for the first instance of the string
    //It does not look for an individual word
    cout << s1.find("is") << endl;          // 2

    cout << s1.find("test") << endl;        // 10

    //If looking for a particular letter using single quotes ('')
    cout << s1.find('e') << endl;           // 11

    //There is a variant that allows you to choose where the search starts
    //object.find(search_string, start_index)
    cout << s1.find("is", 4) << endl;       // 5

    //If the string is not found it prints out a long random number
    cout << s1.find("XX") << endl << endl;          // 18446744073709551615
    
    return 0;
}


int removing()
{
    cout << "removing()" << endl;
    cout << "-------------------------------------" << endl;
    string s1 {"This is a test"};
    // .erase removes the number of char specified starting at the index specified
    //object.erase(start_index, length) 
    cout << s1.erase(0, 5) << endl;         //is a test
    cout << s1.erase(5, 4) << endl;         //is a

    // .clear empties out entire string
    s1.clear();
    cout << s1 << endl << endl;             //Prints and empty string
    return 0;
}


int other_functions()
{
    cout << "other_functions()" << endl;
    cout << "-------------------------------------" << endl;
    string s1 {"Frank"};

    cout << s1.length() << endl;    //5

    s1 += " James";
    cout << s1 << endl << endl;     //Frank James
    return 0;
}


int cin_functions()
{
    cout << "cin_functions()" << endl;
    cout << "---------------------------------------------" << endl;
    string s1;
    cin >> s1;                  //Hello there
                                //cin only accepts up to the first space
    cout << s1 << endl;         //Hello

    //There is a way to use cin to accept spaces
    //getline(input_stream, initialize_variable)
    //requires #include <string>
    getline(cin, s1);           //Will accept input until \n (user presses enter)
    cout << s1 << endl;         //Hello there

    //Adding a char tells cin where to stop reading
    //getline(input_stream, initialize_var, termination_string)

    getline(cin, s1, 'x');      //this isx
    cout << s1 << endl <<endl;  //this is


    return 0;
}
