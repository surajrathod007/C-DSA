#include<stdio.h>
#include<conio.h>
#include<malloc.h>


struct node
{
    int data;
    struct node *link;
}*front = NULL,*rear = NULL;

void dequeue()
{

    struct node *ptr;

    if(front==NULL)
    {
        printf("\nunderflow");
    }else if(front==rear)
    {
        ptr = front;
        rear = NULL;
        front = NULL;
        free(ptr);

    }else{

        ptr = front;
        front=front->link;

        printf("\n %d is deleted ",ptr->data);
        free(ptr);
    }
}

void display()
{

    struct node *ptr;

    if(front==NULL)
    {
        printf("\nCannot disply ");
    }else{

        ptr = front;

        while(ptr!=rear)
        {
            printf("%d ",ptr->data);
            ptr = ptr->link;
        }
    }
}

void enqueue()
{

    struct node *ptr;
    int item;

    printf("\nEnteer the valu : ");
    scanf("%d",&item);

    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = item;

    if(front == NULL)
    {
        front= rear= ptr;
        rear->link = NULL;
        front->link = NULL;

    }else{

        rear->link = ptr;
        rear = ptr;
        rear->link = NULL;


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
