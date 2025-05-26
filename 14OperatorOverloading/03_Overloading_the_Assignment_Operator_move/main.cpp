/*********************************************************************************************************************
 * TITLE: Overloading the Assignment Operator (move) - Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535626#questions/23270813
 * 
 * SUMMARY: 
 *********************************************************************************************************************/


#include <iostream>
#include <cstring>
#include <string>

using namespace std;



#pragma region Classes

   #include "Mystring.h"

#pragma endregion




#pragma region Prototype Functions

   void move_assignment();

#pragma endregion



int main()
{
   move_assignment();
   return 0;
}



/*
Move Assignment Operator (=)
-----------------------------------------------
-You can choose to overload the move assignment operator
   -C++ will use the copy assignment operator if necessary

   Mystring s1;
   s1 = Mystring {"Eric"}; //move assignment

-If we have raw pointer we should overload the move assignment operator for efficiency



Overloading the Move assignment operator
-----------------------------------------------------------

Type &Type::operator=(Type &&rhs)      //We use the && to tell the compiler that rhs is an r-value
                                       //Cannot be const since we'll be modifying it when we move the data

Mystring &Mystring::operator(Mystring &&rhs);

s1 = Mystring{"Eric"};                 //move operator= called
s1 = "Eric";                           //move operator= called
 */


void move_assignment()
{
   Mystring a{"Hello"};
   a = Mystring{"Hola"};
   a = "Bonjour";


   Mystring empty;
   Mystring eric("Eric");
   Mystring guy("guy");
   Mystring guys;

   empty = guy;

   empty = "Dumb";

   empty.display();
   eric.display();
   guy.display();
   empty.display();

   guys = "Eric, some guy, another guy";
   guys.display();
}