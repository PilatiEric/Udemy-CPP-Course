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
            //If you don't provide a constructor it'll generate a no-args constructor

            void set_name(std::string name_val)
            {
                name = name_val;
            }

            std::string get_name()
            {
                return name;
            }

            Player()
            {
                name = "None";
                health = 100;
                xp = 3;
            }
            
            //If a constructor is made, the compiler will not create a no-args constructor
            //You must provide a no-args constructor yourself in that case
            //You'll get an error when you try to run if you've made a no-args call ( Player() )
            Player(std::string name_val, int health_val, int xp_val)
            {
                name = name_val;
                health = health_val;
                xp = xp_val;
            }
    };
#endif