#include<stdio.h>
#include<conio.h>

void insertion_sort(int[],int);
void main()
{
    int a[20];
    int i,n;

    printf("\nEnter the size of array :");
    scanf("%d",&n);

    for(i = 1; i<=n; i++){
        printf("\nEnter element : ");
        scanf("%d",&a[i]);
    }

    insertion_sort(a,n);

    printf("\nThe sorted list is : ");
    for( i = 1; i<=n ; i++){
        printf("%d ",a[i]);
    }
}

void insertion_sort(int a[], int n)
{

   int i,j,c,temp;

    for(i = 2; i<=n; i++){

        temp = a[i];
        c = i -1;

        while(temp<a[c] && c>0)
        {


            a[c+1] = a[c];
            c--;
        }

        a[c+1] = temp;
    }
}