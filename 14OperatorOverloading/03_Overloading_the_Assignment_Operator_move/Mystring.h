#include <iostream>
#include <cstring>
#include <string>

#ifndef _Mystring_h_
    #define _Mystring_h_
    class Mystring
    {
        private:
            char *str;                  //Pointer to a char[] that holds a C-style string
        public:
            //CONSTRUCTORS & DESTRUCTOR
            Mystring();                                 //No-args constructor
            Mystring(const char *s);                    //Overloaded constructor
            Mystring(const Mystring &source);           //Copy constructor
            Mystring(Mystring &&source);                //Move constructor
            ~Mystring();                                //Destructor


            //OVERLOADED OPERATORS
            Mystring &operator=(const Mystring &rhs);   //Copy Assignment
            Mystring &operator=(Mystring &&rhs);        //Move Assignment


            void display() const;

            //GETTERS
            int get_length() const;
            const char *get_str() const;
    };
#endif