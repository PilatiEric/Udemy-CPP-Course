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

            /*
            Previous way of assigning values
            Player()
            {
                name = "None";          Assignment not initialization
                health = 0;
                xp = 0;
            }
            */

            //Better way, it ensures that the fields are initialized the moment the objects are created
            Player() 
                :name{"None"}, health{0}, xp{0} {}            

            Player(std::string name_val)
                :name{name_val}, health{0}, xp{0} {}

            Player(std::string name_val, int health_val, int xp_val)
                :name{name_val}, health{health_val}, xp{xp_val} {}
    };
#endif