#include<iostream>
using namespace std;


class Number2;
class Number1
{

   
    public :

     int a;
    int b;


        void show();

        friend class Number2;
};

class Number2
{

    public:
    void set(Number1 &,int,int);
    //void set2(Number1 &,int);
};

void Number2::set(Number1 &i,int b,int c)
{
    i.a = b;
    i.b = c;
}



void Number1::show()
{

    cout<<a<<" "<<b<<endl;
}

int main()
{

    Number1 t1;
    Number2 t2;

    t2.set(t1,5,15);
    
    t1.show();

    




    return 0;
}