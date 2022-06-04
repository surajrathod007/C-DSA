#include<conio.h>
#include<stdio.h>


int partition(int arr[],int first,int last)
{
    int temp,left,right,loc,flag = 0;

    left = first;
    right = last;
    loc = first;

    while(flag==0)
    {
        while(arr[loc]<=arr[right] && loc!=right)
        {
            right = right-1;
        }

        if(loc==right)
        {
            flag = 1;
        }

        if(arr[loc]>arr[right])
        {
            temp = arr[loc];
            arr[loc] = arr[right];
            arr[right] = temp;
            loc = right;
        }

        if(flag == 0)
        {

            while(arr[loc]>=arr[left] && loc!=left)
            {
                left = left + 1;
            }

            if(loc==left)
            {
                flag = 1;
            }

            if(arr[loc]<arr[left])
            {
                temp = arr[loc];
                arr[loc] = arr[left];
                arr[left] = temp;

                loc = left;
            }
        }
    }

    return loc;
}

void quicksort(int arr[],int first,int last)
{

    if(first<last)
    {
        int loc;
        loc = partition(arr,first,last);
        quicksort(arr,first,loc-1);
        quicksort(arr,loc+1,last);
    }
}

void main()
{

    int n,arr[50],i;

    printf("\nEnter the size of array : ");
    scanf("%d",&n);

    printf("\nEnter the value by spae : ");

    for( i = 0; i<n; i++ )
    {
        scanf("%d",&arr[i]);
    }

    quicksort(arr,0,n-1);

    printf("\nSorted array is given below : ");

    for( i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }



}