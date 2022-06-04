#include<iostream>
using namespace std;


class Temp
{

    int n,m;

    public :

        Temp()
        {

            n = 5;
            m = 10;

        }

        Temp(int a,int b)
        {
            n = a;
            m = b;
        }

        void show()
        {

            cout<<n<<" "<<m<<endl;
        }

        Temp operator +(Temp &);
};

Temp Temp::operator+(Temp &t)
{

    Temp a;
    a.n = n + t.n;
    a.m = m + t.m;

    return a;
}

int main()
{


    Temp t1(8,9);
    Temp t2(8,9);

    Temp t3;
    t3 = t1 + t2;

    t3.show();



    return 0;
}