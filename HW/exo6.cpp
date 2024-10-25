/*
Implement a dynamic array class that has "size" as data member in addition to a pointer to the heap memory,
and member functions to add elements, print the elements, constructor and destructor.
*/

#include <iostream>
#include <string.h>

using namespace std;


class the_array_class {
    private:
        int size;
        int *array;
    public:
        // default constructor
        the_array_class() {}

        the_array_class(const the_array_class &a) {
            size = a.size;
        }

        the_array_class(int size) {
            this->size = size;
        }

        the_array_class() {

        }
        // copy constructor
        // Line(const Line &l) {
        //     length = l.length;
        // }

        // Parameterized constructor
        // Line(int length) {
        //     this->length = length;
        // }

        // Destructor
        ~Array() {}

        // void setLength(int length) {
        //     this->length = length;
        // }

        // int getLength() {
        //     return length;
        // }
};

void print_elt() {
    if (size == 0)
    {
        return 0;
    }

    for(int i = 0; i < size; i++)
    {
        cout << array[i] << "";
    }
}

int main() {
    Line L1;

    L1.setLength(10);

    cout << "Return Line length L1: " << L1.getLength() << endl;

    Line *L2 = new Line(L1);

    cout << "Return Line length L2: " << L2->getLength() << endl;

    delete L2;

    return 0;
}
