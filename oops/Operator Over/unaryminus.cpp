#include<iostream>
using namespace std;

class Temp
{

    private :

            int n;
            int m;

    public :

            void operator -();
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

void Temp::operator-()
{
    n= -n;
    m = -m;
}


int main()
{

    Temp t;
    cout<<"Befroe : "<<endl;
    t.show();

    cout<<"After : "<<endl;
    -t;
    t.show();

    return 0;
}
