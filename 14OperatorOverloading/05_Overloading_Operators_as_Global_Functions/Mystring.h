#ifndef _Mystring_h_
    #define _Mystring_h_
    class Mystring
    {
        friend bool operator==(const Mystring &lhs, const Mystring &rhs);
        friend bool operator!=(const Mystring &lhs, const Mystring &rhs);
        friend Mystring operator-(const Mystring &obj);
        friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);

        private:
            char *str;

        public:
            //CONSTRUCTORS
            Mystring();
            Mystring(const char *s);
            Mystring(const Mystring &source);
            Mystring(Mystring &&source);
            ~Mystring();

            //OPERATOR OVERLOADS
            Mystring &operator=(const Mystring &rhs);
            Mystring &operator=(Mystring &&rhs);

            /*
            @brief Takes the string in the Mystring class and makes it all lowercase
            */
            Mystring operator-() const;
            Mystring operator-(const Mystring &obj) const;

            bool operator==(const Mystring &rhs) const;
            bool operator!=(const Mystring &rhs) const;

            Mystring operator+(const Mystring &rhs) const;

            //FUNCTIONS
            void display() const;

            int get_length() const;
            const char *get_str() const;
    };
#endif