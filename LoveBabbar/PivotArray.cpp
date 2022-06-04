#include<iostream>
using namespace std;

int pivotEl(int arr[],int size)
{

    int s = 0;
    int e = size-1;
    int mid = s+ (e-s)/2;

    while(s<e)
    {

        if(arr[mid]>=arr[0])
        {
            s = mid + 1;

        }else{

            e = mid;
        }

        mid = s+(e-s)/2;
    }

    return s;
}


int binarySearch(int arr[],int size,int key,int s,int e)
{
    int start = s;
    int end = e;
    int ans = -1;
    int mid = start + (end-start)/2;


    while(start<end)
    {

        if(arr[mid]==key)
        {
            return mid;
        }

        if(key<arr[mid])
        {
            end = mid -1;
        }

        if(key>arr[mid])
        {
            start = mid + 1;
        }

        mid = start + (end-start)/2;

    }
}
int main()
{

    int arr[5] = {4,5,1,2,3};

    int position = 0;
    int pivot = pivotEl(arr,5);
    int key = 5;
    cout<<"The pivot element is "<<arr[pivot]<<endl;

    if(key<=arr[4] && key>=arr[pivot])
    {
        position = binarySearch(arr,4,key,pivot,4);
    }else{

        position = binarySearch(arr,4,key,0,pivot-1);
    }


    cout<<"Key is found at "<<position<<endl;


    return 0;
}