#include <iostream>

using namespace std;

class Rectangle {
    int width, height;
    public:
        void set_values(int w,int h);
        int area() {return width*height;}
};

void Rectangle::set_values(int x, int y) {
    width = x;
    height = y;
}

int main() {
    Rectangle rect, rectb;
    rect.set_values(3,4);
    rect.set_values(5,6);
    cout<<"rect area: "<< rect.area()<<endl;
    cout<<"rectb area: "<< rectb.area()<<endl;
    return 0;
}
