#include<iostream>
using namespace std;

class Integer 
{


    int n;
    int m;

    public:

        Integer()
        {
            n = 5;
            m = 10;
        }

        void show()
        {
            cout<<"\nn = "<<n;
            cout<<"\nm = "<<m;
        }

        Integer operator -();
};

Integer Integer :: operator-()
{
    Integer s1;
    s1.n = -n;
    s1.m = -m;

    return s1;

}

int main()
{
    Integer t1,t2;
    t1.show();
    t2.show();

    t2 = -t1;
    t1.show();
    t2.show();

    return 0;

}