#include<stdio.h>
#include<conio.h>

void main(){

    int n =5;
    int arr[5] = {1,2,3,4,9};
    int big = 1;
    int end = 5;
    int key = 9;
    int mid = arr[0]+arr[n-1]/2;

    for(int i = 0; i<5; i++){

            if(key<arr[mid]){
                end = mid - 1;
            }else{
                big = mid + 1;
            }


    }
}