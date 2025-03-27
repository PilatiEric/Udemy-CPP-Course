
#include <string>

#ifndef _Account_h_
    #define _Account_h_
    class Account
    {
        private:
            std::string name;
            double balance;

        public:
            //These can defined inline as they are simple
            void set_balance(double bal)
            {
                balance = bal;
            }

            double get_balance() 
            {
                return balance;
            }
            
            //These act as prototype functions for when they're defined outside the class
            void set_name(std::string n);
            std::string get_name();

            bool deposit(double amount);
            bool withdraw(double amount);
    };
#endif