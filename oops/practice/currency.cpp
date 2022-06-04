#include<iostream>
using namespace std;

class Currency
{
    int rupee,paisa;

    public :

        Currency()
        {
            rupee = 0;
            paisa = 0;
        }

        Currency(int x,int y)
        {
            rupee = x;
            paisa = y;
        }

        void read()
        {
            cout<<"\nEnter rupee : "<<endl;
            cin>>rupee;
            cout<<"\nEnter paisa : "<<endl;
            cin>>paisa;
        }

        void show()
        {
            cout<<"\nRupees = "<<rupee<<endl;
            cout<<"\nPaisa = "<<paisa<<endl;
        }

        friend Currency add(Currency,Currency);
};

Currency add(Currency c1,Currency c2)
{
    int r;
    Currency s;

    s.rupee = c1.rupee + c2.rupee;
    s.paisa = c1.paisa + c2.paisa;

    if(s.paisa>=100)
    {
        r = s.paisa/100;

        s.paisa = s.paisa - (r*100);
        s.rupee = s.rupee + r;
    }

    return s;
}

int  main()
{

    Currency a(5,78),b,c;
    b.read();

    c = add(a,b);
    a.show();
    cout<<" Added by ";
    b.show();
    cout<<"\nIs equal to "<<endl;

    c.show();

    return 0;
}