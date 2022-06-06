#include<iostream>
using namespace std;


bool sort(int arr[], int size)
{

    //base case
    if(size == 0)
    return true;

    if(size == 1)
    return true;

    if(arr[0]>arr[1])
    {
        return false;
    }else{

        bool ans = sort(arr+1,size-1);
        return ans;
    }

}

int main()
{


    int arr[5] = {1,5,3,4,5};

    bool ans = sort(arr,5);


    if(ans)
    {
        cout<<"Yes"<<endl;

    }else{
        cout<<"No"<<endl;
    }







    return 0;
}