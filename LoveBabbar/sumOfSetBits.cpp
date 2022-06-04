#include<iostream>
using namespace std;

int main()
{

    int a,b,ans,count = 0;;


    cout<<"\nEnter first number : "<<endl;
    cin>>a;
    cout<<"\nEnter second number : "<<endl;
    cin>>b;

    while(a!=0)
    {
        if(a&1)
        {
            count++;
        }
        a=a>>1;
    }


    while(b!=0)
    {
        if(b&1)
        {
            count++;
        }

        b=b>>1;
    }

    cout<<"\nTotal set bit is = "<<count;



    return 0;
}