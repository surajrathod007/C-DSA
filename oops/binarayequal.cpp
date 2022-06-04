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

        Integer(Integer &x)
        {

            n = x.n;
        }

        void show()
        {
            cout<<n<<" "<<endl;
        }

        int operator==(Integer a)
        {

            Integer tmp;

            return (n == a.n?1:0);

        }

        int operator!=(Integer a)
        {

             return (n != a.n?1:0);
        }

        int operator<(Integer a)
        {
            return (n < a.n?1:0);
        }

        int operator>(Integer a)
        {

            return (n > a.n?1:0);
        }

        int operator>=(Integer a)
        {

             return (n >= a.n?1:0);
        }

        int operator<=(Integer a)
        {

           return (n <= a.n?1:0);
        }


};


int main()
{

    Integer a1(30),a2(30),a3(40);

    if(a1==a2)
    {
        cout<<"\n a1 == a2"<<endl;
    }

   





    return 0;
}