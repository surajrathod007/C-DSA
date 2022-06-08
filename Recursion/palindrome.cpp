#include<iostream>
using namespace std;


bool pal(string str, int i , int j){


    //Base Case
    if(i>j){
        return true;
    }

    //If Not Equal Then return false
    if(str[i] != str[j]){
        return false;
    }else{
        pal(str,i+1,j-1);
    }

    

}

int main()
{

    string str = "suraj";

    bool ans = pal(str,0,str.length()-1);

    if(ans){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome"<<endl;
    }




    return 0;
}