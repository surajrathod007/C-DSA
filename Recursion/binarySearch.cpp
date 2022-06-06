#include<iostream>
using namespace std;


bool binary(int arr[], int s, int e,int key)
{

    if(s>e)
    {
        return false;
    }

    int mid = s + (e-s)/2;

    if(arr[mid] == key)
    {
        return true;
    }

    if(arr[mid]<key)
    {
        binary(arr,mid+1,e,key);
    }else{
        binary(arr,s,mid-1,key);
    }
}

int main()
{


    int arr[5] = {1,2,3,4,5};
    int key = 3;

    bool ans = binary(arr,0,5,key);

    if(ans)
    {
        cout<<"Found"<<endl;
    }





    return 0;
}