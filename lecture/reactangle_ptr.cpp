#include <iostream>

using namespace std;



class Rectangle
{
    private:
        int width;
        int lenght;
    public:
        void set(int w, int l);
        int area()
            {return width*lenght;}
        Rectangle();
        Rectangle(const Rectangle &r);
        Rectangle(int w, int l);
};

// constructor on link notre fonctions à un objet dans notre class
Rectangle::Rectangle(const Rectangle &r)
{
    width = r.width; lenght = r.lenght;
}

int main()
{
    Rectangle r1;
    r1.set(5,8);

    Rectangle *r2;
    r2 = &r1;
    r2->set(8,10);
}
