/****************************************************************************************************************
 * TITLE: The 'this' Pointer - Notes
 * 
 * FROM: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535598#questions
 * 
 * SUMMARY: Summary of what the 'this' pointer does
*****************************************************************************************************************/




/*
The 'this' Pointer
------------------------------------------------
- 'this' is a reserved keyword
-Contains the address of the object
    -It's a pointer to the object
-Can only be used in class scope
-All member access is doone via the 'this' pointer
-Can be used by the programmer
    -To access data member and methods
    -To determine if two objects are the same
    -Can be dereferenced (*this) to yield the current object

-To disambiguate identifier use
    - void Account::set_balance (double balance)
      {
          balance = balance; // Which balance is it talking about?
      }

    - void Account::set_balance (double balance)
      {
          this -> balance = balance; // unambiguous
      }


-To determine the object identity
    -Sometimes it's useful to knwo if two objects are the same
        - int Account::compare_balance (const Account &other)
          {
              if (this == &other)
                  std::cout << "The same objects" << std::endl;
          }

          eric_account.compare_balance(eric_account);

    -We'll use the this pointer again when we overload the assignment operator


*/