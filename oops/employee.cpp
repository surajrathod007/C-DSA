#include<iostream>
using namespace std;

class Employee
{
    int id;
    char nm[20];
    public :

        void read()
        {
            cout<<"Enter id : "<<endl;
            cin>>id;

            cout<<"Enter name : "<<endl;
            cin>>nm;
        }

        void display()
        {
            cout<<"\n ID = "<<id;
            cout<<"\n NAME = "<<nm;
        }
};

class M_E : public Employee
{
    int s,sal;

    public :

            M_E()
            {
                sal = 1;
            }
            void read1()
            {

                read();

                cout<<"\nEnter scale of salary in day : ";
                cin>>s;

            }

            void compute(int h)
            {
                int day;
                day = h/8;

                int h1;
                h1 = h%8;
                sal = day*s;
                sal = sal+((s/8)*h1);
            }

            void show()
            {
                display();
                cout<<"\nSalary : "<<sal;
            }
};

class F_E : public Employee
{
    int s,sal;

    public:

            F_E()
            {
                sal = 1;
            }

            void read1()
            {
                read();

                cout<<"Enter scale of salary in hours = "<<endl;
                cin>>s;
                cout<<"\n";
            }


            void compute(int h)
            {
                int day;

                if(h<=160)
                {
                    sal = h*s;
                }else{
                    sal = 160*s;
                }
            }

            void show()
            {

                display();
                cout<<"\nSalaary = "<<sal;
            }
};


int main()
{

    int b,g,m_h[10],f_h[5],i;
    M_E m[10];
    F_E f[5];

    cout<<"\nEnter male employee = ";
    cin>>b;
    cout<<"\nEnter female employee = ";
    cin>>g;

    cout<<"\n ***************Information of male ***********\n";

    for(i =0; i<b; i++)
    {
        m[i].read1();
        cout<<"\nEnter working hourse = ";
        cin>>m_h[i];
    }

    cout<<"\n ***************Information of female ***********\n";

    for(i =0; i<g; i++)
    {
        f[i].read1();
        cout<<"\nEnter working hours = ";
        cin>>f_h[i];
    }

    for(i =0; i<b; i++)
    {
        m[i].compute(m_h[i]);
    }

    for(i =0; i<g; i++)
    {
        f[i].compute(f_h[i]);
    }


    cout<<"\n ********** Salary of female **********\n";

    for(i =0; i<g; i++)
    {
        f[i].show();
        cout<<"\n";
    }

    cout<<"\n ********** Salary of female **********\n";

    for(i =0; i<b; i++)
    {
        m[i].show();
        cout<<"\n";
    }
}