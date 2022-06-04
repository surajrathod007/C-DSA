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

        String(char str[])
        {

            strcpy(this->str,str);
        }

        String operator +(String & s2)
        {

            String tmp;

            strcat(this->str,s2.str);
            strcpy(tmp.str,this->str);


            return tmp;
        }
};


int main()
{

    String s1("Suraj");
    String s2("Rathod");
    String s3;

    s3 = s1 + s2;

    cout<<s3.str<<endl;





    return 0;
}