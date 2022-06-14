#include<iostream>
using namespace std;



int main()
{
    int arr[6] = {1,2,3,4,2,5};
    int set = 3;
    int e = 2;

    int count = 0;
    for(int i = 0; i<6; i+=set){

        bool found = false;

        for(int j = i ; j<i+set; j++){
            if(arr[j]==e){
                found = true;
            }
        }

        if(found){
            count++;
            continue;
        }else{

            cout<<"element not found"<<endl;
        }
    }

        if(count == 2){
            cout<<"element is ther";
        }

    return 0;
}