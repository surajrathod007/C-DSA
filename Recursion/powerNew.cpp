#include<iostream>
using namespace std;


//for this problem, refer the notes okay ;)
int pow(int a,int b){

    //if power is 0
    if(b==0)
        return 1;

    //if power is 1
    if(b==1)
        return a;

    int ans = pow(a,b/2);

    //if b is even , then do this
    if(b%2==0){
        return ans*ans;
    }else{

        return a * ans * ans;
    }
}


int main()
{


    int a = 2,b = 4;

    int ans = pow(a,b);

    cout<<ans<<endl;
    




    return 0;
}