#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

template<class T1,class T2>

class ABC
{

    T1 item[20];
    T2 price;

    public : 

        void getdata()
        {
            cout<<"Enter item name : "<<endl;
            cin>>item;
            cout<<"Enter price : "<<endl;
            cin>>price;
        }

        void putdata()
        {

            cout<<item<<" "<<price<<endl;

        }
};

int main()
{

    ABC <char,int> t[3];

    for(int i = 0; i<3; i++)
    {

        t[i].getdata();

    }

    for(int i = 0; i<3; i++)
    {

        t[i].putdata();

    }

    return 0;
}