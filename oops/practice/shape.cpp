#include<iostream>
#include<string.h>
using namespace std;

class Shape
{
    char color[10];

    public :

        void setcolor(char s[])
        {
            strcpy(color,s);
        }

        char *getcolor()
        {

            return color;
        }
};


class Circle : public Shape
{

    int radius;

    public:

        void setRad()
        {
            cout<<"\nEnter radius "<<endl;
            cin>>radius;
        }

        void draw()
        {
            cout<<"\nCircle with rad = "<<radius<<" color = "<<getcolor();
        }
};

class Rect : public Shape
{

    int para;

    public :

        void setpara(int x)
        {
            para = x;
        }

        void draw()
        {
            cout<<"\nRect with color = "<<getcolor()<<" para = "<<para;
        }
};

int main()
{

    Circle c;
    Rect r;
    c.setcolor("blue");
    c.setRad();
    c.draw();

    r.setcolor("Greem");
    r.setpara(5);
    r.draw();




    return 0;
}