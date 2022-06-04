#include<iostream>
using namespace std;

class B;
class A
{

    int a;
    public : 

            A()
            {
                a = 5;
            }

            void show()
            {

                cout<<"A = "<<a<<endl;
            }

            friend void max(A &,B &);
};

class B
{

    int b;
    public :

            B()
            {
                b = 10;
            }

            void show()
            {

                cout<<"B  = "<<b<<endl;
            }

            friend void max(A &, B &);
};


void max(A &x,B &y)
{

    if(x.a>y.b)
    {
        cout<<"A is larger "<<x.a<<endl;

    }else{

        cout<<"B is larger "<<y.b<<endl;
    }
}

int main()
{

    A a1;
    B a2;
    max(a1,a2);




    return 0;
}