#include<iostream>
using namespace std;

class Integer
{
    public :

        int n;

        Integer()
        {
            n = 0;
        }

        Integer(int x)
        {
            n = x;
        }

        Integer(Integer &m)
        {
            n= m.n;
        }

        void show()
        {
            cout<<"n = "<<n<<endl;
        }

        Integer operator -();
        Integer operator ++(int);
        Integer operator ++();
};

Integer Integer :: operator-()
{
    Integer tmp;
    tmp.n = -n;
    return tmp;
}

Integer Integer :: operator++()
{
    Integer tmp;
    n++;
    tmp.n = n;
    return tmp;
}

Integer Integer :: operator++(int)
{
    Integer tmp;
    tmp.n = n;
    n++;
    return tmp;
}

int main()
{

    Integer a(9),b;
    
}