#include<iostream>
using namespace std;

class Bank
{

    int type;
    double bal;
    char name[10];
    int in;

    public:

        int ac;

        void create();
        void withdraw();
        void display();
        void deposit();
        void intrest();

};

void Bank::create()
{

    int b;
    char a;
    cout<<"\nEnter account number : ";
    cin>>ac;
    cout<<"\nEnter name = ";
    cin>>name;

    abc:
    cout<<"\n1.Current (>=5000) \n2.Saving (>=2500)\n";
    cout<<"\nEnter your Type of account : ";
    cin>>type;
    cout<<"\nEnter a starting balanece : ";
    cin>>b;

    if(type==1 && b>=5000)
    {
        bal = b;

    }else if(type==2 && b>=2500)
    {
        bal = b;
    }else{

        cout<<"\nPlease enter sufficent balance"<<endl;
        cout<<"\nTry again ? (Y/N) :  "<<endl;
        cin>>a;
        if(a=='y' || a=='Y')
        {
            goto abc;
        }
    }
}

void Bank::withdraw()
{

    int v,t;
    cout<<"\nEnter amount of withdraw : ";
    cin>>v;
    t = type;
    if(t==1)
    {
        if((bal-v)>200)
        {
            bal = bal-v;
        }else{

            cout<<"\nYou dont have enogh balance : "<<endl;
        }
    }else if(t==2)
    {

        if((bal-v)>5000)
        {
            bal = bal-v;
        }else{
            cout<<"\nYou dont have enogh balanec dude "<<endl;
        }
    }else{

        if((bal-v)>2500)
        {
            bal = bal-v;

        }else{

            cout<<"\nYou dont have balance dude "<<endl;
        }
    }
}

void Bank::display()
{

    cout<<"\nA/C No \tName \tBalance \tIntrest\n";
    cout<<ac<<"\t"<<name<<"\t"<<bal<<"\t"<<in<<"\n";
}

void Bank::deposit()
{
    int v;
    cout<<"\nEnter amount of deposite : "<<endl;
    cin>>v;

    bal = bal+v;
}

void Bank::intrest()
{
    if(type==1)
    {
        in = (bal*8)/100;
    }else if(type==2)
    {
        in = (bal*10)/100;
    }

    cout<<"\nIntrest is = "<<in<<endl;


}

int main()
{

    int ch,a,k;
    static int i;
    Bank b[3];
    while(ch!=6)
    {
        cout<<"\n1.Create \n2.Display \n3.Deposit \n4.Withdraw \n5.Intrest \n6.Exit";
        cout<<"\nEnter your choice : "<<endl;
        cin>>ch;


        switch (ch)
        {
        case 1:
                b[i].create();
                i++;
            break;

        case 2:
                cout<<"\nEnter account number = ";
                cin>>a;

                for(int j = 0; j<i; j++)
                {
                    k =0;
                    if(b[j].ac == a)
                    {
                        k=1;
                        b[j].display();
                        break;
                    }

                    
                }

                if(k!=1)
                {
                    cout<<"\nYou dont have account bro ! "<<endl;
                }

                break;

        case 3 :

                cout<<"\nEnter your ac number = ";
                cin>>a;

                for(int j = 0;j<i; j++)
                {
                    k=0;

                    if(b[j].ac == a)
                    {
                        k=1;
                        b[j].deposit();
                        break;
                    }

                    
                }

                if(k!=1)
                {
                    cout<<"\nYou dont have account bro ! "<<endl;
                }

                break;

        case 4 : 

                cout<<"\nEnter your account number : ";
                cin>>a;

                for(int j =0; j<i;j++)
                {
                    k =0;

                    if(b[j].ac==a)
                    {
                        k = 1;
                        b[j].withdraw();
                        break;
                    }

                    
                }

                if(k!=1)
                {
                    cout<<"\nYou dont have account bro ! "<<endl;
                }

                break;

        case 5 :

                cout<<"\nEnter ac number : "<<endl;
                cin>>a;

                for(int j = 0; j<i; j++)
                {
                    k =0;

                    if(b[j].ac==a)
                    {
                        k=1;
                        b[j].intrest();
                        break;
                    }

                    
                }

                if(k!=1)
                {
                    cout<<"\nYou dont have account bro ! "<<endl;
                }

                break;

        case 6:

                exit(0);

        default :
                    cout<<"\nEnter correcr chpice";
                
        
        
            break;
        }
    }

    return 0;
}