#include<iostream>
using namespace std;



class Temp
{


    int n;
    int m;

    public : 

        Temp()
        {

            n = 5; 
            m = 6;
        }

        void show()
        {


            cout<<n<<" "<<m<<endl;
        }

        friend void operator -(Temp &);
};


void operator -(Temp &a)
{

    a.n = -a.n;
    a.m = -a.m;
}

int main()
{

    Temp t;
    t.show();

    -t;
    t.show();



    return 0;
}