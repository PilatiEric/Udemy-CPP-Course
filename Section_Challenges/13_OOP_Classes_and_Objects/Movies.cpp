#include <iostream>
#include <string>
#include "Movies.h"


Movies::Movies() {}

Movies::Movies(std::vector<Movie> movies_val)
    : movies {movies_val} 
{
    std::cout << "Creating movies" << std::endl;
}

//Copy Constructor
Movies::Movies(const Movies &source)
    :  Movies {source.movies} 
{
    std::cout << "Copying movies" << std::endl;
}

//Move Constructor
Movies::Movies (Movies &&source) noexcept
    : Movies {source.movies} 
{
    std::cout << "Moving movies" << std::endl;
}

//Destructor
Movies::~Movies()
{
    std::cout << "Destroying movies" << std::endl;
}


//DISPLAY()
void Movies::display()
{
    if (movies.size() > 0)
    {
        std::cout << "========================================================================" << std::endl;
        
        for (Movie& m : movies)
        {
            std::cout << m.get_name() << ", " << m.get_rating() << ", " << m.get_watched() << std::endl;
        }

        std::cout << "========================================================================" << std::endl << std::endl;
    }
    else
    {
        std::cout << "no movies to display" << std::endl << std::endl;
    }
}


//ADD_MOVIE()
bool Movies::add_movie(std::string name, std::string rating, int watched)
{
    for (const Movie& m : movies)
    {
        if (m.get_name() == name)
        {
            return false;
        }
    }

    movies.push_back(Movie(name, rating, watched));
    return true;
}




//INCREMENT_WATCHED()
bool Movies::increment_watched(std::string name)
{
    for (Movie& m : movies)
    {
        if (m.get_name() == name)
        {
            m.increment_watched();
            return true;
        }
    }

    return false;
}