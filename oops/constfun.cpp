#include<iostream>
using namespace std;


class Temp
{

    int n;
    mutable int mu;

    public :

        void set(int x,int y)
        {
            n = x;
            mu = y;
        }

        void show()
        {


            cout<<n<<" "<<mu;
        }
};

int main()
{


    Temp t;
    t.set(6,7);
    t.show();

    return 0;
}