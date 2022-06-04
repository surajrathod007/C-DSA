#include<iostream>
#include<string.h>
using namespace std;

class Vehical
{
    public :

        int c_no,v_no;
        Vehical()
        {
            c_no = v_no = 0;
        }

        Vehical(int c,int v)
        {
            c_no = c;
            v_no = v;
        }

        virtual void display()
        {
            cout<<"\nC_NO is = "<<c_no;
            cout<<"\nV_NO is = "<<v_no;
        }


};

class Scooter: public Vehical
{

    int w;
    char com[20];

    public :

        Scooter()
        {
            w = 0;
            com[0] = '\0'; 
        }

        Scooter(int ve,char c1[],int c,int v):Vehical(c,v)
        {
            w = ve;
            strcpy(com,c1);
        }

        void display()
        {
            cout<<"\nWHEEL = "<<w;
            cout<<"\nCompanay = "<<com;
            cout<<"\nC_No is = "<<c_no;
            cout<<"\nV_NO is = "<<v_no;
        }
};

class Car : public Vehical
{
    double p;
    char com[20];

    public :

            Car()
            {
                p =0;
                com[0] = '\0';
            }

            Car(double pr,char c1[],int c,int v): Vehical(c,v)
            {
                p = pr;
                strcpy(com,c1);
            }

            void display()
            {
                cout<<"\nPrice = "<<p;
                cout<<"\nCompanay = "<<com;
                cout<<"\nc_No = "<<c_no;
                cout<<"\nV_No = "<<v_no;
            }
};

int main()
{

    Scooter S(2,"Activa",4545,14);
    
}