#include<stdio.h>
#include<conio.h>
#include<malloc.h>

void enqueue();
void dequeue();
void display();

struct node 
{

    int data;
    struct node *link;
}*front = NULL,*rear = NULL;

void display()
{

    struct node *ptr;
    if(rear==NULL)
    {
        printf("\nLink is empty");
    }else{

        ptr = rear->link;

        while(ptr!=rear)
        {
            printf("%d ",ptr->data);
            ptr = ptr->link;
        }

        printf("%d ",ptr->data);
    }
}

void dequeue()
{

    struct node *ptr;

    if(rear==NULL)
    {

        printf("\nDeletion not possib;e ");
    }else if(rear->link==rear)
    {
        ptr = rear;
        rear = NULL;
        printf("%d is deleeted ",ptr->data);
        free(ptr);
    }else{

        ptr = rear->link;
        rear->link = ptr->link;
        printf("%d is deleted ",ptr->data);
        free(ptr);
    }
}

void enqueue()
{

    
    struct node *ptr;
    int val;
    ptr = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter the value : ");
    scanf("%d",&val);

    ptr->data = val;
    

    if(rear==NULL)
    {
        rear->link = ptr;
        rear = ptr;
        rear->link = NULL;
    }else{

        ptr->link = rear->link;
        rear->link = ptr;
        rear = ptr;
    }
}

void main()
{

    int ch,val,val1;

    do{
        /* code */

        printf("\n\n Queue:\n1. Insert \n2. Delete \n3. Display \n0. Exit");
        printf("\nEnter choice : ");
        scanf("%d",&ch);

        switch(ch)
        {

            case 1:
                   enqueue();
                    break;

            case 2:
                    dequeue();
                    break;
                
            case 3:
                    display();
                    break;
        }
    }while (ch!=0);
    
}