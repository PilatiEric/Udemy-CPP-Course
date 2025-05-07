/*********************************************************************************************************************
 * TITLE: What is Operator Overloading - Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535622#questions/23270813
 * 
 * SUMMARY: Operator Overloading is using operators in different ways
 *********************************************************************************************************************/


#include <iostream>

using namespace std;



#pragma region Classes

    #include "Mystring.h"

#pragma endregion




#pragma region Prototype Functions

    void operator_overloading();

#pragma endregion





int main()
{
    operator_overloading();
    return 0;
}





 /*
 What is Operator Overloading?
 ----------------------------------------------
Think of it as using operators in the way you wouldn't normally
    - Using the + operator to concatinate two strings like this:
        - s1 = s2 + s3
    - Comparing two strings with less than sign
        - s1 < s2

 -Using traditional operators such as +, =, *, etc. with user-defined types
 -Allows user defined types to begave similar to built-in types
 -Can make code more readable and writable
 -Not done automatically (except for the assignment operator)
    -They must be explicitly defined


Suppose we have a Number class that models any number
-Using functions
    Number result = multiply(add(a, b), divide(c, d));

-Using member methods
    Number result = (a.add(b)).multiply(c.divide(d));

Totally dependent on what you want to do
    -e.x. Delete two Player objects

-Using overloaded operators
    Number result = (a + b) * (c / d);


What operators can be overloaded?
---------------------------------------------------
-A majority of them
-The following operators cannot be overloaded
    - ::    (scope resolution operator)
    - :?    (conditional operator)
    - .*    (Point-to-Member operator)
    - .     (dot operator)
    -sizeof (sizeof operator)


DON'T OVER LOAD UNLESS IT MAKES SENSE!!!!


Some basic rules
------------------------------
- Precedence and Associativity cannot be changed
- 'arity' cannot be changed (i.e. can't make the division operator unary)
    - If it's a binary operator, meaning it's applied to two arguments
        - Can't be changed
- Can't overload operators for primitive type (e.g. int, double, etc.)
- Can't create new operators
- [], (), ->, and the assignment operator (=) must be declared as member methods
- Other operators can be declared as member methods or global functions



Examples
----------------------------------------------
- Typical way of using operators
    - int
        a = b + c
        a < b
        std::cout << a
    - double
        a = b + c
        a < b
        std::cout << a
    - long
        a = b + c
        a < b
        std::cout << a

-Operator Overloading
    - std::string
        s1 = s2 + s3
        s1 < s2
        std::cout << s1
    - Mystring
        s1 = s2 + s3
        s1 < s2
        s1 < s2
        std::cout << s1
    -Player
        p1 < p2
        p1 == p2
        std::cout << p1
 */



 void operator_overloading()
 {
    Mystring empty;             //no-args constructor
    Mystring eric("Eric");      //overloaded constructor
    Mystring person(eric);      //copy constructor

    empty.display();
    eric.display();
    person.display();
 }