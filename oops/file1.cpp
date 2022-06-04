#include<fstream>
#include<iostream>
using namespace std;

int main()
{


    int a = 10;
    float b = 2.5;
    double c = 4.5;

    ofstream ofs("C:/Users/Asus/Desktop/OCPFILES/abc.txt");
    ofs<<a<<endl;
    ofs<<b<<endl;
    ofs<<c<<endl;

    ofs<<"Hello suraj "<<endl;
    ofs.close();

    ifstream ifs("C:/Users/Asus/Desktop/OCPFILES/abc.txt");

    int d;
    float e;
    double f;
    char str[30];

    ifs>>d;
    ifs>>e;
    ifs>>f;
    ifs>>str;


    cout<<"Data : ";
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<f<<endl;
    cout<<str<<endl;

}