#include<stdio.h>
#include<conio.h>
#include<malloc.h>


struct node
{

    struct node *rptr;
    int data;
    struct node *lptr;

}*Header;

void create(int);
void show();
void count();
void sort();
void type();
void sum();


void main(){

    int n,m;

    printf("How many nodes do you want ? ::");
    scanf("%d",&n);

    for(int i = 0; i<n; i++){

        printf("\nEnter node value : ");
        scanf("%d",&m);
        create(m);
    }

    printf("\nYour nodes is ready : ");
    show();
    count();
    sort();
    type();
    sum();



}

void create(int x)
{
    struct node *tmp, *ptr;

    tmp = (struct node*)malloc(sizeof(struct node));
    tmp->data = x;
    tmp->lptr = NULL;
    tmp->rptr = NULL;

    if(Header == NULL){
        Header = tmp;
    }else{

        ptr = Header;

        while(ptr->rptr!= NULL){

            ptr=ptr->rptr;
        }

        ptr->rptr = tmp;
        tmp->lptr = ptr;
    }

}


void show()
{
    struct node *ptr;
    if(Header==NULL){
        printf("List is empty");
    }else{

        ptr = Header;

        while(ptr!=NULL){

            printf("%d->",ptr->data);
            ptr = ptr->rptr;
        }
    }
}

void count()
{
    int count = 0;
    struct node *ptr;

    if(Header == NULL){

        printf("List is empty");
    }

    ptr = Header;

    while(ptr!=NULL){

        count++;
        ptr = ptr->rptr;
    }

    printf("\nTotal number of nodes are = %d",count);
}

void sort(){

    struct node *count, *ptr;
    int tmp;
    if(Header==NULL){
        printf("Sorting note possible");
    }

    ptr = Header;
    for(;ptr->rptr!=NULL;ptr=ptr->rptr){

        for(count = ptr->rptr; count!=NULL; count = count->rptr){

            if(ptr->data>count->data){

                tmp = ptr->data;
                ptr->data = count->data;
                count->data = tmp;
            }
        }
    }


    printf("\nSorted data is : ");
    show();

}

void type()
{
    struct node *ptr;
    int odd = 0, even = 0;
    if(Header==NULL){

        printf("List is empty");
    }else{

        ptr = Header;

        while(ptr!=NULL){

            if(ptr->data%2==0){
                even++;
            }else{
                odd++;
            }

            ptr= ptr->rptr;
        }

        printf("\nOdd number of nodes in list is = %d",odd);
        printf("\nEven number of nodes in list is = %d",even);
    }
}


void sum()
{

    struct node *ptr;
    int total = 0;
    ptr = Header;

    while(ptr!=NULL){
        total += ptr->data;
        ptr = ptr->rptr;
    }

    printf("\nThe sum of nodes is = %d",total);
}