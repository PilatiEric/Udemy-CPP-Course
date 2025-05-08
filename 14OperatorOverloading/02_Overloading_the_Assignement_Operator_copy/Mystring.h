#include <iostream>
#include <cstring>


#ifndef _Mystring_h_
    #define _Mystring_h_
    class Mystring
    {
        private:
            char *str;                  //Pointer to a char[] that holds a C-style string

        public:
            //Constructors & Destructor
            Mystring();                                 //No-args constructor
            Mystring(const char *s);                    //Overloaded constructor
            Mystring(const Mystring &source);           //Copy constructor
            ~Mystring();                                //Destructor

            Mystring &operator=(const Mystring &rhs);   //Copy assignment

            //Method
            void display() const;

            //Getters
            int get_length() const;
            const char *get_str() const;
    };
#endif