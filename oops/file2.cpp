#include<fstream>
#include<iostream>
using namespace std;

int main()
{


    char country[20];
    char capital[20];
    ofstream ofs("C:/Users/Asus/Desktop/OCPFILES/country.txt");

    ofs<<"India"<<endl;
    ofs<<"Pakistan"<<endl;

    ofs.close();

    ofstream ofs2("C:/Users/Asus/Desktop/OCPFILES/capital.txt");
    ofs2<<"Delhi"<<endl;
    ofs2<<"Karachi"<<endl;

    ofs2.close();

    ifstream ifs("C:/Users/Asus/Desktop/OCPFILES/country.txt");
    ifstream ifs2("C:/Users/Asus/Desktop/OCPFILES/capital.txt");


    while(ifs && ifs2)
    {

        ifs.getline(country,20);
        ifs2.getline(capital,20);

        cout<<"\n Capital of"<<country<<" is = "<<capital<<endl;
    }

    ifs.close();
    ifs2.close();





    return 0;
}