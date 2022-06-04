#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

void quick_sort(int[],int,int);
int parttions(int[],int,int);


int parttions(int a[],int first,int last)
{
    int temp,left,right,loc,flag = 0;

    left = first;
    right = last;
    loc = first;

    while(flag == 0)
    {

        while(a[loc]<=a[right] && loc!=right)
        {
            right = right-1;
        }
        if(right==loc)
        {
            flag = 1;
        }else if(a[loc]>a[right]){

            temp = a[right];
            a[right] = a[loc];
            a[loc] = temp;

            loc = right;
        }

        if(flag==0)
        {

            while(a[loc]>=a[left] && loc!=left)
            {
                left = left+1;
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

/*
int partition(int a[],int first,int last)
{

    int temp,left,right,loc,flag = 0;
    left = first;
    right = last;
    loc = first;

    while(flag==0)
    {
        while(a[loc]<=a[right] && loc!=right)
        {
            right = right-1;
        }

        if(loc==right)
        {
            flag = 1;
        }else if(a[loc]>a[right])
        {
            temp = a[loc];
            a[loc] = a[right];
            a[right] = temp;

            loc = right;
        }

        if(flag == 0)
        {

            while(a[loc]>=a[left] && loc!=left)
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
} */

void quick_sort(int a[],int first,int last)
{
    if(first<last)
    {
        int loc;
        loc = parttions(a,first,last);
        quick_sort(a,first,loc-1);
        quick_sort(a,loc+1,last);
    }
}

void main()
{

    int n,arr[20],i;

    for(i = 0; i<10; i++)
    {

        printf("\nEnter value : ");
        scanf("%d",&arr[i]);
    }

    quick_sort(arr,0,10);

    printf("\n Sorted array : ");

    for(i =0; i<10; i++)
    {
        printf("%d ",arr[i]);
    }
}