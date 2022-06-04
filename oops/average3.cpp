#include<iostream>
using namespace std;

class C;
class B;
class A
{

    int a;
    public :

        void set()
        {

            cout<<"Enter value for a : "<<endl;
            cin>>a;
        }

        void show()
        {

            cout<<"Value for a is = "<<a<<endl;
        }

        friend void average(A&,B&,C&);
};


class B
{

    int b;
    public :

        void set()
        {

            cout<<"Enter value for b : "<<endl;
            cin>>b;
        }

        void show()
        {

            cout<<"Value for b is = "<<b<<endl;
        }

        friend void average(A&,B&,C&);
};


class C
{

    int c;
    public :

        void set()
        {

            cout<<"Enter value for c : "<<endl;
            cin>>c;
        }

        void show()
        {

            cout<<"Value for c is = "<<c<<endl;
        }

        friend void average(A&,B&,C&);
};


void average(A &x,B &y,C &z)
{

    int avg;

    avg = (x.a + y.b + z.c)/3;

    cout<<"The average of three value is = "<<avg<<endl;
}

int main()
{

    A a1;
    B b1;
    C c1;

    a1.set();
    b1.set();
    c1.set();

    a1.show();
    b1.show();
    c1.show();

    average(a1,b1,c1);





    return 0;
}