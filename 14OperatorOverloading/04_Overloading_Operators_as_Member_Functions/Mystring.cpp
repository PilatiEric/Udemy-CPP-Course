#include <iostream>
#include <cstring>
#include <string>

#include "Mystring.h"

using namespace std;


//NO-ARGS CONSTRUCTOR

Mystring::Mystring()
    :str{nullptr}
{
    cout << "Using no-args constructor" << endl << endl;

    str = new char[1];
    *str = '\0';
}


//OVERLOADED CONSTRUCTOR
Mystring::Mystring(const char *s)
    : str{nullptr}
{
    cout << "Using overloaded constructor" << endl << endl;

    if (s == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
}



//COPY CONSTRUCTOR
Mystring::Mystring(const Mystring &source)
    : str{nullptr}
{
    cout << "Using copy constructor" << endl << endl;

    str = new char[strlen(source.str) + 1];
    strcpy(str, source.str);
}



//MOVE CONSTRUCTOR
Mystring::Mystring(Mystring &&source)
    : str{source.str}
{
    cout << "Using move constructor" << endl << endl;

    source.str = nullptr;
}


Mystring::~Mystring()
{
    if (str == nullptr)
        cout << "Calling destructor for Mystring: nullptr" << endl << endl;
}


//COPY ASSIGNMENT OPERATOR
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


//MOVE ASSIGNMENT OPERATOR
Mystring &Mystring::operator=(Mystring &&rhs)
{
    cout << "Using move assignment" << endl << endl;

    if (this == &rhs)
        return *this;

    delete [] str;
    str = rhs.str;

    rhs.str = nullptr;

    return *this;
}


Mystring Mystring::operator-() const
{
    char *buff = new char[strlen(str) + 1];

    strcpy(buff, str);

    size_t buff_length = strlen(buff);

    for (size_t i = 0; i < buff_length; i++)
        buff[i] = tolower(buff[i]);

    Mystring temp (buff);

    delete [] buff;

    return temp;
}


//We don't want to compare the pointers
// We want to compare the strings that the pointers point to
bool Mystring::operator==(const Mystring &rhs) const
{
    if (strcmp(str, rhs.str) == 0)
        return true;
    else
        return false;
}

bool Mystring::operator!=(const Mystring &rhs) const
{
    return !(rhs == *this);
}



    Mystring Mystring::operator+(const Mystring &rhs) const
    {
        size_t buff_size = strlen(str) +
                           strlen(rhs.str) + 1;
        char *buff = new char[buff_size];
        strcpy(buff, str);
        strcat(buff, rhs.str);
        Mystring temp {buff};
        delete [] buff;
        return temp;
    }



void Mystring::display() const { cout << str << " : " << get_length() << endl << endl; } 


int Mystring::get_length() const { return strlen(str); }

const char *Mystring::get_str() const { return str; }