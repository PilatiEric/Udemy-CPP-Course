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
            // VVVVV This causes the commented out constructors below to not be needed due to supplying default parameters
            Player(std::string name_val = "None", int health_val = 0, int xp_val = 0)
                : name{name_val}, health{health_val}, xp{xp_val} 
                {
                    std::cout << "Three-args constructor" << std::endl;
                }

            //Sometimes we still want the user to explicitly state the values rather than provide these default ones

            // Player() 
            //     : Player {"None", 0, 0}
            //     {
            //         std::cout << "No-args constructor" << std::endl;
            //     }

            // Player(std::string name_val)
            //     : Player {name_val, 0, 0}
            //     {
            //         std::cout << "One-arg constructor" << std::endl;
            //     }

    };
#endif