#include<conio.h>
#include<stdio.h>

void merge(int[],int,int,int);
void mergeSort(int[],int,int);


void merge(int a[],int l,int mid, int r)
{

    int i,left,end,num,temp,j,k,b[50];

    for(i = l; i<=r; i++)
    {
        b[i] = a[i];
    }

    i = l;
    j = mid + 1;
    k = l;

    while((i<=mid) && (j<=r))
    {
        if(b[i]<b[j])
        {
            a[k] = b[i];
            k++;
            i++;
        }else{

            a[k] = b[j];
            j++;
            k++;
        }
    }

    if(i<=mid)
    {

        while(i<=mid)
        {
            a[k] = b[i];
            k++;
            i++;
        }
    }else{

        while(j<=r)
        {
            a[k] = b[j];
            j++;
            k++;
        }
    }

}

void mergeSort(int a[],int l,int r)
{

    if(l<r)
    {
        int mid = (l+r)/2;
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,r);
        merge(a,l,mid,r);
    }
}

void main()
{


    int a[50],n,i;
    printf("\nEnter the size of array : ");
    scanf("%d",&n);

    printf("\nEnter the element of array : ");
    for(i = 0; i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    mergeSort(a,0,n-1);

    printf("\nAfter sorting ...........\n");

    for(i =0; i<n; i++)
    {
        printf("%d ",a[i]);
    }



    
}

