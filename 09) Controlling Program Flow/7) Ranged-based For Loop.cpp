/*******************************************
 * Range-based For Loops Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535456#notes
********************************************/

#include <iostream>
#include <vector>
#include <format>
using namespace std;

#pragma region Function Prototypes

int range_loop();

#pragma endregion


int main()
{
    range_loop();
    return 0;
}


/*
Range-based For Loops
--------------------------
- for (var_type var_name: sequence)
  {
    statement;
  }    

    -var_name hold the current value in the sequence
        -If it is a vector, it will be whichever value is currently indexed at
        -If it is a string, it will loop through the individual chars
            -var_name will be the char indexed
        
*/


int range_loop()
{
    //Scores
    int scores[] {10, 20, 30};

    for (auto score: scores)
        cout << score << endl << endl;
        
    

    //Average Temperature
    vector<double> temperatures {87.9, 77.9, 80.0, 72.5};
    double average_temperature {};
    double total {};

    for (auto temp: temperatures)
        total += temp;
    
    if (temperatures.size() != 0)
        average_temperature = total / temperatures.size();
    

    cout << "Average Temperature: " << average_temperature << endl << endl;

    //
    for (auto val: {1, 2, 3, 4, 5})
        cout << val << endl;
    
    return 0;
}
