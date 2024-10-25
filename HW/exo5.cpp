/*
Implement a "Line" class that has "length" as data member,
and member functions to set & get the length, constructor and destructor.
*/

#include <iostream>
#include <string.h>

using namespace std;


class Line {
    private:
        int length;
    public:
        // default constructor
        Line() {}
        

        // le mieux est de sortir les constructeur
        // copy constructor
        Line(const Line &l) {
            length = l.length;
        }

        // Parameterized constructor
        Line(int length) {
            this->length = length;
        }

        // Destructor
        ~Line() {}

        void setLength(int length) {
            this->length = length;
        }

        int getLength() {
            return length;
        }
};

int main() {
    Line L1;

    L1.setLength(10);

    cout << "Return Line length L1: " << L1.getLength() << endl;

    Line *L2 = new Line(L1);

    cout << "Return Line length L2: " << L2->getLength() << endl;

    delete L2;

    return 0;
}
