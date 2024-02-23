/***************************************************************
 * Recursive Functions Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535518#questions/4821302
 * 
 * SUMMARY: Recursive function call themselves and allow the code to create
 *          more concise and understandable code.
****************************************************************/

#include <iostream>


using namespace std;


#pragma region Function Prototypes

unsigned long long factorial(unsigned long long n);
unsigned long long fibonacci(unsigned long long n);

#pragma endregion


int main()
{
    cout << "factorial()\n---------------------------------------\n" 
         << factorial(3) << endl;
    cout << factorial(8) << endl;
    cout << factorial(12) << endl;
    cout << factorial(20) << endl << endl;
    cout << "fibonacci()\n---------------------------------------\n" 
         << fibonacci(5) << endl;
    cout << fibonacci(30) << endl;
    cout << fibonacci(40) << endl << endl;
    return 0;
}



/*
Recursive Functions
-----------------------------------------------
-A recursive function is a function that calles itself
    -Either directly or indirectly through another function
-Recursive problem solving
    -Base case
    -Divide the rest of the problem into subproblem and do recursive call
-There are many problems that lend themselves to recursive solutions
    -Mathematic
        -Factorial
        -Fibonacci
        -Fractals
    -Searching and Sorting
        -Binary Search
        -Search Trees
Important Notes
    -If recursion doesn't eventually stop you will have infinite recursion
    -Recursion can be resource intensive
    -Remember the base case(s)
        -It terminates the recursion
    -Only use recursive solutions when it makes sense
    -Anything that can be done recursively can be done iteratively
        -Stack overflow error
*/

/*
Example - Factorial
    - 0! = 1
        -Base case
            - factorial(0) = 1
    - n! = n * (n-1)
        -Recursive case
            - factorial(n) = n * factorial(n - 1)
*/

unsigned long long factorial(unsigned long long n)
{
    if (n == 1)
        return 1;
    return n * factorial(n-1);
}

/*
Example - Fibonacci
    -Base case
        - Fib(0) = 0
        - Fib(1) = 1
    -Recursive case
        - Fib(n) = Fib(n - 1) + Fib(n - 2) 
    -Fibonacci takes longer than Factorial to load
        -Fibonacci calls 2 instances of Fibonacci each time
            -This uses up more stack space       
*/

unsigned long long fibonacci(unsigned long long n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}


/*
Recursion on a Stack - factorial(3)
_____________________STACK______________________    START POPPING STUFF OFF STACK                  
|                                               |   >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> RETURN VALUES TO PREVIOUS FUNCTIONS
| return 1                                      |   |  n == 0                      V  Return value of factorial(0) to factorial(1) {1}
| n {0}                                         |   ^  FACTORIAL(0) ON THE STACK   V  FACTORIAL(0) POPS OFF THE STACK
|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|   |                              V  
| return 1 * (factorial(n - 1) -> factorial(0)) |   ^  n != 0                      V  Return value of factorial(1) to factorial(2) {1}
| n {1}                                         |   |  FACTORIAL(1) ON THE STACK   V  FACTORIAL(1) POPS OFF THE STACK
|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|   ^                              V
| return 2 * (factorial(n - 1) -> factorial(1)) |   |  n != 0                      V  Return value of factorial(2) to factorial(3) {2}
| n {2}                                         |   ^  FACTORIAL(2) ON THE STACK   V  FACTORIAL(2) POPS OFF THE STACK
|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|   |                              V
| return 3 * (factorial(n - 1) -> factorial(2)) |   ^  n != 0                      V  Return value of factorial(3) to main() {6}
| n {3}                                         |   |  FACTORIAL(3) ON THE STACK   V  FACTORIAL(3) POPS OFF THE STACK
|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|   ^                              V
| print(factorial(3))                           |   |  MAIN ON THE STACK           V  Print value of factorial(3) {6}        
|_______________________________________________|   (STARTS HERE)                  (ENDS HERE) 
*/
