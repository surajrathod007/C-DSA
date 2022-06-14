#include<iostream>
using namespace std;


void merge(int *arr,int s,int e){


    int mid = (s+e)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //now copy values

    int mainIndex = s;

    for(int i =0; i<len1; i++)
    {
        first[i] = arr[mainIndex++];
    }

    mainIndex = mid+1;
    for(int i = 0; i<len2; i++)
    {
        second[i] = arr[mainIndex++];
    }

    //merge two sorted array

    int index1 = 0;
    int index2 = 0;

    mainIndex = s;

    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            //arr[mainIndex++] = first[index1++];

            arr[mainIndex] = first[index1];
            mainIndex++;
            index1++;
        }else{
            arr[mainIndex++] = second[index2++];
        }
    }

    while(index1<len1){
        arr[mainIndex++] = first[index1++];
    }

    while(index2<len2)
    {
        arr[mainIndex++] = second[index2++];
    }

}


void mergeSort(int *arr,int s,int e){

    if(s>=e)
    {
        return;
    }

    //mid element
    int mid = (s+e)/2;

    //sort left side of array
    mergeSort(arr,s,mid);

    //sort right side of array
    mergeSort(arr,mid+1,e);

    //now merge
    merge(arr,s,e);
}

int main()
{



    int arr[5] = {8,5,4,3,2};

    int n = 5;

    mergeSort(arr,0,n-1);


    for(int i =0; i<5; i++){
        cout<<arr[i]<<" ";
    }









    return 0;
}