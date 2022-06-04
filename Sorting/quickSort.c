#include<stdio.h>
#include<conio.h>

void quick_sort(int a[],int, int);
int partition(int[], int,int);


int part(int a[],int first, int last){


    int temp,left,right,loc, flag = 0;

    left = first;
    right = last;
    loc = first;


    while(flag==0)
    {

        while(a[loc]<a[right] && loc!=right)
        {
            right = right+1;
        }

        if(loc==right)
        {
            flag =1;
        }else if(a[loc]>a[right]){

            temp = a[loc];
            a[loc] = a[right];
            a[right] = temp;

            loc = right;

        }

        if(flag = 0)
        {
            while(a[loc]>a[left])
            {
                left = left + 1;
            }

            if(loc==left)
            {
                flag = 1;
            }else if(a[loc]<a[left])
            {
                temp = a[loc];
                a[loc] = a[left];
                a[left] = temp;

                loc = left;
            }
        }
    }

    return loc;
}
int partition(int a[],int first,int last)
{

    int temp,left,right,loc, flag = 0;

    left = first;
    right = last;
    loc = first;
    while(flag==0){

        while(a[loc]<=a[right] && loc!=right){

            right = right + 1;
        }

        if(loc==right){
            flag = 1;
        }else if(a[loc] > a[right]){
            temp = a[loc];
            a[loc] = a[right];
            a[right] = temp ;
            loc = right;
        }

        if(flag == 0){

            while(a[loc]>= a[left] && loc!=left){

                left= left + 1;
            }

            if(loc == left){
                flag = 1;
            }else if(a[loc]<a[left]){

                temp = a[loc];
                a[loc] = a[left];
                a[left] = temp;
                loc = left;
            }
        }
    }

    return loc;
}

void quick_sort(int a[],int first , int last)
{

    if(first<last){
        int loc;

        loc = partition(a,first,last);
        quick_sort(a,first,loc-1);
        quick_sort(a,loc+1,last);
    }
}

void main()
{

    int n, arr[20], i;
    printf("\nEnter size of your array : ");
    scanf("%d",&n);

    for(i = 0; i<n; i++){

        printf("\nEnter element : ");
        scanf("%d",&arr[i]);
    }

    quick_sort(arr,1,n);

    printf("\nSorted List is as follow : ");
    for(i = 0; i<n; i++){

        printf("%d ",arr[i]);
    }
}

