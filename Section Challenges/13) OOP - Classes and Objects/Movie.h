#include <iostream>
#include <string> 




#ifndef _movie_h_
    #define _movie_h_
    class Movie
    {
        
        private:
            std::string name;
            std::string rating;
            int watched;
            

        public:
            //GETTERS
            std::string get_name() const {return name;}
            std::string get_rating() const {return rating;}
            int get_watched() const {return watched;}

            //SETTERS
            void increment_watched() { ++watched; }

            //TODO: Set up the logic for the constructors in the cpp file
            //Main Constructor
            Movie(std::string name_val = "None", std::string rating_val = "Unrated", int watched_val = 0);

            //Copy Constructor
            Movie(const Movie &source);

            //Move Constructor
            Movie (Movie &&source) noexcept;

            //Destructor
            ~Movie();
    };
#endif