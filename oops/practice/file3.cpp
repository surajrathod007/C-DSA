#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{

    char country[10];
    char capital[10];

    ofstream ofs("C:/Users/Asus/Desktop/OCPFILES/country1.txt");

    ofs<<"India"<<endl;
    ofs<<"Pakistan"<<endl;

    ofs.close();

    ofstream ofs2("C:/Users/Asus/Desktop/OCPFILES/capital1.txt");

    ofs2<<"Delhei"<<endl;
    ofs2<<"Karachi"<<endl;

    ofs2.close();

    ifstream ifs1("C:/Users/Asus/Desktop/OCPFILES/country1.txt");
    ifstream ifs2("C:/Users/Asus/Desktop/OCPFILES/capital1.txt");

    while(ifs1 && ifs2)
    {
        ifs1.getline(country,10);
        ifs2.getline(capital,10);

        cout<<"\n Capital of"<<country<<" is = "<<capital<<endl;
    }

    ifs1.close();
    ifs2.close();





    return 0;
}