#include <iostream>
#include <string>


//Class cpp files are where you define the constructors and functions



#ifndef _player_h_
    #define _player_h_
    class Player
    {
        private:
            static int num_players;

            std::string name;
            int health;
            int xp;

        public:
            std::string get_name() {return name;}

            int get_health() {return health;}

            int get_xp() {return xp;}

            Player();
            //CONSTRUCTOR
            Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);

            //COPY CONSTRUCTOR
            Player(const Player &source);

            //DESTRUCTOR
            ~Player();

            static int get_num_players();
    };
#endif