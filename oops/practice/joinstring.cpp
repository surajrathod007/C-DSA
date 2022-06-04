#include<iostream>
#include<string.h>
using namespace std;

class String
{

    char *str;

    public :

        String()
        {
            str = NULL;
        }

        String(char s[])
        {

            str = new char[strlen(s)];
            strcpy(str,s);
        }

        void show()
        {
            cout<<str;
        }

        String operator +(String s)
        {
            String s1;

            s1.str = new char[strlen(str)+strlen(s.str)+1];

            strcat(str,s.str);
            strcpy(s1.str,str);

            return s1;
        }
};


int main()
{

    String s1("Hellow "),s2("Suraj"),s3;

    s3 = s1 + s2;

    s3.show();
}