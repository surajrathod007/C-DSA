#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

void merge(int arr[],int l,int mid,int r)
{

    int i,left,right,temp,j,k,b[50];

    for(i = l; i<r; i++)
    {
        b[i] = arr[i];
    }

    i = l;
    j = mid+1;
    k = l;

    while((i<=mid) && (j<=r))
    {

        if(b[i]<b[j])
        {
            arr[k] = b[i];
            i++;
            k++;
        }else{
            arr[k] = b[j];
            j++;
            k++;
        }


    }

    if(i<=mid)
    {

        while(i<=mid)
        {
            arr[k] = b[i];
            i++;
            k++;
        }


    }else{

        while(j<=r)
        {
            arr[k] = b[j];
            j++;
            k++;
        }
    }




}

void mergesort(int arr[],int l,int r)
{

    if(l<r)
    {
        int mid = (l+r)/2;

        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}


void main()
{
    int arr[50],n,i;
    printf("\nEnter the size of array : ");
    scanf("%d",&n);

    printf("\nEnter the element of array : ");
    for(i = 0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    mergesort(arr,0,n-1);

    printf("\nAfter sorting ...........\n");

    for(i =0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}