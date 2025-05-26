#include <iostream>
#include <cstring>
#include <string>
#include "Mystring.h"

using namespace std;


//NO-ARGS CONSTRUCTOR
Mystring::Mystring()
    : str{nullptr}
{
    cout << "Using no-args constructor" << endl << endl;

    str = new char[1];
    *str = '\0';        // \0 is a null terminator which is required to terminate an array of char
}



//OVERLOADED CONSTRUCTOR
Mystring::Mystring(const char *s)
    : str {nullptr}
{
    cout << "Using overloaded constructor" << endl << endl;

    if (s == nullptr)
    {
        str = new char [1];
        *str = '\0';
    }
    else
    {
        str = new char[strlen(s) + 1];  //strlen gets the length of a string in characters
        strcpy(str, s);
    }
}



//COPY CONSTRUCTOR
Mystring::Mystring(const Mystring &source)
    :str{nullptr}
{
    cout << "Using copy constructor" << endl << endl;

    str = new char[strlen(source.str) + 1];         // +1 to make room for \0
    strcpy(str, source.str);
    cout << "Copy constructor used" << endl << endl;
}


//MOVE CONSTRUCTOR
Mystring::Mystring(Mystring &&source)
    :str(source.str)
{
    cout << "Using move constructor" << endl << endl;

    source.str = nullptr;
    cout << "Move constructor used" << endl << endl;
}


//DESTRUCTOR
Mystring::~Mystring()
{
    if (str == nullptr)
        cout << "Calling destructor for Mystring: nullptr" << endl << endl;
}


Mystring &Mystring::operator=(const Mystring &rhs)
{
    cout << "Using copy assignment" << endl << endl;

    if (this == &rhs)
        return *this;

    delete [] str;
    str = new char[strlen(rhs.str) + 1];

    strcpy(str, rhs.str);

    return *this;
}


Mystring &Mystring::operator=(Mystring &&rhs)
{
    cout << "Using move assignment" << endl << endl;

    if (this == &rhs)               //self assignment
        return *this;               //return current object

    delete [] str;                  //deallocate current storage
    str = rhs.str;                  //steal pointer

    rhs.str = nullptr;              //null out the rhs object

    return *this;                   //return current object
}



//DISPLAY METHOD
void Mystring::display() const
{
    cout << str << " : " << get_length() << endl;
}



//GETTERS
int Mystring::get_length() const { return strlen(str); }

const char *Mystring::get_str() const { return str; }