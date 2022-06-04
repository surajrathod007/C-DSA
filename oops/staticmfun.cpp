#include<iostream>
using namespace std;


class Item
{
    int no;
    static int count;

    public :

        void set(int a)
        {
            no = a;
            count++;
        }


        void show()
        {

            cout<<"Count = "<<count<<endl;
        }
};


int Item::count;

int main()
{

    Item x,y,z;
    x.show();
    y.show();
    z.show();

    x.set(10);
    y.set(20);
    z.set(30);

    cout<<"After ..............."<<endl;

    x.show();
    y.show();
    z.show();





    return 0;
}