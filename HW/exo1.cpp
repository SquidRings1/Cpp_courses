// Write a C++ program that implement a class "Account"
// that contains a  data member "name" and member functions to set and get the value of "name".

#include <iostream>
#include <string.h>

using namespace std;

class Account
{
    private:
        string name;
    public:
        void setName(string name) {
            this->name = name;
        }
        string getName() {
            return name;
        }
};

// set une instance du name
int main()
{
    Account myaccount;

    myaccount.setName("test");
    cout << "Account name: " << myaccount.getName() << endl;
}
