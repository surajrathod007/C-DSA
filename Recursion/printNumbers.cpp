#include<iostream>
using namespace std;



void print(int n)
{

    //Base Condition
    if(n==0)
    return;

    //Proccesing
    cout<<n<<" ";

    //Recursive Relation
    print(n-1);



    //Tail Recursion
}

void printRev(int n)
{


    //Base Condition
    if(n==0)
    return;

    //Recursive Relation
    printRev(n-1);

    //Proccesing
    cout<<n<<" ";

    //Head Recusrion Example
}
int main()
{


    int n;
    cout<<"enter the number "<<endl;
    cin>>n;

    print(n);

    cout<<endl;
    cout<<endl;
    printRev(n);



    return 0;
}