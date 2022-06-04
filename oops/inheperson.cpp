#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

class Person
{

    int no;
    char name[10];

    public :

        void set(int n,char nm[]){

            no = n;
            strcpy(name,nm);
        }

        void show()
        {

            cout<<"Name "<<name<<endl;
            cout<<"No "<<no<<endl;
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
            cout<<"Surname "<<sname<<endl;
        }
};


class Result : public Student
{


    int m1,m2,m3;

    public :

        void set(int n,char nm[],char snm[],int a,int b,int c)
        {
            Student::set(n,nm,snm);

            m1 = a;
            m2 = b;
            m3 = c;

        }

        void show()
        {

            Student::show();
            cout<<"M1 "<<m1<<endl;
            cout<<"M2 "<<m2<<endl;
            cout<<"M3 "<<m3<<endl;
        }

};

int main()
{


    Result r;
    r.set(15,"suraj","rathod",5,7,9);
    r.show();


    return 0;


   
}

