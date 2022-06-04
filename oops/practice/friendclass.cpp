#include<iostream>
using namespace std;

class Number2;
class Number1
{

    public :
    
        int a,b;

        void show()
        {
            cout<<"A = "<<a<<" B = "<<b;
        }

        friend Number2;
};

class Number2
{

    public :

        void set(Number1&m, int x,int y)
        {

            m.a = x;
            m.b = y;

        }
};


int main()
{

    Number1 n;
    Number2 s;

    s.set(n,5,10);

    n.show();




    return 0;
}