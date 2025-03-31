/****************************************************************************************************************
 * TITLE: Accessing Class Members - Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535572#overview
 * 
 * SUMMARY: Learn to access class members and set class methods
*****************************************************************************************************************/

#include <iostream>
#include <string>

using namespace std;

#pragma region Prototype Functions

void access_player();
void access_account();

#pragma endregion




#pragma region Classes

class Player
{
    public:
        // attributes
        string name {"Player"};
        int health {100};
        int xp {3};

        //methods
        void talk (string text_to_say) 
        {
            cout << name << " says " << text_to_say << endl;
        }

        bool is_dead();
};


class Account
{
    public:
        //attributes
        string name;
        double balance;

        //methods
        void withdraw (double amount)
        {
            balance -= amount;
            cout << "In withdraw" << endl;
        }
        void deposit (double amount)
        {
            balance += amount;
            cout << "In deposit" << endl;
        }
};

#pragma endregion



int main()
{
    access_player();
    access_account();
    return 0;
}



/*
Accessing Class Members
-------------------------------------------------------------------
-We can access
    -Class attributes
    -Class methods
-Some members will NOT be accessible
-We need an object to access instance variables

-Ways to access
    -If we have a pointer to an object (member of pointer operator)
        -Dereference the pointer then use the dot operator
            -Account eric_account = new Account();
             (*eric_account).balance;
             (*eric_account).deposit(1000.00);
        -Or use the member of pointer operator (arrow operator) - This will do the same as dereferencing and initializing
            -eric_account -> balance;
             eric_account -> deposit(1000.00);
*/


void access_player()
{
    cout << "access_player()\n-------------------------------------------" << endl;
    Player eric;

    eric.name = "Eric";
    eric.health = 100;
    eric.xp = 12;

    eric.talk("Hi");


    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;

    enemy -> xp = 15;
    enemy -> talk("I will destroy you.");
    cout << endl;
}


void access_account()
{
    cout << "access_account()\n-------------------------------------------" << endl;
    Account eric_account;

    eric_account.name = "Eric's account";
    eric_account.balance = 5000.00;

    eric_account.deposit(1000.0);
    eric_account.withdraw(500.0);
    cout << endl;
}
