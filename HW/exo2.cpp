// Write a C++ program that implement a class "Account" that contains a  data member "name"
// constructor to initialize the  data member "name", and member functions to set and get the value of "name".


#include <iostream>
#include <string.h>

using namespace std;

// the account class
class Account {
    private:
        string name;
        
    public:
        void setName(string name)
        {
            this->name = name;
        }
        string getName()
        {
            return name;
        }

        Account() {}
};

// void Account::setName(string name)
// {
//     this->name = name;
// }


int main() {
    Account myaccount;

    cout << "Initial name: " << myaccount.getName() << endl;

    myaccount.setName("test");

    cout << "Updated name: " << myaccount.getName() << endl;

    return 0;
}
