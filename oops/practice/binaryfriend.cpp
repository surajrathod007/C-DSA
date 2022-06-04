#include<iostream>
using namespace std;

class Temp
{
    int n,m;

    public :

        Temp()
        {
            n = 0;
            m = 0;

        }

        Temp(int a,int b)
        {
            n = a;
            m = b;
        }

        Temp(Temp &x)
        {
            n = x.n;
            m = x.m;
        }

        void show()
        {
            cout<<n<<endl;
            cout<<m<<endl;
        }

        friend Temp operator +(Temp &a,Temp &b);
};

Temp operator +(Temp &a,Temp &b)
{
    Temp s1;

    s1.n = a.n + b.n;
    s1.m = a.m + b.m;

    return s1;
}


int main()
{

    Temp s1(5,5),s2(5,5),s3;

    s3 = s1 + s2;
    s3.show();

    return 0;
}