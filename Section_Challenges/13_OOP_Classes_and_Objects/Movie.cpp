#include <iostream>
#include <string>
#include "Movie.h"


Movie::Movie(std::string name_val, std::string rating_val, int watched_val)
    : name {name_val}, rating {rating_val}, watched {watched_val}
{
    std::cout << name << " item created" << std::endl;
}

//Copy Constructor
Movie::Movie(const Movie &source)
: Movie {source.name, source.rating, source.watched}
{
    std::cout << "Copying - " << name << std::endl;
}

//Move Constructor
Movie::Movie (Movie &&source) noexcept
    : Movie {source.name, source.rating, source.watched}
{
    std::cout << "Moving - " << name << std::endl;
}


Movie::~Movie() 
{
    std::cout << "Destroying - " << name << std::endl;
}