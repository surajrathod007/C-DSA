#include<iostream>
using namespace std;



int fact(int n)
{
    //Base Case
    if(n==0)
    return 1;

    //recursive relation
    return n * fact(n-1);
}



int main()
{

    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;

    int f = fact(n);

    cout<<"Factorial is "<<f<<endl;




    return 0;
}