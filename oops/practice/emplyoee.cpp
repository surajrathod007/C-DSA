#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
    int eid;
    char name[10];
    int sal;

    public :

        void setdata()
        {
            cout<<"\nEnter name : "<<endl;
            cin>>name;
            cout<<"\nEnter id : "<<endl;
            cin>>eid;
            cout<<"\nEnter salary : "<<endl;
            cin>>sal;
        }

        void display()
        {
            cout<<"\nName = "<<name<<endl;
            cout<<"\nid = "<<eid<<endl;
            cout<<"\nSal = "<<sal<<endl;
        }
};


class Male : public Employee
{

};

class Female : public Employee
{

};

int main()
{

    Male m1;
    Female f1;

    m1.setdata();
    f1.setdata();

    m1.display();
    f1.display();




    return 0;
}