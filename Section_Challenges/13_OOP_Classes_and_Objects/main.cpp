/********************************************************************************************************
 * TITLE: OOP - Classes and Objects: Section Challenge
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535612#questions/23238495
 * 
 * PURPOSE: Create a collection of movies
 ********************************************************************************************************/


 #include <iostream>
 #include <string>
 #include "Movie.h"
 #include "Movies.h"

 using namespace std;


#pragma region Prototype Functions

void add_movie(Movies &movies, std::string name, std::string rating, int watched);
void increment_watched(Movies &movies, string name);

#pragma endregion




int main()
{
    Movies my_movies;
    my_movies.display();
    add_movie(my_movies, "Deadpool", "R", 9999);
    add_movie(my_movies, "Avengers", "PG-13", 2);
    increment_watched(my_movies, "Avengers");
    my_movies.display();
    return 0;
}





void add_movie (Movies &movies, std::string name, std::string rating, int watched)
{
    if (movies.add_movie(name, rating, watched))
    {
        std::cout << name << " added" << std::endl;
    }
    else
    {
        std::cout << name << " already exists" << std::endl;
    }
}


void increment_watched(Movies &movies, string name)
{
    if (movies.increment_watched(name))
    {
        cout << name << " watched has been incremented" << endl;
    }
    else
    {
        cout << name << " is not a movie in the list" << endl;
    }
}