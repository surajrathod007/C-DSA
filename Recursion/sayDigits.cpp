#include<iostream>
using namespace std;


void say(int n, string arr[])
{

    if(n==0)
    return;

    int digit = n%10;
    n = n/10;
    say(n,arr);
    cout<<arr[digit]<<" ";
}

int main()
{

    string arr[] = {"zero","one","two","three","four","five","six","seven","eight","nine",};

    int n;
    cout<<"Enter Your Number : "<<endl;
    cin>>n;

    say(n,arr);



    return 0;
}