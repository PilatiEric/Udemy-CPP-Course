#include <iostream>
#include <string>


#ifndef _Player_h_
    #define _Player_h_
    class Player
    {
        private:
            std::string name;
            int health;
            int xp;

        public:
            void set_name(std::string name_val)
            {
                name = name_val;
            }

            //Overloaded Constructors
            Player()
            {
                std::cout << "No args constructor called" << std::endl;
            }

            Player(std::string name)
            {
                std::cout << "String arg constructor called" << std::endl;
            }

            Player(std::string name, int health, int xp)
            {
                std::cout << "Three args constructor called" << std::endl;
            }

            //Destructor
            ~Player()
            {
                std::cout << "Destructor called for " << name << std::endl;
            }
    };
#endif