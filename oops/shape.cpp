#include<string.h>
#include<stdio.h>
#include<iostream>

using namespace std;


class Shape
{

    char color[10];
    public :

        void setcolor(char c[])
        {
            strcpy(color,c);
        }


        char *getcolor()
        {

            return color;
        }
};


class Circle : public Shape
{

    int radius;

    public :

        void setred(int x)
        {

            radius = x;
        }

        void draw()
        {

            cout<<"Circle with "<<radius<<"With color"<<getcolor()<<endl;
        }


};


class Rect : public Shape{

    int para;

    public :

            void setpara(int x)
            {
                para = x;
            }

            void draw()
            {

                cout<<"Rectangle with "<<para<<"With color"<<getcolor()<<endl;
            }
    

    

};


int main()
{


    Circle c;
    c.setcolor("Green");
    c.setred(56);
    c.draw();

    Rect r;
    r.setcolor("Blue");
    r.setpara(66);
    r.draw();






    return 0;
}