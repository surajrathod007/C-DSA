#include<stdio.h>
#include<conio.h>
#include<malloc.h>


struct node
{

    struct node *rptr;
    int data;
    struct node *lptr;

}*Header1,*Header2;

void create1(int);
void show1();
void create2(int);
void show2();
void merg();
void split();

void main(){

    int n1,m1,n2,m2;

    printf("Enter node size of list 1 : ");
    scanf("%d",&n1);

    for(int i =0; i<n1; i++){

        printf("\nEnter node value = ");
        scanf("%d",&m1);
        create1(m1);
    }

    printf("\nEnter node size of list 2 : ");
    scanf("%d",&n2);

    for(int i =0; i<n1; i++){

        printf("\nEnter node value = ");
        scanf("%d",&m2);
        create2(m2);
    }

    printf("\nList 1 is : ");
    show1();
    printf("\nList 2 is : ");
    show2();

    printf("\nMerg list is :");
    merg();
    split();


}

void create1(int x){

    struct node *tmp, *ptr;

    tmp = (struct node*)malloc(sizeof(struct node));
    tmp->data = x;
    tmp->lptr = NULL;
    tmp->rptr = NULL;

    if(Header1 == NULL){
        Header1 = tmp;
    }else{

        ptr = Header1;

        while(ptr->rptr!= NULL){

            ptr=ptr->rptr;
        }

        ptr->rptr = tmp;
        tmp->lptr = ptr;
    }

}

void create2(int x)
{
    struct node *tmp, *ptr;

    tmp = (struct node*)malloc(sizeof(struct node));
    tmp->data = x;
    tmp->lptr = NULL;
    tmp->rptr = NULL;

    if(Header2 == NULL){
        Header2 = tmp;
    }else{

        ptr = Header2;

        while(ptr->rptr!= NULL){

            ptr=ptr->rptr;
        }

        ptr->rptr = tmp;
        tmp->lptr = ptr;
    }

}

void show1()
{
    struct node *ptr;
    if(Header1==NULL){
        printf("List is empty");
    }else{

        ptr = Header1;

        while(ptr!=NULL){

            printf("%d->",ptr->data);
            ptr = ptr->rptr;
        }
    }
}

void show2(){
    struct node *ptr;
    if(Header2==NULL){
        printf("List is empty");
    }else{

        ptr = Header2;

        while(ptr!=NULL){

            printf("%d->",ptr->data);
            ptr = ptr->rptr;
        }
    }
}

void merg()
{

    struct node *ptr,*ptr1;
    ptr = Header1;
    while(ptr->rptr!=NULL){
        ptr = ptr->rptr;
    }

    ptr->rptr = Header2;
    Header2->lptr = ptr;
   // Header2 = NULL;
    show1();
}

void split()
{
    struct node *ptr, *ptr1;
    int key = 0;
    printf("\nEnter key from list 1 to split : ");
    scanf("%d",&key);

    ptr = Header1;
    while((ptr->rptr!=NULL)&&(ptr->data!=key)){
        ptr1 = ptr;
        ptr = ptr->rptr;
    }

    if((ptr->rptr==NULL)&&(ptr->data!=key)){
        printf("\nKey is not found ");
    }else{

/*
        ptr1->rptr = NULL;
        ptr->lptr = NULL;
        
        Header2 = ptr;
        
        */

       ptr = ptr1->rptr;
       Header2 = ptr->rptr;
       ptr->rptr = NULL;

        printf("\nAfter spliting the list :");
        printf("\nList 1 is :");
        show1();
        printf("\nList 2 is : ");
        show2();
    }
}