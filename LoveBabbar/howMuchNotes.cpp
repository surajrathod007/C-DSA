#include<iostream>
using namespace std;

int main()
{


    int amount = 0;
    int rs100,rs50,rs20,rs10,rs1;
    cout<<"\nEnter your amount"<<endl;
    cin>>amount;
    switch(true)
    {
        case 1 : rs100 = amount/100;
                amount = amount%100;
                cout<<rs100<<" Notes of 100"<<endl;

        case 2 : rs50 = amount/50;
                amount = amount%50;
                cout<<rs50<<" Notes of 50"<<endl;

        case 3 : rs20 = amount/20;
                amount = amount%20;
                cout<<rs20<<" Notes of 20"<<endl;

        case 4 : rs10 = amount/10;
                amount = amount%10;
                cout<<rs10<<" Notes of 10 "<<endl;

        case 5 : rs1 = amount/1;
                amount= amount%1;
                cout<<rs1<<" Notes of 1 "<<endl;




    }



    return 0;
}