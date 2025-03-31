/***********************************
 * Namespaces Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535346#questions
************************************/

/*
What are Namespaces?
----------------------
-Allows programmers to confine functions to certain names
    -Ex. std::cout
-Reduces the possibility of naming conflicts
    -Ex. using namespace std;
         using namespace name;
         std::cout
         name::cout

-There might be instances you still want to bring in only certain functions
    -Don't want to bring in an entire namespace for performance reasons
    -Ex. using std::cout;
         using std::cin;
         using std::endl;
*/