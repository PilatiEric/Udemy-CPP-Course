#include <iostream>
#include <string>
#include <vector>
#include "Movie.h"

/*
Model Movies class with a vector
*/

#ifndef _movies_h_
    #define _movies_h_
    class Movies
    {
        private:
            std::vector<Movie> movies;

        public:
            Movies();

            Movies(std::vector<Movie> m);

            //Copy Constructor
            Movies(const Movies &source);

            //Move Constructor
            Movies (Movies &&source) noexcept;

            ~Movies();

            std::vector<Movie> get_movies() {return movies;}
            void display();
            bool add_movie(std::string name, std::string rating, int watched);
            bool increment_watched(std::string name);


    };
#endif