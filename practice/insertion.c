#include<stdio.h>
#include<conio.h>

int arr[50];


void insertion(int arr[],int n)
{

    int i,j,c,temp;

    for(i = 2; i<=n; i++)
    {
        temp = arr[i];
        c = i-1;

        while(temp<arr[c] && c>0)
        {
            arr[c+1] = arr[c];
            c--;
        }

        arr[c+1] = temp;
    }
}
void main()
{

    int i,n;

    printf("\nEnter the size of arry : ");
    scanf("%d",&n);

    printf("\nEnter the element : ");

    for(i = 1; i<=n; i++)
    {

        scanf("%d",&arr[i]);
    }

    insertion(arr,n);

    printf("\nThe sorted arra is below : ");

    for(i = 1; i<=n; i++)
    {

        printf("%d",arr[i]);
    }
}