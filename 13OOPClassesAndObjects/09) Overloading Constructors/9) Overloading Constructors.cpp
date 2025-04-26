/****************************************************************************************************************
 * TITLE: Overloading Constructors - Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535582#overview
 * 
 * SUMMARY: How overloading constructors work
*****************************************************************************************************************/



/*
Overloading Constructors
------------------------------------------------------------
-Classes can have as many constructors as necessary
-Each must have a unique signature
-Default constructor is no longer comppiler-generated once another constructor is declared

    class Player
    {
        private:
            std::string name;
            int health;
            int xp;

        public:
            //Overloaded Constructors
            Player()
            {
                name = "None";
                health = 0;
                xp = 0;
            }

            Player(std::string name_val)
            {
                name = name_val;
                health = 0;
                xp = 0;
            }

            Player(std::string name_val, int health_val, int xp_val)
            {
                name = name_val;
                health = health_val;
                xp = xp_val;
            }
    };
*/