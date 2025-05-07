#include <iostream>
#include <string>

#ifndef _Mystring_h_
    #define _Mystring_h_
    class Mystring 
    {
        private:
            char *str;      //pointer to a char[] that holds a C-style string

        public:
            //CONSTRUCTORS & DESTRUCTOR
            Mystring();                         //no-args constructor
            Mystring(const char *s);            //overloaded constructor
            Mystring(const Mystring &source);   //copy constructor
            ~Mystring();                        //destructor

            //GETTERS
            void display() const;
            int get_length() const;
            const char *get_str() const;
    };
#endif