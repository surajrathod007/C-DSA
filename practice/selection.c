#include<conio.h>
#include<stdio.h>

int arr[50];

void selection(int arr[],int n)
{

    int i,j,min,temp;

    for(i =0; i<n; i++)
    {
        min = i;

        for(j = i+1; j<n; j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }

        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

void main()
{

    int n,i;

    printf("\nEnter the size of array : ");
    scanf("%d",&n);

    printf("\nEnter the elements : ");

    for(i =0;i<n; i++ )
    {
        scanf("%d",&arr[i]);
    }

    selection(arr,n);

    printf("\nThe sorted array is given below : ");


    for(i = 0; i<n; i++)
    {

        printf("%d ",arr[i]);
    }

    
}