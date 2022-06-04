#include<stdio.h>
#include<conio.h>

int binary(int,int,int[],int);

void main()
{
    int i,res,mid,low=1,key,n,high,arr[50];

    printf("\nEnter the size of array : ");
    scanf("%d",&n);

    high = n;

    printf("\nEnter elements in sorted order : ");

    for(i = 1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nEnter number to be searched : ");
    scanf("%d",&key);

    res = binary(low,high,arr,key);

    if(res==0)
    {
        printf("\nKey not found ");
    }else{

        printf("\nNumber %d is found on location %d",key,res);
    }
}

int binary(int low,int high,int arr[],int key)
{
    int loc,mid;

    if(low>high)
    {
        loc = 0;
        return(loc);
    }else{

        mid = (low+high)/2;
    }

    if(key<arr[mid])
    {
        high = mid-1;
        loc = binary(low,high,arr,key);
    }else if(key>arr[mid])
    {
        low = mid+1;
        loc = binary(low,high,arr,key);
    }else if(key==arr[mid])
    {
        loc = arr[mid];
        return loc;
    }
}