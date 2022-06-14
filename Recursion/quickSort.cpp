#include<iostream>
using namespace std;



int partition(int arr[],int s,int e){

    int pivot = arr[s];
    int count = 0;

    for(int i = s+1; i<=e; i++){
        if(arr[i]<=pivot){
            count++;
        }
    }

    //place pivot at right position
    int pivotIndex = s+count;

    swap(arr[pivotIndex],arr[s]);

    int i = s, j= e;

    while(i<pivotIndex && pivotIndex>j){

        while(arr[i]<=pivot){
            i++;
        }

        while(arr[j]>pivot){
            j--;
        }

        if(i<pivotIndex && j>pivotIndex)
        swap(arr[i++],arr[j--]);

        //or do i++ ,j-- here ;)
    }

    return pivotIndex;


}
void quickSort(int *arr,int s,int e){

    //base case
    if(s>=e){
        return;
    }

    int pivot = partition(arr,s,e);

    //sort left of pivot

    quickSort(arr,s,pivot-1);

    //sort right part of pivot

    quickSort(arr,pivot+1,e);

}


int main()
{


    int arr[5] = {7,6,5,4,3};


    quickSort(arr,0,4);

    for(int i =0; i<5; i++){
        cout<<arr[i]<<" ";
    }







    return 0;
}