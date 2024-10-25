#include <iostream>

using namespace std;



class Rectangle
{
    private:
        int width;
        int lenght;
    public:
        // Error car on lui fait faire des chose mais il est pas encore def donc sa marche pas
        Rectangle() {}

        // car on dit au constructuer de faire des truc qu'on a pas exeple on a int w et int l alros que exemple r1 à pas
        /*Rectangle(int w, int l)
            {width = w; lenght=l;}*/
        void set(int w, int l);
        int area ()
            {return width*lenght;}
};

int main()
{
    Rectangle r1;
    
    Rectangle *r3 = new Rectangle();

    Rectangle r4; // Error car il est pas definie

    r4.set(60,80);

    Rectangle r5 = r4;
    Rectangle r6(r4);

    Rectangle *r7 = new Rectangle(r4);
}
