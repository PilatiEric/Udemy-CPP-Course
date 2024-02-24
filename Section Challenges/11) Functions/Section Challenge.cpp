/************************************************************
 * Functions Section Challenge
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535520#questions/4821302
 * 
 * SUMMARY: Modularize the section challenge from Section 9
*************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


#pragma region Function Prototypes

void menu_selection(vector<int> &number_list);
void show_menu(vector<int> &number_list);
void to_uppercase(char &selection);
void print_numbers(vector<int> &number_list);
void add_number(vector<int> &number_list);
void get_mean_number(vector<int> &number_list);
void get_smallest_number(vector<int> &number_list);
void get_largest_number(vector<int> &number_list);

#pragma endregion



int main()
{
    vector<int> number_list {};
    menu_selection(number_list);
    return 0;
}


void menu_selection(vector<int> &number_list)
{
    bool quit {false};
    vector<char> selection_list {'P', 'p', 'A', 'a', 'M', 'm', 'S', 's', 'L', 'l', 'Q', 'q'};

    while (!quit)
    {
        char selection {};
        show_menu(number_list);
        cout << "Please make a selection: ";
        cin >> selection;
        cout << endl;
        if (find(selection_list.begin(), selection_list.end(), selection) != selection_list.end())
        {
            to_uppercase(selection);
            if (selection == 'P')
                print_numbers(number_list);
            else if (selection == 'A')
                add_number(number_list);
            else if (selection == 'M')
                get_mean_number(number_list);
            else if (selection == 'S')
                get_smallest_number(number_list);
            else if (selection == 'L')
                get_largest_number(number_list);
            else if (selection == 'Q')
                quit = true;
        }
        else
            cout << "Invalid Selection - please enter only one letter corresponding to your selection" << endl << endl;  
    }
}


void show_menu(vector<int> &number_list)
{
    if (number_list.size() > 0)
    {
        cout << "P - Print numbers" <<
              "\nA - Add a number" <<
              "\nM - Display mean of the numbers" <<
              "\nS - Display the smallest number" <<
              "\nL - Display the largest number" << 
              "\nQ - Quit" <<
              endl <<
              "\nCurrent size of list: " << number_list.size() <<
              endl <<
              "\nEnter your choice: ";
    }
    else
    {
        cout << "A - Add a number" <<
              "\nQ - Quit" <<
              endl <<
              "\nCurrent size of list: " << number_list.size() <<
              endl <<
              "\nEnter your choice: ";
    }
}

void to_uppercase(char &selection)
{
    selection = toupper(selection);
}

void print_numbers(vector<int> &number_list)
{
    sort(number_list.begin(), number_list.end());
    for (int number : number_list)
        cout << number << endl << endl;
}

void add_number(vector<int> &number_list)
{
    char added_number {};
    cout << "Enter a number: ";
    cin >> added_number; 

    number_list.push_back(added_number);

    cout << endl;
}

void get_mean_number(vector<int> &number_list)
{
    double mean {};
    for (int number : number_list)
        mean += number;
        
    mean /= number_list.size();

    cout << mean << endl << endl; 
}

void get_smallest_number(vector<int> &number_list)
{
    int smallest_number {};
    smallest_number = number_list.at(0);
    for (int number : number_list)
    {
        if (number < smallest_number)
                smallest_number = number;
    }
    cout << "The current smallest number on the list: " << smallest_number << endl << endl;
}

void get_largest_number(vector<int> &number_list)
{
    int largest_number {};
    largest_number = number_list.at(0);
    for (int number : number_list)
    {
        if (number > largest_number ||
            number_list.size() == 0)
                largest_number = number;
    }
    cout << "The current largest number on the list: " << largest_number << endl << endl;
}