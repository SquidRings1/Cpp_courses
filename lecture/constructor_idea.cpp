/*
    Set and get Rectangle size
*/

#include <iostream>
using namespace std;

class Rectangle {
    private:
        int width;
        int lenght;
    public:
        Rectangle(); // default constructor un truc vide pour initialiser les valeur à zéro
        Rectangle(const Rectangle &r); // copy constructor
        Rectangle(int w, int l); // param constructor de quelle var on a besoin pour former le constructeur
        // si on a mis des constructeur exemple:
        /*
        
        Rectangle::Rectangle()
        {
            width = 20;
            lenght = 50;
        }
        Rectangle::Rectangle(const Rectangle &r)
        {
            width = r.width; lenght = r.lenght;
        }
        */
       // pas besoin de var set et area car les constructeur vont faire le travaille
        // void set(int w, int l);
        // int area()
        //     {return width*lenght;}
};


Rectangle::Rectangle()
{
    width = 20;
    lenght = 50;
}

// constructor on link notre fonctions à un objet dans notre class
Rectangle::Rectangle(const Rectangle &r)
{
    width = r.width; lenght = r.lenght;
}

Rectangle::Rectangle(int lenght, int width)
{
    return width*lenght
}


int main()
{
    Rectangle r1;

    Rectangle *r7 = new Rectangle();
}
