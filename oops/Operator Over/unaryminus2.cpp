#include<iostream>
using namespace std;

class Temp
{

    private :

            int n;
            int m;

    public :

            Temp operator -();
            Temp()
            {
                n = 5;
                m = 6;
            }

            void show();
};

void Temp::show()
{

    cout<<" "<<n<<" "<<m;
}

Temp Temp::operator-()
{
    Temp t;

    t.n = -n;
    t.m = -m;

    return t;
    
}


int main()
{

    Temp t1,t2;
    
    t1.show();
    t2.show();

    t2 = -t1;
    t1.show();
    t2.show();

    return 0;
}
