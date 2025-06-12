/*********************************************************************************************************************
 * TITLE: Overloading Operators as Member Functions - Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535628#overview
 * 
 * SUMMARY: How to overload the unary and binary operators for classes
 *********************************************************************************************************************/

#include <iostream>

using namespace std;

#pragma region Classes

    #include "Mystring.h"

#pragma endregion





#pragma region Prototype Functions

    void member_functions();

#pragma endregion




int main()
{
    cout << boolalpha << endl;
    member_functions();
    return 0;
}



/*
Unary Operators as member methods (++, --, -, !)
---------------------------------------------------------------
    ReturnType Type::operatorOp();
        - Number Number::operator-() const;
        - Number Number::operator++();                  // pre-increment
        - Number Number::operator++(int);               // post-increment
        - bool Number::operator!() const;

        - Unary members have an empty parameter list
            - Object we're working with is referred to by this "this" pointer


        - Number n1 {100};
        - Number n2 = -n1;                              // n1.operator-()
        - n2 = ++n1;                                    // n1.operator++()
        - n2 = n1++;                                    // n1.operator++(int)


    Mystring operator- make lowercase
        - Mystring eric1 {"ERIC"};
        - Mystring eric2;
        
        - eric1.display();

        - eric2 = -eric1;                               // eric1.operator-()

        - eric1.display();                              // ERIC
        - eric2.display();                              // eric
            - Doesn't make sense to use the (-) operator like this in most cases
                - Depends on the class
                - Should create function called lowercase instead


        Mystring Mystring::operator-() const
        {
            char *buff = new char[strlen(str) + 1];

            strcpy(buff, str);

            for (size_t i = 0; i < strlen(buff); i++)
                buff[1] = tolower(buff[1]);

            Mystring temp (buff);

            delete [] buff;

            return temp;
        }




Binary operators as member methods (+, -, ==, !=, <, >, etc.)
---------------------------------------------------------

    Return Type Type::operatorOp(const Type &rhs);
        - Number Number::operator+(const Number &rhs) const;
        - Number Number::operator-(const Number &rhs) const;
        - bool Number::operator==(const Number &rhs) const;
        - bool Number::operator<(const Number &rhs) const;


        - Number n1 {100}, n2 {200};
        - Number n3 = n1 + n2;                  // n1.operator+(n2)
        - n3 = n1 - n2;                         // n1.operator-(n2)
        if (n1 == n2)...                        // n1. operator==(n2)


    Mystring operator== (equality)
    --------------------------------
    -We don't want to compare the pointers
        -We want to compare the strings that the pointers point to

    bool Mystring::operator==(const Mystring &rhs) const
    {
        if (strcmp(str, rhs.str) == 0)
            return true;
        else
            return false;
    }

    Mystring operator+ (concatenation)
    ------------------------------------
    Mystring eric {"Eric"};
    Mystring guy {"Guy"};
    Mystring people {" is a person."};

    Mystring result = eric + guy;           //eric.operator+(people);

    result = guy + " is also a person";     //guy.operator+("is also a person");

    result = "Eric" + people;               //"Eric".operator+(people) ERROR
                                            //This the overload is mean to concatenate a string or Mystring to the Mystring
                                                //Not a Mystring to a string
                                                

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
*/



void member_functions()
{
    Mystring eric {"Eric"};
    Mystring guy {"Guy"};

    Mystring person = eric;
    eric.display();
    guy.display();

    cout << (eric == guy) << endl << endl;
    cout << (eric == person) << endl << endl;

    eric.display();
    Mystring eric2 = -eric;
    eric2.display();

    Mystring people = eric + "Guy";
    //Mystring people = "Guy" + eric            //Remember, a string doesn't have that overload. It returns an error.

    Mystring two_people = guy + " " + "Eric";
    two_people.display();

    Mystring three_people = eric + " " + guy + " " + "Other Guy";
    three_people.display();
}