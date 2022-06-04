#include<iostream>
#include<string.h>
using namespace std;

template <class T>
void max(T[]);


int main()
{

    int a[10];

    cout<<"Enter 5 value of array : "<<endl;

    for(int i =0; i<5; i++)
    {
        cin>>a[i];
    }

    max(a);



    return 0;
}

template <class T>
void max(T a[])
{

    int m = a[0];

    for(int i = 1; i<5; i++)
    {

        if(m<a[i])
        {
            m = a[i];
        }
    }


    cout<<"\nThe maxiu is = "<<m<<endl;
}

