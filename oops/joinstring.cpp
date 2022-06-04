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
/*
        String(String &s)
        {
            str = new char[strlen(s.str)];
            strcpy(str,s.str);
        }
*/
        String operator +(String s)
        {

            String s1;

            s1.str = new char[strlen(s.str)+strlen(str)+1];
            //strcpy(s1.str,str);
            //strcat(s1.str,s.str);

            strcat(str,s.str);
            strcpy(s1.str,str);
            return s1;
        }

        void show()
        {
            cout<<str;
        }


};

int main()
{

    String s1("Hello"),s2("World");
    String s3 = s1 + " ";
    s3 = s3 + s2;

    cout<<"String 3 is : "<<endl;
    s3.show();


    return 0;
}