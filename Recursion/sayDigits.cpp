#include<iostream>
using namespace std;


void say(int n, string arr[])
{

    if(n==0){

        cout<<" n is "<<n<<endl;
        return;
    }
    

    int digit = n%10;
    cout<<"Digit is : "<<digit<<endl;
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


        cout<<2%10<<endl;
        cout<<2/10<<endl;


    return 0;
}