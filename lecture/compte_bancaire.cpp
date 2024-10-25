#include <iostream>
#include <string.h>

using namespace std;

class Account
{
    private:
        char *name;
        double balance;
        unsigned int id;
    public:
        // initialisation des constructeur de classe avec ce qui prendre
        Account(); // default constructor
        Account(const Account &a); // copy constructor
        Account(const char *person); // param constructor
};

// default constructor so we initialise the data
Account::Account()
{
    name = NULL; balance = 0.0;
    id = 0;
};

// copy constructor data to enter/interact
Account::Account(const Account &a)
{
    name = new char[strlen(a.name)+1];
    strcpy(name, a.name);
    balance = a.balance;
    id = a.id;
};

// paramter so how data need to be enter
Account::Account(const char *person)
{
    name = new char[strlen(person)+1];
    strcpy(name,person);
    balance = 0.0;
    id = 0;
};
