#include<iostream>
using namespace std;

class B;
class A
{

    int m;
    public :

        void set()
        {
            cout<<"Enter value : "<<endl;
            cin>>m;
        }

        void show()
        {
            cout<<"M = "<<m<<endl;
        }

        friend void swap(A &, B &);
};

class B
{

    int k;

    public :

         void set()
         {

             cout<<"Enter value of k "<<endl;
             cin>>k;
         }

         void show()
         {

             cout<<"K  = "<<k<<endl;
         }


         friend void swap(A& , B&);
};

void swap(A &x,B &y)
{
    int t;

    t = x.m;
    x.m = y.k;
    y.k = t;
}

int main()
{

    A t1;
    B t2;

    t1.set();
    t2.set();

    cout<<"Before swapping ........"<<endl;
    t1.show();
    t2.show();

    swap(t1,t2);
    cout<<"After swapping................."<<endl;
    t1.show();
    t2.show();





    return 0;
}