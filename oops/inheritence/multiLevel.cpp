#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>

using namespace std;

class Person
{

    int no;
    char name[10];

    public :

        void set(int n,char nm[])
        {
            no = n;
            strcpy(name,nm);
            
        }

        void show()
        {

            cout<<"No ="<<no<<endl;
            cout<<"Name ="<<name<<endl;
        }
};

class Student : public Person
{
    char sname[10];
    public :

        void set(int n,char nm[],char snm[])
        {
            Person::set(n,nm);
            strcpy(sname,snm);
        }

        void show()
        {

            Person::show();
            cout<<"Surname ="<<sname<<endl;
        }
};

class Result : public Student
{

    int m1,m2,m3;

    public :

        void set(int n,char nm[],char sname[],int a,int b,int c)
        {
            Student::set(n,nm,sname);

            m1 = a;
            m2 = b;
            m3 = c;

        }

        void show()
        {
            Student::show();

            cout<<"M1 = "<<m1<<endl;
            cout<<"M2 = "<<m2<<endl;
            cout<<"M3 = "<<m3<<endl;
            
        }
};


int main(){


    Result s;
    s.set(13,"Suraj","Rathod",12,13,14);
    s.show();



    return 0;
}