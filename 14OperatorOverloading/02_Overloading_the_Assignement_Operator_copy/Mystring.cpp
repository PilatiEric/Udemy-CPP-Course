#include <iostream>
#include <cstring>
#include "Mystring.h"

using namespace std;

//No-args Constructor
Mystring::Mystring()
    : str{nullptr}
{
    str = new char[1];
    *str = '\0';        // \0 is a null terminator which is required to terminate an array of char
}



//Overloaded Constructor
Mystring::Mystring(const char *s)
    : str {nullptr}
{
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


//Copy Constructor
Mystring::Mystring(const Mystring &source)
    :str{nullptr}
{
    str = new char[strlen(source.str) + 1];
    strcpy(str, source.str);
}

//Destructor
Mystring::~Mystring()
{
    delete [] str;
}

//Copy Assignment
Mystring &Mystring::operator=(const Mystring &rhs)
{
    cout << "Copy assignment" << endl << endl;

    if (this == &rhs) return *this;

    delete [] this -> str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(this->str, rhs.str);

    return *this;
}


//Display method
void Mystring::display() const
{
    cout << str << " : " << get_length() << endl;
}

//Getters
int Mystring::get_length() const { return strlen(str); }
const char *Mystring::get_str() const { return str; }
