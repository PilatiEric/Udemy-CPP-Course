#include <iostream>
#include <string>

#ifndef _player_h_
    #define _player_h_
    class Player
    {
        private:
            std::string name;
            int health;
            int xp;

        public:
            //CONSTRUCTOR AND DEFAULT VALUES
            Player(std::string name_val = "None", int health_val = 0, int xp_val = 0)
                : name {name_val}, health {health_val}, xp {xp_val} {}
            
            //GETTER
            std::string get_name() const        //This tells the compiler that this will not modify the const at all
            {
                return name;
            }

            //SETTER
            void set_name(std::string name_val)
            {
                name = name_val;
            }

    };
#endif