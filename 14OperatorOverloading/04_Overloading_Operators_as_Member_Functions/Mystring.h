#ifndef _Mystring_h_
    #define _Mystring_h_
    class Mystring
    {
        private:
            char *str;

        public:
            Mystring();
            Mystring(const char *s);
            Mystring(const Mystring &source);
            Mystring(Mystring &&source);
            ~Mystring();

            Mystring &operator=(const Mystring &rhs);
            Mystring &operator=(Mystring &&rhs);

            Mystring operator-() const;        

            bool operator==(const Mystring &rhs) const;
            bool operator!=(const Mystring &rhs) const;
            
            Mystring operator+(const Mystring &rhs) const;


            void display() const;

            int get_length() const;
            const char *get_str() const;
    };
#endif