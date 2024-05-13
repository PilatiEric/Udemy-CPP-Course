/****************************************************************************************************
 * L-Values & R-Values Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535550#overview
 * 
 * SUMMARY: L-values are variable names, R-values are variable values
*****************************************************************************************************/


#include <iostream>
#include <string>

using namespace std;


#pragma region Function Prototypes

void l_values();
void r_values();
void references();
int square();

#pragma endregion


int main()
{
    return 0;
}

/*
L-Values & R-Values
------------------------------------
-L-values
    -Values that have names and are addressable
    -Modifiable if they are not constants
*/

void l_values()
{
    //These ARE L-values
    int x {100};        //x is an L-Value
    x = 1000;
    x = 1000 + 20;


    string name;        //name is an L-Value
    name = "Eric";



    //These are NOT L-values

    /*
    100 = x;            //100 is NOT an L-value
    (1000 + 20) = x;    //(1000 + 20) is NOT an L-Value

    string name;
    name = "Eric";
    "Eric" = name;      //"Frank" is NOT an L-value
    */
}

/*
R-Values
---------------
-A value that's not an L-value
    -On the righ-hand side of an assignment expression
    -A temporary which is intended to be non-modifiable
*/


void r_values()
{
    //These ARE R-values
    int x {100};                //100 is an R-Value
    int y = x + 200;            //(x + 200) is an R-Value


    string name;        
    name = "Eric";              //"Eric" is an R-value

    int max_num = max(20, 30);  //max(20, 30) is an R-value
}



/*
L-value References
---------------------------
-The references we've use are L-value references
    -Because we are referencing L-values
-Same when we pass-by-reference
*/


int square (int &n)
{
    return n*n;
}

void references()
{
    int x {100};

    int &ref1 = x;      //ref1 is reference to L-value
    ref1 = 1000;

    //int &ref2 = 100;  //Error 100 is an r-value

    int num {10};

    square(num);

    //square(5);        //Error - can't reference r-value 5
}

