#include<string.h>
#include<stdio.h>
#include<conio.h>

int item;
int arr[50];

void binarysearch(int arr[],int beg,int end)
{
    int mid = (beg+end)/2;

    while((beg<end) && arr[mid]!= item){

        if(item<arr[mid])
        {
            end = mid-1;
        }else{
            beg = mid +1;
        }

        mid = (beg+end)/2;

    }

    if(item==arr[mid])
    {
        printf("\n%d is found on location : %d",item,arr[mid]);
    }else{
        printf("\nItem not founf ");
    }
}

void main()
{

    int n,i;

    printf("\nEnter size : ");
    scanf("%d",&n);

    printf("\nEnter elements ");
    for(i =0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nEnter item to be searched : ");
    scanf("%d",&item);

    binarysearch(arr,0,n);


}