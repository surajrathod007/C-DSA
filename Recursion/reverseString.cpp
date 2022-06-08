#include<iostream>
using namespace std;



void revNew(string& str,int i){

    //cout<<str<<endl;

    if(i>(str.length()-i-1)){
        return ;
    }

    swap(str[i],str[str.length()-i-1]);
    i++;
    revNew(str,i);
}

void rev(string& str,int i,int j){


    if(i>j)
    return;

    swap(str[i],str[j]);
    i++;
    j--;
    rev(str,i,j);
}

int main()
{

    string str = "Hello";

    //rev(str,0,str.length()-1);

    revNew(str,0);

    cout<<str<<endl;




    return 0;
}