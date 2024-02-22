/**************************************************************
 * How Do Function Calls Work Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535514#questions/4821302
 * 
 * SUMMARY: This shows how memory works when a program runs
 * IMPORTANT:    THIS CHAPTER IS IMPORTANT FOR POINTERS!!!!
***************************************************************/

#include <iostream>

using namespace std;


#pragma region Function Prototypes

int func1(int a, int b);
void func2(int &x, int y, int z);

#pragma endregion



int main()
{
    int x {10};
    int y {20};
    int z {};
    z = func1(x, y);
    cout << z << endl << endl;
    return 0;
}

/*
What typically happens when main calls func1 (or any function calls another)?
There are other ways to achieve the same results

main:
    -push space for the return value
        -Getting the return value is the last thing to happen so it's the first pushed to the stack
    -push space for the parameters
        -We have two (x & y)
    -push the return address
        -func1 needs to know where to come back to
    -transfer control to func1 (jmp)
        -jmp = jump
            -An assembly language
        -Jump to func1

func1:
    -push the address of the previous activation record
    -push any register values that will need to be restored before returning to the caller
    -perform the code in func1
    -restore the register values
    -restore the previous aactivation record (move the stack pointer)
    -store any function result
    -transfer control to the return address (jmp)

main:
    -pop the parameters
    -pop the return value
*/




/*
How do functions work?
-------------------------------------------------
-Functions use the 'function call stack'
    -Analogous to a stack of books
    -LIFO - Last In First Out
-Stack Fram or Activation Record
    -Functions must return control to function that called it
    -Each time a function is called we create a new activation record and push it on stack
    -When a function terminates we pop the activation record and return
    -Local variables and function parameters are allocated on the stack
-Stack size is finite - Stack Overflow

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
ATTENTION!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
THIS IS VERY IMPORTANT FOR POINTERS!!!!!!!!!!!!!!!!!!!!!!!!!
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

        How Memory Works in Above Functions
________________________________________________
|                                               |   NOTE: STARTING AREA IS AT THE BOTTOM
|                    Heap                       |
|                 Free Stack                    |
|                                               |
|___________________Stack_______________________|   NOW SWITCH DIRECTIONS
|                                               |   >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ^ > Return results of operations now  
|  x {result + (y + z)}                         |   result adds y & z {30 change to 60}   |   | VVVVVVVVVVVVVVVVVVVVVVVVVVVVVV      
|  z {b}                                        |   z matches to b {20}                   |   |
|  y {a}                                        |   y matches to a {10}                   |   |
|  x {result's location}                        |   x matches to result's location        |   |
|                                               |   FUNC2 ADDED TO STACK                  |   | FUNC2 POPS OFF STACK
|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|                                         |   |
|  return result                                |                                         |   | returns value to z in func1 {60}
|  func2(result, a, b)                          |                                         |   |
|  result {a + b}                               |   result matches to x + y {30}          |   |
|  b {y}                                        |   y matches to b {20}                   |   |
|  a {x}                                        |   x matches to a {10}                   |   | FUNC1 POPS OFF STACK
|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|   FUNC1 ADDED TO STACK                  |   |
|  print(z)                                     |                                         |   | print value of z {60} 
|  z {func1(x, y)}                              |                                         |   | Main methods returns 0 (ENDS HERE)
|  z {0}                                        |                                         |   |
|  y {20}                                       |   MAIN METHOD ADDED TO STACK            |   |
|  x {10}                                       | ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ |   |
|______________Static Variables_________________|(STARTS HERE) Order of operations for stack  V
|                                               |              Shows the order of things
|_________________Code Area_____________________|              being added to the stack
|                                               |              and executed
|_______________________________________________|
*/

int func1(int a, int b)
{
    int result {};
    result = a + b;
    func2(result, a, b);
    return result;
}


void func2(int &x, int y, int z)
{
    x += y + z;
}