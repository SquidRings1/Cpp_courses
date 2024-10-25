#include <iostream>

using namespace std;

class A {
   protected:
       int x,y;
   public:
       void print()
            {cout<<"From A"<<endl;}
};

class B: public A {
        public:
         void print()
           {cout<<"From B"<<endl;}
};

int main()
{
    A test;

    test.print();

    B test2;

    test2.print();
}
