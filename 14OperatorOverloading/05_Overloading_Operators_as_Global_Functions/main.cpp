/*********************************************************************************************************************
 * TITLE: Overloading Operators as Global Functions - Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535630#overview
 * 
 * SUMMARY: Operator Overrides, but globally
 *********************************************************************************************************************/

 #include <iostream>
 #include <cstring>

 using namespace std;


 #pragma region Classes

    #include "Mystring.h"

 #pragma endregion



#pragma region Function Prototypes

    void global_overrides();

#pragma endregion




int main()
{
    cout << boolalpha << endl;
    global_overrides();
    return 0;
}



/*
Unary operators as global (non-member) functions (++, --, -, !)
---------------------------------------------------------
ReturnType operatorOp(Type &obj);

Number operator-(const Number &obj);
Number operator++(Number &obj);                 // pre-increment
Number operator++(Number &obj, int);            // post-increment
bool operator!(const Number &obj);

Number n1 {100};
Number n2 = -n1;                                // operator-(n1)
n2 = ++n1;                                      // operator++(n1)
n2 = n1++;                                      // operator++(n1, int)



Mystring operator-
------------------------------------------------
-Often declared as friend functions in the class declaration

Mystring Mystring::operator-(const Mystring &obj) const
{    
    size_t buff_length = strlen(str);
    char *buff = new char[buff_length + 1];

    strcpy(buff, str);
    
    for (size_t i = 0; i < buff_length; i++)
        buff[i] = tolower(buff[i]);

    Mystring temp (buff);
    delete [] buff;

    return temp;
}



Binary operators as global functions(+, -, ==, !=, <, >, etc.)
---------------------------------------------------------------------
ReturnType operatorOp(const Type &lhs, const Type &rhs);

Number operator+(const Number &lhs, const Number &rhs);
Number operator-(const Number &lhs, const Number &rhs);
bool operator==(const Number &lhs, const Number &rhs);
bool operator<(const Number &lhs, const Number &rhs);

Number n1 {100}, n2 {200};
Number n3 = n1 + n2;                    // operator+(n1, n2)
n3 = n1 - n2;                           // operator-(n1, n2)
if (n1 == n2)...                           // operator==(n1, n2)



Mystring operator==
-------------------------------------

-If declare as a friend Mystring can access private str attribute
    -Otherwise we must use getter methods

bool operator==(const Mystring &lhs, const Mystring &rhs)
{
    if (strcmp(lhs.str, rhs.str) == 0)
        return true;

    else
        return false;
}


Mystring operator+
-------------------------------------

Mystring operator+(const Mystring &lhs,  const Mystring &rhs)
{
    size_t buff_size = strlen(lhs.str) +
                       strlen(rhs.str) + 1;
    
    char *buff = new char[buff_size];

    strcpy(buff, lhs.str);
    strcat(buff, rhs.str);

    Mystring temp {buff};

    delete [] buff;

    return temp;
}
*/


void global_overrides()
{
    Mystring eric {"Eric"};         //Eric
    eric.display();

    eric = -eric;
    eric.display();                 //eric

    Mystring guy {"Guy"};
    Mystring person = eric;

    cout << (eric == guy) << endl << endl;
    cout << (eric == person) << endl << endl;

    Mystring more_people = eric + guy;
    more_people.display();
    more_people = eric + person;
    more_people.display();
}