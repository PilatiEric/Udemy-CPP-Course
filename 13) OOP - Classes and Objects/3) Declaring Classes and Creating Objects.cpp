/****************************************************************************************************************
 * TITLE: Declaring a Class and Creating Objects - Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535570#overview
 * 
 * SUMMARY: Learn to create classes and other limited information
*****************************************************************************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

#pragma region Prototype Functions

void Creating_Objects_Player();
void Creating_Objects_Account();

#pragma endregion


#pragma region Classes

class Player
{
    // attributes
    string name {"Player"};
    int health {100};
    int xp {3};

    //methods
    void talk (string);
    bool is_dead();
};


class Account
{
    //attributes
    string name;
    double balance;

    //methods
    bool withdraw (double amount);
    bool deposit (double amount);
};

#pragma endregion




int main()
{
    Creating_Objects_Player();
    Creating_Objects_Account();

    return 0;
}


/*
Declaring a Class
------------------------------------------------
class Class_Name
{
    //declaration(s);
};
*/





void Creating_Objects_Player()
{
    Player eric;
    Player hero;

    Player players[] {eric, hero};

    vector<Player> player_vec {eric};
    player_vec.push_back(hero);

    Player *enemy {nullptr};
    enemy = new Player;

    delete enemy;                 
}




void Creating_Objects_Account()
{
    Account eric_Account;
    Account paul_Account;

    Account accounts[] {eric_Account, paul_Account};

    vector<Account> accounts1 {paul_Account};
    accounts1.push_back(eric_Account);

    Account *other_Account = new Account();
    delete other_Account;
}