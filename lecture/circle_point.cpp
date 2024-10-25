#include <iostream>

using namespace std;

// The error is print and foo are not defined

class Point {
   protected:
       int x,y;
   public:
        void set(int a, int b)
            {x=a;y=b;}
        void foo();
        void print();
};

class Circle: public Point {
    private: double r;
    public:
        void set(int a, int b, double c)
        {
            Point::set(a,b); // same name function call
            r = c;
        }
        void print();
};

int main()
{
    Point A;
    A.set(30,50); // from base class Point
    A.print(); // from base class Point

    Circle C;
    C.set(10,10,100); // from class Circle
    C.foo(); // from base class Point
    C.print(); // from class Circle
}
