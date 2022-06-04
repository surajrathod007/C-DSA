#include<stdio.h>
#include<conio.h>
#include<malloc.h>

void create(int);
void display1();
void display2();
void split();

struct node{

    struct node *link;
    int data;
}*Header1,*Header2;

void main()
{

    int i,n,m,n1,n2,choice;

    Header2 = NULL;
    Header1 = NULL;

    printf("\nEnter data for linked list ");
    printf("\nHow many node do you want ");
    scanf("%d",&n1);

    for(i = 1; i<=n1; i++){

        printf("\nEnter value : ");
        scanf("%d",&m);
        create(m);
    }
    display1();
    split();




}

void create(int x)
{

    struct node *ptr,*tmp;
    tmp = (struct node*)malloc(sizeof(struct node));

    tmp->data = x;
    tmp->link = NULL;

    if(Header1==NULL){
        Header1 = tmp;
    }else{

        ptr = Header1;
        while(ptr->link!=NULL){
            ptr= ptr->link;

        }
        

        ptr->link = tmp;
}

}

void display1()
{

    struct node *ptr;

    if(Header1 == NULL){

        printf("\nLinked list is empty");
    }else{

        ptr = Header1;
        while(ptr!=NULL){

            printf("%d -> ",ptr->data);
            ptr = ptr->link;
        }

        printf("\n");
    }
}

void display2()
{

    struct node *ptr;

    if(Header2 == NULL){

        printf("\nLinked list 2 is empty");
    }else{

        ptr = Header2;

        while(ptr!=NULL){

            printf("%d -> ",ptr->data);
            ptr=ptr->link;
        }

        printf("\n");
    }
}

void split()
{
    struct node *ptr,*ptr1;
    int key;

    printf("\nEnter key : ");
    scanf("%d",&key);
    ptr = Header1;

    while((ptr->link!=NULL)&&(ptr->data!=key)){
        ptr1 = ptr;
        ptr = ptr->link;
    }

  //  ptr=ptr1->link;
 //Header2= ptr->link;
  //  ptr->link = NULL;

    ptr = ptr1->link;
    Header2 = ptr->link;
    ptr->link = NULL;


    printf("\nAfter spliting the list : \n");
    display1();
    display2();
}