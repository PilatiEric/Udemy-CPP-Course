/**********************************
 * Declaring and Using Constants Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535372#questions
***********************************/

#include <iostream>
using namespace std;

#pragma region Function Prototypes

int Room_Cost();

#pragma endregion

int main()
{
    Room_Cost();

    return 0;
}

int Room_Cost()
{
    /*
    Use pseudocode to help plan out code

    -Prompt the user to enter the number of rooms
    -Display number of rooms
    -Display price per Room

    -Display cost: (number of rooms * price per room)
    -Display tax: (Cost * tax rate)
    -Display estimate expiration date
    */



    cout << "Welcome to Eric's carpet cleaning service!" << endl;
    cout << "\nHow many rooms do you need cleaned? ";

    int number_of_rooms {0};
    cin >> number_of_rooms;

    const double price_per_room {32.5};
    const double sales_tax {0.06};
    const int estimate_expiry {30}; //days
    double cost_before_tax {number_of_rooms * price_per_room};
    double tax_added {cost_before_tax * sales_tax};
    double total_estimate {cost_before_tax + sales_tax};


    cout << "\nEstimate for Carpet Cleaning Service";
    cout << "\n==========================================";
    cout << "\nNumber of rooms: " << number_of_rooms;
    cout << "\nPrice per room: $" << price_per_room;
    cout << "\nCost: $" << cost_before_tax;
    cout << "\nTax: $" << tax_added;
    cout << "\n==========================================";
    cout << "\nTotal estimate: $" << total_estimate;
    cout << "\nThis estimate is valid for " << estimate_expiry << " days.";

    return 0;
}