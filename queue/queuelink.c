#include<conio.h>
#include<stdio.h>
#include<malloc.h>

void enqueue();
void dequeue();
void display();

struct node
{
    int data;
    struct node *link;
}*front = NULL,*rear = NULL;

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

void enqueue()
{

    struct node *ptr;
    int item;
    printf("\nEnter item : ");
    scanf("%d",&item);

    ptr = (struct node*)malloc(sizeof(struct node));


    ptr->data = item;
    if(front == NULL)
    {
        front = rear = ptr;
        rear->link = NULL;
        front->link = NULL;
    }else{

        rear->link = ptr;
        rear = ptr;
        rear->link = NULL;
    }
    
}

void dequeue()
{

    struct node *ptr;

    

    
    if(front==NULL)
    {
        printf("\nUnderflow");
    }else if(front==rear)
    {
        ptr = front;
        front= NULL;
        rear = NULL;
        free(ptr);
    }else{

        ptr = front;
        front = front->link;
        free(ptr);
    }

    
}

void display()
{

    struct node *ptr;
    if(front==NULL)
    {

        printf("\nQueue is empty : ");
    }else{

        ptr = front;

        while(ptr!=rear)
        {
            printf("%d ",ptr->data);
            ptr = ptr->link;
        }

        printf("%d ",rear->data);
    }

   
}

