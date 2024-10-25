#include <iostream>

using namespace std;

class circle
{
    private:
        double radius;
    
    public:
        void set (double r)
            {radius = r;}
        double get_r()
            {return radius;}
};

int main()
{
    circle c;
    c.set(5.0);
    std::cout<<"The redius of circle c is " << c.get_r() << endl;
}
