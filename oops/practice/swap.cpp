#include<iostream>
using namespace std;
class B;
class A
{
    
    public :

    int x;

        void set()
        {
            cout<<"\nEnter A = "<<endl;
            cin>>x;
        }

        void show()
        {

            cout<<"\n A = "<<x<<endl;
        }

        void friend swap(A &,B &);

};

class B
{
    int y;
    public : 

        void set()
        {
            cout<<"\nEnter for B = "<<endl;
            cin>>y;
        }

        void show()
        {
            cout<<"\n B = "<<y<<endl;
        }

        void friend swap(A &,B &);
};

void swap(A &a,B &b)
{
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
    

}

int main()
{


    A a;
    B b;
    a.set();
    a.show();

    b.set();
    b.show();

    swap(a,b);

    cout<<"\nAfter swap : "<<endl;
    a.show();
    b.show();


    return 0;
}