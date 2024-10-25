// Write a C++ program that implement a class "Account" that contains  data members "name" and "balance",
// constructor to initialize the  data members, member functions to:  set and get the value of "name",
// deposit to the balance and return the balance.

#include <iostream>
#include <string.h>

using namespace std;


class Account {
    private:
        string name;
        int balance;
    public:
        void setName(string name)
        {
            this->name = name;
        }
        string getName()
        {
            return name;
        }

        int setbalance(int deposit)
        {
            balance -= deposit;
        }

        int balance_value()
        {
            return balance;
        }

        // default constructor
        //Account() : name(""), balance(42) {}
        Account() {}

        Account(string account_name, int account_balance)
        {
            this->name = account_name;
            this->balance = account_balance;
        }
};

int main()
{
    Account myaccount;

    myaccount.setName("haris");

    cout << "account name: " << myaccount.getName() << endl;

    cout << "account balance: " << myaccount.balance_value() << endl;

    myaccount.setbalance(41);
    
    cout << "account balance: " << myaccount.balance_value() << endl;

    return 0;
}
