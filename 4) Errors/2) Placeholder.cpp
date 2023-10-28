#pragma region Inlude & Using
//Include
#include <iostream>

//Using
using namespace std;

#pragma endregion

#pragma region Function Prototypes
//Function prototypes
int FaveNumber();

#pragma endregion

//All C++ programs must have a main() function
//All C++ programs may only have one main() function
int main()
{
    FaveNumber();
    return 0;
}

int FaveNumber()
{
    int Number;
    cout << "Enter your favorite number between 1 and 100" << endl;
    cin >> Number;
    cout << "Your favorite number is " << Number << "." << endl << endl;
    return 0;
}