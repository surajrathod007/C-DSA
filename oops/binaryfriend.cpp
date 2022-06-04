#include<iostream>
using namespace std;


class Integer
{

    int n,m;

    public :

        Integer()
        {
            n = 0;
            m = 0;
        }

        Integer(int x,int y)
        {

            n = x;
            m = y;
        }

        Integer(Integer &x)
        {

            n = x.n;
            m = x.m;
        }

        void show()
        {

            cout<<n<<endl;
            cout<<m<<endl;
        }

        friend Integer operator +(Integer &,Integer &);
};

Integer operator +(Integer &a,Integer &b)
{
    Integer t;

    t.n = a.n + b.n;
    t.m = a.m + b.m;
    return t;
}


int main()
{

    Integer t1(5,10);
    t1.show();


    Integer t2(5,10);
    t2.show();

    Integer t3;

    t3 = t1 + t2;
    t3.show();



    return 0;
}