#include <string>

#ifndef _Account_h_
    #define _Account_h_
    class Account
    {
        private:
            std::string name;
            double balance;

        public:
            void set_name(std::string name_val)
            {
                name = name_val;
            }

            std::string get_name()
            {
                return name;
            }
            
            Account()
            {
                name = "None";
                balance = 0.0;
            }

            bool withdraw(double amount);
            bool withdraw (double amount);
    };
#endif