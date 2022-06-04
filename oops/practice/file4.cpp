#include<iostream>
#include<fstream>
using namespace std;

int main()
{

    char a = 'A';
    char c[10] = "suraj";

    char b;
    char d[10];

    ofstream ofs("C:/Users/Asus/Desktop/OCPFILES/xyz.txt");

    ofs.put(a);
    ofs<<c;

    ofs.close();

    ifstream ifs("C:/Users/Asus/Desktop/OCPFILES/xyz.txt");

    ifs.get(b);
    ifs.getline(d,10);

    cout<<b<<endl;
    cout<<d;

    ifs.close();
    






    return 0;
}