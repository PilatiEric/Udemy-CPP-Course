/****************************************************************************************************************
 * TITLE: Structs vs Classes - Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535606#questions/23238495
 * 
 * SUMMARY: Difference between a class and a struct
*****************************************************************************************************************/

#include <iostream>
#include <string>

using namespace std;


/*
Structs vs Classes
-----------------------------------------------
-In addition to define a class we can declare a struct
-struct comes from the C programming languatge
-Essentially the same as a class except that members are public by default

-Created as a record for data




Some general guidelines
----------------------------------------------------
-struct
    -use struct for passive objects with public access
    -Don't declare methods in struct

-class
    -Use class for the active objects with private access
    -Implement getters/setters as needed
    -Implement member methods as needed
*/

struct Person 
{
    string name;
    string get_name();
};


int main()
{
    Person p;
    p.name = "Eric";            //This and the line below would cause compiler errors if Person was a class since the members would be private
    cout << p.get_name();
    return 0;
}