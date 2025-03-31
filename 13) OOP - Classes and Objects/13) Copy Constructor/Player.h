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
            std::string get_name() { return name; }
            int get_health() { return health; }
            int get_xp() { return xp; }

            Player(std::string name_val = "None", int health_val = 0, int xp_val = 0)
                : name{name_val}, health{health_val}, xp{xp_val} 
            {
                std::cout << "Three-args constructor for " << name << std::endl;
                std::cout << endl;
            }

            //Copy Constructor
            Player(const Player &source)
                : name (source.name),
                  health (source.health),
                  xp (source.xp)
            {
                std::cout << "Copy constructor - made of: " << source.name << std::endl;
                std::cout << endl;
            }

            //Destructor
            ~Player() 
            { 
                std::cout << "Destructor called for: " << name << std::endl; 
                std::cout << endl;
            }
    };
#endif