#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node 
{

    int data;
    struct node *link;
}*Header,*Header2;


void create(int);
void show();
void sort();

void main()
{

    int n,m,i;

    printf("\nHow many nodes do you wnat? : ");
    scanf("%d",&n);

    for(i = 0; i<n; i++){

        printf("\nEnter node value : ");
        scanf("%d",&m);
        create(m);
    }


    show();
    sort();


}

void create(int x)
{

    struct node *tmp,*ptr;
    tmp = (struct node*)malloc(sizeof(struct node));
    tmp->link = NULL;
    tmp->data = x;

    if(Header == NULL){
        Header = tmp;    
    }else{

        ptr = Header;

        while(ptr->link!=NULL){
            ptr = ptr->link;
        }

        ptr->link = tmp;
    }
}

void show()
{

    struct node *ptr;
    if(Header==NULL){
        printf("List is empty");
    }else{

        ptr = Header;

        printf("\nThe list is : ");
        while(ptr!=NULL){

            printf("%d->",ptr->data);
            ptr=ptr->link;
        }
    }
}


void sort()
{

    struct node *count,*ptr;
    int tmp;

    ptr = Header;

    for(;ptr->link!=NULL;ptr=ptr->link){


        for(count = ptr->link; count!=NULL; count=count->link){

            if(ptr->data>count->data){

                tmp = ptr->data;
                ptr->data = count->data;
                count->data = tmp;
            }
        }
    }


    printf("\nThe sorted list is below");
    show();
}