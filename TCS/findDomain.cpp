#include<iostream>
using namespace std;

int main()
{


    string email = "surajsinhrathod75@gmail.com";


    int k = 0;
    for(int i = 0; i<email.length()-1; i++)
    {
        if(email[i] == '@'){

            cout<<"The domain name is : ";
            
            for(int j = i+1; j<email.length(); j++){
                cout<<email[j];
            }
        }
    }






    return 0;
}