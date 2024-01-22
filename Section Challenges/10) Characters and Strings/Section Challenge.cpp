/*************************************************************************************************************************************
 * Characters and Strings Section Challenge
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535488#questions
 * 
 * Goal:
 * -------------------------------------------------------------------------
 * Create a function that allows the user to enter in a secret message.
 * The function should then swap each letter in the message out for another letter.
 * The function should then display the encrypted message before unencrypting it again and displaying the original message.
**************************************************************************************************************************************/




#include <iostream>
#include <cstring>
#include <string>
#include <unordered_map>

using namespace std;

#pragma region Function Prototypes

// Function Prototypes
int cipher();
string encrypt(const string& unencrypted_message);
string unencrypt(const string& encrypted_message);

//Original Prototypes
// int cipher();
// string encrypt(string unencrypted_message);
// string unencrypt(string encrypted_message);

#pragma endregion


int main()
{
    cipher();
    return 0;
}


//IMPROVED VERSION
// Section Challenge -- Cipher
string alphabet {"abcdefghijklmnopqrstuvwxyz .?!"};
string cipher_code{"? QACZVWMBG!FESYJ.ITHOUPRDKLNX"};

unordered_map<char, char> encryption_map;
unordered_map<char, char> unencryption_map;

int cipher()
{
    // Populate encryption map
    for (size_t i = 0; i < alphabet.size(); ++i)
        encryption_map[alphabet[i]] = cipher_code[i];

    for (size_t i {0}; i < cipher_code.size(); ++i)
        unencryption_map[cipher_code[i]] = alphabet[i];

    string secret_message {};
    string encrypted_message{};
    string unencrypted_message{};

    // Ask the user for the message
    cout << "Please enter your secret message with no capitalization: ";
    getline(cin, secret_message);
    cout << endl;

    // Encrypt the message
    encrypted_message = encrypt(secret_message);
    cout << "Your message has been encrypted: " << encrypted_message << endl << endl;

    // Unencrypt the message
    unencrypted_message = unencrypt(encrypted_message);
    cout << "Your message has been unencrypted: " << unencrypted_message << endl << endl;

    return 0;
}

string encrypt(const string& unencrypted_message)
{
    string encrypted_message {};

    for (char c : unencrypted_message)
        encrypted_message += encryption_map[c];

    return encrypted_message;
}

string unencrypt(const string& encrypted_message)
{
    string unencrypted_message {};

    for (char c : encrypted_message)
        unencrypted_message += unencryption_map[c];

    return unencrypted_message;
}



//ORIGINAL VERSION
//Section Challenge -- Cipher
//----------------------------------------------

// string alphabet {"abcdefghijklmnopqrstuvwxyz .?!"};
// string cipher_code{"? QACZVWMBG!FESYJ.ITHOUPRDKLNX"};

// int cipher()
// {
//     string secret_message {};
//     string encrypted_message{};
//     string unencrypted_message{};

//     //Ask the user for the message
//     cout << "Please enter your secret message with no capitalization: ";
//     getline(cin, secret_message);
//     cout << endl;

//     //Encrypt the message
//     encrypted_message = encrypt(secret_message);
//     cout << "Your message has been encrypted: " << encrypted_message << endl << endl;

//     //Unencrypt the message
//     unencrypted_message = unencrypt(encrypted_message);
//     cout << "Your message has been unencrypted: " << unencrypted_message << endl << endl;

//     return 0;
// }


// string encrypt(string unencrypted_message)
// {
//     string encrypted_message {};

//     for (size_t i {0}; i < unencrypted_message.length(); ++i)
//     {        
//         int unencrypted_letter_position = static_cast<int>(alphabet.find(unencrypted_message.at(i)));

//         encrypted_message += cipher_code.at(unencrypted_letter_position);
//     }
        
//     return encrypted_message;
// }


// string unencrypt(string encrypted_message)
// {
//     string unencrypted_message {};

//     for (size_t i {0}; i < encrypted_message.length(); ++i)
//     {
//         int encrypted_letter_position = static_cast<int>(cipher_code.find(encrypted_message.at(i)));
//         unencrypted_message += alphabet.at(encrypted_letter_position);
//     }

//     return unencrypted_message;
// }
