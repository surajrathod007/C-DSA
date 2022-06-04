#include<iostream>
#include<string.h>

using namespace std;


class String
{

    public :

        char str[100];

        String()
        {


        }

        String(char x[])
        {

            strcpy(this->str,x);
        }

        String operator+(String &i)
        {

            String tmp;

            strcat(this->str,i.str);
            strcpy(tmp.str,this->str);

            return tmp;
        }
};




int main()
{


    String s1("Suraj"),s2("Rathod");
    String s3 = " ";

    s3 = s1 + s2;
    
    cout<<"Merg string is = "<<s3.str<<endl;




    return 0;
}