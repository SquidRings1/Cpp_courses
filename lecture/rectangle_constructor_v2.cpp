#include <iostream>

using namespace std;



class Rectangle
{
    private:
        int width;
        int lenght;
    public:
        Rectangle();
        Rectangle(int w, int l);
        void set(int w, int l);
        int area ();
};

Rectangle::Rectangle()
{
    width = 20;
    lenght = 50;
}

int main()
{
    Rectangle r1;

    Rectangle *r7 = new Rectangle();
}
