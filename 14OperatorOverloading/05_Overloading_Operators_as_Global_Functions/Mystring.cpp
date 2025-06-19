#include <iostream>
#include <cstring>
#include "Mystring.h"

using namespace std;

//NO-ARGS CONSTRUCTOR
Mystring::Mystring()
    :str{nullptr}
{
    str = new char[1];
    *str = '\0';
}


//OVERLOADED CONSTRUCTOR
Mystring::Mystring(const char *s)
    :str{nullptr}
{
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
    :str{source.str}
{
    str = new char[strlen(source.str) + 1];
    strcpy(str, source.str);
}


//MOVE CONSTRUCTOR
Mystring::Mystring(Mystring &&source)
    :str{source.str}
{
    source.str = nullptr;
    cout << "Move constructor used for " << *str << endl << endl;
}


//DESTRUCTOR
Mystring::~Mystring()
{
    if (str == nullptr)
    {
        cout << "Calling destructor for Mystring: nullptr" << endl << endl;
    }
}



//COPY ASSIGNMENT OPERATOR
Mystring &Mystring::operator=(const Mystring &rhs)
{
    if (this == &rhs)
        return *this;

    delete [] str;
    str = new char [strlen(rhs.str) + 1];

    strcpy(str, rhs.str);

    return *this;
}



//MOVE ASSIGNMENT OPERATOR
Mystring &Mystring::operator=(Mystring &&rhs)
{
    if (this == &rhs)
        return *this;

    delete [] str;
    str = rhs.str;

    rhs.str = nullptr;

    return *this;
}




//TOLOWER STRING GLOBAL OPERATOR
Mystring operator-(const Mystring &obj)                 //NOTICE!!!: Global operators don't use const at the end like locals do
{    
    // Data is in obj.str rather than this.str
    size_t buff_length = strlen(obj.str);
    char *buff = new char[buff_length + 1];

    strcpy(buff, obj.str);
    
    for (size_t i = 0; i < buff_length; i++)
        buff[i] = tolower(buff[i]);

    Mystring temp (buff);
    delete [] buff;

    return temp;
}



//EQUAL TO GLOBAL OPERATOR
bool operator==(const Mystring &lhs, const Mystring &rhs)                 //NOTICE!!!: Global operators don't use const at the end like locals do
{
    return (strcmp(lhs.str, rhs.str) == 0);
}


//NOT EQUAL TO GLOBAL OPERATOR
bool operator!=(const Mystring &lhs, const Mystring &rhs)                 //NOTICE!!!: Global operators don't use const at the end like locals do
{
    return !(strcmp(lhs.str, rhs.str) == 0);
}


//PLUS CONCATENATION GLOBAL OPERATOR                 //NOTICE!!!: Global operators don't use const at the end like locals do
Mystring operator+(const Mystring &lhs, const Mystring &rhs)
{
    size_t buff_length = strlen(lhs.str) +
                         strlen(rhs.str) + 1;
    char *buff = new char [buff_length];

    strcpy(buff, lhs.str);
    strcat(buff, rhs.str);

    Mystring temp (buff);

    delete [] buff;

    return temp;
}


//FUNCTIONS
void Mystring::display() const
{
    cout << str << " : " << get_length() << endl << endl;
}

int Mystring::get_length() const { return strlen(str); }

const char *Mystring::get_str() const { return str; }