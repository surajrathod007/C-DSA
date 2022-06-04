#include<stdio.h>
#include<conio.h>

void banary_search();

int a[50],n,item,loc,beg,end,mid,i;

void main()
{

    printf("\nEnter the size of array : ");
    scanf("%d",&n);

    for(int i =0; i<n; i++)
    {

        printf("\nEnter the value : ");
        scanf("%d",&a[i]);
    }

    printf("\nEnter item to be saerched : ");
    scanf("%d",&item);

    binary_search();

}

void binary_search()
{

    beg = 0; end = n -1;

    mid = (beg+end)/2;

    while((beg<end)&&a[mid]!=item){

        if(item<a[mid])
        {
            end = mid -1;
        }else{

            beg = mid + 1;
        }

        mid = (beg+end)/2;
    }

    if(a[mid] == item)
    {
        printf("\nItem found on location %d ",mid+1);
    }else{

        printf("\nNot found ");
    }
}