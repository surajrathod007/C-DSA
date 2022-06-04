#include<iostream>
using namespace std;


class Temp1
{

    public :

        void show()
        {

            cout<<"Good morning Temp1"<<endl;
        }
};

class Temp2 : public Temp1
{

    public :

        void show()
        {

            cout<<"Good morning Temp2"<<endl;
        }
};



int main()
{

    Temp2 t;
    t.show();

    Temp1 t1;
    t1.show();
    return 0;
}