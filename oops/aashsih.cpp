#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

class temp1
{
  
    public:    
        int a,b;
       void set()
       {
         a=10;
         b=15;
       }
       void get()
       {
         cout<<"a="<<a<<endl;
         cout<<"b="<<b<<endl;
       }
       
       class temp2
       {
        
          public:
              int c;
            void read()
            {
              c=20;
            }
            
            void show()
            {
              cout<<"c="<<c<<endl;
            }
       };
       
};


int main()
{
    //clrscr();
    temp1 t1;
    temp1 :: temp2 t2;
    t1.set();
    t1.get();
    t2.read();
    t2.show();
    
    return 0;
    //getch();
    
}