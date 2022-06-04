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

         Integer(Integer &x)
         {

             n = x.n;
         }

         void show()
         {

             cout<<n<<" "<<endl;
         }

         Integer operator -();
         Integer operator ++(int);
         Integer operator ++();
};

Integer Integer::operator-()
{
    Integer t;

    t.n = -n;
    return t;
}

Integer Integer::operator++()
{
    Integer t;
    n++;
    t.n = n;
    return t;
}

Integer Integer::operator++(int)
{
    Integer t;

    t.n = n;
    n++;
    return t;
}


int main()
{

    Integer a(9),b;
    a.show();
    ++a;
    a.show();
    a++;
    a.show();



    b = -a;
    b.show();
    return 0;
}