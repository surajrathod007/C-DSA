#include<iostream>
using namespace std;

class Integer
{

    int n;

    public :

        Integer()
        {
            n =0;
        }

        Integer(int x)
        {
            n = x;
        }

        Integer(Integer &x)
        {
            n = x.n;
        }

        int operator ==(Integer a)
        {
            return (n == a.n ? 1 : 0);
        }

        int operator <(Integer a)
        {

            return (n < a.n ? 1 : 0);

        }

        int operator >(Integer a)
        {

            return (n > a.n ? 1 : 0);
            
        }

        int operator <=(Integer a)
        {

            return (n <= a.n ? 1 : 0);
            
        }

        int operator >=(Integer a)
        {

            return (n >= a.n ? 1 : 0);
            
        }

        int operator !=(Integer a)
        {

            return (n != a.n ? 1 : 0);
            
        }


};

int  main()
{

    Integer i1(20),i2(20),i3(30);

    if(i1==i2)
    {
        cout<<"Both are equal ";
    }

    if(i3>i1)
    {
        cout<<"i3 is greater "<<endl;
    }

    return 0;
}