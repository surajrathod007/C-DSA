#include<iostream>
using namespace std;


class Temp
{

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

void Temp::operator-()
{
    n = -n;
    m = -m;
}

void Temp::show()
{

    cout<<n<<" "<<m<<endl;
}

int main()
{


    Temp t;
    cout<<"Before : "<<endl;
    t.show();

    -t;

    cout<<"After : "<<endl;
    t.show();



    return 0;
}