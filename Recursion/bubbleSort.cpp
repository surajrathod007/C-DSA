#include<iostream>
using namespace std;


void sort(int *arr,int n)
{


    if(n==0 || n==1)
    {
        return ;
    }

    //now make the first largest to its right postion

    for(int i = 0; i<n-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }

    sort(arr,n-1); //now do for remaining array , 


}
int main()
{


    int arr[] = {6,2,6,3,55};

    sort(arr,5);


    for(int i =0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }





    return 0;
}