/******************************************************************
 * Default Argument Values Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535504#overview
 * 
 * SUMMARY: Default Parameters allow certain values to be automatically
 *          entered into an argument when not provided.
*******************************************************************/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


#pragma region Function Prototypes

//VERY IMPORTANT NOTE!!!!!!!!!!
//When one argument is given a defualt value ALL that value must have one too
double calc_cost_two_arg(double base_cost, double tax_rate = 0.06);  //This is the default value

//double calc_cost_three_arg(double base_cost = 100.0, double tax_rate, double shipping = 3.50); //THIS WILL GIVE AN ERROR
double calc_cost_three_arg(double base_cost = 100.0, double tax_rate = 0.06, double shipping = 3.50);

void greeting (string name, string prefix = "Mr.", string suffix = "");

#pragma endregion


int main() 
{
    double cost {0};

    cout << fixed << setprecision(2);   //This makes sure it always displays 2 decimal places
    cost = calc_cost_two_arg(200.0);                // This uses the default tax rate of 0.06
    cost = calc_cost_two_arg(100.0, 0.08);          // Will use 0.08 and not the default
    cost = calc_cost_three_arg(100, 0.08, 4.25);    // Will use no defaults
    cost = calc_cost_three_arg(100.0, 0.08);        // Will use default shipping
    cost = calc_cost_three_arg(200.0);              // Will use default tax and shipping
    greeting("Glenn Jones", "Dr.", "M.D.");
    greeting("James Rogers", "Professor", "Ph.D.");
    greeting("Frank Miller", "Dr.");
    greeting("William Smith");
    return 0;
}


/*
Default Argument Values
---------------------------------------------------------
-When a function is called, all arguments must be supplied
-Sometimes some of the arguments have the same values most of the time
-We can tell the compiler to use default values if the arguments are not supplied
-Default values can be in the prototype or definition, NOT BOTH   <<<<<<<   IMPORTANT!!!!!!!!!!
    -best practice - in the prototypes
    -must appear at the tail end of the parameter list
-Can have multiple default values
    -Must appear consecutively at the tail end of the parameter list
-When default value is used, that parameter doesn't need to appear with the function call

*/

double calc_cost_two_arg(double base_cost, double tax_rate)
{
    return base_cost += (base_cost * tax_rate);
}

double calc_cost_three_arg(double base_cost, double tax_rate, double shipping)
{
    return base_cost += (base_cost * tax_rate) + shipping;
}

void greeting(string name, string prefix, string suffix)
{
    cout << "void greeting()\n--------------------------------------------------" << endl;
    cout << "Hello " << prefix + " " + name + " " + suffix << endl << endl;
}