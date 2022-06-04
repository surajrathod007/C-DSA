#include<iostream>
using namespace std;


class Temp1
{

    public :

    //precced with virtual or do typecasting

        void show()
        {

            cout<<"From class temp1 "<<endl;
        }
};

class Temp2 : public Temp1
{

    public :  

        void show()
        {
        cout<<"From class temp2"<<endl;

        }
};

int main()
{


    Temp1 t;
    Temp2 t1;
    Temp1 *tp;
    tp = &t1;

   // tp->show();  //it show from temp1 if you want to do temp2 then ypu can do typecasting brush

  ((Temp2*)tp)->show(); //it will show temp 2




/*
    Temp2 t2;
    Temp1 *t;

    t = &t2;
    t->show();
*/

    return 0;
}