#include<iostream>
using namespace std;

class Item
{

    int no;
    static int count;

    public :

         void set()
         {
             no = ++count;
         }
         void show()
         {

             cout<<"In object no = "<<no<<endl;
         }

         static void showCount()
         {

             cout<<"In count = "<<count<<endl;
         }
};


int Item::count;



int main()
{

    Item x,y;
    x.set();
    y.set();

    Item::showCount();

    Item z;
    z.set();

    Item::showCount();

    x.show();
    y.show();
    z.show();



    return 0;
}