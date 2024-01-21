/************************************************************
 * Characters and Strings Section Challenge
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535488#questions
 * 
 * Goal:
 * -------------------------------------------------------------------------
 * Create a function that allows the user to enter in a secret message.
 * The function should then swap each letter in the message out for another letter.
 * The function should then display the encrypted message before unencrypting it again and displaying the original message.
*************************************************************/




#include <iostream>
#include <cstring>
#include <string>

using namespace std;

#pragma region Function Prototypes

int cipher();
string encrypt(string unencrypted_message);
string unencrypt(string encrypted_message);

#pragma endregion


int main()
{
    cipher();

    return 0;
}



//Section Challenge -- Cipher
//----------------------------------------------

string alphabet {"abcdefghijklmnopqrstuvwxyz .?!"};
string cipher_code{"? QACZVWMBG!FESYJ.ITHOUPRDKLNX"};

int cipher()
{
    string secret_message {};
    string encrypted_message{};
    string unencrypted_message{};

    //Ask the user for the message
    cout << "Please enter your secret message with no capitalization: ";
    getline(cin, secret_message);
    cout << endl;

    //Encrypt the message
    encrypted_message = encrypt(secret_message);
    cout << "Your message has been encrypted: " << encrypted_message << endl << endl;

    //Unencrypt the message
    unencrypted_message = unencrypt(encrypted_message);
    cout << "Your message has been unencrypted: " << unencrypted_message << endl << endl;

    return 0;
}


string encrypt(string unencrypted_message)
{
    string encrypted_message {};

    for (int i {0}; i < unencrypted_message.length(); ++i)
    {        
        int unencrypted_letter_position = static_cast<int>(alphabet.find(unencrypted_message.at(i)));

        encrypted_message += cipher_code.at(unencrypted_letter_position);
    }
        
    return encrypted_message;
}


string unencrypt(string encrypted_message)
{
    string unencrypted_message {};

    for (size_t i {0}; i < encrypted_message.length(); ++i)
    {
        int encrypted_letter_position = static_cast<int>(cipher_code.find(encrypted_message.at(i)));
        unencrypted_message += alphabet.at(encrypted_letter_position);
    }

    return unencrypted_message;
}