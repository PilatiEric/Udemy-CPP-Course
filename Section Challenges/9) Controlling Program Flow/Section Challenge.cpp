#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#pragma region Function Prototypes

    int number_options();

#pragma endregion


int main()
{
    number_options();
    return 0;
}



int number_options()
{
    /*
    Display this list
    -----------------------
    P - Print Numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit
    */

   bool quit {false};
   char list_selection {};
   vector<int> number_list {};
   int added_number {};
   double mean {};
   int smallest_number {};
   int largest_number {};

    //Give the user a place to put their choice
    

    //Use switch to go through options
    //Account for upper and lower case

    while (!quit)
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

            cin >> list_selection;
            cout << endl ;

            switch(list_selection)
            {
                case 'p':
                case 'P':
                {
                    sort(number_list.begin(), number_list.end());
                    for (int number : number_list)
                        cout << number << endl << endl;

                    break;
                }

                case 'a':
                case 'A':
                {
                    cout << "Enter a number: ";
                    cin >> added_number; 

                    number_list.push_back(added_number);

                    cout << endl;
                    break;
                }

                case 'm':
                case 'M':
                {
                    for (int number : number_list)
                        mean += number;
                    
                    mean /= number_list.size();

                    cout << mean << endl << endl;
                    break;
                }

                case 's':
                case 'S':
                {
                    smallest_number = number_list.at(0);
                    for (int number : number_list)
                    {
                        if (number < smallest_number)
                                smallest_number = number;
                    }
                    cout << "The current smallest number on the list: " << smallest_number << endl << endl;
                    break;
                }

                case 'l':
                case 'L':
                {
                    for (int number : number_list)
                    {
                        if (number > largest_number ||
                            number_list.size() == 0)
                                largest_number = number;
                    }
                    cout << "The current largest number on the list: " << largest_number << endl << endl;
                    break;
                }

                case 'q':
                case 'Q':
                {
                    quit = true;
                    break;
                }
                
                default:
                {
                    cout << "Unknown selection, please try again" << endl << endl;
                    break;
                }                    
            }
        }
        else
        {
            cout << "A - Add a number" <<
                  "\nQ - Quit" <<
                  endl <<
                  "\nCurrent size of list: " << number_list.size() <<
                  endl <<
                  "\nEnter your choice: ";
            cin >> list_selection;
            cout << endl;
            
            switch(list_selection)
            {
                case 'a':
                case 'A':
                {
                    cout << "Enter a number: ";
                    cin >> added_number; 

                    number_list.push_back(added_number);

                    cout << endl;
                    break;
                }

                case 'q':
                case 'Q':
                {
                    quit = true;
                    break;
                }
                    

                default:
                {
                    cout << "Selection invalid, list size must be greater than 0" << endl << endl;
                    break;
                }  
            }
        }        
    }
    
    return 0;
}
