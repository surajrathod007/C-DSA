#include<iostream>
using namespace std;


int main()
{


    float eatBanana, eatPenut = 0.0;
    int n = 20,k = 3, j= 3, m = 13, p = 12;

    eatBanana = m/k;
    eatPenut = p/j;

    m = m%k;
    p = p%k;

    int total = eatBanana + eatPenut;

    if(m!=0 || n!=0)
        n = n-1;


    cout<<"Number of  Monkeys left on the tree: "<<n-total<<endl;





    return 0;
}