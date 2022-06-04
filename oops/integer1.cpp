#include<stdio.h>
#include<iostream>
using namespace std;

class Integer
{


    int n;
    public :

            Integer()
            {
                n= 0;
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

                cout<<n<<endl;
            }


            Integer operator+(Integer i)
            {

                Integer t;
                t.n = n + i.n;
                return t;
            }

            Integer operator-(Integer i)
            {

                
                Integer t;
                t.n = n - i.n;
                return t;

                
            }

            Integer operator/(Integer i)
            {

                
                Integer t;
                t.n = n / i.n;
                return t;
            }

            Integer operator*(Integer i)
            {
                
                Integer t;
                t.n = n  *i.n;
                return t;
            }


};

int main()
{

    Integer a(5),b(5);

    Integer sum,mul,div,min;

    sum = a + b;
    mul = a * b;
    div = a / b;
    min = a - b;

    sum.show();
    mul.show();
    div.show();
    min.show();




    return 0;
}