#include<iostream>
using namespace std;


class Number2;
class Number1
{

    public :

        void set(Number2 &,int);
};

class Number2
{

    int x;
    public :

        friend void set(Number2 &,int);
        int get();
};

int Number2::get()
{
    return x;
}


void set(Number2 &a,int b)
{

    a.x = b;
}

int main()
{

    Number1 n1;
    Number2 n2;

    set(n2,5);
    cout<<n2.get()<<endl;





    return 0;
}