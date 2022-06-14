#include<iostream>
using namespace std;

int main()
{


    int a[5] = {7,0,5,1,3};
    int b[5] = {1,2,1,3,4};

    int max = -1;

    int sum = 0;
    for(int i = 0; i<5; i++){

        
         sum +=(a[i]- b[i]);

        if(sum>max){
            max = sum;
        }

    }


    cout<<max<<endl;



    return 0;
}