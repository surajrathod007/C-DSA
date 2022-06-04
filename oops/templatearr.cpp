#include<iostream>
#include<string.h>
using namespace std;


template <class T1,class T2>
class Abc
{

    T1 item[20];
    T2 price;

    public :

        void get()
        {
            cout<<"\nEnter item name : "<<endl;
            cin>>item;
            cout<<"\nEnter item price : "<<endl;
            cin>>price;
        }

        void display()
        {

            cout<<"\n item = "<<item<<" price = "<<price<<endl;
        }
};

int  main()
{

    Abc <char,int> a[5];

    for(int i =0; i<5; i++)
    {
        
        a[i].get();
    }

    cout<<"\nName\tPrice\n\n";

    for(int i =0; i<5; i++)
    {
        a[i].display();
    }





    return 0;
}