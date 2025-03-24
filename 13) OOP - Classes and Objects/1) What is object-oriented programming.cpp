/********************************************************************************************************
 * What is Object-Oriented Programming Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535566#overview
 * 
 * SUMMARY:
*********************************************************************************************************/

#include <iostream>

using namespace std;


#pragma region Function Prototypes



#pragma endregion


int main()
{
    cout << "I'm back, baby!" << endl;
    cout << "LET'S DO THIS!" << endl;
    return 0;
}

/*
What is Object-Oriented Programming?
-------------------------------------------------------
-Procedural Programming
    -Focus is on processes or actions that a program takes
    -Programs are typically a collection of functions
    -Data is declared separately
    -Data is passed as arguments into functions
    -Fairly easy to learn


-Procedural Programming - Limitations
    -Functions need to know the structure of the data
        -If the structure of the data changes many functions must be changed
    -As programs get larger they become more
        -Difficult to understand
        -Difficult to maintain
        -Difficult to extend
        -Difficult to debug
        -Difficult to debug
        -Difficult to reuse code
        -Fragile and easier to break

-Object-Oriented Programming
    -Classes and Objects
        -Focus is on classes that model real-world domain entities
        -Allows developers to thing at a higher level of abstraction
        -Used successfully in very large programs
    -Encapsulation
        -Objects contain data AND operations that workd on that data
        -Abstract Data Type (ADT)
    -Information-hiding
        -Implementation-specific logic can be hidden
        -Users of the class code to the interface since they don't need to know the implementation
        -More abstraction
        -Easier to test, debug, maintain, and extend
    -Resusability
        -Easier to reuse classes in other applications
        -Faster development
        -Higher quality
    -Inheritance
        -Can create new classes in term of existing classes
        -Reusability
        -Polymorphic classes
    -Polymorphism and more...


-Object-Oriented Programming - Limitations
    -Not a panacea (meaning: a solution or remedy for all difficulties or diseases)
        -OO Programming won't make bad code better
        -Not suitable for all type of problems
        -Not everything decomposes to a class
    -Learning curve
        -Usually a steeper learning curvem especially for C++
        -Many OO languages, many variations of OO concepts
    -Design
        -Usually more up-front design is necessary to create good models and hierarchies
    -Programs can be
        -Larger in size
        -Slower
        -More complex
*/