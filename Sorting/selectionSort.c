#include<conio.h>
#include<stdio.h>

void selection_sort();
int arr[50],n;

void main()
{

    int i;
    printf("\nEnter the size of array : ");
    scanf("%d",&n);
    
    for(i = 0; i<n; i++){

        printf("\nEnter the element : ");

        scanf("%d",&arr[i]);
    }
    selection_sort();

    printf("\nSorted data : ");

    for(i = 0; i<n; i++){
        printf(" %d",arr[i]);
    }
}

void selection_sort()
{

/*
    int i,j,min,temp;

    for(i = 0; i<n; i++){

        min = i;

        for(j = i + 1 ;j<n; j++){

            if(arr[j]<arr[min]){
                min= j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;

    }

    */

   int i,j,min,temp;

   for( i = 0 ; i<n ; i++){

       min = i;
        
        for(j = i+1; j<n; j++){

            if(arr[j]<arr[min]){

                min = j;
            }
        }


        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
   }
}