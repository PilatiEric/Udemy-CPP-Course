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

            //Old way
            // Player() 
            //     :name{"None"}, health{0}, xp{0} {}            

            // Player(std::string name_val)
            //     :name{name_val}, health{0}, xp{0} {}

            // Player(std::string name_val, int health_val, int xp_val)
            //     :name{name_val}, health{health_val}, xp{xp_val} {}

            //New way
            Player(std::string name_val, int health_val, int xp_val)
                : name{name_val}, health{health_val}, xp{xp_val} 
                {
                    std::cout << "Three-args constructor" << std::endl;
                }

            Player() 
                : Player {"None", 0, 0}    //This calls the three args constructor and fills in the parameters
                {
                    std::cout << "No-args constructor" << std::endl;
                }

            Player(std::string name_val)
                : Player {name_val, 0, 0}
                {
                    std::cout << "One-arg constructor" << std::endl;
                }
    };
#endif