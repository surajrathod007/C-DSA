#include<iostream>
using namespace std;


class Integer
{

    int n;

    public : 

        Integer()
        {
            n = 0;
        }

        Integer(int x)
        {
            n = x;
        }

        Integer(Integer &i)
        {
            n = i.n;
        }

        void show()
        {
            cout<<" "<<n<<endl;
        }

        Integer operator +(Integer i)
        {
            Integer s1;

            s1.n = n + i.n;
            return s1;
        }
};

int main()
{
    Integer a(30),b(30),sum;

    sum = a + b;

    sum.show();

    return 0;
}