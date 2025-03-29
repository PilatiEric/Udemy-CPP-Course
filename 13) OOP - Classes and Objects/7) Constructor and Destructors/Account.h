#include <string>

#ifndef _Account_h_
    #define _Account_h_
    class Account
    {
        private:
            std::string name;
            double balance;

        public:
            //Overloaded Constructors
            Account()
            {
                std::cout << "No args constructor called" << std::endl;
            }
            Account(std::string name, double balance)
            {
                std::cout << "Two args constructor called" << std::endl;
            }
            Account(std::string name)
            {
                std::cout << "String arg constructor called" << std::endl;
            }
            Account(double balance)
            {
                std::cout << "Double arg constructor called" << std::endl;
            }

            //Destructor
            ~Account()
            {
                std::cout << "Destructor called for " << name << std::endl;
            }
    };
#endif